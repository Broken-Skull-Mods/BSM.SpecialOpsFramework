params ["_units", "_pos", "_patrolType", "_patrolCenterPosition", "_patrolAreaSize", ["_noSleep", false], ["_side", east]];
/*
    [_unit, _pos, _patrolType, _patrolCenterPosition, _patrolAreaSize] call SpecOps_fnc_aoSpawnEnemyPatrol;
*/


private _group = [_pos, _side, _units,[],[],[],[],[],0, true] call BIS_fnc_spawnGroup;
 {_x hideObjectGlobal true; _x enableSimulation false; } forEach(units _group);
_group deleteGroupWhenEmpty true;
// [_group] call SpecOps_fnc_serverLoadBalanceRegisterGroup;
if (_patrolType == "PATROL_WHOLEAO") then { [_group, _patrolCenterPosition, _patrolAreaSize] call BIS_fnc_taskPatrol; };
if (_patrolType == "PATROL_BUILDING") then { [_group, _patrolCenterPosition, _patrolAreaSize] call BIS_fnc_taskPatrol; };
if (_patrolType == "DEFEND_BUILDING") then { [_group, _patrolCenterPosition] call BIS_fnc_taskDefend; };
units _group;


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
    // eeeeeee