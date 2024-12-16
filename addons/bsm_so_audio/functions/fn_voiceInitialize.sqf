params ["_faction"];

/*
 Return Keypair Value of Sector:VoiceActor
 ["usa_socom"] call SpecOps_fnc_voiceInitialize;
*/
private _f = missionNamespace getVariable[format ["audio_%1", _faction], createHashMap];
if (count _f > 0) exitWith { _f; };
private _genericVoices = [_faction] call SpecOps_fnc_voiceGetSettings;
_f = (createHashMapFromArray _genericVoices);
missionNamespace setVariable [format ["audio_%1", _faction], _f];
_f;
