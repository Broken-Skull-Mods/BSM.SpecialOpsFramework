params ["_faction", "_vehicle"];

/*
 ["usa_socom", "VehicleTechnicals"] call SpecOps_fnc_getEnemyVehicle;
*/

private _vehicleWeight = [];
if (_vehicle == "SystemStaticGunner") then {
    _vehicleWeight = getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticLowMG") apply { _x select 0 };
    _vehicleWeight append (getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticHighMG")) apply { _x select 0 };
} else {
    _vehicleWeight = getArray (configfile >> "CfgFactionClasses" >> _faction >> _vehicle);
};

selectRandom _vehicleWeight;