params ["_player", "_area"];
/*
    Request a mission base on entity (area) type.
    [player, area] remoteExec ["SpecOps_fnc_serverMissionRequest", 2];
*/


diag_log format ["SPEC-OP (Mission Request): Operation Requested by %1 for area = %2", _player, _area];

missionNamespace setVariable ["tft_global_loading_active", true, true];
missionNamespace setVariable ["tft_global_loading_progress", 0, true];
missionNamespace setVariable ["tft_global_loading_status", "Requesting Operation..", true];
missionNamespace setVariable ["spec_ops_campaign_mission_op", _area, true];
// call SpecOps_fnc_aoStartSpawning;
_codenames = [TFTSRV_SAVEDVAR_PLAYER_FACTION] call SpecOps_fnc_getObjectiveCodenames;
missionNamespace setVariable ["tft_global_loading_progress", 0.25, true];
diag_log format ["SPEC-OP (Mission Request): Codenames extracted %1", _codenames];
private _startup = [_area, _codenames] call SpecOps_fnc_serverMissionGetFirstObjective;
diag_log format ["SPEC-OP (Mission Request): First Objective Extracted %1", _startup];
missionNamespace setVariable ["tft_global_loading_progress", 0.50, true];
[_startup select 0, _startup select 1] call SpecOps_fnc_serverMissionSetAllObjectives;
[_startup select 0] call SpecOps_fnc_serverMissionStartFromEntityType;

missionNamespace setVariable ["AO_Spawning_Done", true];
// call SpecOps_fnc_aoStartSpawning;

// ["All Enemy are loaded"] remoteExec ["hint", allPlayers];