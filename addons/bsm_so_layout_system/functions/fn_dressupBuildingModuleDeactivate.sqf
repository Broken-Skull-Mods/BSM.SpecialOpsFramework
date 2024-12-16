params ["_trigger"];
if (!isServer) exitWith {};

// [thisTrigger] call SpecOps_fnc_dressupBuildingModuleDeactivate;
private _modules = _trigger getVariable ["AO_Modules", []];
{

    private _building =  _x getVariable ["AO_Building", objNull];
    if (isNull _building) then { continue; };

    private _units = _building getVariable ['AO_Units', []];
    private _leaders = _building getVariable ['AO_Units_Leader', []];
    private _decorations = _building getVariable ['AO_Decorations', []];
    private _intels = _building getVariable ['AO_Intels', []];
    private _staticGuns = _building getVariable ['AO_StaticGunVehicle', []];
    private _civilians = _building getVariable ["AO_Civilians", []];
    private _hostages = _building getVariable ["AO_Hostages", []];
    {
        private _unit = _x;
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _unit, _isVisibleFromOutside];
        // if (_isVisibleFromOutside) then {
            _unit enableSimulationGlobal false;
            _unit hideObjectGlobal true;
        // };
    } forEach(_staticGuns);

    private _group = objNull;
    {
        private _unit = _x;
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _unit, _isVisibleFromOutside];
        // if (_isVisibleFromOutside || _isPatrolGarrison) then {
            _unit hideObjectGlobal true;
            _unit enableSimulationGlobal false;
        // };
    } forEach(_units);

    {
        private _deco = _x;
        _isVisibleFromOutside = _deco getVariable ["Unit_VisibleFromOutside", false];
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _deco, _isVisibleFromOutside];
        _deco hideObjectGlobal true;
    } forEach(_decorations);
    {
       private _intel = _x;
        _isVisibleFromOutside = _intel getVariable ["Unit_VisibleFromOutside", false];
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _intel, _isVisibleFromOutside];
        _intel hideObjectGlobal true;
    } forEach(_intels);

    {
        private _hostage = _x;
        _isVisibleFromOutside = _hostage getVariable ["Unit_VisibleFromOutside", false];
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _hostage, _isVisibleFromOutside];
        // if (_isVisibleFromOutside) then {
            _hostage hideObjectGlobal true;
            _hostage enableSimulationGlobal false;
        // };
    } forEach(_hostages);

    {
        private _civilian = _x;
        _isVisibleFromOutside = _civilian getVariable ["Unit_VisibleFromOutside", false];
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _civilian, _isVisibleFromOutside];
        // if (_isVisibleFromOutside) then {
            _civilian hideObjectGlobal true;
            _civilian enableSimulationGlobal false;
        // };
    } forEach(_civilians);
    diag_log "SPEC-OPS (Module Building): Deactivated";

} forEach (_modules);