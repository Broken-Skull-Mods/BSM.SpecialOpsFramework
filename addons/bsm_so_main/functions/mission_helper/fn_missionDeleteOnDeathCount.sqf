params ["_thisVehicle", "_maxDeath", ["_mission", missionName], ["_subSection", "anyDeath"]];
/*
	[this, 1, "bsl_tltf_op_2", "vecDeath"] call SpecOps_fnc_missionDeleteOnDeathCount;
	[this, 1, "bsl_tltf_op_3", "enemyVecDeath"] call SpecOps_fnc_missionDeleteOnDeathCount;
	["bsl_tltf_op_3", "enemyVecDeath"] call SpecOps_fnc_missionMonitorUnitDeath;
*/
private _death = [missionName, _subSection] call SpecOps_fnc_missionMonitorGetUnitDeath;
if (_death >= _maxDeath) then { deleteVehicle _thisVehicle; };