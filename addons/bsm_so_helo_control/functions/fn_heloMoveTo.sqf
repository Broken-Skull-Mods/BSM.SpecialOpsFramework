params ["_target", "_player", "_params"];
openMap true;
_vec = vehicle _target;
_vecDriver = driver _vec;
_vecDriverGrp = group _vecDriver;
diag_log format ["Command (%1) which driver is %2 from group %3 ",_vec, _vecDriver, _vecDriverGrp];
onMapSingleClick "";
[[_vec, _vecDriverGrp]] onMapSingleClick {
	params ["_params", "_pos"];
	private _grp = _params select 1;
	private _vec = _params select 0;
	{ deleteWaypoint _x } forEachReversed waypoints _grp;
	_damage = damage _vec;
	_driver = driver _vec;
	_driverIsAI = !isPlayer _driver;
	if(_damage <= 0.3 && alive _driver &&  _driverIsAI ) then {
		private _faction = missionNameSpace getVariable ["bsm_so_factionInitial", "BS_B_US_ARMA_BASE"];
		private _audioHashmap = [_faction] call SpecOps_fnc_voiceInitialize;
		_sound = [_faction, _audioHashmap, "HeloPilot", "ControlMoveTo"] call SpecOps_fnc_voiceSelectFromHashMap;
		[_sound] remoteExec ["TFT_FUNC_COMMON_PLAY_AUDIO_QUEUED", player];
		[_grp, _pos, "TFT_SM_HELICOPTER", false] remoteExec ["SpecOps_fnc_heloMoveToServer", 2];	
	};


	onMapSingleClick "";
	openMap false;
};