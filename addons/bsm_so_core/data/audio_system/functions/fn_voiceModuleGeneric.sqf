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

private _faction = _logic getVariable ["SpecOps_Faction", ""];

private _hash = (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]);
if (isNil "_faction" || { _faction == "" }) then { 
    _faction = missionNamespace getVariable ["specOps_missionAudioFaction", ""];
    if (isNil "_faction" || { _faction == "" }) then {
        _faction = TFTSRV_SAVEDVAR_PLAYER_FACTION;
        private _genericVoices = [_faction] call SpecOps_fnc_voiceGetSettings;

        _hash = createHashMapFromArray _genericVoices;
    };

} else {
    private _genericVoices = [_faction] call SpecOps_fnc_voiceGetSettings;
    _hash = createHashMapFromArray _genericVoices;
};
// ["BS_O_US_ARMA_BASE"] call SpecOps_fnc_voiceGetSettings
if (isNil "_faction" || { _faction == "" }) exitWith { };




private _speech = _logic getVariable ["SpecOps_VoiceSpeech", nil];
if (isNil "_speech") exitWith { };
_speech = _speech splitString ":"; 

private _queue = missionNamespace getVariable ["SpecOps_Audio_Queue", []];
private _isOnlyRadioOp = _logic getVariable ["SpecOps_OnlyRadioOperators", true];
if (count _triggers <= 0) then { _triggers = (synchronizedObjects _logic) select { _x isKindOf "EmptyDetector";}; };

private _isInArea = false;
{ if (player inArea _x) then {_isInArea = true; break; }; } forEach(_triggers);

private _backpack = backpack player;
private _hasRadioBp = isText (configFile >> "CfgVehicles" >> _backpack >> "tf_subtype");
private _push = true;
if (!_isInArea || { _isOnlyRadioOp && { !(_backpack isKindOf "B_RadioBag_01_base_F") && !_hasRadioBp } }) then { _push = false; };
if (_push) then {
    private _audioFile = [_faction, _hash, (_speech select 0), (_speech select 1)] call SpecOps_fnc_voiceSelectFromHashMap;
    diag_log format ["_audioFile %1", _audioFile];
    if (_audioFile == "") exitWith {};
    _queue pushbackUnique _audioFile;
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