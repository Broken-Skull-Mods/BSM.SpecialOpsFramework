params [
    "_area", "_areaHalfSize", "_totalEnemies", "_leaderNb", "_intelMax", "_staticGunnerCount", "_hostagesNb", 
    ["_garrisonRatio", 0.7], ["_vehicleCount", 1], ["_civilianGroupNb", 0], ["_triggerSizeMultiplier", 1], 
    ["_faction", TFTSRV_SAVEDVAR_ENEMY_FACTION], ["_factionCamo", TFTSRV_SAVEDVAR_PLAYER_FACTION_CAMO], ["_civFaction", TFTSRV_SAVEDVAR_CIVILIAN_FACTION]];
// [TestAO, 175, 50, 0, 0, 4, 1] spawn SpecOps_fnc_aoStartGenerator;
private _AOActivationRange = _areaHalfSize * _triggerSizeMultiplier;

missionNamespace setVariable ["tft_global_loading_status", "Starting Layout Generator...", true];
private _generatedAO = [_area, _areaHalfSize, _totalEnemies, _leaderNb, _intelMax, _staticGunnerCount, _hostagesNb, _garrisonRatio, 3, _faction, _factionCamo] call SpecOps_fnc_aoGenerateBuildingLayouts;


diag_log format["SPEC-OPS (AO): Generated AO Part 1: %1", _generatedAO];
private _roads =  (getPos _area) nearRoads _areaHalfSize;
private _aoActiveBuildings = (_generatedAO select 14);
private _aoAllBuildings = (_generatedAO select 15);

private _garrisonEnemies = (_generatedAO select 9);
private _patrolEnemies = (_generatedAO select 10);

private _cqbBuildings = (_generatedAO select 0);
private _intelObjects = (_generatedAO select 1);
private _hostages = (_generatedAO select 2);
private _staticGunner = (_generatedAO select 3);
private _garrisonGroups = (_generatedAO select 4);

private _enemyUnits = (_generatedAO select 5);
private _leaderUnits = (_generatedAO select 6);
private _enemyVehicles = (_generatedAO select 7);
private _totalEnemiesCounter = (_generatedAO select 8);
private _patrolGroups = (_generatedAO select 12);
private _bogusBuildings = (_generatedAO select 16);
private _allGarrisonToSpawn = (_generatedAO select 17); 
// _x = Building, _y = [Position Info, Is Leader?];
// diag_log format["SPEC-OPS (AO): Bogus Building are %1", _bogusBuildings];
// diag_log format["SPEC-OPS (AO): CQB Building are %1", _cqbBuildings];
// diag_log format["SPEC-OPS (AO): Active Building are %1", _aoActiveBuildings];

{  _x setDamage 0; } forEach (_aoAllBuildings);

private _vehicles = [];
private _tank = ([_faction, "VehicleTanks"] call SpecOps_fnc_getEnemyVehicle);
if( !isNil "_tank") then { _vehicles append [_tank, 1]; };
private _technicals = ([_faction, "VehicleTechnicals"] call SpecOps_fnc_getEnemyVehicle);
if( !isNil "_technicals") then { _vehicles append [_technicals, 100]; };
private _antiaircraft = ([_faction, "VehicleAntiAircraft"] call SpecOps_fnc_getEnemyVehicle);
if( !isNil "_antiaircraft") then { _vehicles append [_antiaircraft, 10]; };

private _vehicleRoads = _roads;
private _footPatrolRoads = [];
private _patrolVehicles = [];
private _patrolVehicleUnits = [];
private _vehicleSpotBlackListArea = [];

