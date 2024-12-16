params ["_logic", ["_trigger", objNull]];
private _runningAOs = missionNamespace getVariable ["bsm_running_ao", []]; 
if (!isServer || count _runningAOs > BSM_SO_CBA_MAAO) exitWith {};


private _areaBuilding =  _logic getVariable ["AO_All_Buildings", []];
private _markedBuildingsAOOnly = _logic getVariable ["SpecOps_MarkedBuildingOnlyAO", true];
private _buildingMarkers =  _logic getVariable ["AO_Markers", []];
if (_markedBuildingsAOOnly) then {
    ["show", _buildingMarkers] spawn BIS_fnc_showMarkers;
};
private _patrolVehicles = _logic getVariable ["AO_Patrol_Vehicle", []];
private _patrolVehicleUnits = _logic getVariable ["AO_Patrol_Vehicle_Units", []];
private _aoDecoration = _logic getVariable ["AO_Decorations", []];
private _patrolEnemyUnits = _logic getVariable ["AO_Patrol_Enemy_Units", []];
private _patrolCivilianUnits = _logic getVariable ["AO_Patrol_Civilian_Units", []];
{
    _deco = _x;
    _isVisibleFromOutside = _deco getVariable ["Unit_VisibleFromOutside", false];
    private _hiddenAtNight = _deco getVariable ["SpecOps_HideAtNight", false];
    private _hiddenDuringDay = _deco getVariable ["SpecOps_HideAtDay", false];
    if (_hiddenAtNight && sunOrMoon == 0) then { continue; };
    if (_hiddenDuringDay && sunOrMoon == 1) then { continue; };
    _deco hideObjectGlobal false;
} forEach(_aoDecoration);

{
    private _unit = _x;
    _unit enableSimulationGlobal true;
    _unit hideObjectGlobal false;
} forEach(_patrolEnemyUnits);

{

    private _unit = _x;
    _unit enableSimulationGlobal true;
    _unit hideObjectGlobal false;
} forEach(_patrolCivilianUnits);


private _patrolVehicleGroupProcessed = [];
// Load Vehicles in AO
{
    private _unit = _x;
    _unit enableSimulationGlobal true;
    _unit hideObjectGlobal false;
} forEach(_patrolVehicles);

{
    private _unit = _x;
    _unit enableSimulationGlobal true;
    _unit hideObjectGlobal false;
    _patrolVehicleGroupProcessed pushback (group _unit);
    

} forEach(_patrolVehicleUnits);


{
    _building = _x;
    private _size = sizeOf (typeof _building);
    _units = _building getVariable ["AO_Units", []];
    _isPatrolGarrison = _building getVariable ["TFT_Is_Patrol_Garrison", false];
    _leaders = _building getVariable ["AO_Units_Leader", []];
    _decorations = _building getVariable ["AO_Decorations", []];
    _intels = _building getVariable ["AO_Intels", []];
    _staticGunners = _building getVariable ["AO_StaticGunVehicle", []];
    _hostages = _building getVariable ["AO_Hostages", []];
    _civilians = _building getVariable ["AO_Civilians", []];


    // If Building is Levelled, Remove Decoration All of them and intel.


    {
        _unit = _x;
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        private _hiddenAtNight = _unit getVariable ["SpecOps_HideAtNight", false];
        private _hiddenDuringDay = _unit getVariable ["SpecOps_HideAtDay", false];
        if (_hiddenAtNight && sunOrMoon == 0) then { continue; };
        if (_hiddenDuringDay && sunOrMoon == 1) then { continue; };
        // if (_isVisibleFromOutside) then {
        _unit enableSimulationGlobal true;
        _unit hideObjectGlobal false;
        if ((damage _building) >= 1) then {
            _unit setDamage 1;
        };
        // };
    } forEach(_staticGunners);
    private _group = objNull;
    {
        _unit = _x;
        _isVisibleFromOutside = _unit getVariable ["Unit_VisibleFromOutside", false];
        private _hiddenAtNight = _unit getVariable ["SpecOps_HideAtNight", false];
        private _hiddenDuringDay = _unit getVariable ["SpecOps_HideAtDay", false];
        if (_hiddenAtNight && sunOrMoon == 0) then { continue; };
        if (_hiddenDuringDay && sunOrMoon == 1) then { continue; };
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
    } forEach(_units);

    // if patrol cancel positioning and force up to move.
    if (!isNull _group && _isPatrolGarrison) then {
        {
            _x enableAI "PATH"; 
            _x enableAI "MOVE"; 
            _x setUnitPos "UP";
        } forEach (units _group);
        // [_group, getPos _building, 15] call BIS_fnc_taskPatrol;
    };
    
    {
        _deco = _x;
        _isVisibleFromOutside = _deco getVariable ["Unit_VisibleFromOutside", false];
        private _hiddenAtNight = _deco getVariable ["SpecOps_HideAtNight", false];
        private _hiddenDuringDay = _deco getVariable ["SpecOps_HideAtDay", false];
        if (_hiddenAtNight && sunOrMoon == 0) then { continue; };
        if (_hiddenDuringDay && sunOrMoon == 1) then { continue; };
        // diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _deco, _isVisibleFromOutside];
        if ((damage _building) >= 1) then { continue; };
        _deco hideObjectGlobal false;
    } forEach(_decorations);

    {
        _intel = _x;
        _isVisibleFromOutside = _intel getVariable ["Unit_VisibleFromOutside", false];
        private _hiddenAtNight = _intel getVariable ["SpecOps_HideAtNight", false];
        private _hiddenDuringDay = _intel getVariable ["SpecOps_HideAtDay", false];
        if (_hiddenAtNight && sunOrMoon == 0) then { continue; };
        if (_hiddenDuringDay && sunOrMoon == 1) then { continue; };
        // diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _intel, _isVisibleFromOutside];
        if ((damage _building) >= 1) then { continue; };
        _intel hideObjectGlobal false;
    } forEach(_intels);

    {
        _hostage = _x;
        _isVisibleFromOutside = _hostage getVariable ["Unit_VisibleFromOutside", false];
        private _hiddenAtNight = _hostage getVariable ["SpecOps_HideAtNight", false];
        private _hiddenDuringDay = _hostage getVariable ["SpecOps_HideAtDay", false];
        if (_hiddenAtNight && sunOrMoon == 0) then { continue; };
        if (_hiddenDuringDay && sunOrMoon == 1) then { continue; };

        // diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _hostage, _isVisibleFromOutside];
        // if (_isVisibleFromOutside) then {
            _hostage hideObjectGlobal false;
            _hostage enableSimulationGlobal true;
            if ((damage _building) >= 1) then {
                _hostage setDamage 1;
            };
        // };
    } forEach(_hostages);

    {
        _civilian = _x;
        _isVisibleFromOutside = _civilian getVariable ["Unit_VisibleFromOutside", false];
        private _hiddenAtNight = _civilian getVariable ["SpecOps_HideAtNight", false];
        private _hiddenDuringDay = _civilian getVariable ["SpecOps_HideAtDay", false];
        if (_hiddenAtNight && sunOrMoon == 0) then { continue; };
        if (_hiddenDuringDay && sunOrMoon == 1) then { continue; };
        
        // diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _civilian, _isVisibleFromOutside];
        // if (_isVisibleFromOutside) then {
            _civilian hideObjectGlobal false;
            _civilian enableSimulationGlobal true;
            if ((damage _building) >= 1) then {
                _civilian setDamage 1;
            };
        // };
    } forEach(_civilians);

} forEach(_areaBuilding);