#include "\A3\Missions_F_Oldman\Systems\defines\escortAIDefines.inc";
params["_vehicle", ["_toggleOn", true]];


player setVariable ["_vehicleToggle", _toggleOn];
//case when thee player is outta vehicle
if (vehicle player isEqualTo player && _toggleOn) then {
	_trackedUnit = player getVariable "_trackedUnit";
	unassignVehicle _trackedUnit;
	moveOut _trackedUnit;
	[_vehicle, false] spawn SpecOps_fnc_holdActionVehicle; 	
};