private _groups = [];
for "_i" from 1 to _vehicleCount do {
    if (count _vehicleRoads <= 0) exitWith { };
    private _takeRoad = selectRandom _vehicleRoads;
    _vehicleSpotBlackListArea pushback [getPos _takeRoad, 25, 25, false, 10];
    _vehicleRoads = _vehicleRoads - [_takeRoad];
    private _blacklistedRoads = [];
    {
        private _isInBlackList = (getPos _x) inArea [(getPos _takeRoad), 10, 10, 0, false, 10];
        if (_isInBlackList) then { 
            _footPatrolRoads pushback _x; 
            _vehicleRoads = _vehicleRoads - [_x];
        };
    } forEach (_vehicleRoads);
    
    private _vehicleSelect = selectRandomWeighted _vehicles;
    private _vehicle = [getPos _takeRoad, getDir _takeRoad, _vehicleSelect, east] call BIS_fnc_spawnVehicle;
    private _vehObj = _vehicle select 0;
    private _vehCrew = _vehicle select 1;
    private _vehGroup = _vehicle select 2;
    _patrolVehicles pushback _vehObj;
    clearWeaponCargoGlobal _vehObj; 
    clearMagazineCargoGlobal _vehObj; 
    clearItemCargoGlobal _vehObj;
    clearBackpackCargo _vehObj;
    _vehObj forceFollowRoad true;
    _vehObj hideObjectGlobal true;
    _vehObj enableSimulationGlobal false;
    {
        _x hideObjectGlobal true;
        _x enableSimulationGlobal false;
        _patrolVehicleUnits pushback _x;
    } forEach (_vehCrew);
    _groups pushbackUnique _vehGroup;
    missionNamespace setVariable ["tft_global_loading_status", format['Spawning Enemies (%1)', ([1000, 9999] call BIS_fnc_randomInt)], true];
    
    call SpecOps_fnc_commonSleepFPSBased; // Sleep
};

call SpecOps_fnc_commonSleepFPSBased; // Sleep

private _progress = missionNamespace getVariable ["tft_global_loading_progress", 0];
if (_progress < 0.88) then { 
    missionNamespace setVariable ["tft_global_loading_progress", 0.88, true]; 
    missionNamespace setVariable ["tft_global_loading_status", "Assigning Patrol Positions...", true];
};
 
_footPatrolRoads append _vehicleRoads;

// Spawn Civilians
private _patrolCivilianUnits = [];
private _patrolToSpawn = [];

// Spawn Enemy Patrols
private _patrolEnemyUnits = [];
if(_patrolEnemies <= 0) then {_patrolEnemies = 1;};
private _fireteamCount = ceil (_patrolEnemies / 4);

for "_i" from 1 to _fireteamCount do {
    if (count _footPatrolRoads <= 0) exitWith { };
    private _road = selectRandom _footPatrolRoads;
    _footPatrolRoads = _footPatrolRoads - [_road];
    private _safePos = (getPos _road) findEmptyPosition [5, 30, "C_man_1"];
    if (count _safePos <= 0) then { continue; }; // _faction
    private _fireteam = [
        format ["%1_Rifleman_%2", _faction, _factionCamo],
        format ["%1_Rifleman_%2", _faction, _factionCamo],
        format ["%1_GL_%2", _faction, _factionCamo],
        format ["%1_AR_%2", _faction, _factionCamo]
    ];

    private _patrolType = [
        "PATROL_WHOLEAO", 1,
        "PATROL_BUILDING", 1,
        "DEFEND_BUILDING", 1
    ];
    if (_fireteamCount <= 2) then {
        _patrolType set [3, 0];
        _patrolType set [5, 0];
    }else {
        _patrolType set [1, 0.3];
        _patrolType set [3, 2.5];
        _patrolType set [5, 1.3];
    }; 

    private _selectedPatrolType = selectRandomWeighted _patrolType;
    private _patrolPosition = getPos _area;
    private _patrolSize = _areaHalfSize;
    if (_selectedPatrolType == "PATROL_BUILDING") then { _patrolSize = 75; _patrolPosition = getPos (selectRandom _cqbBuildings); };
    if (_selectedPatrolType == "DEFEND_BUILDING") then { _patrolSize = 75; _patrolPosition = getPos (selectRandom _cqbBuildings); };

    private _units = [_fireteam, _safePos, _selectedPatrolType, _patrolPosition, _patrolSize] call SpecOps_fnc_aoSpawnEnemyPatrol;
    _patrolEnemyUnits append _units;

    call SpecOps_fnc_commonSleepFPSBased; // Sleep
};

