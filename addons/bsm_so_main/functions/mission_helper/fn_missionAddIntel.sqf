params [["_mission", missionName]];
/*
	call SpecOps_fnc_missionGetIntel;
	remoteExec ["missionAddIntel", 2];
*/
private _ff = missionProfileNamespace getVariable [format["%1Intel", _mission], 0];
_ff = _ff + 1;
missionProfileNamespace setVariable [format["%1Intel", _mission], _ff];
saveMissionProfileNamespace;
["TaskSucceeded", ["", "Intel Retrieved!"]] remoteExec ["BIS_fnc_showNotification", ([0, -2] select isDedicated)];