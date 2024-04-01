// [] spawn SpecOps_fnc_aoClearCombatZone;
private _areaTrigger = missionNamespace getVariable ["AO_Trigger", objNull];
if (isNull _areaTrigger) exitWith { diag_log "SPEC-OPS (AO): AO Trigger does not exist."; };


private _vehiclePatrolUnits = _areaTrigger getVariable ["AO_Patrol_Vehicle_Units", []];
diag_log format ["SPEC-OPS (AO): %1", _vehiclePatrolUnits]; 
{ if (alive _x) then { _x removeAllEventHandlers "Deleted" ; deleteVehicle _x; }; } forEach (_vehiclePatrolUnits);

private _vehiclePatrol = _areaTrigger getVariable ["AO_Patrol_Vehicle", []];
diag_log format ["SPEC-OPS (AO): %1", _vehiclePatrol]; 
{ if (alive _x) then { _x removeAllEventHandlers "Deleted" ; deleteVehicle _x; }; } forEach (_vehiclePatrol);

private _civilianPatrol = _areaTrigger getVariable ["AO_Patrol_Civilian_Units", []];
diag_log format ["SPEC-OPS (AO): %1", _civilianPatrol]; 
{ if (alive _x) then { _x removeAllEventHandlers "Deleted" ; deleteVehicle _x; }; } forEach (_civilianPatrol);

private _buildings = _areaTrigger getVariable ["AO_Buildings", []];
{
    private _building = _x;
    _x removeAllMPEventHandlers "MPKilled" ;
    diag_log format ["SPEC-OPS (AO): Building is %1", _building]; 
    private _units = _building getVariable ["AO_Units", []];
    diag_log format ["SPEC-OPS (AO): %1", _units]; 
    { if (alive _x) then { _x removeAllEventHandlers "Deleted"; deleteVehicle _x; }; } forEach (_units);
    private _leaders = _building getVariable ["AO_Units_Leader", []];
    diag_log format ["SPEC-OPS (AO): %1", _leaders]; 
    { if (alive _x) then { _x removeAllEventHandlers "Deleted" ; deleteVehicle _x; }; } forEach (_leaders);


    private _scene = _building getVariable ["AO_Decorations", []];
    diag_log format ["SPEC-OPS (AO): %1", _scene]; 
    { if (alive _x) then { _x removeAllEventHandlers "Deleted"; deleteVehicle _x; }; } forEach (_scene);
    private _intelligence = _building getVariable ["AO_Intels", []];
    diag_log format ["SPEC-OPS (AO): %1", _intelligence]; 
    { if (alive _x) then { _x removeAllEventHandlers "Deleted"; deleteVehicle _x; }; } forEach (_intelligence);
    
    private _staticGunner = _building getVariable ["AO_StaticGunVehicle", []];
    diag_log format ["SPEC-OPS (AO): %1", _staticGunner]; 
    { if (alive _x) then { _x removeAllEventHandlers "Deleted"; deleteVehicle _x; }; } forEach (_staticGunner);
    
    private _hostages = _building getVariable ["AO_Hostages", []];
    diag_log format ["SPEC-OPS (AO): %1", _hostages]; 
    { if (alive _x) then { _x removeAllMPEventHandlers "MPKilled"; _x removeAllEventHandlers "Deleted"; deleteVehicle _x; }; } forEach (_hostages);
    private _civilians = _building getVariable ["AO_Civilians", []];
    diag_log format ["SPEC-OPS (AO): %1", _civilians]; 
    { if (alive _x) then { _x removeAllMPEventHandlers "MPKilled"; _x removeAllEventHandlers "Deleted"; deleteVehicle _x; }; } forEach (_civilians);

    private _patrolVehicle = _building getVariable ["AO_Patrol_Vehicle", []];
    { if (alive _x) then { _x removeAllEventHandlers "Deleted"; deleteVehicle _x; }; } forEach (_patrolVehicle);
    private _patrolUnits = _building getVariable ["AO_Patrol_Vehicle_Units", []];
    { if (alive _x) then { _x removeAllEventHandlers "Deleted"; deleteVehicle _x; }; } forEach (_patrolUnits);
    
    private _midRangeTrigger = _building getVariable ["AO_Building_Trigger", objNull];
    private _shortRangeTrigger = _building getVariable ["AO_Building_Close_Trigger", objNull];
    if (!isNull _midRangeTrigger) then { deleteVehicle _midRangeTrigger; };
    if (!isNull _shortRangeTrigger) then { deleteVehicle _shortRangeTrigger; };
    _fullAOObjects = (_units + _leaders + _scene + _intelligence + _staticGunner + _hostages + _civilians + _patrolVehicle + _patrolUnits);
    { if (alive _x) then { _x removeAllEventHandlers "Deleted"; deleteVehicle _x; }; } forEach (_fullAOObjects);

} forEach (_buildings);

// Repair alll Buildings in AO
private _allBuildings = _areaTrigger getVariable ["AO_All_Buildings", []];
{  _x setDamage 0; } forEach (_allBuildings);

_triggers = _areaTrigger getVariable ["AO_Building_Triggers", []];
_areaTrigger setVariable ["AO_Patrol_Vehicle", []];
_areaTrigger setVariable ["AO_Patrol_Vehicle_Units", []];
// Delete All Building Triggers TFT_Is_Patrol_Garrison
{ deletevehicle _x; } forEach (_triggers);
_buildings = _areaTrigger getVariable ["AO_Buildings", []];
{ 
    _x setVariable ["AO_Units", []];
    _x setVariable ["AO_Units_Leader", []];
    _x setVariable ["AO_Decorations", []];
    _x setVariable ["AO_Intels", []];
    _x setVariable ["AO_StaticGunVehicle", []];
    _x setVariable ["AO_Hostages", []];
    _x setVariable ["AO_Civilians", []];

    _x setVariable ["AO_Building_Trigger", objNull];
    _x setVariable ["AO_Building_Close_Trigger", objNull];

} forEach (_buildings);

deleteVehicle _areaTrigger;


