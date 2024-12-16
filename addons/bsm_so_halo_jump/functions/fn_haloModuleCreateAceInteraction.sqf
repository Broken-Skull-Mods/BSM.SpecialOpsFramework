
if (!hasInterface || is3DEN) exitWith {};

// Self Jumping
_conditionDeploy = { 
	params["_target"];
	(leader player == player) && (_target getVariable ["bsm_so_self_jump", false])
};

_execDeploy = {
    private _logics = missionNamespace getVariable ["bsm_so_jumpPositions", []];
	[(_logics apply { [getPos _x, _x getVariable ["bsm_so_name", "Jump (No Name)"]] }), "[{params['_player', '_pos']; [_pos] spawn SpecOps_fnc_haloModuleJump; }] spawn SpecOps_fnc_orkaUIRespawnButtonDeploy; "] spawn SpecOps_fnc_systemRespawnOpenUI;
};

_deployAction = ["bsm_so_halo_self", "Halo Jump", "\tftm\icons\parachute.paa", _execDeploy, _conditionDeploy] call ace_interact_menu_fnc_createAction;
["All", 0, ["ACE_MainActions"], _deployAction, true] call ace_interact_menu_fnc_addActionToClass;

// Team Jumping
_conditionDeploy = { 
	params["_target"];
	(leader player == player) && (_target getVariable ["bsm_so_team_jump", false])
};

_execDeploy = {
    private _logics = missionNamespace getVariable ["bsm_so_jumpPositions", []];
	[(_logics apply { [getPos _x, _x getVariable ["bsm_so_name", "Jump (No Name)"]] }), "[SpecOps_fnc_haloModulePerformTeamJump] spawn SpecOps_fnc_orkaUIRespawnButtonDeploy; "] spawn SpecOps_fnc_systemRespawnOpenUI;
};

_deployAction = ["bsm_so_halo_team", "Halo Jump (Team)", "\tftm\icons\parachute.paa", _execDeploy, _conditionDeploy] call ace_interact_menu_fnc_createAction;
["All", 0, ["ACE_MainActions"], _deployAction, true] call ace_interact_menu_fnc_addActionToClass;