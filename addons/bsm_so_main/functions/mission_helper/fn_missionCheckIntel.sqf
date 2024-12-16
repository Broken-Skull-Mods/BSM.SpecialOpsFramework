params [["_mission", missionName], ["_minIntel", 1]];
/*
	call SpecOps_fnc_missionGetIntel;
	[missionName, 1] call SpecOps_fnc_missionCheckIntel;
	["bsl_tltf_op_2_1"] call SpecOps_fnc_missionGetIntel
	["bsl_tltf_op_2_1", 3] call SpecOps_fnc_missionCheckIntel
*/
private _intel = [_mission] call SpecOps_fnc_missionGetIntel;
_intel >= _minIntel;