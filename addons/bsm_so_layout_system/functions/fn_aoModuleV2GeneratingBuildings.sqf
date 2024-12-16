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

// _x inArea [(getPos _building), (_boundaries select 0), (_boundaries select 1), (_boundaries select 2), (_boundaries select 3), (_boundaries select 4), false]
private _selectedAreas = []; //  [[_building, _typeChooseFor, [center, a, b, angle, isRectangle, c, false]]]
// 0 = Intel, 1 = Hostages, 2 = HVT

private _unitGroupSpawnPoints = missionNamespace getVariable["bsm_ls_unitGroupSpawnPoints", []];
private _unitGroupSpawnPointsInNearbyBuilding = _unitGroupSpawnPoints select { (_x select 0) in _nearbyBuildings && { (((_x select 3) select 4) select 0) != 1 } };

private _unitAsHVTSpawnPoints = missionNamespace getVariable["bsm_ls_unitHVT", []];
private _unitAsHVTSpawnPointsInNearbyBuilding = _unitAsHVTSpawnPoints select { ((_x select 0) in _nearbyBuildings) };
private _chosenHVTs = [];
for "_i" from 0 to _leaderNb do {
	if (count _unitAsHVTSpawnPointsInNearbyBuilding <= 0) exitWith {};
	private _pick = selectRandom _unitAsHVTSpawnPointsInNearbyBuilding;
	_chosenHVTs pushback _pick;
	_unitAsHVTSpawnPoints = _unitAsHVTSpawnPoints - [_pick];
	_unitAsHVTSpawnPointsInNearbyBuilding = _unitAsHVTSpawnPointsInNearbyBuilding - [_pick];
};


private _intelSpawnPoints = missionNamespace getVariable["bsm_ls_intelligenceSpawnPoints", []];
private _intelInNearbyBuilding = _intelSpawnPoints select { ((_x select 0) in _nearbyBuildings) };
private _chosenIntelligences = [];
for "_i" from 0 to _intelMax do {
	if (count _intelInNearbyBuilding <= 0) exitWith {};
	private _pick = selectRandom _intelInNearbyBuilding;
	_chosenIntelligences pushback _pick;
	_hostageSpawnPoints = _hostageSpawnPoints - [_pick];
	_intelInNearbyBuilding = _intelInNearbyBuilding - [_pick];
};

private _hostageSpawnPoints = missionNamespace getVariable["bsm_ls_hostageSpawnPoints", []];
private _hostageSpawnPointsInNearbyBuilding = _hostageSpawnPoints select { ((_x select 0) in _nearbyBuildings) };
private _chosenHostages = [];
for "_i" from 0 to _hostagesNb do {
	if (count _hostageSpawnPointsInNearbyBuilding <= 0) exitWith {};
	private _pick = selectRandom _hostageSpawnPointsInNearbyBuilding;
	_chosenHostages pushback _pick;
	_hostageSpawnPoints = _hostageSpawnPoints - [_pick];
	_hostageSpawnPointsInNearbyBuilding = _hostageSpawnPointsInNearbyBuilding - [_pick];
};
private _staticSpawnPoints = missionNamespace getVariable["bsm_ls_staticSpawnPoints", []];
private _staticSpawnPointsInNearbyBuilding = _staticSpawnPoints select { ((_x select 0) in _nearbyBuildings) };

private _explosiveSpawnPoints = missionNamespace getVariable["bsm_ls_explosiveSpawnPoints", []];
private _explosiveSpawnPointsInNearbyBuilding = _explosiveSpawnPoints select { ((_x select 0) in _nearbyBuildings) };



// Group Building to be Populated by enemies;
private _buildingToPopulate = [];
{ _buildingToPopulate pushBackUnique (_x select 0); } forEach (_chosenHostages + _chosenIntelligences + _chosenHVTs);

private _remainingEnemies = _totalEnemies;
private _buildingUnitGroups = [];
private _buildingUnits = [];
private _buildingUnits = [];
private _aoIntelObjs = [];


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


