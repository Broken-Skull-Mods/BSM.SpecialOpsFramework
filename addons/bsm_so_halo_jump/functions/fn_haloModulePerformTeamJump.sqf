params ["_player", "_pos"];
{
	// if target is too far do not teleport.
	if (_player distance _x >= 25) then {continue;};
	[_pos] remoteExec ["SpecOps_fnc_haloModuleJump", _x]; 
	uiSleep 0.1;
} forEach (units group _player);