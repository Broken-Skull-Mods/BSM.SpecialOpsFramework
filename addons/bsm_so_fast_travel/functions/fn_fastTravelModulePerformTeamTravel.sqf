params ["_player", "_pos"];
{
	// if target is too far do not teleport.
	if (_player distance _x >= 25) then {continue;};
	[_player, _pos] remoteExec ["setPos", _x]; 
	uiSleep 0.1;
} forEach (units group _player);