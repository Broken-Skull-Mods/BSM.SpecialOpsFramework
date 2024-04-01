_nextMission = missionNamespace getVariable[(_area getVariable ["TFT_NextMissionOnSuccess", "nomissionerr"]), objNull];
_nextMissionTransit = missionNamespace getVariable[(_area getVariable ["TFT_TransitOnSuccess", "nomissionerr"]), objNull];
diag_log format ["Next Mission: %1", _nextMission];
if (isNull _nextMission) then {
    if(!isNull (missionNamespace getVariable ["spec_ops_campaign_mission_op", objNull])) then {
        missionNamespace setVariable ["spec_ops_running_budget", 0, true];
        _briefingAudio = (missionNamespace getVariable ["spec_ops_campaign_mission_op", objNull]) getVariable ["TFT_OpBriefing_Audio_Success", []];
        _successOpUnlock = (missionNamespace getVariable ["spec_ops_campaign_mission_op", objNull]) getVariable["TFT_UnlockOnSuccess", []];
        if(count _briefingAudio <= 0) then {
            if(count _successOpUnlock <= 0) then {
                _sound = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "OperationSuccessExpanded"] call SpecOps_fnc_voiceSelectFromHashMap;
                _briefingAudio = [_sound];
            }else { 
                _sound = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", "OperationSuccess"] call SpecOps_fnc_voiceSelectFromHashMap;
                _briefingAudio = [_sound]; 
            };
        };
        if(count _briefingAudio > 0) then {   
                    
            [_briefingAudio] remoteExec ["TFT_FUNC_COMMON_PLAY_AUDIO_LONG_RANGE_ARR_QUEUED", ([0, -2] select isDedicated)];   
            uiSleep 0.1;     
        };
        private _markers = missionNamespace getVariable ["spec_ops_operation_markers", []];
        {deleteMarker _x;} forEach (_markers);
        TFTSRV_CAMPAIGN_VAR_OPERATIONS_COMPLETED pushback (str _area);
        TFTSRV_CAMPAIGN_VAR_OPERATIONS_AVAILABLE = TFTSRV_CAMPAIGN_VAR_OPERATIONS_AVAILABLE - [(str (missionNamespace getVariable ["spec_ops_campaign_mission_op", objNull]))];
        if(count _successOpUnlock > 0) then {
            TFTSRV_CAMPAIGN_VAR_OPERATIONS_AVAILABLE = TFTSRV_CAMPAIGN_VAR_OPERATIONS_AVAILABLE + _successOpUnlock;
        };
        missionNamespace setVariable ["spec_ops_campaign_mission_op", nil, true]
        publicVariable "TFTSRV_CAMPAIGN_VAR_OPERATIONS_COMPLETED";
        publicVariable "TFTSRV_CAMPAIGN_VAR_OPERATIONS_AVAILABLE";
        TFTSRV_OPERATION_ITEMS = TFTSRV_OPERATION_ITEMS - [objNull];
        { deleteVehicle _x; } forEach(TFTSRV_OPERATION_ITEMS);
        TFTSRV_OPERATION_ITEMS = [];
    } else {
        //["end1", true, 3] remoteExec ["BIS_fnc_endMission", 0, true];
    };
} else {
    [_nextMission, _area] call TFTSRV_MISSION_START_FROM_ENTITY_TYPE;
    {
        _markerArr = _x select 2;
        _marker = _x select 1;
        if(count _markerArr > 0 ) then {
            _markerMissionCon = _markerArr select 0;
            _landMarkOnSorF = _markerArr select 1;
            _landMarkOnEorD = _markerArr select 2;

            if (_area == _markerMissionCon && _landMarkOnSorF == 1) then {
                if (_landMarkOnEorD) then { _marker setMarkerAlpha 1; } else {
                    _marker setMarkerAlpha 0;
                };
            }; 
        };
        _ownerObjective = _x select 0;
        if (_ownerObjective == _area) then {
            _marker setMarkerColor "ColorBlue";
        };
    } forEach (TFTSRV_MISSION_VAR_CRAFTED_ALL_MISSIONS);
};