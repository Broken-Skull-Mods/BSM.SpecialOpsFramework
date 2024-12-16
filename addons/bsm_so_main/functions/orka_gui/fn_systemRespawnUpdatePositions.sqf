
private _list = (allMissionObjects "ModuleRespawnPosition_F") select { count (_x getVariable ["respawn", []]) > 0; };
_list = _list apply { [getPos _x, (_x getVariable ["name", "ERR"])]; };

missionNamespace setVariable ["bsm_so_last_respawn_update", diag_tickTime, true];
missionNamespace setVariable ["moduleList", _list, true];