
params ["_message"];
if (typename _message != "ARRAY") exitWith {};
private _logQueue = missionNamespace getVariable ["bsm_zeus_log", []];
{
	private _autoDelay = 0;
	private _count = count _x;
	if (_count > 125) then { _autoDelay = 18; };
	if (_count <= 125) then { _autoDelay = 15; };
	if (_count < 100) then { _autoDelay = 12; };
	if (_count < 75) then { _autoDelay = 9; };
	if (_count < 50) then { _autoDelay = 6; };
	if (_count < 25) then { _autoDelay = 3; };
	_logQueue pushBack [_x, _autoDelay];
} forEach (_message);

missionNamespace setVariable ["bsm_zeus_log", _logQueue];