// Spawn Units in Buildings
{
	private _building = _x;
	private _enemyAllPos = _unitGroupSpawnPointsInNearbyBuilding select { (_x select 0) == _building };
	if (_outsideOnly) then {
		// private _isBalconyOrRoof = (_positionINfoSetOptions select 21) == 1;
		_enemyAllPos = _enemyAllPos select { (((_x select 2) select 3) select 21) == 1 };
	};
	private _spawnMaxNb = 0;
	if (count _enemyAllPos <= 5) then { _spawnMaxNb = count _enemyAllPos; };
	if (count _enemyAllPos >= 6 && count _enemyAllPos <= 10 ) then { _spawnMaxNb = floor((count _enemyAllPos) * (random [0.85, 0.90, 0.95])); };
	if (count _enemyAllPos >= 11 && count _enemyAllPos <= 20 ) then { _spawnMaxNb = floor((count _enemyAllPos) * (random [0.75, 0.80, 0.85])); };
	if (count _enemyAllPos > 20) then { _spawnMaxNb = floor((count _enemyAllPos) * (random [0.50, 0.625, 0.75])); };
	// Make sure we dont exceed the setting total enemies.
	if (_spawnMaxNb > _remainingEnemies) then { _spawnMaxNb = _remainingEnemies; };
	_remainingEnemies = _remainingEnemies - _spawnMaxNb;
	private _buildingGroup = grpNull; // building unit group
	private _buildingUnitsTmp = []; // store unit being spawned
	for "_i" from 0 to _spawnMaxNb do {
		if (count _enemyAllPos <= 0) exitWith {};
		private _pick = selectRandom _enemyAllPos;
		_enemyAllPos = _enemyAllPos - [_pick];
		// Return [_building, _unit, _group, (_priorityLeader && _IsLeader)];
		private _buildingUnitSpawned = [_building, (_pick select 2), false, _buildingGroup, _faction, _factionCamo, true, _side] call SpecOps_fnc_dressUpBuildingSpawnEnemy;
		private _unit = _buildingUnitSpawned select 1;
		if (isNull _buildingGroup) { _buildingGroup = (_buildingUnitSpawned select 2); };
		_buildingUnitsTmp pushBack _unit;
	};

	private _indexForHVT = _chosenHVTs findif { (_x select 0) == _building; };
	if (_indexForHVT != -1) then {
		private _hvtPos = _chosenHVTs select _indexForHVT;
		private _buildingUnitSpawned = [_building, (_hvtPos select 2), true, _buildingGroup, _faction, _factionCamo, true, _side] call SpecOps_fnc_dressUpBuildingSpawnEnemy;
		if (isNull _buildingGroup) { _buildingGroup = (_buildingUnitSpawned select 2); };
		_buildingUnitsTmp pushBack _unit;
		_leaderNb = _leaderNb - 1;
	};

	private _indexForIntel = _chosenIntelligences findif { (_x select 0) == _building; };
	if (_indexForIntel != -1) then {
		private _intelPos = _chosenIntelligences select _indexForIntel;
		private _intelObject = [_building , nil, _intelPos select 2] call SpecOps_fnc_dressUpBuildingApplyIntel;		
		_aoIntelObjs pushback _intelObject;
		private _savedIntel = _building getVariable ["AO_Intels", []];
		_savedIntel pushback (_intelObject);
		_building setVariable ["AO_Intels", _savedIntel];
		_intelMax = _intelMax - 1;
	};

} forEach (_buildingToPopulate);

// TODO: I MOVE VARIABLES ABOVE, EXTRACT BUILDINGS AND INFORMATION TO BE RETURNED


	[
		_cqbBuildings, _intelObjects, _hostages, _staticGunner, _garrisonGroups, 
		_enemyUnits, _leaderUnits, _enemyVehicles, _totalEnemiesCounter, _garrisonEnemies, 
		_patrolEnemies, _funitureLists, _patrolGroups, _allowedRoadsVehicle, _aoActiveBuildings, 
		_nearbyBuildings, _cqbBogusBuilding, _buildingMapUnits
	];
