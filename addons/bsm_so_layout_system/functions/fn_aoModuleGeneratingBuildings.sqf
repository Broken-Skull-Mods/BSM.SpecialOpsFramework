	params ["_logic", "_areaPos", "_areaHalfSize", "_totalEnemies", "_leaderNb", "_intelMax", "_staticGunnerCount", "_explosiveCount", "_hostagesNb", 
		"_garrisonRatio", "_tier", "_faction", "_factionCamo", "_side", ["_preselectedBuildings", nil], ["_outsideOnly", false], ["_maskedAllowed", false]
	];

	private _enemyTypesCount = [
		[], 1
	];
	private  _riflemanCount = 8; 
	private  _autoRiflemanCount = 4;
	private  _grenadierCount = 2,
	private _antitankCount = 1;
	private _sniperCount = 1;

	private _buildingsAndLayouts = []; 
	private _buildingsAndUnitPositions = []; // All Unit Spawn Positions
	private _buildingsAndStaticMachineGunnerLayout = []; // Only Static Positions.
	private _buildingsAndExplosivesLayout = []; // Only Explosives Positions.
	private _buildingsAndHostageLayout = []; // Only Hostage Positions.
	private _buildingsAndIntelLayout = []; // Only Intelligence Positions.
	private _buildingsAndFurnitureLayout = []; // Only Furniture Positions.
	private _nearbyBuildings = _preselectedBuildings;
	if (isNil "_preselectedBuildings") then {
		private _nearbyBuildings = nearestObjects [_areaPos, ["HouseBase", "Wreck_Base"], _areaHalfSize];
		if (count _nearbyBuildings <= 0) exitWith {};
	};

	private _buildingMapFurnitures = createHashMap;
	private _buildingMapUnits = createHashMap;
	private _buildingMapIntels = createHashMap;
	



	/* Make the generator extract each building name which will be used for whitelisting buildings. */

	{
		private _buildingType = typeof _x;
		private _building = _x;
    	private _layout = _building getVariable ["spec_ops_building_layout", nil];
		private _layouts = [];
		// if building layout isn't predefined, pick one
		if (isNil "_layout") then { 
			_layouts = [_x, true, _tier] call SpecOps_fnc_dressUpBuildingGetBuildingLayouts; 
			if (count _layouts <= 0) then { diag_log format ["SPEC-OPS (AO): Layout not found for %1", _buildingType]; continue; };
			_layout = selectRandom _layouts;
			_building setVariable ["spec_ops_building_layout", _layout, true];
		};

		private _lockDoors = [_layout, "lockedDoors"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
		private _openDoors = [_layout, "openedDoors"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
		{ _building setVariable [format ["bis_disabled_door_%1", _x], 1, true]; } forEach (_lockDoors);
		{ _building animate [format ["Door_%1_rot", _x], 1]; } forEach (_openDoors);

		_buildingsAndLayouts pushback [_x, _layout];
		private _isEnterable = getNumber (_layout >> "isEnterable");
		if (_isEnterable == 0) then { 
			_building setVariable ["tft_is_enterable", false]; 
		}else {
			_building setVariable ["tft_is_enterable", true]; 
		};
		private _intel = [_layout, "intelFurnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
		if (count _intel > 0) then { _buildingsAndIntelLayout pushback [_x, _intel]; };
		
		
		private _hostagesPos = [_layout, "hostages"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
		if (count _hostagesPos > 0) then { _buildingsAndHostageLayout pushback [_x, _hostagesPos]; };
		

		private _unitSpawnPositions = [_layout, "men"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
		_buildingsAndUnitPositions pushback [_x, _unitSpawnPositions];

		private _staticMachineGunsPosition = [_layout, "staticWeapons"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
		if (count _staticMachineGunsPosition > 0) then { _buildingsAndStaticMachineGunnerLayout pushback [_x, _staticMachineGunsPosition]; };

		private _explosivePositions = [_layout, "explosives"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
		if (count _explosivePositions > 0) then { _buildingsAndExplosivesLayout pushback [_x, _explosivePositions]; };
		
		
		private _furnituresPositions = [_layout, "furnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
		if (count _furnituresPositions > 0) then { _buildingsAndFurnitureLayout pushback [_x, _furnituresPositions]; };
		
	} forEach (_nearbyBuildings);


	private _priorityBuildings = [];
	private _cqbBuildings = [];
	private _cqbBogusBuilding = [];
	private _aoActiveBuildings = [];

	private _intelObjects = [];
	private _hostages = [];
	private _patrolGroups = [];
	private _staticGunner = [];

	private _garrisonGroups = [];
	private _enemyUnits = [];
	private _leaderUnits = [];
	private _enemyVehicles = [];
	private _funitureLists = [];

	private _totalEnemiesCounter = _totalEnemies;
	private _garrisonEnemies = ceil (_totalEnemies * _garrisonRatio);
	private _patrolEnemies = _totalEnemies - _garrisonEnemies;

	if (!_outsideOnly) then {
		if (_intelMax > 0 && count _buildingsAndIntelLayout > 0) then {
			for "_i" from 1 to _intelMax do {
				if(count _buildingsAndIntelLayout <= 0) exitWith { };
				private _randomBuilding = selectRandom _buildingsAndIntelLayout;
				if(isNil "_randomBuilding") exitWith { };
				_buildingsAndIntelLayout = _buildingsAndIntelLayout - [_randomBuilding];

				private _randomBuildingObject = _randomBuilding select 0;
				private _index = _buildingsAndLayouts findIf { (_x select 0) == _randomBuildingObject };

				if(_index >= 0) then  {
					private _randomBuildingFullLayout = _buildingsAndLayouts select _index;
					diag_log format ["SPEC-OPS (AO): %1", _randomBuildingFullLayout];
					// Spawning Intel Furniture
					private _intelObject = [_randomBuildingObject , _randomBuildingFullLayout select 1] call SpecOps_fnc_dressUpBuildingApplyIntel;
					// Store Intel Object Furniture
					_intelObjects pushback _intelObject;
					
					private _savedUnits = _randomBuildingObject getVariable ["AO_Intels", []];
					_savedUnits pushback (_intelObject);
					_randomBuildingObject setVariable ["AO_Intels", _savedUnits];

					_priorityBuildings pushbackUnique _randomBuildingObject;
					_cqbBuildings pushbackUnique _randomBuildingObject;
					private _index = _buildingsAndUnitPositions findIf { (_x select 0) == _randomBuildingObject };
					if(_index >= 0) then  {
						private _intelGuardMax = 4;
						if(_hostagesNb > 0) then { _intelGuardMax = 2; };
						private _randomBuildingUnitLayout = _buildingsAndUnitPositions select _index;
						// Array of Position Info [[pos, dir, options]];
						private _randomBuildingUnitPositions = _randomBuildingUnitLayout select 1;		
						for "_i" from 1 to _intelGuardMax do {
							if(_totalEnemiesCounter <= 0) exitWith { };
							private _randomBuildingUnitPosSet = selectRandom _randomBuildingUnitPositions;
							// if positions are no longer available then remove the building
							if (isNil "_randomBuildingUnitPosSet") exitWith { 
								_buildingsAndUnitPositions deleteAt _index;  
							};
							_randomBuildingUnitPositions = _randomBuildingUnitPositions - [_randomBuildingUnitPosSet];
							private _prioritizeLeaders = _leaderNb > 0;
							private _buildingUnitSpawned = [_randomBuildingObject, _randomBuildingUnitPosSet, _prioritizeLeaders, nil, _faction, _factionCamo, true, _side] call SpecOps_fnc_dressUpBuildingSpawnEnemy;
							if ((_buildingUnitSpawned select 3)) then {
								_leaderNb = _leaderNb - 1; 
								_leaderUnits pushback (_buildingUnitSpawned select 1);

								private _savedUnits = _randomBuildingObject getVariable ["AO_Units_Leaders", []];
								_savedUnits pushback (_buildingUnitSpawned select 1);
								_randomBuildingObject setVariable ["AO_Units_Leaders", _savedUnits];
							}else {

								_enemyUnits pushback (_buildingUnitSpawned select 1);
							};
							private _savedUnits = _randomBuildingObject getVariable ["AO_Units", []];

							_savedUnits pushback (_buildingUnitSpawned select 1);
							_randomBuildingObject setVariable ["AO_Units", _savedUnits];
							private _groupExistIndex = _garrisonGroups findif { _x select 0 == _randomBuildingObject; };
							if (_groupExistIndex == -1) then { 
								_garrisonGroups pushback [(_buildingUnitSpawned select 0), (_buildingUnitSpawned select 2)]; 
							} else {
								private _currentGroupSet = _garrisonGroups select _groupExistIndex;
								diag_log format ["SPEC-OPS (AO): %1", _currentGroupSet];
								private _currentGroup = _currentGroupSet select 1;
								private _currentBuilding = _currentGroupSet select 0;
								[(_buildingUnitSpawned select 1)] join _currentGroup;
							};


							_totalEnemiesCounter = _totalEnemiesCounter - 1 ;
							_buildingsAndUnitPositions set [_index, [_randomBuildingObject, _randomBuildingUnitPositions]];
						};
					};
				};	
				
			};
		};
		if (_hostagesNb > 0 && count _buildingsAndHostageLayout > 0) then {
			for "_i" from 1 to _hostagesNb do {
				if(count _buildingsAndHostageLayout <= 0) exitWith { };
				private _randomBuilding = selectRandom _buildingsAndHostageLayout;
				_buildingsAndHostageLayout = _buildingsAndHostageLayout - [_randomBuilding];
				private _randomBuildingObject = _randomBuilding select 0;

				private _randomHostagesPositions = _randomBuilding select 1;
				private _randomHostageInfoSet = selectRandom _randomHostagesPositions;
				if(isNil "_randomHostageInfoSet") then { continue; };

				private _randomHostagePos = _randomHostageInfoSet select 0;
				private _randomHostageDir = _randomHostageInfoSet select 1;
				private _randomUp = _randomHostageInfoSet select 2;
				private _randomDir = _randomHostageInfoSet select 3;
				private _randomHostageOptions = _randomHostageInfoSet select 4;
				private _canProne = (_randomHostageOptions select 0) == 0;
				private _IsCanCrouch = (_randomHostageOptions select 1) == 0;
				private _IsCanStand = (_randomHostageOptions select 2) == 0;
				diag_log format ["SPEC-OPS (AO): _randomHostageInfoSet  (%1)", _randomHostageInfoSet];

				private _index = _buildingsAndUnitPositions findIf { (_x select 0) == _randomBuildingObject };
				diag_log format ["SPEC-OPS (AO):  _buildingsAndUnitPositions (%1)", _index];
				if(_index >= 0) then  {
					private _guardMax = 8;
					if(_intelMax > 0) then { _guardMax = 6; };
					private _randomBuildingUnitLayout = _buildingsAndUnitPositions select _index;
					private _randomBuildingUnitPositions = _randomBuildingUnitLayout select 1;		
					private _randomGuards = [1, _guardMax] call BIS_fnc_randomInt;
					diag_log format ["SPEC-OPS (AO):  %1 Guards for the Hostage.", _randomGuards];
					for "_i" from 1 to _randomGuards do {
						if(_totalEnemiesCounter <= 0) exitWith { 
							diag_log format ["SPEC-OPS (AO):  No Garrison Enemies Spots Available."];
						};
						private _randomBuildingUnitPosSet = selectRandom _randomBuildingUnitPositions;
						if (isNil "_randomBuildingUnitPosSet") exitWith { 
							_buildingsAndUnitPositions deleteAt _index; 
							diag_log format ["SPEC-OPS (AO):  Skipping No Buildings Avaialble."];
						};
						diag_log format ["SPEC-OPS (AO):  %1 Guards for the Hostage.", _randomGuards];
						_randomBuildingUnitPositions = _randomBuildingUnitPositions - [_randomBuildingUnitPosSet];
						private _buildingUnitSpawned = [_randomBuildingObject, _randomBuildingUnitPosSet, false, nil, _faction, _factionCamo] call SpecOps_fnc_dressUpBuildingSpawnEnemy;
						diag_log format ["SPEC-OPS (AO):  _buildingUnitSpawned %1.", _buildingUnitSpawned];
						
						_enemyUnits pushback (_buildingUnitSpawned select 1);

						private _savedUnits = _randomBuildingObject getVariable ["AO_Units", []];
						_savedUnits pushback (_buildingUnitSpawned select 1);
						_randomBuildingObject setVariable ["AO_Units", _savedUnits];

						private _groupExistIndex = _garrisonGroups findif { _x select 0 == _randomBuildingObject; };
						if (_groupExistIndex == -1) then { 
							_garrisonGroups pushback [(_buildingUnitSpawned select 0), (_buildingUnitSpawned select 2)]; 
						} else {
							private _currentGroupSet = _garrisonGroups select _groupExistIndex;
							diag_log format ["SPEC-OPS (AO): %1", _currentGroupSet];
							private _currentGroup = _currentGroupSet select 1;
							private _currentUnit = _currentGroupSet select 0;
							[(_buildingUnitSpawned select 1)] join _currentGroup;
						};
						_totalEnemiesCounter = _totalEnemiesCounter - 1 ;
						_buildingsAndUnitPositions set [_index, [_randomBuildingObject, _randomBuildingUnitPositions]];

					};
				};

				private _spawnPos = [_randomBuildingObject, _randomHostagePos] call SpecOps_fnc_getRelatedPosition;
					
				private _animHostage = [];
				// if (_canProne || {!_canProne && !_IsCanCrouch && !_IsCanStand}) then { _animHostage pushbackUnique "revive_secured"; };
				// if (_IsCanCrouch || {!_canProne && !_IsCanCrouch && !_IsCanStand}) then { _animHostage pushbackUnique "ACE_HandcuffedFFV"; };
				// if (_IsCanStand || {!_canProne && !_IsCanCrouch && !_IsCanStand}) then { 
				// 	_animHostage append [
				// 		"UnaErcPoslechVelitele1",
				// 		"UnaErcPoslechVelitele2",
				// 		"UnaErcPoslechVelitele3",
				// 		"UnaErcPoslechVelitele4"
				// 	]; 
				// };

				private _cuffAnim = "acts_executionvictim_loop";
				private _hostageGroup = [_spawnPos, civilian, ["B_Survivor_F"]] call BIS_fnc_spawnGroup;
				private _unit = leader _hostageGroup;
				private _savedUnits = _randomBuildingObject getVariable ["AO_Units", []];
				_savedUnits pushback (_unit);
				_randomBuildingObject setVariable ["AO_Units", _savedUnits];

				private _isVisibleFromOutside = (_randomHostageOptions select 1) == 1;
				_unit setVariable ["Unit_VisibleFromOutside", _isVisibleFromOutside];
				_unit setCaptive true;
				_unit hideObjectGlobal true;
				[_unit, true, player] call ACE_captives_fnc_setHandcuffed;
				[_randomBuildingObject, _vehicle, _randomPos, [_randomVectorDir, _randomUp], false, true] call SpecOps_fnc_commonRelPosObject;

				// [_randomBuildingObject, _unit, _randomHostagePos, 0] call BIS_fnc_relPosObject;
				// _unit setDir (getDir _randomBuildingObject - _randomDir);
				// _unit setFormDir (getDir _randomBuildingObject - _randomDir);
				_unit enableSimulationGlobal false;
				// _unit switchMove _cuffAnim;
				// _unit playMoveNow _cuffAnim;
				_hostages pushback _unit;
				_priorityBuildings pushbackUnique _randomBuildingObject;
				_cqbBuildings pushbackUnique _randomBuildingObject;
			};
		};

		if (_staticGunnerCount > 0 &&  count _buildingsAndStaticMachineGunnerLayout > 0) then {
			for "_i" from 1 to _staticGunnerCount do {
				if(count _buildingsAndStaticMachineGunnerLayout <= 0) exitWith {};
				_randomBuilding = selectRandom _buildingsAndStaticMachineGunnerLayout;
				_buildingsAndStaticMachineGunnerLayout = _buildingsAndStaticMachineGunnerLayout - [_randomBuilding];
				private _randomBuildingObject = _randomBuilding select 0;
				private _randomPositions = _randomBuilding select 1;
				private _randomInfoSet = selectRandom _randomPositions;
				if(isNil "_randomInfoSet") exitWith { };
				diag_log format ["SPEC-OPS (AO): Static _randomInfoSet = %1", _randomInfoSet];
				// [[-2.61647,0.89457,4.70432],[-0.998959,0.0456061,0],[0,0,1],272.614,[1]]"
				private _randomPos = _randomInfoSet select 0;
				private _randomVectorDir = _randomInfoSet select 1;
				private _randomUp = _randomInfoSet select 2;
				private _randomDir = _randomInfoSet select 3;
				private _randomOptions = _randomInfoSet select 4;


				private _typeOfGun = _randomOptions select 0;
				private _isHiddenDay = (_randomOptions select 1) == 1;
				private _isHiddenNight = (_randomOptions select 2) == 1;
				private _lowMachineGuns = getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticLowMG") apply { _x select 0 };
				private _highMachineGuns = getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticHighMG") apply { _x select 0 };
				private _motar = getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticMotar") apply { _x select 0 };
				private _antiAir = getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticAntiAir") apply { _x select 0 };
				private _sam = getArray (configfile >> "CfgFactionClasses" >> _faction >> "SamSystem") apply { _x select 0 };
				if (_typeOfGun == 0 && {count _lowMachineGuns <= 0}) then { continue; };
				if (_typeOfGun == 1 && {count _highMachineGuns <= 0}) then { continue; };
				if (_typeOfGun == 2 && {count _motar <= 0}) then { continue; };
				if (_typeOfGun == 3 && {count _antiAir <= 0}) then { continue; };
				if (_typeOfGun == 4 && {count _sam <= 0}) then { continue; };

				private _staticGun = nil;
				if (_typeOfGun == 0) then { diag_log format ["SPEC-OPS (AO): Static Guns %1", _lowMachineGuns]; _staticGun = selectRandom _lowMachineGuns; };
				if (_typeOfGun == 1) then { diag_log format ["SPEC-OPS (AO): Static Guns %1", _highMachineGuns]; _staticGun = selectRandom _highMachineGuns; };
				if (_typeOfGun == 2) then { diag_log format ["SPEC-OPS (AO): Static Guns %1", _motar]; _staticGun = selectRandom _motar; };
				if (_typeOfGun == 3) then { diag_log format ["SPEC-OPS (AO): Static Guns %1", _antiAir]; _staticGun = selectRandom _antiAir; };
				if (_typeOfGun == 4) then { diag_log format ["SPEC-OPS (AO): Static Guns %1", _sam]; _staticGun = selectRandom _sam; };
				if (isNil "_staticGun") then { diag_log format ["SPEC-OPS (AO): No Static Gun..."]; continue; };
				private _group = objNull;
				_spawnPos = [_randomBuildingObject, _randomPos] call SpecOps_fnc_getRelatedPosition;

				_group = [_spawnPos, _side, [_staticGun]] call BIS_fnc_spawnGroup;
				_group deleteGroupWhenEmpty true;
				
				private _unit = leader _group;
				private _vehicle = vehicle _unit;

				_unit setVariable ["SpecOps_HideAtDay", _isHiddenDay];
				_unit setVariable ["SpecOps_HideAtNight", _isHiddenNight];
				_vehicle setVariable ["SpecOps_HideAtDay", _isHiddenDay];
				_vehicle setVariable ["SpecOps_HideAtNight", _isHiddenNight];
				
				_unit enableSimulationGlobal false;
				_vehicle enableSimulationGlobal false;
				// _vehicle allowDamage false;
				_unit hideObjectGlobal true;
				_vehicle hideObjectGlobal true;
				
				[_randomBuildingObject, _vehicle, _randomPos, [_randomVectorDir, _randomUp], false, true] call SpecOps_fnc_commonRelPosObject;
				// [_randomBuildingObject, _vehicle, _randomPos, _randomDir] call BIS_fnc_relPosObject;
				private _correctedRotation = (getDir _randomBuildingObject) + _randomDir;
				// _vehicle setDir _correctedRotation;

				private _savedUnits = _randomBuildingObject getVariable ["AO_Units", []];
				_savedUnits pushback (_unit);
				_randomBuildingObject setVariable ["AO_Units", _savedUnits];

				private _savedUnits = _randomBuildingObject getVariable ["AO_StaticGunVehicle", []];
				_savedUnits pushback (_vehicle);
				_randomBuildingObject setVariable ["AO_StaticGunVehicle", _savedUnits];
				

				// [_vehicle] spawn { params ["_vehicle"]; uiSleep 1; _vehicle allowDamage true; };

				_unit disableAI "PATH";
				_unit disableAI "MOVE";

				private _groupExistIndex = _garrisonGroups findif { _x select 0 == _randomBuildingObject; };
				if (_groupExistIndex == -1) then {
					_garrisonGroups pushback [_randomBuildingObject, _group];
				} else {
					private _buildingGrp = _garrisonGroups select _groupExistIndex;
					[_unit] join (_buildingGrp select 1);
				};
				_aoActiveBuildings pushbackUnique _randomBuildingObject; 
				_vehicle setVariable ["Unit_VisibleFromOutside", true];
				_unit setVariable ["Unit_VisibleFromOutside", true];

				_enemyUnits pushback _unit;
				_enemyVehicles pushback _vehicle;
			};
		};
		
		if (_explosiveCount > 0 &&  count _buildingsAndExplosivesLayout > 0) then {
			for "_i" from 1 to _explosiveCount do {
				if(count _buildingsAndExplosivesLayout <= 0) exitWith {};
				_randomBuilding = selectRandom _buildingsAndExplosivesLayout;
				_buildingsAndExplosivesLayout = _buildingsAndExplosivesLayout - [_randomBuilding];
				private _randomBuildingObject = _randomBuilding select 0;
				private _randomPositions = _randomBuilding select 1;
				diag_log format ["SPEC-OPS (AO): Explosive _randomPositions = %1", _randomPositions];
				private _randomInfoSet = selectRandom _randomPositions;
				if(isNil "_randomInfoSet") exitWith { };
				diag_log format ["SPEC-OPS (AO): Explosive _randomInfoSet = %1", _randomInfoSet];
				// [[-2.61647,0.89457,4.70432],[-0.998959,0.0456061,0],[0,0,1],272.614,[1]]"
				// APERSMine
				private _type = _randomInfoSet select 0;
				private _randomPos = _randomInfoSet select 1;
				private _randomVectorDir = _randomInfoSet select 2;
				private _randomUp = _randomInfoSet select 3;
				private _randomDir = _randomInfoSet select 4;
				_spawnPos = [_randomBuildingObject, _randomPos] call SpecOps_fnc_getRelatedPosition;
				_mine = createVehicle [_type, _spawnPos, [], 0, "CAN_COLLIDE"];
				_mine enableSimulationGlobal false;
				_mine hideObjectGlobal true;
				[_randomBuildingObject, _mine, _randomPos, [_randomVectorDir, _randomUp], false, true] call SpecOps_fnc_commonRelPosObject;

				private _savedUnits = _randomBuildingObject getVariable ["AO_StaticGunVehicle", []];
				_savedUnits pushback (_mine);
				_randomBuildingObject setVariable ["AO_StaticGunVehicle", _savedUnits];
				_aoActiveBuildings pushbackUnique _randomBuildingObject; 
				_enemyVehicles pushback _vehicle;
			};
		};
		// HVT Target
		if (_leaderNb > 0 && count _buildingsAndUnitPositions > 0) then {
			private _availableBuildingWithLeaderSpots = [];
			{
				private _positions = _x select 1;
				private _buildingLeadersPositions = [];
				{
					private _positionOptions = _x select 2;
					if((_positionOptions select 0) == 1) then { _buildingLeadersPositions pushback _x; };
				} forEach (_positions);
				_availableBuildingWithLeaderSpots pushback [_x select 0, _buildingLeadersPositions];
			} forEach (_buildingsAndUnitPositions);

			for "_i" from 1 to _leaderNb do {
				if(_leaderNb <= 0) exitWith { };
				if(count _availableBuildingWithLeaderSpots <= 0) exitWith { };
				_randomBuilding = selectRandom _availableBuildingWithLeaderSpots;
				_availableBuildingWithLeaderSpots = _availableBuildingWithLeaderSpots - [_randomBuilding];
				
				private _randomBuildingObject = _randomBuilding select 0;
				private _randomPositions = _randomBuilding select 1;
				private _randomInfoSet = selectRandom _randomPositions;
				if(isNil "_randomInfoSet") exitWith { };
				private _randomPos = _randomInfoSet select 0;
				private _randomDir = _randomInfoSet select 1;
				private _randomOptions = _randomInfoSet select 2;
				private _group = objNull;
				private _buildingUnitSpawned = [_randomBuildingObject, _randomInfoSet, true, nil, _faction, _factionCamo] call SpecOps_fnc_dressUpBuildingSpawnEnemy;
				private _groupExistIndex = _garrisonGroups findif { _x select 0 == _randomBuildingObject; };
				if (_groupExistIndex == -1) then { 
					_garrisonGroups pushback [(_buildingUnitSpawned select 0), (_buildingUnitSpawned select 2)]; 
				} else {
					private _currentGroupSet = _garrisonGroups select _groupExistIndex;
					private _currentGroup = _currentGroupSet select 1;
					[_buildingUnitSpawned select 1] join _currentGroup;
				};

				private _savedUnits = _randomBuildingObject getVariable ["AO_Units_Leader", []];
				_savedUnits pushback (_buildingUnitSpawned select 1);
				_randomBuildingObject setVariable ["AO_Units_Leader", _savedUnits];

				private _savedUnits = _randomBuildingObject getVariable ["AO_Units", []];
				_savedUnits pushback (_buildingUnitSpawned select 1);
				_randomBuildingObject setVariable ["AO_Units", _savedUnits];

				_leaderNb = _leaderNb - 1;
				_leaderUnits pushback (_buildingUnitSpawned select 1);
				_cqbBuildings pushbackUnique _randomBuildingObject;
			};
		};
	};

	_garrisonPriorityBuildings = _cqbBuildings;
	 
	if (_garrisonEnemies > 0 && count _buildingsAndUnitPositions > 0) then {
		for "_i" from 1 to _garrisonEnemies do {
			if(_garrisonEnemies <= 0 || _totalEnemiesCounter <= 0 || count _buildingsAndUnitPositions <= 0) exitWith { };
			private _randomBuilding = nil;
			if (count _garrisonPriorityBuildings > 0) then {
				private _randomBuildingTmp = selectRandom _garrisonPriorityBuildings;
				_index = _buildingsAndUnitPositions findIf { (_x select 0) == _randomBuildingTmp };
				if(_index > 0) then {
					_randomBuilding = _buildingsAndUnitPositions select _index;
				}else {
					_garrisonPriorityBuildings = _garrisonPriorityBuildings - [_randomBuildingTmp];
					_i = _i - 1;
					continue;
				};
			} else {
				_randomBuilding = selectRandom _buildingsAndUnitPositions;
			};
			
			if(isNil "_randomBuilding") exitWith { };
			private _randomBuildingObject = _randomBuilding select 0;

			private _index = _buildingsAndUnitPositions findIf { (_x select 0) == _randomBuildingObject };

			private _randomPositions = _randomBuilding select 1;
			if(count _randomPositions <= 0) then { 
				_garrisonPriorityBuildings = _garrisonPriorityBuildings - [_randomBuildingObject];
				_buildingsAndUnitPositions deleteAt _index; 
				continue;
			};
			private _randomInfoSet = selectRandom _randomPositions;


			_randomPositions = _randomPositions - [_randomInfoSet];

			private _randomPos = _randomInfoSet select 0;
			private _randomVectorDir = _randomInfoSet select 1;
			private _randomUp = _randomInfoSet select 2;
			private _randomDir = _randomInfoSet select 3;
			private _randomOptions = _randomInfoSet select 2;

			private _positionINfoSetOptions = _randomInfoSet select 4;
			diag_log format ["SPEC-OPS OPTIONS %1 | %2",_positionINfoSetOptions, (_positionINfoSetOptions select 21)];
			private _isBalconyOrRoof = (_positionINfoSetOptions select 21) == 1;
			if (_outsideOnly && !_isBalconyOrRoof) then { continue; };
			private _buildingUnitSpawned = [_randomBuildingObject, _randomInfoSet, false, nil, _faction, _factionCamo, true, _side] call SpecOps_fnc_dressUpBuildingSpawnEnemy;
			private _groupExistIndex = _garrisonGroups findif { _x select 0 == _randomBuildingObject; };
			if (_groupExistIndex == -1) then { 
				_garrisonGroups pushback [(_buildingUnitSpawned select 0), (_buildingUnitSpawned select 2)]; 
			} else {
				private _currentGroupSet = _garrisonGroups select _groupExistIndex;
				diag_log format ["SPEC-OPS (AO): %1", _currentGroupSet];
				private _currentGroup = _currentGroupSet select 1;
				private _currentBuilding = _currentGroupSet select 0;
				[(_buildingUnitSpawned select 1)] join _currentGroup;
			};

			private _savedUnits = _randomBuildingObject getVariable ["AO_Units", []];
			_savedUnits pushback (_buildingUnitSpawned select 1);
			_randomBuildingObject setVariable ["AO_Units", _savedUnits];

			_enemyUnits pushback (_buildingUnitSpawned select 1);
			_garrisonEnemies = _garrisonEnemies - 1;
			_totalEnemiesCounter = _totalEnemiesCounter - 1 ;
			if (!(_randomBuildingObject in _cqbBuildings)) then { 
				diag_log format["SPEC-OPS (AO): Pushed %1 to CQB Bogus Building List", _randomBuildingObject];
				_cqbBogusBuilding pushbackUnique _randomBuildingObject;  
			};
			private _index = _buildingsAndUnitPositions findIf { (_x select 0) == _randomBuildingObject };
			if (_index == -1) exitWith {};
			_buildingsAndUnitPositions set [_index, [_randomBuildingObject, _randomPositions]];
		};
	};



	// Remove all CQB building from Available Pool
	{
		private _building = _x;
		private _index = _buildingsAndUnitPositions findIf { (_x select 0) == _building };
		if(_index <= -1) then  { continue; };
		_buildingsAndUnitPositions deleteAt _index;
	} forEach (_cqbBuildings);
	
	// Get only building that can hold 4+ positions
	private _allowedPatrolGarrison = _buildingsAndUnitPositions select {
		_randomPositions = _x select 1;
		count _randomPositions >= 2;
	};

	private _countGarrisonPatrol = 0;
	if (!_outsideOnly) then {
		if (_patrolEnemies > 0 && count _allowedPatrolGarrison > 0) then {
			for "_i" from 1 to _patrolEnemies do {
				if(_countGarrisonPatrol >= 6 || _patrolEnemies <= 0 || _totalEnemiesCounter <= 0 || count _allowedPatrolGarrison <= 0) exitWith { };
				private _randomBuilding = nil;
				_randomBuilding = selectRandom _allowedPatrolGarrison;
				_allowedPatrolGarrison = _allowedPatrolGarrison - [_randomBuilding];
				if(isNil "_randomBuilding") exitWith { };
				private _randomBuildingObject = _randomBuilding select 0;
				private _randomPositions = _randomBuilding select 1;
				private _randomInfoSet = selectRandom _randomPositions;
				private _squadSize = 2;
				while {count _randomPositions > 0 && _patrolEnemies > 0 && _totalEnemiesCounter > 0 && _squadSize > 0} do {
					private _randomInfoSet = selectRandom _randomPositions;
					if(isNil "_randomInfoSet") exitWith { };
					_randomPositions = _randomPositions - [_randomInfoSet];

					private _randomPos = _randomInfoSet select 0;
					private _randomDir = _randomInfoSet select 1;
					private _randomOptions = _randomInfoSet select 2;

					private _buildingUnitSpawned = [_randomBuildingObject, _randomInfoSet, false, nil, _faction, _factionCamo, true, _side] call SpecOps_fnc_dressUpBuildingSpawnEnemy;
					private _groupExistIndex = _garrisonGroups findif { _x select 0 == _randomBuildingObject; };
					if (_groupExistIndex == -1) then { 
						_garrisonGroups pushback [(_buildingUnitSpawned select 0), (_buildingUnitSpawned select 2)]; 
					} else {
						private _currentGroupSet = _garrisonGroups select _groupExistIndex;
						diag_log format ["SPEC-OPS (AO): %1", _currentGroupSet];
						private _currentGroup = _currentGroupSet select 1;
						private _currentBuilding = _currentGroupSet select 0;
						[(_buildingUnitSpawned select 1)] join _currentGroup;
					};
					private _unit = (_buildingUnitSpawned select 1);
					private _savedUnits = _randomBuildingObject getVariable ["AO_Units", []];
					_savedUnits pushback _unit;
					_randomBuildingObject setVariable ["AO_Units", _savedUnits];
					_randomBuildingObject setVariable ["TFT_Is_Patrol_Garrison", true];
					_enemyUnits pushback _unit;
					_patrolEnemies = _patrolEnemies - 1;
					_totalEnemiesCounter = _totalEnemiesCounter - 1 ;
					_squadSize = _squadSize - 1;
					_countGarrisonPatrol = _countGarrisonPatrol + 1;
					_patrolGroups pushbackUnique (group _unit);
					_aoActiveBuildings pushbackUnique _randomBuildingObject;
				};

			};
		}; 

	};




	private _allowedRoadsVehicle = [];
	if (count _cqbBogusBuilding > 2) then {
		private _a = selectRandom _cqbBogusBuilding;
		_cqbBogusBuilding = _cqbBogusBuilding - [_a];
		private _b = selectRandom _cqbBogusBuilding;
		_cqbBogusBuilding = [_a, _b];
	};

	{ _aoActiveBuildings pushbackUnique _x; } forEach (_cqbBuildings + _cqbBogusBuilding);

	{
		private _building = _x;
		private _size = sizeOf (typeof _x);
		private _index = _buildingsAndLayouts findIf { (_x select 0) == _building };
		if(_index <= -1) then  { continue; };
		private _layout = _buildingsAndLayouts select _index;
		private _furnitures = [_building, _layout select 1] call SpecOps_fnc_dressUpBuildingApplyFurnitures;
		_building setVariable ["AO_Decorations", _furnitures];
		_funitureLists append _furnitures;
		private _roadTmp = _building nearRoads _size;
		{ 
			if(!(_x in _allowedRoadsVehicle)) then { _allowedRoadsVehicle pushback _x; }; 
		} forEach (_roadTmp);
	} forEach (_nearbyBuildings);

	// Add ungarrisonable overflow to patrol pool
	if (_garrisonEnemies > 0) then { _patrolEnemies = _patrolEnemies + _garrisonEnemies; };
	[
		_cqbBuildings, _intelObjects, _hostages, _staticGunner, _garrisonGroups, 
		_enemyUnits, _leaderUnits, _enemyVehicles, _totalEnemiesCounter, _garrisonEnemies, 
		_patrolEnemies, _funitureLists, _patrolGroups, _allowedRoadsVehicle, _aoActiveBuildings, 
		_nearbyBuildings, _cqbBogusBuilding, _buildingMapUnits
	];
