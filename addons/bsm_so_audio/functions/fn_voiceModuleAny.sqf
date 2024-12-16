/*
 [logic, []] call SpecOps_fnc_voiceModuleGeneric;
*/
params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", false, [false]],		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)
    ["_triggers", []],
    ["_chainedParent", objNull]
];

private _onlyPlayOnce = _logic getVariable ["SpecOps_OnlyPlayOnce", true];
private _playForEveryone = _logic getVariable ["SpecOps_PlayForEveryone", false];
private _playRange = _logic getVariable ["SpecOps_NotifyInRange", 25];

private _played = _logic getVariable ["SpecOps_Played", false];
if (_activated && {!(_onlyPlayOnce && _played)}) then {

    private _audioFile = _logic getVariable ["SpecOps_AudioClassName", ""];

    private _queue = missionNamespace getVariable ["SpecOps_Audio_Queue", []];

    private _areaArray = [getPos _logic, _playRange, _playRange, 0, false, -1]; // [center, a, b, angle, isRectangle, c]
    if (player inArea _areaArray || {_playForEveryone}) then {
        _queue pushbackUnique _audioFile;
        _logic setVariable ["SpecOps_Played", true];
        missionNamespace setVariable ["SpecOps_Audio_Queue", _queue];
    };

};



private _chainedAudios = (synchronizedObjects _logic) select { _x isKindOf "SpecOps_Any_Audio";};
{ 

    if (!isNull _chainedParent) then {
        if (_chainedParent != _x) then {
            [_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_voiceModuleAny;
        }
    }else {[_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_voiceModuleAny};
} forEach (_chainedAudios);

private _chainedAudios = (synchronizedObjects _logic) select { _x isKindOf "SpecOps_System_Audio";};
{ 
    if (!isNull _chainedParent) then {
        if (_chainedParent != _x) then {
            [_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_voiceModuleSystem;
        }
    }else {[_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_voiceModuleSystem};
} forEach (_chainedAudios);

private _chainedVideos = (synchronizedObjects _logic) select { _x isKindOf "SpecOps_Any_Video";};
{ 
    if (!isNull _chainedParent) then {
        if (_chainedParent != _x) then {
            [_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_videoModuleAny;
        }
    }else {[_x, _units, _activated, _triggers, _logic] call SpecOps_fnc_videoModuleAny};
} forEach (_chainedVideos);