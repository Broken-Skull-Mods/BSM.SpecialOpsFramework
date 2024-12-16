

if (!hasInterface) exitWith {};



missionNamespace setVariable ["bsm_contextKey_cmd_cooldown", false];


TFT_CONTEXT_COMMAND_COOLDOWN = false;
["Special Ops Framework", "bsm_ctxk_cmd_ctx", ["Context Command", "Provide command based on context (eg: if unit captive escort, if non surrendering asking surrender)."], {  }, {
    if((missionNamespace getVariable ["bsm_contextKey_cmd_cooldown", false])) exitWith { };
	missionNamespace setVariable ["bsm_contextKey_cmd_cooldown", true];
    [] spawn {
        uiSleep 0.2;
		missionNamespace setVariable ["bsm_contextKey_cmd_cooldown", false];
    };
	_target = cursorObject;

    if (isNull _target) exitWith { };
    isMan = _target isKindOf "Man";
    if (!isMan) exitWith { };

    _isAlive = alive _target;
    if (!_isAlive) exitWith { 
        [] spawn SpecOps_fnc_keybindCommandYouAlive; 
    };

    _isblackedout = _target getVariable ["ACE_isUnconscious", false];
    _eastOrCiv = (side (group _target)) == east || (side (group _target)) == civilian;
    if (_isblackedout && _eastOrCiv) exitWith { 
        [] spawn  SpecOps_fnc_keybindCommandYouAlive; 
    };

    _west = (side (group _target)) == west; 
    _canDrag = [_target, cursorTarget] call ace_dragging_fnc_canDrag;
    if (_isblackedout && _west ) exitWith {
        [] spawn SpecOps_fnc_keybindCommandDrag;  
    };
    
    _alreadyHandcuff = (_target getVariable["ACE_captives_isHandcuffed", false]);
    if (_alreadyHandcuff) exitWith { 
        call SpecOps_fnc_keybindCommandEscort; 
    };

    if (!_isblackedout && _eastOrCiv) exitWith { 
        [] spawn SpecOps_fnc_keybindCommandSurrender; 
    };
}] call CBA_fnc_addKeybind;


["Special Ops Framework", "bsm_ctxk_check_alive", ["Command: Check Alive", "When press, check if target is alive."], {  }, {
    call SpecOps_fnc_keybindCommandYouAlive;
}] call CBA_fnc_addKeybind;

["Special Ops Framework", "bsm_ctxk_medical_drag", ["Command: Drag Injured", "When press, check if target is alive."], {  }, {
    [] spawn SpecOps_fnc_keybindCommandDrag;
}] call CBA_fnc_addKeybind;
