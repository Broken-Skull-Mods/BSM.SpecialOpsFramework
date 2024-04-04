/*
 [logic, []] call SpecOps_fnc_voiceModuleGeneric;
*/
params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", true, [true]],		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)
    ["_triggers", []],
    ["_chainedParent", objNull]
];
private _videoFile = _logic getVariable ["SpecOps_Video", ""];

private _queue = missionNamespace getVariable ["SpecOps_Audio_Queue", []];
if (count _triggers <= 0) then { _triggers = (synchronizedObjects _logic) select { _x isKindOf "EmptyDetector";}; };
private _isInArea = false;
{ if (player inArea _x) then {_isInArea = true; break; }; } forEach(_triggers);
private _push = true;
if (!_isInArea) then { _push = false; };
if (_push) then {
    _queue pushbackUnique [_videoFile];
    missionNamespace setVariable ["SpecOps_Audio_Queue", _queue];
};

private _chainedAudios = (synchronizedObjects _logic) select { _x isKindOf "SpecOps_Generic_Audio";};
{ 
    if (!isNull _chainedParent) then {
        if (_chainedParent != _x) then {
            [_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_voiceModuleGeneric;
        }
    }else {[_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_voiceModuleGeneric};
} forEach (_chainedAudios);

private _chainedAudios = (synchronizedObjects _logic) select { _x isKindOf "SpecOps_Any_Audio";};
{ 

    if (!isNull _chainedParent) then {
        if (_chainedParent != _x) then {
            [_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_voiceModuleAny;
        }
    }else {[_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_voiceModuleAny};
} forEach (_chainedAudios);

private _chainedVideos = (synchronizedObjects _logic) select { _x isKindOf "SpecOps_Any_Video";};
{ 
    if (!isNull _chainedParent) then {
        if (_chainedParent != _x) then {
            [_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_videoModuleAny;
        }
    }else {[_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_videoModuleAny};
} forEach (_chainedVideos);