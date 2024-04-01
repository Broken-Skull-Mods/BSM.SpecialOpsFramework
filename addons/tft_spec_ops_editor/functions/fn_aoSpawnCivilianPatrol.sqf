    params ["_pos", "_units"];
    /*
        [] call SpecOps_fnc_aoSpawnCivilianPatrol;
    */
if (count _units <= 0 ) exitWith {};
private _group = createGroup civilian;
private _allUnits = [];
{
    _x createUnit [_pos, _group, "civUnit = this; this hideObject true; this enableSimulation false;"];
    _allUnits pushback civUnit;
    [civUnit] call TFTSRV_CIVILIAN_EGO_CIV_KILLED;
    call SpecOps_fnc_commonSleepFPSBased; // Sleep
} forEach (_units);
_group deleteGroupWhenEmpty true;

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