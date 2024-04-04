params ["_logic"];

/*
 Return Keypair Value of Sector:VoiceActor
 ["usa_socom"] call SpecOps_fnc_voiceInitialize;
*/
private _faction = _logic getVariable ["SpecOps_Faction", TFTSRV_SAVEDVAR_PLAYER_FACTION];
private _genericVoices = [_faction] call SpecOps_fnc_voiceGetSettings;
if (isNil "_genericVoices" || { count _genericVoices <= 0 }) exitWith { 
    diag_log format ["Spec-Ops (VOICES): Could not globally initialize voices for %1;", _faction];
    false; 
};
missionNamespace setVariable ["specOps_missionAudioFaction", _faction];
missionNamespace setVariable ["spec_ops_genericVoicesHashed", (createHashMapFromArray _genericVoices)];
true;
diag_log format ["Spec-Ops (VOICES): The Faction Voices has been initilized globally (%1);", _faction];
