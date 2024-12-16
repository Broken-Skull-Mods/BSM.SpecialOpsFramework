params [["_mission", missionName]];
/*
	call SpecOps_fnc_missionGetIntel;
	[missionName] call SpecOps_fnc_missionGetIntel;
*/
private _unitCount = missionProfileNamespace getVariable [format ["%1Intel", _mission], 0];
_unitCount;
