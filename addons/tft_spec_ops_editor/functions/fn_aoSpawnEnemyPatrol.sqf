params ["_units", "_pos", "_patrolType", "_patrolCenterPosition", "_patrolAreaSize"];
/*
    [_unit, _pos, _patrolType, _patrolCenterPosition, _patrolAreaSize] call SpecOps_fnc_aoSpawnEnemyPatrol;
*/



private _group = createGroup east;
private _allUnits = [];
{
    _x createUnit [_pos, _group, "patrolUnit = this; this hideObject true; this enableSimulation false;"];	
    _allUnits pushback patrolUnit;
    call SpecOps_fnc_commonSleepFPSBased; // Sleep
} forEach (_units);
_group deleteGroupWhenEmpty true;
[_group] call SpecOps_fnc_serverLoadBalanceRegisterGroup;
if (_patrolType == "PATROL_WHOLEAO") then { [_group, _patrolCenterPosition, _patrolAreaSize] call BIS_fnc_taskPatrol; };
if (_patrolType == "PATROL_BUILDING") then { [_group, _patrolCenterPosition, _patrolAreaSize] call BIS_fnc_taskPatrol; };
if (_patrolType == "DEFEND_BUILDING") then { [_group, _patrolCenterPosition] call BIS_fnc_taskDefend; };
_allUnits;


    // private _group = [_safePos, civilian, ["C_man_1"]] call BIS_fnc_spawnGroup;
    // private _unit = leader _group;
    // {
    //     _x hideObjectGlobal true;
    //     _x enableSimulationGlobal false;
    //     _patrolCivilianUnits pushback _x;
    //     [_x] call TFTSRV_CIVILIAN_EGO_CIV_KILLED;

    // } forEach (units _group);
    // _groups pushbackUnique _group;

    // [_group, getPos _area, _areaHalfSize / 2] call BIS_fnc_taskPatrol;
    // 