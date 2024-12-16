params ["_thisVehicle", ["_subSection", "anyDeath"]];
/*
	[this] call SpecOps_fnc_missionMonitorUnitDeath;
	[this, "anyDeath"] call SpecOps_fnc_missionMonitorUnitDeath;
*/
if (!isServer) exitWith {};

_thisVehicle addMPEventHandler ["MPKilled", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];
	private _unitCount = missionProfileNamespace getVariable [format ["%1_anyDeath", missionName], 0];
	_unitCount = _unitCount + 1;
	missionProfileNamespace setVariable [format ["%1_anyDeath", missionName], _unitCount];
	saveMissionProfileNamespace;
}];