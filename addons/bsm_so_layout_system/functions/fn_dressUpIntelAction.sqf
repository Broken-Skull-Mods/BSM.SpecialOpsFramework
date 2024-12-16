_handleAction = {    
	params["_target"];
	[_target] spawn {
		params["_target"];
		["Taking Intel", 2, {true}, {
			params ["_params"];
			_target = _params select 0;
			deleteVehicle _target;
			remoteExec ["SpecOps_fnc_missionAddIntel", 2];
		}, {}, [_target]] call CBA_fnc_progressBar;
	};

};
_action = ["SearchForIntel", "Take Intel", "\tftm\icons\magnifying_glass.paa", _handleAction, {
	((_this select 0) getVariable["TFT_IsSearchable", false])
}] call ace_interact_menu_fnc_createAction;
["All", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;