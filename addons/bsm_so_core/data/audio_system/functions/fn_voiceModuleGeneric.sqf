/*

*/
params ["_logic"];
private _faction = _logic getVariable ["SpecOps_Faction", nil];
private _hash = (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]);
if (isNil "_faction") then { 
    _faction = missionNamespace getVariable ["specOps_missionAudioFaction", TFTSRV_SAVEDVAR_PLAYER_FACTION]; 

} else {
    private _genericVoices = [_faction] call SpecOps_fnc_voiceGetSettings;
    _hash = createHashMapFromArray _genericVoices;
};
// ["BS_O_US_ARMA_BASE"] call SpecOps_fnc_voiceGetSettings
if (isNil "_faction") exitWith { };
private _speech = _logic getVariable ["SpecOps_VoiceSpeech", nil];
if (isNil "_speech") exitWith { };
_speech = _speech splitString ":"; 
private _queue = missionNamespace getVariable ["SpecOps_Audio_Queue", []];
private _isOnlyRadioOp = _logic getVariable ["SpecOps_OnlyRadioOperators", true];
if (_isOnlyRadioOp && !((backpack player) isKindOf "B_RadioBag_01_base_F")) exitWith { };
private _audioFile = [_faction, _hash, (_speech select 0), (_speech select 1)] call SpecOps_fnc_voiceSelectFromHashMap;
if (_audioFile == "") exitWith {};
_queue pushbackUnique _audioFile;
missionNamespace setVariable ["SpecOps_Audio_Queue", _queue];



