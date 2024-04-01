params ["_area", "_isCurrentFailed"];
/*
    [_area, false] call SpecOps_fnc_serverMissionLoadNextObjective;
*/

private _variableSettings = createHashMapFromArray [
    [true, 
        [
            "TFT_TransitOnFailure", "TFT_NextMissionOnFailure", "TFT_OpBriefing_Audio_Failure", 
            "TFT_UnlockOnFailure", "OperationFailure", "OperationFailureRedeemable", "spec_ops_operations_failure"
        ]
    ],
    [false, 
        [
            "TFT_TransitOnSuccess", "TFT_NextMissionOnSuccess", "TFT_OpBriefing_Audio_Success", 
            "TFT_UnlockOnSuccess", "OperationSuccessExpanded", "OperationSuccess", "spec_ops_operations_success"
        ]
    ]
];
private _mapped = _variableSettings get _isCurrentFailed;

diag_log format ["SPEC-OP (Next Objective): Mapped Objective: %1", _mapped]; 
_nextTransit = missionNamespace getVariable[(_area getVariable [(_mapped select 0), "nomissionerr"]), objNull];
_nextMission = missionNamespace getVariable[(_area getVariable [(_mapped select 1), "nomissionerr"]), objNull];
diag_log format ["SPEC-OP (Next Objective): Moving to Load Next Mission: %1", (_area getVariable [(_mapped select 1), "nomissionerr"])]; 
if (isNull _nextMission) then {
    diag_log format ["SPEC-OP (Next Objective): System Did not find another objective."]; 
    if(!isNull (missionNamespace getVariable ["spec_ops_campaign_mission_op", objNull])) then {
        missionNamespace setVariable ["spec_ops_running_budget", 0, true];
        _briefingAudio = (missionNamespace getVariable ["spec_ops_campaign_mission_op", objNull]) getVariable [(_mapped select 2), []];
        _opUnlock = (missionNamespace getVariable ["spec_ops_campaign_mission_op", objNull]) getVariable[(_mapped select 3), []];
        if(count _briefingAudio <= 1) then {
            if(count _opUnlock <= 0) then {
                _sound = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", (_mapped select 4)] call SpecOps_fnc_voiceSelectFromHashMap;
                _briefingAudio = [_sound];
            }else { 
                _sound = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "OperationalCommander", (_mapped select 5)] call SpecOps_fnc_voiceSelectFromHashMap;
                _briefingAudio = [_sound]; 
            };
        };
        if(count _briefingAudio > 0) then {        
            [_briefingAudio] remoteExec ["TFT_FUNC_COMMON_PLAY_AUDIO_LONG_RANGE_ARR_QUEUED", ([0, -2] select isDedicated)];        
            uiSleep 0.1;     
        };

        private _markers = missionNamespace getVariable ["spec_ops_operation_markers", []];
        {deleteMarker _x;} forEach (_markers);
        // TFTSRV_CAMPAIGN_VAR_OPERATIONS_AVAILABLE TFTSRV_CAMPAIGN_VAR_OPERATIONS_COMPLETED
        if(count _opUnlock > 0) then {
            private _operationArray = missionNamespace getVariable [(_mapped select 6), []];
            _operationArray pushback (str _area);
            missionNamespace setVariable [(_mapped select 6), _operationArray, true];

            private _available = missionNamespace getVariable ["spec_ops_operations_available", []];
            _available = _available - [(str (missionNamespace getVariable ["spec_ops_campaign_mission_op", objNull]))];
            _available = _available + _opUnlock;
            missionNamespace setVariable ["spec_ops_operations_available", _available, true];
            uiSleep 0.05;     
        };
        missionNamespace setVariable ["spec_ops_campaign_mission_op", nil, true];
        missionNamespace setVariable ["spec_ops_currentAOArea", nil, true];
        private _operationItems = (missionNamespace getVariable ["spec_ops_operation_items", []]) - [objNull];
        { deleteVehicle _x; } forEach(_operationItems);
        uisleep 0.1;
    };
} else {
    [_nextMission, _area] call SpecOps_fnc_serverMissionStartFromEntityType;
    {
        _markerArr = _x select 2;
        _marker = _x select 1;
        if(count _markerArr > 0 ) then {
            _markerMissionCon = _markerArr select 0;
            _landMarkOnSorF = _markerArr select 1;
            _landMarkOnEorD = _markerArr select 2;
            if (_area == _markerMissionCon && {(_isCurrentFailed && _landMarkOnSorF == -1) || (!_isCurrentFailed && _landMarkOnSorF == 1) }) then {
                if (_landMarkOnEorD) then { _marker setMarkerAlphaLocal 1; } else {
                    _marker setMarkerAlphaLocal 0;
                };
            }; 
        };
        _ownerObjective = _x select 0;
        if (_ownerObjective == _area) then {
            if (_isCurrentFailed) then { _marker setMarkerColor "ColorRed"; } else {
                _marker setMarkerColor "ColorBlue";
            }; 
        };
    } forEach ((missionNamespace getVariable ["spec_ops_allMissions", []]));
};