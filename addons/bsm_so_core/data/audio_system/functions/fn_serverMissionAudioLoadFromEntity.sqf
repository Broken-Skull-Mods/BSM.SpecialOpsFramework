params ["_connection", ["_old", nil]];
/*
    [_connection, _old] call SpecOps_fnc_serverMissionAudioLoadFromEntity;
*/
_typeMission = typeof _connection;
_audio = [];
_objectiveBrief = _connection getVariable ["TFT_ObjectiveDescriptionAudio", ""];
if (_objectiveBrief == "") then {
    switch (_typeMission) do
    {
        case "TFTE_MissionSabotageAirDefense": {
            _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveDestroyRadar"] call SpecOps_fnc_voiceSelectFromHashMap);
        };
        case "TFTE_MissionCasualties": { 
            _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveDeadBodyRetrieval"] call SpecOps_fnc_voiceSelectFromHashMap);
        };
        case "TFTE_MissionClearBigtown": { 
            _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveClearBigtown"] call SpecOps_fnc_voiceSelectFromHashMap);
        };
        case "TFTE_MissionClearSmallTown": { 
            _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveClearTown"] call SpecOps_fnc_voiceSelectFromHashMap);
        };
        case "TFTE_MissionClearVillage": { 
            _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveClearVillage"] call SpecOps_fnc_voiceSelectFromHashMap);
        };
        case "TFTE_MissionClearCamp": { 
            _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveClearCamp"] call SpecOps_fnc_voiceSelectFromHashMap);
        };
        case "TFTE_MissionAssasination": { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveAssasination"] call SpecOps_fnc_voiceSelectFromHashMap); };
        case "TFTE_MissionSabotageResources": { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveSabotageResources"] call SpecOps_fnc_voiceSelectFromHashMap); };
        case "TFTE_MissionSabotageComms": { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveDestroyTransformer"] call SpecOps_fnc_voiceSelectFromHashMap); };
        case "TFTE_MissionAmbush": { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveAmbush"] call SpecOps_fnc_voiceSelectFromHashMap); };
        case "TFTE_MissionClearAirstrip": { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveClearAirstrip"] call SpecOps_fnc_voiceSelectFromHashMap); };
        case "TFTE_MissionIntelligence": { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveGatherIntelligence"] call SpecOps_fnc_voiceSelectFromHashMap); };
        default { }; 
    }; 
} else {
    _audio pushback _objectiveBrief;
};

_maxCivCas = _connection getVariable["TFT_ObjectiveCivCasualties", -1]; // if nothing, unlimited
_maxCivCasOld = 1000;
_maxCas = _connection getVariable["TFT_ObjectiveMilCasualties", -1]; // if nothing, unlimited
_maxCasOld = 1000;
if(!isNil "_old") then {
    _maxCivCasOld = _old getVariable["TFT_ObjectiveCivCasualties", -1]; // if nothing, unlimited
    _maxCasOld = _old getVariable["TFT_ObjectiveMilCasualties", -1]; // if nothing, unlimited
};

if(_maxCivCas < 0 ) then { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveCharterUpdateMaxCivDeathUnlimited"] call SpecOps_fnc_voiceSelectFromHashMap); };
if(_maxCivCas == 0 ) then { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveCharterUpdateMaxCivDeathNone"] call SpecOps_fnc_voiceSelectFromHashMap); };
if(_maxCivCas == 1 ) then { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveCharterUpdateMaxCivDeathOne"] call SpecOps_fnc_voiceSelectFromHashMap); };
if(_maxCivCas == 2 ) then { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveCharterUpdateMaxCivDeathTwo"] call SpecOps_fnc_voiceSelectFromHashMap); };
if(_maxCivCas >= 3) then { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveCharterUpdateMaxCivDeathThree"] call SpecOps_fnc_voiceSelectFromHashMap); };

if(_maxCas < 0 ) then { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveCharterUpdateMaxDeathUnlimited"] call SpecOps_fnc_voiceSelectFromHashMap); };
if(_maxCas == 0 ) then { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveCharterUpdateMaxDeathNone"] call SpecOps_fnc_voiceSelectFromHashMap); };
if(_maxCas == 1 ) then { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveCharterUpdateMaxDeathOne"] call SpecOps_fnc_voiceSelectFromHashMap); };
if(_maxCas == 2 ) then { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveCharterUpdateMaxDeathTwo"] call SpecOps_fnc_voiceSelectFromHashMap); };
if(_maxCas >= 3) then { _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "ObjectiveCharterUpdateMaxDeathThree"] call SpecOps_fnc_voiceSelectFromHashMap); };

[_audio] remoteExec ["TFT_FUNC_COMMON_PLAY_AUDIO_ARR", ([0, -2] select isDedicated)]; 