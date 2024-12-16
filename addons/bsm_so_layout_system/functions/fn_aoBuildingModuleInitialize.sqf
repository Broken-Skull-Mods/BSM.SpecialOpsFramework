params ["_parentLogic", "_childLogic", "_trigger"];

diag_log format ["SPEC-OPS (AO Building): %1.", _childLogic];
diag_log format ["SPEC-OPS (AO Building): allvariables %1.", allvariables _childLogic];
private _moduleArea = _childLogic getVariable ["objectarea", nil];
if (isNil "_moduleArea") exitWith { diag_log format ["SPEC-OPS: Cannot find area for the module."]; };

private _posLogic = getPos _childLogic;
private _posSizeLogic = [_moduleArea select 0, _moduleArea select 1];
private _posAngleLogic = _moduleArea select 2;
private _posRectLogic = _moduleArea select 3;

private _sectionName = _childLogic getVariable ["SpecOps_NameAO", ""];
private _triggerBuildingAO = createTrigger ["EmptyDetector", getPosWorld _childLogic, true];
_triggerBuildingAO setVariable ['bsm_so_parentTrigger', _trigger, true];
_triggerBuildingAO setVariable ["theLogic", _childLogic, true]; 
_triggerBuildingAO setVariable ["theAOName", _sectionName, true]; 
_triggerBuildingAO setVariable ["theVisitCondition", _childLogic getVariable ["SpecOps_AOActivateWhenVisited", []], true]; 
_triggerBuildingAO setTriggerActivation ["ANYPLAYER", "PRESENT", false];
_triggerBuildingAO setTriggerArea [((_moduleArea select 0)), ((_moduleArea select 1)) , _posAngleLogic, _posRectLogic, -1];

private _triggerCondition = "[thisTrigger, (this && (triggerActivated (thisTrigger getVariable ['bsm_so_parentTrigger', objNull]))), thisList] call SpecOps_fnc_aoSelfTriggerCondition;";
_trigger setTriggerStatements ["[thisTrigger, this, thisList] call SpecOps_fnc_aoSelfTriggerCondition;", "thisTrigger setVariable ['thisListTrigger', thisList];","" ]; 

_triggerBuildingAO setTriggerStatements [ _triggerCondition, "thisTrigger setVariable ['thisListTrigger', thisList];", ""]; 

private _sync = (synchronizedObjects _childLogic ) select { _x isKindOf "EmptyDetector"; };
private _syncModules = (synchronizedObjects _childLogic ) select { (_x isKindOf "Module_F") && !(_x isKindOf "bsm_so_ao_building_module") && !(_x isKindOf "bsm_so_ao_module")};
diag_log "SPEC-OPS (AO Building): Running AO Module Initializer: Area" + (str _moduleAreaArray);

{
    _x synchronizeObjectsAdd [_triggerBuildingAO];
    _triggerBuildingAO synchronizeObjectsAdd [_x];
    _x setVariable ["bsm_trigger_ready", true, true];
} forEach (_syncModules);

private _moduleAreaArray = [getPos _childLogic, (_moduleArea select 0), (_moduleArea select 1), _moduleArea select 2, _moduleArea select 3, -1];
diag_log "SPEC-OPS (AO Building): Running AO Module Initializer: Area" + (str _moduleAreaArray);

private _tier = _childLogic getVariable ["SpecOps_ForcedTier", 3];
private _allowedGore = _childLogic getVariable ["SpecOps_AllowGore", true];

private _objects = ["BUILDING", "BUNKER", "BUSSTOP", "CHAPEL",
"CHURCH", "FORTRESS", "FOUNTAIN", "FUELSTATION", "HOSPITAL",
"HOUSE", "LIGHTHOUSE", "POWERSOLAR", "RAILWAY",
"RUIN", "SHIPWRECK", "TRACK", "TRANSMITTER", "VIEW-TOWER", "WATERTOWER"];

