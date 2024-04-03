params ["_connection", ["_old", nil]];
/*
    Load up the mission based on entity type.
    [_connection] call SpecOps_fnc_serverMissionStartFromEntityType;
*/
_typeMission = typeof _connection;
switch (_typeMission) do
{
    case "TFTE_MissionSabotageAirDefense": { [nil, _connection] call TFTSRV_MISSION_REQUEST_DEFENSE; };
    case "TFTE_MissionCasualties": { [nil, _connection] call TFTSRV_MISSION_REQUEST_CASUALTY; };
    case "TFTE_MissionClearBigtown": { [nil, _connection] call TFTSRV_MISSION_REQUEST_BIGTOWN; };
    case "TFTE_MissionClearSmallTown": { [nil, _connection] call TFTSRV_MISSION_REQUEST_TOWN; };
    case "TFTE_MissionClearVillage": { [nil, _connection] call TFTSRV_MISSION_REQUEST_VILLAGES; };
    case "TFTE_MissionClearCamp": { [nil, _connection] call TFTSRV_MISSION_REQUEST_LEADER; };
    case "TFTE_MissionAssasination": { [nil, _connection] call TFTSRV_MISSION_REQUEST_LIEUTENANT; };
    case "TFTE_MissionSabotageResources": { [nil, _connection] call TFTSRV_MISSION_REQUEST_SABOTAGE; };
    case "TFTE_MissionSabotageComms": { [nil, _connection] call TFTSRV_MISSION_REQUEST_SABOTAGE_COMMS; };
    case "TFTE_MissionAmbush": { [nil, _connection] call TFTSRV_MISSION_REQUEST_AMBUSH; };
    case "TFTE_MissionClearAirstrip": { [nil, _connection] call TFTSRV_MISSION_REQUEST_AIRFIELD; };
    default { [nil, _connection] call TFTSRV_MISSION_REQUEST_INTEL; }; 
}; 

uisleep 0.5;
if(!isNil "_old") then {
    [_connection, _old] call SpecOps_fnc_serverMissionAudioLoadFromEntity;
} else {
    [_connection] call SpecOps_fnc_serverMissionAudioLoadFromEntity;
};