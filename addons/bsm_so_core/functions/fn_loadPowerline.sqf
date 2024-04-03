/*
    [] call SpecOps_fnc_loadPowerline;
*/

private _arr = [
    "Land_LampStreet_F", 
    "Land_LampStreet_small_F", 
    "Land_LampShabby_F", 
    "Land_LampHarbour_F", 
    "Land_LampHalogen_F", 
    "Land_LampDecor_F", 
    "Land_LampAirport_F", 
    "Land_LampIndustrial_01_F", 
    "Land_LampIndustrial_02_F", 
    "Land_LampStreet_02_double_F", 
    "Land_LampStreet_02_amplion_F", 
    "Land_LampStreet_02_triple_F", 
    "Land_LampStreet_02_F", 
    "Land_PowerLine_02_pole_small_lamp_F",
    "Land_fs_roof_F", 
    "Land_FuelStation_01_roof_malevil_F", 
    "Land_FuelStation_01_roof_F", 
    "Land_FuelStation_02_roof_F", 
    "Land_PowerPoleWooden_L_F",
    "Land_PowerLine_01_pole_lamp_F",
    "Land_FuelStation_02_roof_lxWS"
];
private _powerTransformerBuilding = ["Land_TBox_F", "Land_PowerStation_01_F"];
private _centerposition = [worldSize / 2, worldsize / 2, 0];
private _allObjects = nearestObjects [_centerposition, _arr, 30000];
diag_log format ["SPEC-OPS (SpecOps_fnc_loadPowerline): Loading %1", count _allObjects];

{
    private _classname = typeof _x;
    // diag_log format ["SPEC-OPS (SpecOps_fnc_loadPowerline): %1", _classname];
    private _objs = nearestObjects [getPos _x, _powerTransformerBuilding, 5000];
    if (count _objs <= 0) exitWith { _x setDamage 0.9; };
    _powerProvider = _objs select 0;
    _lampLinked = _powerProvider getVariable ["lampLinked", []];
    _lampLinked pushback _x;
    _countPowerLamps = count _lampLinked;
    if(_countPowerLamps > 0) then {
        _powerProvider setVariable ["lampLinked", _lampLinked];
        _powerTransformers = missionNamespace getVariable ["powerTransformers", []];
        _powerTransformers pushback _powerProvider;
        missionNamespace setVariable ["powerTransformers", _powerTransformers, true];
    };
    _powerProvider addEventHandler ["Killed", {
        params ["_unit", "_killer", "_instigator", "_useEffects"];

        [_unit] spawn {
            params ["_unit"];
            [_unit, -1] remoteExec ["SpecOps_fnc_powerlinesShutdown", 2];
        };
    }];

} forEach(_allObjects);
missionNamespace setVariable ["isPowerlineReady", true, true];
diag_log format ["SPEC-OPS (SpecOps_fnc_loadPowerline): Loaded %1", count _allObjects];
