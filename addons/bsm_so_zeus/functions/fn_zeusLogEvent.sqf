
params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", true, [true]]		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)
];
if (is3DEN || !hasInterface) exitWith {};

if (isNil "_logic" || {isNull _logic}) exitWith {};

private _isTriggerSynced = _logic getVariable ["bsm_trigger_ready", false];
private _linkingType = _logic getVariable ["SpecOps_Trigger_Linking", -1];
if (_linkingType >= 0 && !_isTriggerSynced) exitWith { };

if (!_activated) exitWith {};



private _isZeus1Player = !isNil "zeus_1" && { zeus_1 == player };
private _isZeus2Player = !isNil "zeus_2" && { zeus_2 == player };
private _isZeus3Player = !isNil "zeus_3" && { zeus_3 == player };
diag_log format ["ZeusLOG: _isZeus3Player %1 | _isZeus1Player %3 | _isZeus2Player %2", _isZeus3Player, _isZeus2Player, _isZeus1Player];
if (!_isZeus1Player && !_isZeus2Player && !_isZeus3Player && isNull (getAssignedCuratorLogic player)) exitWith {};

// Do not repeast trigger
private _off = _logic getVariable ["bsm_zeus_off", false];

if (_off) exitWith {};
_logic setVariable ["bsm_zeus_off", true];


private _val = _logic getVariable ["bsm_so_all_text", ""];
private _message = call compile ("[" + _val + "]");
if (count _message <= 0) exitWith {};
[_message] call SpecOps_fnc_zeusPushMessage;