private _allTerrainObjects = nearestTerrainObjects [[worldSize / 2, worldSize / 2], [], (worldSize * sqrt 2) / 2, false ];
_allTerrainObjects append (allMissionObjects "All");
_allTerrainObjects select { _x inArea _moduleAreaArray};
_allTerraintObjectsInArea = _allTerrainObjects select { _x inArea _moduleAreaArray; };
_assignedBuildings = [];
diag_log format ["Assigning %1 Building Layouts", count _allTerraintObjectsInArea];
{
    private _buildingType = typeof _x;
    if (isnil "_buildingType" || {_buildingType == ""}) then {continue;};
    private _layouts = [];
    _layouts = [_x, _allowedGore, _tier] call SpecOps_fnc_dressUpBuildingGetBuildingLayouts; 
    if (count _layouts <= 0) then { diag_log format ["SPEC-OPS (AO) No Building Layout for %1", (typeof _x)]; continue; };
    _layout = selectRandom _layouts;
    _x setVariable ["spec_ops_building_layout", _layout, true];
    _assignedBuildings pushback _x;
    if (isMultiplayer) then {
        _x addMPEventHandler ["MPKilled", {
            params ["_unit", "_killer"];
            _decoration = _unit getVariable ["AO_Decorations", []];
            _intels = _unit getVariable ["AO_Intels", []];
            { _x hideObjectGlobal true; } forEach (_decoration + _intels);
            _unit removeEventHandler [_thisEvent, _thisEventHandler];
        }];
    } else {
        _x addEventHandler ["Killed", {
            params ["_unit", "_killer"];
            _decoration = _unit getVariable ["AO_Decorations", []];
            _intels = _unit getVariable ["AO_Intels", []];
            { _x hideObjectGlobal true; } forEach (_decoration + _intels);
            _unit removeEventHandler [_thisEvent, _thisEventHandler];
        }];
    };
} forEach (_allTerraintObjectsInArea);
diag_log format ["Assigned %1 Building Layouts", count _assignedBuildings];

private _areaPos = getPos _childLogic;
private _areaHalfSize = (_moduleArea select 0);
private _totalEnemies = _childLogic getVariable ["SpecOps_MaxEnemies", 5];
private _intelMax = _childLogic getVariable ["SpecOps_Intel", 0];

private _markedBuildings = _childLogic getVariable ["SpecOps_MarkBuildings", true];
private _markedBuildingsAOOnly = _childLogic getVariable ["SpecOps_MarkedBuildingOnlyAO", true];
private _leaderNb = _childLogic getVariable ["SpecOps_Leaders", 0];

private _staticHmgs = _logic getVariable ["SpecOps_StaticGunHighLMG", 0];
private _staticLmgs = _logic getVariable ["SpecOps_StaticGunLowLMG", 0];
private _staticMortars = _logic getVariable ["SpecOps_StaticGunMortars", 0];
private _staticAAs = _logic getVariable ["SpecOps_StaticGunAA", 0];
private _staticSams = _logic getVariable ["SpecOps_StaticGunSam", 0];
private _staticLights = _logic getVariable ["SpecOps_StaticGunLight", 0];
private _staticGunnerCount = (_staticHmgs + _staticLmgs + _staticMortars + _staticAAs + _staticSams + _staticLights);

private _hostagesNb = _childLogic getVariable ["SpecOps_Hostages", 0];
private _maxIED = _childLogic getVariable ["SpecOps_MaxIED", 0];

// SpecOps_MaskedFighters

// Check Side
private _outskirtMode = _childLogic getVariable ["SpecOps_SpawnVecOutskirt", false];
private _isOutsideOnly = _childLogic getVariable ["SpecOps_OutsideOnly", false];
private _isMaskedFighter = _childLogic getVariable ["SpecOps_MaskedFigthers", false];

private _faction = _childLogic getVariable ["SpecOps_Faction", ""]; 
private _factionCamo = _childLogic getVariable ["SpecOps_FactionCamo", ""]; 

private _sideVar = _childLogic getVariable ["SpecOps_FactionSide", 1]; 
private _side = east;

if (_sideVar == 0) then { _side = west; _faction = [_faction, "_O_", "_B_"] call CBA_fnc_replace; };
if (_sideVar == 1) then { _side = east; };
if (_sideVar == 2) then { _side = independent; _faction = [_faction, "_O_", "_I_"] call CBA_fnc_replace; };

if (_faction == "" || _factionCamo == "") exitWith { systemChat format ["SPEC-OPS: Faction not configured."]; };




// Default Values (No Garrison)
private _aoActiveBuildings = [];
private _aoAllBuildings = [];
private _garrisonEnemies = 0;
private _patrolEnemies = _totalEnemies;
private _cqbBuildings = [];
private _intelObjects = [];
private _hostages = [];
private _staticGunner = [];
private _garrisonGroups = [];
private _enemyUnits = [];
private _leaderUnits = [];
private _enemyVehicles = [];
private _totalEnemiesCounter = _totalEnemies;
private _patrolGroups = [];
private _bogusBuildings = [];
private _allGarrisonToSpawn = [];

_generatedAO = [_childLogic, _areaPos, _areaHalfSize, _totalEnemies, _leaderNb, _intelMax, _staticGunnerCount, _maxIED, _hostagesNb, 1, _tier, _faction, _factionCamo, _side, _assignedBuildings, _isOutsideOnly, _isMaskedFighter] call SpecOps_fnc_aoModuleGeneratingBuildings;
_aoActiveBuildings = (_generatedAO select 14);
_aoAllBuildings = (_generatedAO select 15);

_garrisonEnemies = (_generatedAO select 9);
_patrolEnemies = (_generatedAO select 10);

