params ["_name", "_cat", "_usePlayMove", "_animations", ["_onStart", {}]];
_condition = { params["_target"]; true; };

_exec = { 
	params ["_target", "_player", "_params"];
	private _usePlayMove = _params select 1;
	private _onStart = _params select 2;
	if (_usePlayMove) exitWith { 
		_target playMove (_params select 0);  
		[_target, _player, _params] spawn _onStart; 
	};
    _target switchMove (_params select 0); 
	[_target, _player, _params] spawn _onStart; 
};
_anim = (selectRandom _animations);
_action = [_anim, _name, "", _exec, _condition, {}, [_anim, _usePlayMove, _onStart]] call ace_interact_menu_fnc_createAction;
["CAManBase", 1, ["ACE_SelfActions", "bsm_so_anims", _cat], _action, true] call ace_interact_menu_fnc_addActionToClass;