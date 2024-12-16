_exec = {
	params ["_target", "_player", "_params"];
	[_target, _player, _params] spawn {
		params ["_target", "_player", "_params"];
		_player playMove "Acts_Executioner_Kill";
		sleep 1.9;
		playSound3D ["A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_closeShot_01.wss", player];
		_target setDamage 1;
	};
};
_condition = {
	params ["_target", "_player", "_params"];
	private _allowedAnims = ["Acts_ExecutionVictim_Loop", "acts_aidlpsitmstpssurwnondnon_loop"];
	private _isHostage = (animationState _target) in _allowedAnims; 
	private _hasHandgun = (handgunWeapon _player) != "";
	private _currentGunHandgun = (currentWeapon _player) == "";
	_hasHandgun && _currentGunHandgun && _isHostage
};

_bsm_executeHostage = ["bsm_executeHostage", "Execute", "", _exec, _condition, {}, [""]] call ace_interact_menu_fnc_createAction;
["CAManBase", 0,["ACE_Head"], _bsm_executeHostage, true] call ace_interact_menu_fnc_addActionToClass;