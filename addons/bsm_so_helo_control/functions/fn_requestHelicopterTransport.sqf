params ["_player", "_team", "_destination", "_model", "_isCivilian"];
_side = side _player;
private _modules = allMissionObjects ["bsm_so_module_helo_transport"];

if (count _modules <= 0) exitWith {};
_module = _modules select 0;
_model = _module getVariable ["SpecOps_Classname", "B_D_Heli_Transport_01_lxWS"];
_isCivilian = _module getVariable ["SpecOps_IsCivilian", false];

// Generate spawn location 1.5KM to 2.5KM away from destination.
_safePosition = [_destination, 1500, 2500, 3, 1, 0] call BIS_fnc_findSafePos;
// Set Height to 100.
_safePosition = [_safePosition select 0, _safePosition select 1, 100];
_vehicle = nil;
// spawn as civilian (undercover?)
if(_isCivilian) then {
    _vehicle = [_safePosition, 360, _model, civilian] call BIS_fnc_spawnVehicle;
}else{
    // Spawn as player faction.
    _vehicle = [_safePosition, 360, _model, _side] call BIS_fnc_spawnVehicle;
};
_vehicleObj = _vehicle select 0;
clearWeaponCargoGlobal _vehicleObj; 
clearMagazineCargoGlobal _vehicleObj; 
clearItemCargoGlobal _vehicleObj;
clearBackpackCargo _vehicleObj;
private _faction = missionNameSpace getVariable ["bsm_so_factionInitial", "BS_B_US_ARMA_BASE"];
private _audioHashmap = [_faction] call SpecOps_fnc_voiceInitialize;
_soundA = [_faction, _audioHashmap, "RadioOperator", "HangingRequest"] call SpecOps_fnc_voiceSelectFromHashMap;
_soundDelay = [4, 6] call BIS_fnc_randomInt;
_soundB = [_faction, _audioHashmap, "RadioOperator", "SupportAirTransportRequest"] call SpecOps_fnc_voiceSelectFromHashMap;
uiSleep (_soundDelay + 15);
// Build team id
_teamServing = format ["%1_%2", _side, _team];

// Extract Spawned Vehicle Information
_vehicleModel = _vehicle select 0;
_vehicleGrp = _vehicle select 2;
// find empty position to land at destination.
_position = [_destination, 10, 200, 3, 0] call BIS_fnc_findSafePos;

// Create Waypoint to destination
_wp = _vehicleGrp addWaypoint [_position, 0];	
_wp setWaypointBehaviour "COMBAT";
_wp setWaypointCombatMode "YELLOW";
_wp setWaypointSpeed "FULL";
_wp setWaypointType "MOVE";
_wp setWaypointStatements ["true", "(vehicle this) land 'LAND';"];