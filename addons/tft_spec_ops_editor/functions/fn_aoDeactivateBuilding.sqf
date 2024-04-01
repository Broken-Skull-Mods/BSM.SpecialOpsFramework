params ["_trigger"];

diag_log format ["SPEC-OPS (AO): Building Being Deactivated"];

_areaObject = _trigger getVariable ["AO", objNull];
_areaBuilding =  _trigger getVariable ["AO_Building", objNull];
_building = _areaBuilding;
_units = _building getVariable ["AO_Units", []];
_leaders = _building getVariable ["AO_Units_Leader", []];
_decorations = _building getVariable ["AO_Decorations", []];
_intels = _building getVariable ["AO_Intels", []];
_hostages = _building getVariable ["AO_Hostages", []];
_civilians = _building getVariable ["AO_Civilians", []];
_staticGunners = _building getVariable ["AO_StaticGunVehicle", []];

// {
//     _unit = _x;
//     _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
//     if (!_isVisibleFromOutside) then {
//         _unit enableSimulationGlobal true;
//         _unit hideObjectGlobal false;
//     };
// } forEach(_staticGunners);

// {
//     _unit = _x;
//     _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
//     if (!_isVisibleFromOutside) then {
//         _unit hideObjectGlobal true;
//         _unit enableSimulationGlobal false;
//     };
// } forEach(_units);

{
    _deco = _x;
    _isVisibleFromOutside = _deco getVariable ["Unit_VisibleFromOutside", false];
    if (!_isVisibleFromOutside) then {
        _deco hideObjectGlobal true;
    };
} forEach(_decorations);

{
    _intel = _x;
    _isVisibleFromOutside = _intel getVariable ["Unit_VisibleFromOutside", false];
    if (!_isVisibleFromOutside) then {
        _intel hideObjectGlobal true;
    };
} forEach(_intels);

// {
//     _hostage = _x;
//     _isVisibleFromOutside = _hostage getVariable ["Unit_VisibleFromOutside", false];
//     if (!_isVisibleFromOutside) then {
//         _hostage hideObjectGlobal true;
//         _hostage enableSimulationGlobal false;
//     };
// } forEach(_hostages);

// {
//     _civilian = _x;
//     _isVisibleFromOutside = _civilian getVariable ["Unit_VisibleFromOutside", false];
//     if (!_isVisibleFromOutside) then {
//         _civilian hideObjectGlobal true;
//         _civilian enableSimulationGlobal false;
//     };
// } forEach(_civilians);