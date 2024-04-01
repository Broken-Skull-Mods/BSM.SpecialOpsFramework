
/*
[] spawn {
    [TestAO, 75, 50, 0, 0, 4, 1] call SpecOps_fnc_aoStartSpawning;
    call SpecOps_fnc_aoStartSpawning;
};

*/
missionNamespace setVariable ["AO_Spawning_Done", false];

missionNamespace setVariable ["specops_AO_loading_progress", 0, true];
missionNamespace setVariable ["specops_AO_loading_status", "Initializing Spawner...", true];

private _triggerAO = missionNamespace getVariable ["AO_Trigger", objNull];
if (isNull _triggerAO) exitWith {};

private _isSpawning = missionNamespace getVariable ["AO_Spawning_Units", false];
if (_isSpawning) exitWith {};
missionNamespace setVariable ["AO_Spawning_Units", true];

private _enemyPatrols = missionNamespace getVariable ["AO_EnemyPatrolToSpawn", []];
private _civPatrols = missionNamespace getVariable ["AO_CivilianToSpawn", []];

missionNamespace setVariable ["specops_AO_loading_progress", 0.25, true];
missionNamespace setVariable ["specops_AO_loading_status", "Spawning Patrols...", true];

missionNamespace setVariable ["tft_global_loading_progress", 1, true];
missionNamespace setVariable ["tft_global_loading_active", false, true];
private _cancelInProgress = false;
private _cachedPatrol = [];
// Spawn Patrol as Priority
{
    // [_safePos, _fireteam, _patrolType, _patrolPosition, _patrolSize];
    private _pos = _x select 0;
    private _team = _x select 1;
    private _type = _x select 2;
    private _areaPos = _x select 3;
    private _patrolDistance = _x select 4;
    _cachedPatrol append ([_team, _pos, _type, _areaPos, _patrolDistance] call SpecOps_fnc_aoSpawnEnemyPatrol);
    _enemyPatrols = _enemyPatrols - [_x];
    call SpecOps_fnc_commonSleepFPSBased; // Sleep
    // Mission Canceled Before Finish Loading?
    private _triggerAO = missionNamespace getVariable ["AO_Trigger", objNull];
    if (isNull _triggerAO) exitWith {_cancelInProgress = true;};
} forEach (_enemyPatrols);

call SpecOps_fnc_commonSleepFPSBased; // Sleep

// missionNamespace setVariable ["specops_AO_loading_progress", 0.40, true];
// missionNamespace setVariable ["specops_AO_loading_status", "Spawning Civilians...", true];
private _cachedCivPatrol = [];
{
    // [_safePos, _fireteam, _patrolType, _patrolPosition, _patrolSize];
    private _pos = _x select 0;
    private _team = _x select 1;
    _cachedCivPatrol append ([_pos, _team] call SpecOps_fnc_aoSpawnCivilianPatrol);
    _civPatrols = _civPatrols - [_x]; 
    call SpecOps_fnc_commonSleepFPSBased; // Sleep
    // Mission Canceled Before Finish Loading?
    private _triggerAO = missionNamespace getVariable ["AO_Trigger", objNull];
    if (isNull _triggerAO) exitWith {_cancelInProgress = true;};
} forEach (_civPatrols);

// missionNamespace setVariable ["specops_AO_loading_progress", 0.60, true];
// missionNamespace setVariable ["specops_AO_loading_status", "Spawning Furnitures...", true];
call SpecOps_fnc_commonSleepFPSBased; // Sleep


private _furnishedBuildings = _triggerAO getVariable ["AO_Buildings", []];
{
    private _building = _x;
    private _layout = _building getVariable ["spec_ops_building_layout", nil];
    if(isNil "_layout") then  { continue; };
    private _furnitures = [_building, _layout] call SpecOps_fnc_dressUpBuildingApplyFurnitures;
    _building setVariable ["AO_Decorations", _furnitures];
    call SpecOps_fnc_commonSleepFPSBased; // Sleep
    // Mission Canceled Before Finish Loading?
    private _triggerAO = missionNamespace getVariable ["AO_Trigger", objNull];
    if (isNull _triggerAO) exitWith {_cancelInProgress = true;};
} forEach (_furnishedBuildings);

// missionNamespace setVariable ["specops_AO_loading_progress", 0.85, true];
// missionNamespace setVariable ["specops_AO_loading_status", "Spawning Garrisons...", true];
call SpecOps_fnc_commonSleepFPSBased; // Sleep
private _garrisonBuildings = missionNamespace getVariable ["AO_GarrisonToSpawn", createHashMap];
{
    private _value = _y;
    private _building = _value select 0;
    private _garrionUnits = _value select 1;
    private _group = createGroup east;
    {
        private _garrisonParam = _x;
        private _positionInfoSet = _x select 0;
        private _isLeader = _x select 1;
        [_building, _positionInfoSet, _isLeader, _group] call SpecOps_fnc_dressUpBuildingSpawnEnemy;
        call SpecOps_fnc_commonSleepFPSBased; // Sleep
    } forEach (_garrionUnits);

    [_group] call SpecOps_fnc_serverLoadBalanceRegisterGroup;
    _group deleteGroupWhenEmpty true;
    call SpecOps_fnc_commonSleepFPSBased; // Sleep
    // Mission Canceled Before Finish Loading?
    private _triggerAO = missionNamespace getVariable ["AO_Trigger", objNull];
    if (isNull _triggerAO) exitWith {_cancelInProgress = true;};
} forEach (_garrisonBuildings);


if (_cancelInProgress) then {
    // Clear Unfinished AO
    {
        private _value = _y;
        private _building = _value select 0;
        private _garrionUnits = _value select 1;
        { deleteVehicle _x; } forEach ((_building getVariable ["AO_Units", []]) + (_building getVariable ["AO_Decorations", []]));
        _building setVariable ["AO_Units", []];
        _building setVariable ["AO_Decorations", []];
    } forEach (_garrisonBuildings);
    { deleteVehicle _x; } forEach (_cachedPatrol);
    { deleteVehicle _x; } forEach (_cachedCivPatrol);

    missionNamespace setVariable ["AO_EnemyPatrolToSpawn", []];
    missionNamespace setVariable ["AO_CivilianToSpawn", []];
    missionNamespace setVariable ["AO_Spawning_Units", false];
}else {
    missionNamespace setVariable ["AO_EnemyPatrolToSpawn", _enemyPatrols];
    missionNamespace setVariable ["AO_CivilianToSpawn", _civPatrols];
    missionNamespace setVariable ["AO_Spawning_Units", false];
};

missionNamespace setVariable ["AO_Spawning_Done", true];
hint "The AO is Ready.";