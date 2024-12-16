params ["_trigger"];
diag_log format ["SPEC-OPS (Module Building): %1 Trigering", _trigger];
if (!isServer) exitWith {};
/* 
    [thisTrigger] call SpecOps_fnc_dressupBuildingModuleActivate;
    
*/

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
            _unit enableSimulationGlobal true;
            _unit hideObjectGlobal false;
            if ((damage _building) >= 1) then {
                _unit setDamage 1;
            };
    } forEach(_staticGuns);


    private _group = objNull;
    {
        private _unit = _x;

        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside || _isPatrolGarrison) then {
            _unit hideObjectGlobal false;
            _unit enableSimulationGlobal true;
            if ((damage _building) >= 1) then {
                _unit setDamage 1;
            };
            private _canRotate = _unit getVariable ["Unit_AbleToRotate", true];
            private _chosenStance = _unit getVariable ["Unit_ChosenStance", "UP"];
            private _fixedAnimation = _unit getVariable ["Unit_FixedAnimation", ""];
            if (!_canRotate) then { 
                //_unit disableAI "FSM"; 
                // if (_chosenStance == "DOWN") then {
                //     _unit disableAI "ANIM";
                // };
                if(_fixedAnimation != "") then {
                    _unit switchMove _fixedAnimation;
                    _unit playMoveNow _fixedAnimation;
                    _unit setCombatMode "RED";
                };
                // 
            };
            _group = group _unit;
        // };
        [_unit] call SpecOps_fnc_dressUpSetIdentity;
    } forEach(_units);

    {
        private _deco = _x;
        if (!(local _deco)) then { continue; };
        _isVisibleFromOutside = _deco getVariable ["Unit_VisibleFromOutside", false];
        if ((damage _building) >= 1) then { continue; };
        _deco hideObjectGlobal false;
    } forEach(_decorations);
    {
        private _intel = _x;
        if (!(local _intel)) then { continue; };
        _isVisibleFromOutside = _intel getVariable ["Unit_VisibleFromOutside", false];
        if ((damage _building) >= 1) then { continue; };
        _intel hideObjectGlobal false;
    } forEach(_intels);

    {
        private _hostage = _x;
        if (!(local _hostage)) then { continue; };
        _isVisibleFromOutside = _hostage getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            _hostage hideObjectGlobal false;
            _hostage enableSimulationGlobal true;
            if ((damage _building) >= 1) then {
                _hostage setDamage 1;
            };
        // };
        [_hostage] call SpecOps_fnc_dressUpSetIdentity;
    } forEach(_hostages);

    {
        private _civilian = _x;
        if (!(local _civilian)) then { continue; };
        _isVisibleFromOutside = _civilian getVariable ["Unit_VisibleFromOutside", false];
        // if (_isVisibleFromOutside) then {
            _civilian hideObjectGlobal false;
            _civilian enableSimulationGlobal true;
            if ((damage _building) >= 1) then {
                _civilian setDamage 1;
            };
        // };
    } forEach(_civilians);

} forEach (_modules);
diag_log "SPEC-OPS (Module Building): Activated";

true;