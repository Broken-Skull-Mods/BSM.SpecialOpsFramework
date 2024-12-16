params ["_target", "_player"];

private _isFriendlyWithWest = ([(side group _player), west] call BIS_fnc_sideIsEnemy);
private _isFriendlyWithGRU = ([(side group _player), independent] call BIS_fnc_sideIsEnemy);
private _isFriendlyWithCiv = ([(side group _player), civilian] call BIS_fnc_sideIsEnemy);
private _isFriendlyWithEast = ([(side group _player), east] call BIS_fnc_sideIsEnemy);

alive _target 
&& isNull (_target getVariable ["bsm_following_player", objNull])  
&& (side group _target) != (side group _player) 
&& !(player getVariable ["_npcIsFollowing", false])
&& !([(side group _player), (side group _target)] call BIS_fnc_sideIsEnemy);
