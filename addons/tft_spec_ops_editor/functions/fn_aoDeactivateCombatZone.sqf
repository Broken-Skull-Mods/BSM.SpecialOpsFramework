params ["_trigger"];

diag_log format ["SPEC-OPS (AO): Trigger for AO deactivated"];

_areaObject = _trigger getVariable ["AO", objNull];
_areaBuilding =  _trigger getVariable ["AO_Buildings", []];
_patrolVehicles = _trigger getVariable ["AO_Patrol_Vehicle", []];
_patrolVehicleUnits = _trigger getVariable ["AO_Patrol_Vehicle_Units", []];
_patrolEnemyUnits = _trigger getVariable ["AO_Patrol_Enemy_Units", []];
_patrolCivilianUnits = _trigger getVariable ["AO_Patrol_Civilian_Units", []];
missionNamespace setVariable ["AO_Active", false];

{

    private _unit = _x;
    if(alive _unit && (side (group (driver _unit))) == west) then { continue; };
    _unit enableSimulationGlobal false;
    _unit hideObjectGlobal true;
} forEach(_patrolEnemyUnits);

{

    private _unit = _x;
    if(alive _unit && (side (group (driver _unit))) == west) then { continue; };
    _unit enableSimulationGlobal false;
    _unit hideObjectGlobal true;
} forEach(_patrolCivilianUnits);

// Load Vehicles in AO
{

    private _unit = _x;
    if(alive _unit && (side (group (driver _unit))) == west) then { continue; };
    _unit enableSimulationGlobal false;
    _unit hideObjectGlobal true;
} forEach(_patrolVehicles);

{

    private _unit = _x;    
    if((vehicle _unit) != _unit && ((side (group (driver (vehicle _unit)))) == west)) then { continue; };
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

    private _patrolVehicleGroupProcessed = [];

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
        _unit = _x;
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            _unit enableSimulationGlobal true;
            _unit hideObjectGlobal false;
        // };
    } forEach(_staticGunners);

    {
        _unit = _x;
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            if((vehicle _unit) != _unit && (side group (driver (vehicle _unit)) == west)) then { continue; };
            _unit hideObjectGlobal true;
            _unit enableSimulationGlobal false;
        // };
    } forEach(_units);



    {
        private _unit = _x;
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            if( (vehicle _unit) != _unit && ((side (group (driver (vehicle _unit)))) == west)) then { continue; };
            _unit hideObjectGlobal true;
            _unit enableSimulationGlobal false;
        // };
    } forEach(_hostages);

    {
        private _unit = _x;
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            if( (vehicle _unit) != _unit && ((side (group (driver (vehicle _unit)))) == west)) then { continue; };
            _unit hideObjectGlobal true;
            _unit enableSimulationGlobal false;
        // };
    } forEach(_civilians);

} forEach(_areaBuilding);