	params ["_area", "_areaHalfSize", "_totalEnemies", "_leaderNb", "_intelMax", "_staticGunnerCount", "_hostagesNb", ["_garrisonRatio", TFT_SPECOPS_GEN_GARRISON_MIN], ["_tier", 3]];
	/*
        [testBuilding, 50, 5, 1, 1, 1, 1] call SpecOps_fnc_aoSelectGarrisonPositions;
    */
	diag_log format ["SPEC-OPS (AO): _area = %1 | _areaHalfSize = %2 | _totalEnemies = %3 | _leaderNb = %4 | _intelMax = %5 | _staticGunnerCount = %6 | _hostagesNb = %7", _area, _areaHalfSize, _totalEnemies, _leaderNb, _intelMax, _staticGunnerCount, _hostagesNb];

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
	private _buildingsAndStaticMachineGunnerLayout = []; // Only Hostage Positions.
	private _buildingsAndHostageLayout = []; // Only Hostage Positions.
	private _buildingsAndIntelLayout = []; // Only Intelligence Positions.
	private _buildingsAndFurnitureLayout = []; // Only Furniture Positions.
	private _areaPos = getPos _area;
	private _nearbyBuildings = nearestObjects [_areaPos, ["HouseBase", "Wreck_Base"], _areaHalfSize];
	private _buildingMapUnits = createHashMap;




	/*
		Make the generator extract each building name which will be used for whitelisting buildings.
	*/
	//

	missionNamespace setVariable ["tft_global_loading_status", "Preloading Buildings...", true];
	{
		private _buildingType = typeof _x;
		private _building = _x;
		diag_log format ["SPEC-OPS (AO): Loading Building %1", _buildingType];
    	private _layout = _building getVariable ["spec_ops_building_layout", nil];
		private _layouts = [];
		// if building layout isn't predefined, pick one
		if (isNil "_layout") then { 
			_layouts = [_x, true, _tier] call SpecOps_fnc_dressUpBuildingGetBuildingLayouts; 
			if (count _layouts <= 0) then { diag_log format ["SPEC-OPS (AO): Layout not found for %1", _buildingType]; continue; };
			_layout = selectRandom _layouts;
			_building setVariable ["spec_ops_building_layout", _layout, true];
			diag_log format ["SPEC-OPS (AO): Layout for %1 was not defined.", _building];
		};

		
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
		
		
		private _furnituresPositions = [_layout, "furnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
		if (count _furnituresPositions > 0) then { _buildingsAndFurnitureLayout pushback [_x, _furnituresPositions]; };
		
		diag_log format ["SPEC-OPS (AO): Loaded %1", _buildingType];
	} forEach (_nearbyBuildings);

	private _progress = missionNamespace getVariable ["tft_global_loading_progress", 0];
	if (_progress < 0.5) then { missionNamespace setVariable ["tft_global_loading_progress", 0.55, true]; 
		missionNamespace setVariable ["tft_global_loading_status", "Starting Load Up...", true];
	
	};
	
	diag_log format ["SPEC-OPS (AO): Intel %1", (count _buildingsAndIntelLayout)];

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


	diag_log format ["SPEC-OPS (AO): _totalEnemies = %1 | _garrisonEnemies = %2 | _patrolEnemies = %3", _totalEnemies, _garrisonEnemies, _patrolEnemies];
		diag_log format ["SPEC-OPS (AO): Max Intel %1", _intelMax];

	// // Spawn Intelligence
	if (_intelMax > 0 && count _buildingsAndIntelLayout > 0) then {
		missionNamespace setVariable ["tft_global_loading_status", "Loading Intelligence...", true];
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
						
						if ((hashValue _randomBuildingObject) in _buildingMapUnits) then {
							private _currentHash = _buildingMapUnits get (hashValue _randomBuildingObject);
							(_currentHash select 1) pushback [_randomBuildingUnitPosSet, _prioritizeLeaders];
							_buildingMapUnits set [hashValue _randomBuildingObject, _currentHash];
						} else {
							_buildingMapUnits set [hashValue _randomBuildingObject, [_randomBuildingObject, [[_randomBuildingUnitPosSet, _prioritizeLeaders]]]];
						};

						// Check if position is for leader.
						if (_prioritizeLeaders && {((_randomBuildingUnitPosSet select 2) select 0) == 1}) then {
							 _leaderNb = _leaderNb - 1; 
						};

						_totalEnemiesCounter = _totalEnemiesCounter - 1 ;
						_buildingsAndUnitPositions set [_index, [_randomBuildingObject, _randomBuildingUnitPositions]];
					};
				};
			};	
    		
		};
	};
	private _progress = missionNamespace getVariable ["tft_global_loading_progress", 0];
	if (_progress < 0.6) then { missionNamespace setVariable ["tft_global_loading_progress", 0.60, true]; };
	
	// Spawn Hostages
	if (_hostagesNb > 0 && count _buildingsAndHostageLayout > 0) then {
		missionNamespace setVariable ["tft_global_loading_status", "Loading Hostages...", true];
		diag_log format ["SPEC-OPS (AO): Spawning Hostages (%1)", _hostagesNb];
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
			private _randomHostageUp = _randomHostageInfoSet select 2;
			private _randomHostageOptions = _randomHostageInfoSet select 4;

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

					if ((hashValue _randomBuildingObject) in _buildingMapUnits) then {
						private _currentHash = _buildingMapUnits get (hashValue _randomBuildingObject);
						(_currentHash select 1) pushback [_randomBuildingUnitPosSet, false];
						_buildingMapUnits set [hashValue _randomBuildingObject, _currentHash];
					} else {
						_buildingMapUnits set [hashValue _randomBuildingObject, [_randomBuildingObject, [[_randomBuildingUnitPosSet, false]]]];
					};


					_totalEnemiesCounter = _totalEnemiesCounter - 1 ;
					_buildingsAndUnitPositions set [_index, [_randomBuildingObject, _randomBuildingUnitPositions]];
				};
			};

			_spawnPos = [_randomBuildingObject, _randomHostagePos] call SpecOps_fnc_getRelatedPosition;
			

			private _hostageAgent = createAgent ["B_Survivor_F", _spawnPos, [], 0, "CAN_COLLIDE"];
			_unit = _hostageAgent;
			
			private _savedUnits = _randomBuildingObject getVariable ["AO_Units", []];
			_savedUnits pushback (_unit);
			_randomBuildingObject setVariable ["AO_Units", _savedUnits];

			private _isVisibleFromOutside = (_randomHostageOptions select 1) == 1;
			_unit setVariable ["Unit_VisibleFromOutside", _isVisibleFromOutside];
			_unit setCaptive true;
			_unit allowDamage false;
			_unit hideObjectGlobal true;
			[_randomBuildingObject, _unit, _randomHostagePos, [_randomHostageDir, _randomHostageUp], false, true] call SpecOps_fnc_commonRelPosObject;
			// [_randomBuildingObject, _unit, _randomHostagePos, 0] call BIS_fnc_relPosObject;
			// _unit setDir (getDir _randomBuildingObject - _randomHostageDir);
			// _unit setFormDir (getDir _randomBuildingObject - _randomHostageDir);
			_unit enableSimulationGlobal false;
			_unit disableAI "PATH";
			[_unit, true, _unit] call ACE_captives_fnc_setHandcuffed;
			[_unit] spawn { sleep 2; (_this select 0) allowDamage true; };

			_hostages pushback _unit;
			_priorityBuildings pushbackUnique _randomBuildingObject;
			_cqbBuildings pushbackUnique _randomBuildingObject;
		};
		uiSleep 2;
	};

	private _progress = missionNamespace getVariable ["tft_global_loading_progress", 0];
	if (_progress < 0.65) then { missionNamespace setVariable ["tft_global_loading_progress", 0.65, true]; };
	
	// Spawn Static Gunners
	if (_staticGunnerCount > 0 &&  count _buildingsAndStaticMachineGunnerLayout > 0) then {
		missionNamespace setVariable ["tft_global_loading_status", "Loading Death Traps (No Spoiler)...", true];
		diag_log format ["SPEC-OPS (AO): _staticGunnerCount = %1 | _buildingsAndStaticMachineGunnerLayout = %2", _staticGunnerCount, count _buildingsAndStaticMachineGunnerLayout];

		for "_i" from 1 to _staticGunnerCount do {
			if(count _buildingsAndStaticMachineGunnerLayout <= 0) exitWith {};
			_randomBuilding = selectRandom _buildingsAndStaticMachineGunnerLayout;
			_buildingsAndStaticMachineGunnerLayout = _buildingsAndStaticMachineGunnerLayout - [_randomBuilding];
			private _randomBuildingObject = _randomBuilding select 0;
			private _randomPositions = _randomBuilding select 1;
			private _randomInfoSet = selectRandom _randomPositions;
			if(isNil "_randomInfoSet") exitWith { };
			diag_log format ["SPEC-OPS (AO): _randomInfoSet = %1", _randomInfoSet];
			private _randomPos = _randomInfoSet select 0;
			private _randomDir = _randomInfoSet select 1;
			private _randomUp = _randomInfoSet select 2;
			private _randomOptions = _randomInfoSet select 4;
			private _typeOfGun = _randomOptions select 0;
			diag_log format ["SPEC-OPS (AO): _randomPos = %1 | _randomDir = %2 | _randomOptions = %3", _randomPos, _randomDir, _randomOptions];

			private _lowMachineGuns = getArray (configfile >> "CfgFactionClasses" >> TFTSRV_SAVEDVAR_ENEMY_FACTION >> "StaticLowMG");
			private _highMachineGuns = getArray (configfile >> "CfgFactionClasses" >> TFTSRV_SAVEDVAR_ENEMY_FACTION >> "StaticHighMG");
			private _motar = getArray (configfile >> "CfgFactionClasses" >> TFTSRV_SAVEDVAR_ENEMY_FACTION >> "StaticMotar");
			private _antiAir = getArray (configfile >> "CfgFactionClasses" >> TFTSRV_SAVEDVAR_ENEMY_FACTION >> "StaticAntiAir");
			private _sam = getArray (configfile >> "CfgFactionClasses" >> TFTSRV_SAVEDVAR_ENEMY_FACTION >> "SamSystem");
			if (_typeOfGun == 0 && {count _lowMachineGuns <= 0}) then { continue; };
			if (_typeOfGun == 1 && {count _highMachineGuns <= 0}) then { continue; };
			if (_typeOfGun == 2 && {count _motar <= 0}) then { continue; };
			if (_typeOfGun == 3 && {count _antiAir <= 0}) then { continue; };
			if (_typeOfGun == 4 && {count _sam <= 0}) then { continue; };

			private _staticGun = nil;
			if (_typeOfGun == 0) then { _staticGun = selectRandom _lowMachineGuns; };
			if (_typeOfGun == 1) then { _staticGun = selectRandom _highMachineGuns; };
			if (_typeOfGun == 2) then { _staticGun = selectRandom _motar; };
			if (_typeOfGun == 3) then { _staticGun = selectRandom _antiAir; };
			if (_typeOfGun == 4) then { _staticGun = selectRandom _sam; };
			if (isNil "_staticGun") then { continue; };
			private _group = objNull;
			_spawnPos = [_randomBuildingObject, _randomPos] call SpecOps_fnc_getRelatedPosition;

			_group = [_spawnPos, east, [_staticGun]] call BIS_fnc_spawnGroup;
			_group deleteGroupWhenEmpty true;
			private _unit = leader _group;
			private _vehicle = vehicle _unit;
			[_randomBuildingObject, _vehicle, _randomPos, [_randomDir, _randomUp], false, true] call SpecOps_fnc_commonRelPosObject;

			// [_randomBuildingObject, _vehicle, _randomPos, _randomDir] call BIS_fnc_relPosObject;
			// private _correctedRotation = (getDir _randomBuildingObject) + _randomDir;
			// _vehicle setDir _correctedRotation;

			private _savedUnits = _randomBuildingObject getVariable ["AO_Units", []];
			_savedUnits pushback (_unit);
			_randomBuildingObject setVariable ["AO_Units", _savedUnits];

			private _savedUnits = _randomBuildingObject getVariable ["AO_StaticGunVehicle", []];
			_savedUnits pushback (_vehicle);
			_randomBuildingObject setVariable ["AO_StaticGunVehicle", _savedUnits];
			
			_unit enableSimulationGlobal false;
			_vehicle enableSimulationGlobal false;
			_unit hideObjectGlobal true;
			_vehicle hideObjectGlobal true;
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

			_unit allowDamage false;
			[_unit] spawn { sleep 2; (_this select 0) allowDamage true; };
			_vehicle allowDamage false;
			[_vehicle] spawn { sleep 2; (_this select 0) allowDamage true; };
			_enemyUnits pushback _unit;
			_enemyVehicles pushback _vehicle;
    		uiSleep 0.5;
		};
		uiSleep 2;
	};
	

	private _progress = missionNamespace getVariable ["tft_global_loading_progress", 0];
	if (_progress < 0.7) then { missionNamespace setVariable ["tft_global_loading_progress", 0.7, true]; };

	diag_log format ["SPEC-OPS (AO): _buildingsAndUnitPositions = %1 | _garrisonEnemies = %2 ",( count _buildingsAndUnitPositions), _garrisonEnemies];
	// Fill CQB building with amount of garrison.
	_garrisonPriorityBuildings = _cqbBuildings; 
	// Spawn Garrions
	if (_garrisonEnemies > 0 && count _buildingsAndUnitPositions > 0) then {
		missionNamespace setVariable ["tft_global_loading_status", "Assigning Garrison Positions...", true];
		for "_i" from 1 to _garrisonEnemies do {
			if(_garrisonEnemies <= 0 || _totalEnemiesCounter <= 0 || count _buildingsAndUnitPositions <= 0) exitWith { };
			private _randomBuilding = nil;
			if (count _garrisonPriorityBuildings > 0) then {
				// Get Garrison Priority Building
				private _randomBuildingTmp = selectRandom _garrisonPriorityBuildings;
				// Find Building Unit Available Positions
				_index = _buildingsAndUnitPositions findIf { (_x select 0) == _randomBuildingTmp };
				// If No position available then remove the building from priority and rerun loop at current position
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
			private _randomInfoSet = selectRandom _randomPositions;
			// Remove Building from available position
			if(isNil "_randomInfoSet") then { 
				_garrisonPriorityBuildings = _garrisonPriorityBuildings - [_randomBuildingObject];
				_buildingsAndUnitPositions deleteAt _index; 
				continue;
			};
			_randomPositions = _randomPositions - [_randomInfoSet];

			private _randomPos = _randomInfoSet select 0;
			private _randomDir = _randomInfoSet select 1;
			private _randomOptions = _randomInfoSet select 2;

			if ((hashValue _randomBuildingObject) in _buildingMapUnits) then {
				private _currentHash = _buildingMapUnits get (hashValue _randomBuildingObject);
				(_currentHash select 1) pushback [_randomInfoSet, false];
				_buildingMapUnits set [hashValue _randomBuildingObject, _currentHash];
			} else {
				_buildingMapUnits set [hashValue _randomBuildingObject, [_randomBuildingObject, [[_randomInfoSet, false]]]];
			};



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

	private _progress = missionNamespace getVariable ["tft_global_loading_progress", 0];
	if (_progress < 0.75) then { missionNamespace setVariable ["tft_global_loading_progress", 0.75, true]; };
	
	// HVT Target
	if (_leaderNb > 0 && count _buildingsAndUnitPositions > 0) then {
		missionNamespace setVariable ["tft_global_loading_status", "Assigning Leader Positions...", true];

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

			if ((hashValue _randomBuildingObject) in _buildingMapUnits) then {
				private _currentHash = _buildingMapUnits get (hashValue _randomBuildingObject);
				(_currentHash select 1) pushback [_randomInfoSet, true];
				_buildingMapUnits set [hashValue _randomBuildingObject, _currentHash];
			} else {
				_buildingMapUnits set [hashValue _randomBuildingObject, [_randomBuildingObject, [[_randomInfoSet, true]]]];
			};


			// private _savedUnits = _randomBuildingObject getVariable ["AO_Units", []];
			// _savedUnits pushback (_buildingUnitSpawned select 1);
			// _randomBuildingObject setVariable ["AO_Units", _savedUnits];

			_leaderNb = _leaderNb - 1;
			_cqbBuildings pushbackUnique _randomBuildingObject;
			
		};
	};

	private _progress = missionNamespace getVariable ["tft_global_loading_progress", 0];
	if (_progress < 0.80) then { missionNamespace setVariable ["tft_global_loading_progress", 0.80, true]; };

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
	uiSleep 2;
	if (_patrolEnemies > 0 && count _allowedPatrolGarrison > 0) then {
		missionNamespace setVariable ["tft_global_loading_status", "Assigning Sneaky Bastards...", true];
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

				if ((hashValue _randomBuildingObject) in _buildingMapUnits) then {
					private _currentHash = _buildingMapUnits get (hashValue _randomBuildingObject);
					(_currentHash select 1) pushback [_randomInfoSet, false];
					_buildingMapUnits set [hashValue _randomBuildingObject, _currentHash];
				} else {
					_buildingMapUnits set [hashValue _randomBuildingObject, [_randomBuildingObject, [[_randomInfoSet, false]]]];
				};


				private _savedUnits = _randomBuildingObject getVariable ["AO_Units", []];
				_randomBuildingObject setVariable ["TFT_Is_Patrol_Garrison", true];
				_patrolEnemies = _patrolEnemies - 1;
				_totalEnemiesCounter = _totalEnemiesCounter - 1 ;
				_squadSize = _squadSize - 1;
				_countGarrisonPatrol = _countGarrisonPatrol + 1;
				_aoActiveBuildings pushbackUnique _randomBuildingObject;
			};

		};
	}; 


	private _progress = missionNamespace getVariable ["tft_global_loading_progress", 0];
	if (_progress < 0.85) then { missionNamespace setVariable ["tft_global_loading_progress", 0.85, true]; };

	private _allowedRoadsVehicle = [];
	
	{ _aoActiveBuildings pushbackUnique _x; } forEach (_cqbBuildings + _cqbBogusBuilding);
	{ 

		(_x select 1) setVariable ["SpecOps_Load_Balancer_Ignored", true];
	} forEach (_garrisonGroups);
	missionNamespace setVariable ["tft_global_loading_status", "Loading Roads...", true];
	{
		private _building = _x;
		private _size = sizeOf (typeof _x);
		private _roadTmp = _building nearRoads _size;
		{ _allowedRoadsVehicle pushbackUnique _x; } forEach (_roadTmp);
	} forEach (_nearbyBuildings);

	[
		_cqbBuildings, _intelObjects, _hostages, _staticGunner, _garrisonGroups, 
		_enemyUnits, _leaderUnits, _enemyVehicles, _totalEnemiesCounter, _garrisonEnemies, 
		_patrolEnemies, _funitureLists, _patrolGroups, _allowedRoadsVehicle, _aoActiveBuildings, 
		_nearbyBuildings, _cqbBogusBuilding, _buildingMapUnits
	];