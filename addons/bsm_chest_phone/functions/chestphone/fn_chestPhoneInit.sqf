if (!hasInterface) exitWith { };
[] spawn {
	waitUntil { sleep 0.5; !isNil "BSM_SO_CBA_DT_P_ENABLED" };
	if (!BSM_SO_CBA_DT_P_ENABLED) exitWith {};
	_condition = { BSM_SO_CBA_DT_P_ENABLED };
	_exec = { [] call SpecOps_fnc_chestPhoneHomeScreenOpen; };
	_deploy = ["bsm_so_dt_phone", "Open TDA", "\tftm\icons\tablet.paa", _exec, _condition] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _deploy, true] call ace_interact_menu_fnc_addActionToObject;


};
