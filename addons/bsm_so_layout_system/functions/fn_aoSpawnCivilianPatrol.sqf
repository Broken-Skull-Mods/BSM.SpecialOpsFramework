    params ["_pos", "_units"];
    /*
        [] call SpecOps_fnc_aoSpawnCivilianPatrol;
    */
if (count _units <= 0 ) exitWith {};

private _group = [_pos, civilian, _units,[],[],[],[],[],0, true] call BIS_fnc_spawnGroup;
 {_x hideObjectGlobal true; _x enableSimulation false; } forEach(units _group);
_group deleteGroupWhenEmpty true;
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
    // 