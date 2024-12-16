params ["_target", "_player", "_params"];


_vec = vehicle _target;
_vecDriver = driver _vec;
_vecDriverGrp = group _vecDriver;
{ deleteWaypoint _x } forEachReversed waypoints _vecDriverGrp;
_damage = damage _vec;
_driver = driver _vec;
_driverIsAI = !isPlayer _driver;
_grounded = isTouchingGround _vec;
if(_damage <= 0.3 && alive _driver &&  _driverIsAI) then {
	private _faction = missionNameSpace getVariable ["bsm_so_factionInitial", "BS_B_US_ARMA_BASE"];
	private _audioHashmap = [_faction] call SpecOps_fnc_voiceInitialize;
	_sound = [_faction, _audioHashmap, "HeloPilot", "ControlLanding"] call SpecOps_fnc_voiceSelectFromHashMap;
	[_sound] remoteExec ["TFT_FUNC_COMMON_PLAY_AUDIO_QUEUED", player];
};
[_vec, _vecDriverGrp, player] remoteExec ["SpecOps_fnc_heloLandingServer", 2];	
