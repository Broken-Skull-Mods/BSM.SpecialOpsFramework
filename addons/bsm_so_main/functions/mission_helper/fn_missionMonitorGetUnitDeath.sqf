params [["_mission", missionName], ["_subSection", "anyDeath"]];
/*
	call SpecOps_fnc_missionMonitorGetUnitDeath;
	[missionName, "vecDeath"] call SpecOps_fnc_missionMonitorGetUnitDeath;
*/
private _unitCount = missionProfileNamespace getVariable [format ["%1_%2", _mission, _subSection], 0];
_unitCount;