private _progress = missionNamespace getVariable ["tft_global_loading_progress", 0];
if (_progress < 0.90) then { 
    missionNamespace setVariable ["tft_global_loading_progress", 0.90, true]; 
    missionNamespace setVariable ["tft_global_loading_status", format['Spawning Enemies (%1)', ([1000, 9999] call BIS_fnc_randomInt)], true];
};
call SpecOps_fnc_commonSleepFPSBased; // Sleep

private _patrolCivilianToSpawn = [];
private _allCivilians = ("getNumber (_x >> 'side') == 3 &&  getText (_x >> 'faction') == _civFaction" configClasses (configfile >> "CfgVehicles") apply { configName _x });
if (count _allCivilians > 0) then {
    for "_i" from 1 to _civilianGroupNb do {
        if (count _footPatrolRoads <= 0) exitWith { };
        private _road = selectRandom _footPatrolRoads;
        
        private _safePos = (getPos _road) findEmptyPosition [5, 25, "C_man_1"];
        if (count _safePos <= 0) exitWith { };
        private _civilianPool = [
            [(selectRandom _allCivilians)], 100,
            [(selectRandom _allCivilians), (selectRandom _allCivilians)], 10,
            [(selectRandom _allCivilians), (selectRandom _allCivilians), (selectRandom _allCivilians)], 0.1
        ];

        private _patrolPosition = getPos _area;
        private _patrolSize = _areaHalfSize / 2;
        _patrolCivilianToSpawn pushback [_safePos, (selectRandomWeighted _civilianPool)];
        diag_log format["SPEC-OPS (AO): Civilian Pool: %1", _civilianPool];

        private _units = [_safePos, (selectRandomWeighted _civilianPool)] call SpecOps_fnc_aoSpawnCivilianPatrol;
        _patrolCivilianUnits append _units;
        missionNamespace setVariable ["tft_global_loading_status", format['Spawning Enemies (%1)', ([1000, 9999] call BIS_fnc_randomInt)], true];
        call SpecOps_fnc_commonSleepFPSBased; // Sleep
    };
};






call SpecOps_fnc_commonSleepFPSBased; // Sleep
[_groups] call SpecOps_fnc_serverLoadBalanceRegisterGroups;

private _progress = missionNamespace getVariable ["tft_global_loading_progress", 0];
if (_progress < 0.95) then { 
    missionNamespace setVariable ["tft_global_loading_progress", 0.95, true]; 
    missionNamespace setVariable ["tft_global_loading_status", "Creating the AO...", true];
};

// [_cqbBuildings, _intelObjects, _hostages, _staticGunner, _garrisonGroups, _enemyUnits, _leaderUnits, _enemyVehicles, _totalEnemiesCounter, _garrisonEnemies, _patrolEnemies, _funitureLists, _patrolGroups]
diag_log format ["SPEC-OPS (AO TRIGGER): %1", _generatedAO];

_areaTrigger = createTrigger ["EmptyDetector", getPosWorld _area, true];
_areaTrigger setVariable ["AO", _area];
_areaTrigger setVariable ["AO_Buildings", _aoActiveBuildings];
_areaTrigger setVariable ["AO_All_CQB_Buildings", _cqbBuildings];
_areaTrigger setVariable ["AO_All_Bogus_Buildings", _bogusBuildings];
_areaTrigger setVariable ["AO_All_Buildings", _aoAllBuildings];
_areaTrigger setTriggerActivation ["ANYPLAYER", "PRESENT", true];
_areaTrigger setTriggerArea [_AOActivationRange, _AOActivationRange, 0, false];
_areaTrigger setTriggerStatements [ "this", "[thisTrigger] call SpecOps_fnc_aoActivateCombatZone;", "[thisTrigger] call SpecOps_fnc_aoDeactivateCombatZone;" ];

