params ["_faction", "_vehicle"];

/*
 ["usa_socom", "VehicleTechnicals"] call SpecOps_fnc_getEnemyVehicle;
*/

private _vehicleWeight = [];
if (_vehicle == "SystemStaticGunner") then {
    _vehicleWeight = getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticLowMG");
    _vehicleWeight append (getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticHighMG"));

} else {
    _vehicleWeight = getArray (configfile >> "CfgFactionClasses" >> _faction >> _vehicle);

};

selectRandom _vehicleWeight;