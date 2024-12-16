params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", true, [true]]		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)
];
if (is3DEN || !hasInterface) exitWith {};
if (isNull _logic) exitWith {};
private _isTriggerSynced = _logic getVariable ["bsm_trigger_ready", false];
private _linkingType = _logic getVariable ["SpecOps_Trigger_Linking", -1];
if (_linkingType >= 0 && !_isTriggerSynced) exitWith { };

[_logic, _units, _activated] call BIS_fnc_moduleCoverMap;