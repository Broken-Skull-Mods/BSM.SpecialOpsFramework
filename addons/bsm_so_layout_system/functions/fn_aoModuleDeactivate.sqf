params ["_logic", ["_trigger", objNull]];
if (!isServer) exitWith {};

_areaBuilding =  _logic getVariable ["AO_All_Buildings", []];
_patrolVehicles = _logic getVariable ["AO_Patrol_Vehicle", []];
_patrolVehicleUnits = _logic getVariable ["AO_Patrol_Vehicle_Units", []];
_patrolEnemyUnits = _logic getVariable ["AO_Patrol_Enemy_Units", []];
_patrolCivilianUnits = _logic getVariable ["AO_Patrol_Civilian_Units", []];
private _aoDecoration = _logic getVariable ["AO_Decorations", []];
private _markedBuildingsAOOnly = _logic getVariable ["SpecOps_MarkedBuildingOnlyAO", true];
private _buildingMarkers =  _logic getVariable ["AO_Markers", []];
if (_markedBuildingsAOOnly) then {
    ["hide", _buildingMarkers] spawn BIS_fnc_showMarkers;
};

    private _patrolVehicleGroupProcessed = [];




{
    _deco = _x;
    _isVisibleFromOutside = _deco getVariable ["Unit_VisibleFromOutside", false];
    // if (_isVisibleFromOutside) then {
        _deco hideObjectGlobal true;
    // };
} forEach(_aoDecoration);


{
    private _unit = _x;
    if (!isNull (_unit getVariable ["bsm_following_player", objNull])) then { continue; };
    private _playerInVehicle = 
    if(alive _unit && isPlayer (driver _unit)) then { continue; };
    _unit enableSimulationGlobal false;
    _unit hideObjectGlobal true;
    
} forEach(_patrolEnemyUnits);

{
    private _unit = _x;
    if (!isNull (_unit getVariable ["bsm_following_player", objNull])) then { continue; };
    if(alive _unit && isPlayer (driver _unit)) then { continue; };
    _unit enableSimulationGlobal false;
    _unit hideObjectGlobal true;
} forEach(_patrolCivilianUnits);

// Load Vehicles in AO
{
    private _unit = _x;
    if (!isNull (_unit getVariable ["bsm_following_player", objNull])) then { continue; };
    if(alive _unit && isPlayer (driver _unit)) then { continue; };
    _unit enableSimulationGlobal false;
    _unit hideObjectGlobal true;
} forEach(_patrolVehicles);

{
    private _unit = _x;    
    if (!isNull (_unit getVariable ["bsm_following_player", objNull])) then { continue; };
    if((vehicle _unit) != _unit && isPlayer (driver _unit)) then { continue; };
    _unit enableSimulationGlobal false;
    _unit hideObjectGlobal true;
    _patrolVehicleGroupProcessed pushback (group _unit);
} forEach(_patrolVehicleUnits);

{
    _building = _x;
    _units = _building getVariable ["AO_Units", []];
    _leaders = _building getVariable ["AO_Units_Leader", []];
    _decorations = _building getVariable ["AO_Decorations", []];
    _intels = _building getVariable ["AO_Intels", []];
    _hostages = _building getVariable ["AO_Hostages", []];
    _civilians = _building getVariable ["AO_Civilians", []];
    _staticGunners = _building getVariable ["AO_StaticGunVehicle", []];


    {
        _deco = _x;
        _isVisibleFromOutside = _deco getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            _deco hideObjectGlobal true;
        // };
    } forEach(_decorations);

    {
        _intel = _x;
        _isVisibleFromOutside = _intel getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            _intel hideObjectGlobal true;
        // };
    } forEach(_intels);
    


    {
        private _unit = _x;
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            _unit enableSimulationGlobal true;
            _unit hideObjectGlobal false;
        // };
    } forEach(_staticGunners);

    {
        private _unit = _x;
        if (!isNull (_unit getVariable ["bsm_following_player", objNull])) then { continue; };
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            if((vehicle _unit) != _unit && isPlayer (driver _unit)) then { continue; };
            _unit hideObjectGlobal true;
            _unit enableSimulationGlobal false;
        // };
    } forEach(_units);



    {
        private _unit = _x;
        if (!isNull (_unit getVariable ["bsm_following_player", objNull])) then { continue; };
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            if( (vehicle _unit) != _unit && isPlayer (driver _unit)) then { continue; };
            _unit hideObjectGlobal true;
            _unit enableSimulationGlobal false;
        // };
    } forEach(_hostages);

    {
        private _unit = _x;
        if (!isNull (_unit getVariable ["bsm_following_player", objNull])) then { continue; };
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            if( (vehicle _unit) != _unit && isPlayer (driver _unit)) then { continue; };
            _unit hideObjectGlobal true;
            _unit enableSimulationGlobal false;
        // };
    } forEach(_civilians);

} forEach(_areaBuilding);