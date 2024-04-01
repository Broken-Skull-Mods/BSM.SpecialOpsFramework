params ["_trigger"];

diag_log format ["SPEC-OPS (AO): Trigger for AO Activated"];
private _areaObject = _trigger getVariable ["AO", objNull];
missionNamespace setVariable ["AO_Active", true];

private _isSpawnDone = missionNamespace getVariable ["AO_Spawning_Done", false];
if (!_isSpawnDone) exitWith {
    ["The AO is not done spawning, leave the AO and wait for it to be ready."] remoteExec ["hintc", allPlayers];
};

if (!isNull _area && (_trigger getVariable ["spec_ops_ao_notice_given", false])) then {
    _trigger setVariable ["spec_ops_ao_notice_given", true];
_nbHostages = _area getVariable["TFT_ObjectiveCaptureHostages", 0];
    private _audio = [];
    if(_nbHostages > 0 ) then { 
        _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "IntelligenceCommander", "ObjectiveHostagePresence"] call SpecOps_fnc_voiceSelectFromHashMap);
    };
    
    _nbHVTs = _area getVariable["TFT_ObjectiveCaptureHVT", 0];
    if(_nbHVTs > 0 ) then { 
    _audio pushback ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "IntelligenceCommander", "ObjectiveHostagePresence"] call SpecOps_fnc_voiceSelectFromHashMap);
    };
    [_audio] remoteExec ["TFT_FUNC_COMMON_PLAY_AUDIO_LONG_RANGE_ARR_QUEUED", ([0, -2] select isDedicated)]; 

};


    
_areaBuilding =  _trigger getVariable ["AO_Buildings", []];

diag_log format ["SPEC-OPS (AO TRIGGER): %1", _areaBuilding];
_size = (triggerArea _trigger) select 0;
_patrolVehicles = _trigger getVariable ["AO_Patrol_Vehicle", []];
_patrolVehicleUnits = _trigger getVariable ["AO_Patrol_Vehicle_Units", []];

_patrolEnemyUnits = _trigger getVariable ["AO_Patrol_Enemy_Units", []];
_patrolCivilianUnits = _trigger getVariable ["AO_Patrol_Civilian_Units", []];

{

    private _unit = _x;
    if(alive _unit && (side (group (driver _unit))) == west) then { continue; };
    _unit enableSimulationGlobal true;
    _unit hideObjectGlobal false;
} forEach(_patrolEnemyUnits);

{

    private _unit = _x;
    if(alive _unit && (side (group (driver _unit))) == west) then { continue; };
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
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _unit, _isVisibleFromOutside];
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
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _unit, _isVisibleFromOutside];
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
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _deco, _isVisibleFromOutside];
        if ((damage _building) >= 1) then { continue; };
        _deco hideObjectGlobal false;
    } forEach(_decorations);

    {
        _intel = _x;
        _isVisibleFromOutside = _intel getVariable ["Unit_VisibleFromOutside", false];
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _intel, _isVisibleFromOutside];
        if ((damage _building) >= 1) then { continue; };
        _intel hideObjectGlobal false;
    } forEach(_intels);

    {
        _hostage = _x;
        _isVisibleFromOutside = _hostage getVariable ["Unit_VisibleFromOutside", false];
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _hostage, _isVisibleFromOutside];
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
        diag_log format ["SPEC-OPS (AO TRIGGER): %1 | %2", _civilian, _isVisibleFromOutside];
        // if (_isVisibleFromOutside) then {
            _civilian hideObjectGlobal false;
            _civilian enableSimulationGlobal true;
            if ((damage _building) >= 1) then {
                _civilian setDamage 1;
            };
        // };
    } forEach(_civilians);

} forEach(_areaBuilding);