_areaTrigger setVariable ["AO_Patrol_Vehicle", _patrolVehicles];
_areaTrigger setVariable ["AO_Patrol_Vehicle_Units", _patrolVehicleUnits];
_areaTrigger setVariable ["AO_Patrol_Civilian_Units", _patrolCivilianUnits];
_areaTrigger setVariable ["AO_Patrol_Enemy_Units", _patrolEnemyUnits];

{
    private _building = _x;
    _building addMPEventHandler ["MPKilled", {
        params ["_unit", "_killer"];
        _decoration = _unit getVariable ["AO_Decorations", []];
        { _x hideObjectGlobal true; } forEach (_decoration);
        { _x hideObjectGlobal true; } forEach (_intels);
    }];
} forEach (_aoAllBuildings);

{
    private _hostage = _x;
    _hostage addMPEventHandler ["MPKilled", {
        params ["_unit", "_killer"];
        remoteExec ["TFTSRV_MISSION_REPORT_FAILED", 2];
    }];
} forEach (_hostages);
call SpecOps_fnc_commonSleepFPSBased; // Sleep


// {
//     private _building = _x;
//     private _buildingZone = (sizeOf (typeof _x)) * 2;
//     _buildingTrigger = createTrigger ["EmptyDetector", getPosWorld _building, true];
//     _buildingTrigger setVariable ["AO", _area];
//     _buildingTrigger setVariable ["AO_Building", _building];
//     _buildingTrigger setTriggerActivation ["ANYPLAYER", "PRESENT", true];
//     _buildingTrigger setTriggerArea [_buildingZone, _buildingZone, 0, false]; // fnc_aoDeactivateBuilding
//     // _buildingTrigger setTriggerStatements [ "this", "[thisTrigger] call SpecOps_fnc_aoActivateBuilding;", "[thisTrigger] call SpecOps_fnc_aoDeactivateBuilding;" ];
//     _building setVariable ["AO_Building_Close_Trigger", _buildingTrigger];
//     _ao_trigger = _area getVariable ["AO_Building_Triggers", []];
//     _ao_trigger pushback _buildingTrigger;
//     _area setVariable ["AO_Building_Triggers", _ao_trigger];
// } forEach ((_generatedAO select 0));

// // Trigger with Long
// {
//     private _building = _x;
//     private _buildingZone = (sizeOf (typeof _x)) * 4;
//     _buildingTrigger = createTrigger ["EmptyDetector", getPosWorld _building, true];
//     _buildingTrigger setVariable ["AO", _area];
//     _buildingTrigger setVariable ["AO_Building", _building];
//     _buildingTrigger setTriggerActivation ["ANYPLAYER", "PRESENT", true];
//     _buildingTrigger setTriggerArea [_buildingZone, _buildingZone, 0, false]; // fnc_aoDeactivateBuilding
//     _buildingTrigger setTriggerStatements [ "this", "[thisTrigger] call SpecOps_fnc_aoActivateBuilding;", "[thisTrigger] call SpecOps_fnc_aoDeactivateBuilding;" ];
//     _building setVariable ["AO_Building_Trigger", _buildingTrigger];
//     _ao_trigger = _area getVariable ["AO_Building_Triggers", []];
//     _ao_trigger pushback _buildingTrigger;
//     _area setVariable ["AO_Building_Triggers", _ao_trigger];
// } forEach ((_generatedAO select 0));


diag_log format["SPEC-OPS (AO): AO Trigger Created (%1)", _areaTrigger];
missionNamespace setVariable ["AO_Trigger", _areaTrigger, true];
missionNamespace setVariable ["AO_Active_Buildings", _aoAllBuildings, true];
// missionNamespace setVariable ["AO_GarrisonToSpawn", _allGarrisonToSpawn];
missionNamespace setVariable ["AO_CivilianToSpawn", _patrolCivilianToSpawn];
missionNamespace setVariable ["AO_EnemyPatrolToSpawn", _patrolToSpawn];
missionNamespace setVariable ["tft_global_loading_progress", 1, true];
missionNamespace setVariable ["tft_global_loading_active", false, true];
[_areaTrigger, _intelObjects, _hostages, _leaderUnits, _enemyUnits, _patrolGroups];