_cqbBuildings = (_generatedAO select 0);
_intelObjects = (_generatedAO select 1);
_hostages = (_generatedAO select 2);
_staticGunner = (_generatedAO select 3);
_garrisonGroups = (_generatedAO select 4);

_enemyUnits = (_generatedAO select 5);
_leaderUnits = (_generatedAO select 6);
_enemyVehicles = (_generatedAO select 7);
_totalEnemiesCounter = (_generatedAO select 8);
_patrolGroups = (_generatedAO select 12);
_bogusBuildings = (_generatedAO select 16);
_allGarrisonToSpawn = (_generatedAO select 17);


private _allMarkers = [];
if(_markedBuildings) then {
    {
        // only add marker for enterable buildings
        if (!([_x, 1] call BIS_fnc_isBuildingEnterable)) then { continue; };
        private _currentCount = missionNamespace getVariable ["bsm_dressup_mrk_count", 0];
        _currentCount = _currentCount + 1;
        missionNamespace setVariable ["bsm_dressup_mrk_count", _currentCount];
        _id = format ["aoBuilding_%1", _currentCount];
        _markerstr = createMarkerLocal [str _id, getPos _x];
        _markerstr setMarkerShapeLocal "ICON";
        _markerstr setMarkerTypeLocal "hd_dot";
        _markerstr setMarkerSizeLocal [1, 1];
        if (_side == east) then { _markerstr setMarkerColor "ColorRed"; };
        if (_side == independent) then { _markerstr setMarkerColor "ColorGreen"; };
        if (_side == west) then { _markerstr setMarkerColor "ColorBlue"; };
        _allMarkers pushback str _id;
    } forEach (_aoActiveBuildings);
    if (_markedBuildingsAOOnly) then {
        ["hide", _allMarkers] spawn BIS_fnc_showMarkers;
    };
};


private _aoBuildingMarkers = _parentLogic getVariable ["AO_Markers", []];
_aoBuildingMarkers append _allMarkers;
_parentLogic setVariable ["AO_Markers", _aoBuildingMarkers];


private _aoBuildings = _parentLogic getVariable ["AO_Buildings", []];
_aoBuildings append _aoActiveBuildings;
_parentLogic setVariable ["AO_Buildings", _aoBuildings];

private _aoAllCqbBuildings = _parentLogic getVariable ["AO_All_CQB_Buildings", []];
_aoAllCqbBuildings append _cqbBuildings;
_parentLogic setVariable ["AO_All_CQB_Buildings", _aoAllCqbBuildings];

private _aoAllBogusBuildings = _parentLogic getVariable ["AO_All_Bogus_Buildings", []];
_aoAllBogusBuildings append _bogusBuildings;
_parentLogic setVariable ["AO_All_Bogus_Buildings", _aoAllBogusBuildings];

private _aoAllBuildingsVar = _parentLogic getVariable ["AO_All_Buildings", []];
_aoAllBuildingsVar append _aoAllBuildings;
_parentLogic setVariable ["AO_All_Buildings", _aoAllBuildingsVar];

private _aoPatrolVehicle = _parentLogic getVariable ["AO_Patrol_Vehicle", []];
_aoPatrolVehicle append _patrolVehicles;
_parentLogic setVariable ["AO_Patrol_Vehicle", _aoPatrolVehicle];

private _aoPatrolVehicleUnits = _parentLogic getVariable ["AO_Patrol_Vehicle_Units", []];
_aoPatrolVehicleUnits append _patrolVehicleUnits;
_parentLogic setVariable ["AO_Patrol_Vehicle_Units", _aoPatrolVehicleUnits];

private _aoPatrolCivilianUnits = _parentLogic getVariable ["AO_Patrol_Civilian_Units", []];
_aoPatrolCivilianUnits append _patrolCivilianUnits;
_parentLogic setVariable ["AO_Patrol_Civilian_Units", _aoPatrolCivilianUnits];

private _aoPatrolEnemyUnits = _parentLogic getVariable ["AO_Patrol_Enemy_Units", []];
_aoPatrolEnemyUnits append _patrolEnemyUnits;
_parentLogic setVariable ["AO_Patrol_Enemy_Units", _aoPatrolEnemyUnits];

[_childLogic, _aoPatrolEnemyUnits + _enemyUnits] call SpecOps_fnc_aoUnitSetupBehavior;

{
    private _hostage = _x;
    _hostage addMPEventHandler ["MPKilled", {
        params ["_unit", "_killer"];
        // TODO: Add Dramatic Effect.
    }];
} forEach (_hostages);

private _activeBuildings = missionNamespace getVariable ["AO_Active_Buildings", []];
_activeBuildings append _cqbBuildings;
missionNamespace setVariable ["AO_Active_Buildings", _activeBuildings, true];