params ["_thisVehicle", "_minDeath", ["_mission", missionName], ["_subSection", "anyDeath"]];
/*
	[this, 1, "", "vecDeath"] call SpecOps_fnc_missionAllowOnDeathCount;
*/
private _death = [missionName, _subSection] call SpecOps_fnc_missionMonitorGetUnitDeath;
// if death count not high enough delete the vehicle.
if (_death < _maxDeath) then { deleteVehicle _thisVehicle; };