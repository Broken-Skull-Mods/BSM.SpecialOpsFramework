
if (!hasInterface || is3DEN ) exitWith {};

_conditionDeploy = { 
	params["_target"];
	(leader player == player) && (_target getVariable ["bsm_so_fast_travel_self", false])
};

_execDeploy = {
    private _logics = missionNamespace getVariable ["bsm_so_fastTravelPositions", []];
	[(_logics apply { [getPos _x, (_x getVariable ["bsm_so_name", "Travel (No Name)"])] }), "[] spawn SpecOps_fnc_orkaUIRespawnButtonDeploy; "] spawn SpecOps_fnc_systemRespawnOpenUI;
};

_deployAction = ["bsm_so_fast_travel", "Fast Travel", "\tftm\icons\walking_boot.paa", _execDeploy, _conditionDeploy] call ace_interact_menu_fnc_createAction;
["All", 0, ["ACE_MainActions"], _deployAction, true] call ace_interact_menu_fnc_addActionToClass;


// Team Travel
_conditionDeploy = { 
	params["_target"];
	(leader player == player) && (_target getVariable ["bsm_so_fast_travel_team", false])
};

_execDeploy = {
    private _logics = missionNamespace getVariable ["bsm_so_fastTravelPositions", []];
	[(_logics apply { [getPos _x, _x getVariable ["bsm_so_name", "Travel (No Name)"]] }), "[SpecOps_fnc_fastTravelModulePerformTeamTravel] spawn SpecOps_fnc_orkaUIRespawnButtonDeploy; "] spawn SpecOps_fnc_systemRespawnOpenUI;
};

_deployAction = ["bsm_so_fast_travel_team", "Fast Travel (Team)", "\tftm\icons\walking_boot.paa", _execDeploy, _conditionDeploy] call ace_interact_menu_fnc_createAction;
["All", 0, ["ACE_MainActions"], _deployAction, true] call ace_interact_menu_fnc_addActionToClass;