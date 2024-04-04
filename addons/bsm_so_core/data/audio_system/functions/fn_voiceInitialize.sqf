params ["_faction"];

/*
 Return Keypair Value of Sector:VoiceActor
 ["usa_socom"] call SpecOps_fnc_voiceInitialize;
*/

private _genericVoices = [_faction] call SpecOps_fnc_voiceGetSettings;
missionNamespace setVariable ["spec_ops_genericVoicesHashed", (createHashMapFromArray _genericVoices)];
_genericVoices;
