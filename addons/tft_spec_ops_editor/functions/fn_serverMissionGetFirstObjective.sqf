params ["_area", "_codenames"];

/*
    Get the first objective marker and start briefing;
    [area, codenames] call SpecOps_fnc_serverMissionGetFirstObjective;
*/

_connections = synchronizedObjects _area;
_initialMissions = [];
{
    if (_x isKindOf "TFT_Module_Mission" || _x isKindOf "TFT_Module_Mission_Clear_City") then { 
        _initialMissions pushback _x; 
    };
} forEach (_connections);
diag_log format["SPEC-OPS (Load up Mission): %1 = Initial Missions (%2)", _area, _initialMissions];
missionNamespace setVariable ["spec_ops_running_budget", (_area getVariable ["TFT_Budget_Selection", -1]), true];

_briefingAudio = _area getVariable ["TFT_OpBriefing_Audio", []];
diag_log format["SPEC-OPS (Load up Mission): %1 Briefing is (%2)", _area, _briefingAudio];
if(count _briefingAudio > 0) then {        
    [_briefingAudio] remoteExec ["TFT_FUNC_COMMON_PLAY_AUDIO_LONG_RANGE_ARR_QUEUED", ([0, -2] select isDedicated)];        
    uiSleep 0.2;
};
// Keep Missions only;
_area = selectRandom _initialMissions;
_name = hashValue format["%1", str _area];
_codename = selectRandom _codenames;
_codenames = _codenames - [_codename];
_marker = createMarkerLocal [_name, getPos _area];
_marker setMarkerShapeLocal "ICON";			
_marker setMarkerTypeLocal "hd_objective";		
_marker setMarkerColorLocal "ColorBlue";
_marker setMarkerAlphaLocal 1;
_marker setMarkerText _codename;
private _markers = missionNamespace getVariable ["spec_ops_operation_markers", []];
_markers pushback _marker;
missionNamespace setVariable ["spec_ops_operation_markers", _markers];
[_area, _codenames];