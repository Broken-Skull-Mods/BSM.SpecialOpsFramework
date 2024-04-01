params ["_transit"];
/*
   [op_transit_0] call SpecOps_fnc_craftedTransitDeactivate;
*/
_spawnedElements = _transit getVariable["TFT_SpawnedCampElements", []];
diag_log format ["%1 Triggered to disable", _spawnedElements];
{
   deleteVehicle _x;
} forEach (_spawnedElements);
_transit setVariable ["TFT_SpawnedCampElements", []];
diag_log format ["The Transit is Deactivated"];