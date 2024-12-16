if (!hasInterface || is3DEN) exitWith {};


// Night to Day
_condition = { 
	params["_target"];
    if ((_target getVariable ["bsm_so_timeskip_everyone", false])) exitWith {
        sunOrMoon == 0 && (_target getVariable ["bsm_so_timeskip_enabled", false]);
    };
	sunOrMoon == 0 && (leader player == player) && (_target getVariable ["bsm_so_timeskip_enabled", false])
};

_exec = { [[2001,6,22,8,0]] remoteExec ["setDate", 2]; };

_action = ["bsm_so_timeskip_daytime", "Switch Daytime", "\tftm\icons\sun.paa", _exec, _condition] call ace_interact_menu_fnc_createAction;
["All", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

// Day to Night
_condition = { 
	params["_target"];
    if ((_target getVariable ["bsm_so_timeskip_everyone", false])) exitWith {
        sunOrMoon == 1 && (_target getVariable ["bsm_so_timeskip_enabled", false]);
    };
	sunOrMoon == 1 && (leader player == player) && (_target getVariable ["bsm_so_timeskip_enabled", false])
};

_exec = { [[2001,6,22,23,0]] remoteExec ["setDate", 2]; };

_action = ["bsm_so_timeskip_nighttime", "Switch Nighttime", "\tftm\icons\moon.paa", _exec, _condition] call ace_interact_menu_fnc_createAction;
["All", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
