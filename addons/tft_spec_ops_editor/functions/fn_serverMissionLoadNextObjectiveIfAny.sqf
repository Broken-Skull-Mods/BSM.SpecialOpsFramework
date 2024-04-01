params ["_area", "_isCurrentFailed"];
diag_log format ["SPEC-OP (Next Objective): Moving to Next objective from %1 which is failure = %2", _area, _isCurrentFailed]; 

/*
    [_area, false] call SpecOps_serverMissionLoadNextObjectiveIfAny;
*/
private _isAlreadyLoading = missionNamespace getVariable ["tft_global_loading_active", false];

// Activate the loading screen if not already on.
if (!_isAlreadyLoading) then {
    missionNamespace setVariable ["tft_global_loading_active", true, true];
    missionNamespace setVariable ["tft_global_loading_progress", 0, true];
	missionNamespace setVariable ["tft_global_loading_status", "Loading Next Objective...", true];
};

if((isNull (missionNamespace getVariable ["spec_ops_campaign_mission_op", objNull])) && { !TFT_SPECOPS_IS_CRAFTED_OP} ) exitWith {
    // Deactivate loading screen when its been activated by this function.
    if (!_isAlreadyLoading) then {
        missionNamespace setVariable ["tft_global_loading_progress", 0, true];
        missionNamespace setVariable ["tft_global_loading_active", false, true];
    };

};
uiSleep 0.2; // Sleep for a bit.


_currentConnections = [_area] call SpecOps_fnc_serverMissionExtractConnections;

diag_log format ["SPEC-OP (Next Objective): Extracted Connections", _currentConnections]; 

// Load Next Objective if any available success or failure.
[_area, _isCurrentFailed] call SpecOps_fnc_serverMissionLoadNextObjective;

uiSleep 0.1;
missionNamespace setVariable ["tft_global_loading_progress", 1, true];
missionNamespace setVariable ["tft_global_loading_active", false, true];