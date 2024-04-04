params ["_logic"];

/*
 Return Keypair Value of Sector:VoiceActor
 ["usa_socom"] call SpecOps_fnc_voiceInitialize;
*/
private _faction = _logic getVariable ["SpecOps_Faction", TFTSRV_SAVEDVAR_PLAYER_FACTION];
private _genericVoices = [_faction] call SpecOps_fnc_voiceGetSettings;
if (isNil "_genericVoices" || { count _genericVoices <= 0 }) exitWith { 
    false; 
};
missionNamespace setVariable ["specOps_missionAudioFaction", _faction];
missionNamespace setVariable ["spec_ops_genericVoicesHashed", (createHashMapFromArray _genericVoices)];
true;
