params ["_logic"];
waitUntil { uiSleep 0.1; (missionNamespace getVariable ["SpecOps_MapLayoutsDone", false]) };

private _nameAO = _logic getVariable ["SpecOps_NameAO", ""];
private _sizeAO = _logic getVariable ["SpecOps_SizeMultiple", 2];
if (_sizeAO <= 1.5) then { _sizeAO = 1.5; }; 

if (!isServer || is3DEN) exitWith {};

private _markAO = _logic getVariable ["SpecOps_MarkAO", false];
private _markAOCode = _logic getVariable ["SpecOps_MarkAOCode", ""];
private _markAOWhenVisited = _logic getVariable ["SpecOps_MarkAOWhenVisited", []];
private _nameLogic = format ["area_danger_%1", ([1000, 9999] call BIS_fnc_randomInt)];
private _areaLogic = _logic getVariable ["objectarea", []];
private _posLogic = getPos _logic;
private _posSizeLogic = [_areaLogic select 0, _areaLogic select 1];
private _posAngleLogic = _areaLogic select 2;
private _posRectLogic = _areaLogic select 3;
private _shapeLogic = "ELLIPSE";
if (_posRectLogic) then { _shapeLogic = "RECTANGLE"; };

createMarkerLocal [_nameLogic, _posLogic, -1];
_nameLogic setMarkerShapeLocal _shapeLogic;
_nameLogic setMarkerAlphaLocal 0;
_nameLogic setMarkerSizeLocal _posSizeLogic;
_nameLogic setMarkerBrushLocal "DIAGGRID";
_nameLogic setMarkerDirLocal _posAngleLogic;
_nameLogic setMarkerColorLocal "ColorRed";
_nameLogic setMarkerDrawPriority 1;

private _sync = (synchronizedObjects _logic ) select { _x isKindOf "EmptyDetector"; };

private _trigger = nil;

if (count _sync <= 0) then {
    _trigger = createTrigger ["EmptyDetector", getPosWorld _logic, true];
    _trigger setTriggerActivation ["ANYPLAYER", "PRESENT", true];
    private _pos1 = ((_areaLogic select 0)) * _sizeAO;
    private _pos2 = ((_areaLogic select 1)) * _sizeAO;
    if (_pos1 < BSM_SO_CBA_MINAOSIZE) then { _pos1 = BSM_SO_CBA_MINAOSIZE; };
    if (_pos2 < BSM_SO_CBA_MINAOSIZE) then { _pos2 = BSM_SO_CBA_MINAOSIZE; };
    _trigger setTriggerArea [_pos1, _pos2, _posAngleLogic, _posRectLogic, -1];
    private _triggerCondition = "this";
    if (_nameAO != "") then { 
        _trigger setVariable ["theLogic", _logic, true]; 
        _trigger setVariable ["theAOName", _nameAO, true]; 
        _trigger setVariable ["theVisitCondition", _logic getVariable ["SpecOps_AOActivateWhenVisited", []], true]; 
        _trigger setTriggerStatements ["[thisTrigger, this, thisList] call SpecOps_fnc_aoSelfTriggerCondition;", "thisTrigger setVariable ['thisListTrigger', thisList]; [(thisTrigger getVariable ['theLogic', objNull]), thisTrigger] call SpecOps_fnc_aoModuleActivate;","[(thisTrigger getVariable ['theLogic', objNull]), thisTrigger] call SpecOps_fnc_aoModuleDeactivate;" ]; 
    } else { 
        _trigger setTriggerStatements [ _triggerCondition, "thisTrigger setVariable ['thisListTrigger', thisList];","" ]; 
    }; 
} else {
    _trigger = _sync select 0;
    private _existingTrigger = triggerStatements _trigger;
    _trigger setVariable ["theLogic", _logic, true]; 
    _trigger setVariable ["theAOName", _nameAO, true]; 
    _trigger setVariable ["theVisitCondition", _logic getVariable ["SpecOps_AOActivateWhenVisited", []], true]; 
    private _activation = (_existingTrigger select 1) +  " thisTrigger setVariable ['thisListTrigger', thisList]; [(thisTrigger getVariable ['theLogic', objNull]), thisTrigger] call SpecOps_fnc_aoModuleActivate;";
    private _deactivation = (_existingTrigger select 2) +  "[(thisTrigger getVariable ['theLogic', objNull]), thisTrigger] call SpecOps_fnc_aoModuleDeactivate;";
    _trigger setTriggerStatements [_existingTrigger select 0, _activation, _deactivation]; 
};

private _dangerZoneTrigger = createTrigger ["EmptyDetector", getPosWorld _logic, true];
_dangerZoneTrigger setVariable ['bsm_so_parentTrigger', _trigger, true];
_dangerZoneTrigger setVariable ["theLogic", _logic, true]; 
if (_nameAO != "") then {
    _dangerZoneTrigger setVariable ["theAOName", format["%1_inner", _nameAO], true]; 
};
_dangerZoneTrigger setTriggerActivation ["ANYPLAYER", "PRESENT", true];
_dangerZoneTrigger setTriggerArea [((_areaLogic select 0)), ((_areaLogic select 1)) , _posAngleLogic, _posRectLogic, -1];
private _triggerCondition = "[thisTrigger, (this && (triggerActivated (thisTrigger getVariable ['bsm_so_parentTrigger', objNull]))), thisList] call SpecOps_fnc_aoSelfTriggerCondition;";
_dangerZoneTrigger setTriggerStatements [ _triggerCondition, "thisTrigger setVariable ['thisListTrigger', thisList];","" ]; 

private _syncModules = (synchronizedObjects _logic ) select { (_x isKindOf "Module_F") && !(_x isKindOf "bsm_so_ao_building_module") && !(_x isKindOf "bsm_so_ao_module")};
{
    private _syncTo = _x getVariable ["SpecOps_Trigger_Linking", 0];
    if (_syncTo == 0 || _syncTo == -1) then {
        _x synchronizeObjectsAdd [_trigger];
        _trigger synchronizeObjectsAdd [_x];
        _x setVariable ["bsm_trigger_ready", true, true];
    };
    if (_syncTo == 1) then {
        _x synchronizeObjectsAdd [_dangerZoneTrigger];
        _dangerZoneTrigger synchronizeObjectsAdd [_x];
        _x setVariable ["bsm_trigger_ready", true, true];
    }; 

} forEach (_syncModules);

_logic setVariable ["triggerAO", _trigger];
private _nameW = format ["area_warning_%1_%2", (get3DENEntityID _logic), ([1000, 9999] call BIS_fnc_randomInt)];
private _posTriggerW = triggerArea _trigger;
private _posW = getPos _trigger;
private _posSizeW = [_posTriggerW select 0, _posTriggerW select 1];
private _posAngleW = _posTriggerW select 2;
private _posRectW = _posTriggerW select 3;
private _shapeW = "ELLIPSE";
if (_posRectW) then { _shapeW = "RECTANGLE"; };

createMarkerLocal [_nameW, _posW, -1];
_nameW setMarkerShapeLocal _shapeW;
_nameW setMarkerAlphaLocal 0;
_nameW setMarkerSizeLocal _posSizeW;
_nameW setMarkerBrushLocal "DIAGGRID";
_nameW setMarkerDirLocal _posAngleW;
_nameW setMarkerColorLocal "ColorOrange";
_nameW setMarkerDrawPriority 0;

if (_markAO) then {
    _nameLogic setMarkerAlpha 0.75;
    _nameW setMarkerAlpha 0.5;
};

if (count _markAOWhenVisited > 0) then {
    [_nameLogic, _nameW, _markAO, _markAOWhenVisited] spawn {
        params ["_nameLogic", "_nameW", "_markAO", ["_whenVisited", []]];
        if (count _whenVisited > 0) then {
            waitUntil { uiSleep 1; (([true, _whenVisited] call SpecOps_fnc_missionActivateTriggerWhenVisited)) };
            _nameLogic setMarkerAlpha 0.75;
            _nameW setMarkerAlpha 0.5;
        };
    };
};


diag_log format ["SPEC-OPS: %1.", _logic];
diag_log format ["SPEC-OPS: allvariables %1.", allvariables _logic];
private _moduleArea = _logic getVariable ["objectarea", nil];
if (isNil "_moduleArea") exitWith { diag_log format ["SPEC-OPS: Cannot find area for the module."]; };


private _moduleAreaArray = [getPos _logic, (_moduleArea select 0), (_moduleArea select 1), _moduleArea select 2, _moduleArea select 3, _moduleArea select 4];

diag_log "SPEC-OPS: Running AO Module Initializer";


private _tier = _logic getVariable ["SpecOps_ForcedTier", 3];
private _allowedGore = _logic getVariable ["SpecOps_AllowGore", true];

private _areaPos = getPos _logic;
private _areaHalfSize = (_moduleArea select 0);
private _totalEnemies = _logic getVariable ["SpecOps_MaxEnemies", 5];
private _intelMax = _logic getVariable ["SpecOps_Intel", 0];
private _markAO = _logic getVariable ["SpecOps_MarkAO", true];
private _markedBuildings = _logic getVariable ["SpecOps_MarkBuildings", true];
private _markedBuildingsAOOnly = _logic getVariable ["SpecOps_MarkedBuildingOnlyAO", true];

private _leaderNb = _logic getVariable ["SpecOps_Leaders", 0];
private _hostagesNb = _logic getVariable ["SpecOps_Hostages", 0];
private _maxIED = _logic getVariable ["SpecOps_MaxIED", 0];
private _garrisonRatio = _logic getVariable ["SpecOps_GarrisonRate", 0.7];


private _staticHmgs = _logic getVariable ["SpecOps_StaticGunHighLMG", 0];
private _staticLmgs = _logic getVariable ["SpecOps_StaticGunLowLMG", 0];
private _staticMortars = _logic getVariable ["SpecOps_StaticGunMortars", 0];
private _staticAAs = _logic getVariable ["SpecOps_StaticGunAA", 0];
private _staticSams = _logic getVariable ["SpecOps_StaticGunSam", 0];
private _staticLights = _logic getVariable ["SpecOps_StaticGunLight", 0];
private _staticGunnerCount = (_staticHmgs + _staticLmgs + _staticMortars + _staticAAs + _staticSams + _staticLights);

private _outskirtMode = _logic getVariable ["SpecOps_SpawnVecOutskirt", false];

private _vehicleTechnicalCount = _logic getVariable ["SpecOps_TechnicalVehicles", 0];

private _transportIndicator = _logic getVariable ["SpecOps_TransportTruckIndicator", false];
private _vehicleTankCount = _logic getVariable ["SpecOps_TankVehicles", 0];
private _vehicleAntiAircraftCount = _logic getVariable ["SpecOps_AntiAircraftVehicles", 0];
private _civilianGroupNb = _logic getVariable ["SpecOps_CivilianNb", 0];
private _faction = _logic getVariable ["SpecOps_Faction", ""]; 
private _factionCamo = _logic getVariable ["SpecOps_FactionCamo", ""]; 
private _factionCiv = _logic getVariable ["SpecOps_FactionCivilian", ""]; 

private _isOutsideOnly = _logic getVariable ["SpecOps_OutsideOnly", false];
private _isMaskedFighter = _logic getVariable ["SpecOps_MaskedFigthers", false];

private _sideVar = _logic getVariable ["SpecOps_FactionSide", 1]; 
private _side = east;

if (_sideVar == 0) then { _side = west; _faction = [_faction, "_O_", "_B_"] call CBA_fnc_replace; };
if (_sideVar == 1) then { _side = east; };
if (_sideVar == 2) then { _side = independent; _faction = [_faction, "_O_", "_I_"] call CBA_fnc_replace; };

if (_faction == "" || _factionCiv == "" || _factionCamo == "") exitWith { systemChat format ["SPEC-OPS: Faction not configured."]; };
// if a building ao is linked then we turn off garison and only garrison those specific buildings area.
// this is the concentrate objectives into parts of the larger AO.
private _syncedBuildings = (synchronizedObjects _logic ) select { _x isKindOf "bsm_so_ao_building_module"; };
if (count _syncedBuildings > 0) then {
    _garrisonRatio = 0; 
    {
        private _childLogic = _x;
        diag_log format ["SPEC-OPS: Calling Building AO Module: %1.", _childLogic];
        [_logic, _childLogic, _trigger] call SpecOps_fnc_aoBuildingModuleInitialize;
    } forEach (_syncedBuildings);
};

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



if (_garrisonRatio > 0) then {
    _generatedAO = [_logic, _areaPos, _areaHalfSize, _totalEnemies, _leaderNb, _intelMax, _staticGunnerCount, _maxIED, _hostagesNb, _garrisonRatio, _tier, _faction, _factionCamo, _side, _assignedBuildings, _isOutsideOnly, _isMaskedFighter] call SpecOps_fnc_aoModuleGeneratingBuildings;
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
};


private _roads =  (_areaPos nearRoads (_areaHalfSize + (_moduleArea select 1))) select { _x inArea _moduleAreaArray;  };


private _outskirt = [[_areaPos, _areaHalfSize * 0.80, _areaHalfSize * 0.80, 0, false, 1], [_areaPos, _areaHalfSize, _areaHalfSize, 0, false, 1]];
private _outskirtRoads = _roads select { !((getPos _x) inArea (_outskirt select 0)) && {((getPos _x) inArea (_outskirt select 1))} };

 

{  _x setDamage 0; } forEach (_aoAllBuildings);

private _vehicleRoads = _roads;
if (_outskirtMode) then {
    _vehicleRoads = _outskirtRoads;
};
private _footPatrolRoads = [];
private _patrolVehicles = [];
private _patrolVehicleUnits = [];
private _vehicleSpotBlackListArea = [];

private _groups = [];


private _footPatrolRoads = _roads;

private _patrolCivilianUnits = [];
private _patrolToSpawn = [];

private _patrolEnemyUnits = [];
if(_patrolEnemies <= 0) then {_patrolEnemies = 1;};
private _fireteamCount = floor (_patrolEnemies / 4);

private _usingTileSystem = count (missionNamespace getVariable ["bsm_so_defined_tiles_enemies", []]) > 0;
private _staticVehicles = []; 
private _decorations = []; 
private _patrolCivilianUnits = [];
private _patrolVehicles = []; 
private _patrolVehicleUnits = [];
if (!_usingTileSystem) then {
    for "_i" from 1 to _vehicleTechnicalCount do {
        if (count _vehicleRoads <= 0) exitWith { };
        private _vehicleSelect = ([_faction, "VehicleTechnicals"] call SpecOps_fnc_getEnemyVehicle);
        if (isNil "_vehicleSelect") exitWith {};
        private _takeRoad = selectRandom _vehicleRoads;
        if (isNil "_takeRoad") exitWith {};
        _vehicleSpotBlackListArea pushback [getPos _takeRoad, 25, 25, false, 10];
        _vehicleRoads = _vehicleRoads - [_takeRoad];
        _roads = _roads - [_takeRoad];
        private _blacklistedRoads = [];
        {
            private _isInBlackList = (getPos _x) inArea [(getPos _takeRoad), 10, 10, 0, false, 10];
            if (_isInBlackList) then { 
                _footPatrolRoads pushback _x; 
                _vehicleRoads = _vehicleRoads - [_x];
            };
        } forEach (_vehicleRoads);
        
        private _roadInfo = getRoadInfo _takeRoad;
        _roadInfo params ["_mapType", "_width", "_isPedestrian", "_texture", "_textureEnd", "_material", "_begPos", "_endPos", "_isBridge"];
        private _roadDirection = _begPos getDir _endPos;
        
        private _vehGroup = [getPos _takeRoad, _side, [_vehicleSelect], [], [], [], [], [-1, 1], _roadDirection] call BIS_fnc_spawnGroup;
        _vehGroup setVariable ["acex_headless_blacklist", true];
        private _vehObj = vehicle (leader _vehGroup);
        private _vehCrew = units _vehGroup;
        _patrolVehicles pushback _vehObj;
        clearWeaponCargoGlobal _vehObj; 
        clearMagazineCargoGlobal _vehObj; 
        clearItemCargoGlobal _vehObj;
        clearBackpackCargo _vehObj;
        _vehObj forceFollowRoad true;
        _vehObj hideObjectGlobal true;
        _vehObj enableSimulationGlobal false;
        _patrolVehicleUnits append _vehCrew;
        _groups pushbackUnique _vehGroup;
    };

    for "_i" from 1 to _vehicleTankCount do {
        if (count _vehicleRoads <= 0) exitWith {  };
        private _vehicleSelect = ([_faction, "VehicleTanks"] call SpecOps_fnc_getEnemyVehicle);
        if (isNil "_vehicleSelect") exitWith {  };
        private _takeRoad = selectRandom _vehicleRoads;
        if (isNil "_takeRoad") exitWith {  };
        _vehicleSpotBlackListArea pushback [getPos _takeRoad, 25, 25, false, 10];
        _vehicleRoads = _vehicleRoads - [_takeRoad];
        _roads = _roads - [_takeRoad];
        private _blacklistedRoads = [];
        {
            private _isInBlackList = (getPos _x) inArea [(getPos _takeRoad), 10, 10, 0, false, 10];
            if (_isInBlackList) then { 
                _footPatrolRoads pushback _x; 
                _vehicleRoads = _vehicleRoads - [_x];
            };
        } forEach (_vehicleRoads);
        private _roadInfo = getRoadInfo _takeRoad;
        _roadInfo params ["_mapType", "_width", "_isPedestrian", "_texture", "_textureEnd", "_material", "_begPos", "_endPos", "_isBridge"];
        private _roadDirection = _begPos getDir _endPos;
        private _vehGroup = [getPos _takeRoad, _side, [_vehicleSelect], [], [], [], [], [-1, 1], _roadDirection] call BIS_fnc_spawnGroup;
        _vehGroup setVariable ["acex_headless_blacklist", true];
        private _vehObj = vehicle (leader _vehGroup);
        private _vehCrew = units _vehGroup;
        _patrolVehicles pushback _vehObj;
        clearWeaponCargoGlobal _vehObj; 
        clearMagazineCargoGlobal _vehObj; 
        clearItemCargoGlobal _vehObj;
        clearBackpackCargo _vehObj;
        _vehObj forceFollowRoad true;
        _vehObj hideObjectGlobal true;
        _vehObj enableSimulationGlobal false;
        _patrolVehicleUnits append _vehCrew;
        _groups pushbackUnique _vehGroup;
    };

    for "_i" from 1 to _vehicleAntiAircraftCount do {
        if (count _vehicleRoads <= 0) exitWith { };
        private _vehicleSelect = ([_faction, "VehicleAntiAircraft"] call SpecOps_fnc_getEnemyVehicle);
        if (isNil "_vehicleSelect") exitWith {};
        private _takeRoad = selectRandom _vehicleRoads;
        if (isNil "_takeRoad") exitWith {};
        _vehicleSpotBlackListArea pushback [getPos _takeRoad, 25, 25, false, 10];
        _vehicleRoads = _vehicleRoads - [_takeRoad];
        _roads = _roads - [_takeRoad];
        private _blacklistedRoads = [];
        {
            private _isInBlackList = (getPos _x) inArea [(getPos _takeRoad), 10, 10, 0, false, 10];
            if (_isInBlackList) then { 
                _footPatrolRoads pushback _x; 
                _vehicleRoads = _vehicleRoads - [_x];
            };
        } forEach (_vehicleRoads);

        private _roadInfo = getRoadInfo _takeRoad;
        _roadInfo params ["_mapType", "_width", "_isPedestrian", "_texture", "_textureEnd", "_material", "_begPos", "_endPos", "_isBridge"];
        private _roadDirection = _begPos getDir _endPos;
        private _vehGroup = [getPos _takeRoad, _side, [_vehicleSelect], [], [], [], [], [-1, 1], _roadDirection] call BIS_fnc_spawnGroup;
        _vehGroup setVariable ["acex_headless_blacklist", true];
        private _vehObj = vehicle (leader _vehGroup);
        private _vehCrew = units _vehGroup;
        _patrolVehicles pushback _vehObj;
        clearWeaponCargoGlobal _vehObj; 
        clearMagazineCargoGlobal _vehObj; 
        clearItemCargoGlobal _vehObj;
        clearBackpackCargo _vehObj;
        _vehObj hideObjectGlobal true;
        _vehObj enableSimulationGlobal false;
        _patrolVehicleUnits append _vehCrew;
        _groups pushbackUnique _vehGroup;
    };

    for "_i" from 1 to _fireteamCount do {
        if (count _footPatrolRoads <= 0) exitWith { };
        private _road = selectRandom _footPatrolRoads;
        _footPatrolRoads = _footPatrolRoads - [_road];

         private _safePos = [[getPos _logic, _areaLogic]] call BIS_fnc_randomPosTrigger;

        if (count _safePos <= 0 || { (_safePos select 0) == 0 && (_safePos select 1) == 0}) then { continue; }; 
        private _prob = [
            format ["%1_Rifleman_%2", _faction, _factionCamo], 90,
            format ["%1_GL_%2", _faction, _factionCamo], 5,
            format ["%1_AR_%2", _faction, _factionCamo], 5
        ];
        private _fireteam = [
            format ["%1_Rifleman_%2", _faction, _factionCamo],
            format ["%1_Rifleman_%2", _faction, _factionCamo],
            (selectRandomWeighted _prob),
            format ["%1_AR_%2", _faction, _factionCamo]
        ];

        private _patrolType = [
            "STAY_IN", 100,
            "PATROL_BUILDING", 1,
            "DEFEND_BUILDING", 1
        ];
        if (_fireteamCount <= 2) then {
            _patrolType set [3, 0];
            _patrolType set [5, 0];
        }else {
            _patrolType set [1, 0.3];
            _patrolType set [3, 2.5];
            _patrolType set [5, 1.3];
        }; 

        private _selectedPatrolType = selectRandomWeighted _patrolType;
        private _patrolPosition = getPos _logic;
        private _patrolSize = _areaHalfSize;
        private _units = [_fireteam, _safePos, _selectedPatrolType, _patrolPosition, _patrolSize, true, _side] call SpecOps_fnc_aoSpawnEnemyPatrol;  
        _patrolEnemyUnits append _units;
    };

    private _patrolCivilianToSpawn = [];
    private _allCivilians = ("getNumber (_x >> 'side') == 3 &&  getText (_x >> 'faction') == _factionCiv" configClasses (configfile >> "CfgVehicles") apply { configName _x });
    if (count _allCivilians > 0) then {
        for "_i" from 1 to _civilianGroupNb do {
            if (count _footPatrolRoads <= 0) exitWith { };
            private _road = selectRandom _footPatrolRoads;
            private _safePos = [[getPos _logic, _areaLogic]] call BIS_fnc_randomPosTrigger;
            if (count _safePos <= 0) exitWith { };
            private _civilianPool = [
                [(selectRandom _allCivilians), (selectRandom _allCivilians)], 100,
                [(selectRandom _allCivilians), (selectRandom _allCivilians), (selectRandom _allCivilians)], 1
            ];

            private _patrolPosition = getPos _logic;
            private _patrolSize = _areaHalfSize / 2;
            _patrolCivilianToSpawn pushback [_safePos, (selectRandomWeighted _civilianPool)];
            private _units = [_safePos, (selectRandomWeighted _civilianPool)] call SpecOps_fnc_aoSpawnCivilianPatrol;
            _patrolCivilianUnits append _units;
        };
    };
} else {

    private _missionObject = allMissionObjects "All";   
    private _dressupMapEnemies = (missionNamespace getVariable ["bsm_so_defined_tiles_enemies", []]) apply { _x select { ((_x select 0)) inArea _moduleAreaArray; }; };
    _dressupMapEnemies = _dressupMapEnemies apply { 
        _x select { 
            _pos = ((_x select 0));
            _res = true;
            {
                if ((_pos distance _x) <= 20) exitWith {_res = false; };
            } forEach (_missionObject); 
            _res;
        }; 
    };
    _dressupMapEnemies = _dressupMapEnemies - [[]];
	_dressupMapEnemies = _dressupMapEnemies call BIS_fnc_arrayShuffle;
    private _dressupMapCivilians = (missionNamespace getVariable ["bsm_so_defined_tiles_civilians", []]) apply { _x select { ((_x select 0)) inArea _moduleAreaArray; }; };
    _dressupMapCivilians = _dressupMapCivilians apply { 
        _x select { 
            _pos = ((_x select 0));
            _res = true;
            {
                if ((_pos distance _x) <= 20) exitWith {_res = false; };
            } forEach (_missionObject); 
            _res;
        }; 
    };
    _dressupMapCivilians = _dressupMapCivilians - [[]];
	_dressupMapCivilians = _dressupMapCivilians call BIS_fnc_arrayShuffle;
    private _dressupMapFurnitures = (missionNamespace getVariable ["bsm_so_defined_tiles_furnitures", []]) select { (_x select 1) inArea _moduleAreaArray; };
    _dressupMapFurnitures = _dressupMapFurnitures select { 
        _pos = ((_x select 1));
        _res = true;
        {
            if ((_pos distance _x) <= 20) exitWith {_res = false; };
        } forEach (_missionObject); 
        _res;
    };
	_dressupMapFurnitures = _dressupMapFurnitures call BIS_fnc_arrayShuffle;
    private _dressupMapVehicles = (missionNamespace getVariable ["bsm_so_defined_tiles_vehicles", []]) select { (_x select 0) inArea _moduleAreaArray;  };
    _dressupMapVehicles = _dressupMapVehicles select { 
        _pos = ((_x select 0));
        _res = true;
        {
            if ((_pos distance _x) <= 20) exitWith {_res = false; };
        } forEach (_missionObject); 
        _res;
    };
	_dressupMapVehicles = _dressupMapVehicles call BIS_fnc_arrayShuffle;
    private _dressupMapStaticWeapons = (missionNamespace getVariable ["bsm_so_defined_tiles_staticWeapons", []]) select { (_x select 0) inArea _moduleAreaArray; };
    _dressupMapStaticWeapons = _dressupMapStaticWeapons select { 
        _pos = ((_x select 0));
        _res = true;
        {
            if ((_pos distance _x) <= 20) exitWith {_res = false; };
        } forEach (_missionObject); 
        _res;
    };
	_dressupMapStaticWeapons = _dressupMapStaticWeapons call BIS_fnc_arrayShuffle;

    {
        private _itemClass = _x select 0;
        private _pos = _x select 1;
        private _dirVec = _x select 2;
        private _upVec = _x select 3;
        private _rot = _x select 4;
        private _options = _x select 5;
        private _isVisibleFromOutside = (_options select 0 == 1);
        private _isHiddenDay = (_options select 6 == 1);
        private _isHiddenNight = (_options select 7 == 1);
        private _isDemoLead = (_options select 1 == 1);
        private _isDemoTrigger = (_options select 2 == 1);
        private _isHackable = (_options select 3 == 1);
        private _isImportant = (_options select 4 == 1);
        private _isVehicle = (_options select 6 == 1);
        private _object = objNull;
        if (_isHackable || _isDemoLead || _isDemoTrigger) then {
            _object = _itemClass createVehicle _pos;
            _object animateSource ["server_hide_source", 1, true];
        } else {
            if (_isVehicle) then {
                _object = _itemClass createVehicle _pos;
            }else {
                _object = createSimpleObject [_itemClass, _pos, false];
            };
        }; 
        if (isNull _object) then { continue; };
        _object setPosATL _pos;
        _object setVectorDir _dirVec;
        _object setVectorUp _upVec;
        _object setVariable ["Unit_VisibleFromOutside", _isVisibleFromOutside];
        _object setVariable ["SpecOps_HideAtDay", _isHiddenDay];
        _object setVariable ["SpecOps_HideAtNight", _isHiddenNight];
        _object setVariable ["bsm_so_isHackable", _isHackable, true];
        _object setVariable ["bsm_so_isSabotagable", _isDemoTrigger, true];
        _object allowdamage false;
        _object hideObjectGlobal true;
        _object enableSimulationGlobal false;
        _decorations pushBackUnique _object;
    } forEach (_dressupMapFurnitures);
    

    {
        private _positionSets = _x call BIS_fnc_arrayShuffle;
        private _unitToSetup = [];
        {
            if (_totalEnemies <= 0) exitWith {};
            private _pos = _x select 0;
            private _dirVec = _x select 1;
            private _upVec = _x select 2;
            private _rot = _x select 3;
            private _options = _x select 4; 
            private _allowAll = ((_options select 1) == 0) && ((_options select 1) == 0) && ((_options select 2) == 0) && ((_options select 3) == 0) && ((_options select 4) == 0);
            private _prob = [];
            if ((_options select 1) == 1 || _allowAll) then { _prob append [format ["%1_Rifleman_%2", _faction, _factionCamo], 100]; };
            if ((_options select 2) == 1 || _allowAll) then { _prob append [format ["%1_AR_%2", _faction, _factionCamo], 20]; };
            if ((_options select 3) == 1 || _allowAll) then { _prob append [format ["%1_GL_%2", _faction, _factionCamo], 0.5]; };
            if ((_options select 4) == 1 || _allowAll) then { 
                _prob append [
                    format ["%1_Medic_%2", _faction, _factionCamo], 1,
                    format ["%1_RTO_%2", _faction, _factionCamo], 1
                ]; 
            };
            if ((_options select 5) == 1) then { _prob append [format ["%1_SNP_%2", _faction, _factionCamo], 100]; };
            private _selectUnitType = selectRandomWeighted _prob; 
            _unitToSetup pushback [_x, _selectUnitType];
            _totalEnemies = _totalEnemies - 1;
        } forEach (_positionSets);

        private _safePos = [[getPos _logic, _areaLogic]] call BIS_fnc_randomPosTrigger;
        private _group = [_safePos, _side, (_unitToSetup apply { _x select 1 }),[],[],[],[],[],0, true] call BIS_fnc_spawnGroup;
        {
            private _unit = _x;
            private _posToSet = nil;
            { if (_unit isKindOf (_x select 1)) exitWith { _posToSet = _x; }; } forEach (_unitToSetup);
            if (isNil "_posToSet") then { continue; };
            _unitToSetup = _unitToSetup - [_posToSet];
            [_unit, _posToSet] call SpecOps_fnc_aoSetupFullUnit; 
            _unit hideObjectGlobal true; 
            _unit enableSimulation false; 
        } forEach(units _group);
        _group deleteGroupWhenEmpty true;
        _patrolEnemyUnits append (units _group);
    } forEach (_dressupMapEnemies);

    private _transportTruckCount = 0;
    if (_transportIndicator && count _patrolEnemyUnits > 0) then {
        _transportTruckCount = floor ((count _patrolEnemyUnits) / 12);
    };

    {
        private _pos = _x select 0;
        private _dirVec = _x select 1;
        private _upVec = _x select 2;
        private _rot = _x select 3;
        private _options = _x select 4; 
        private _vehicleType = (_options select 0);
        private _vehicleSelect = nil;
        diag_log format ["BSM (_dressupMapVehicles): %1", _options];

        switch (_vehicleType) do {
            case 0: { _vehicleSelect = ([_faction, "VehicleAntiAircraft"] call SpecOps_fnc_getEnemyVehicle); };
            case 1: { _vehicleSelect = ([_faction, "VehicleTanks"] call SpecOps_fnc_getEnemyVehicle); };
            case 2: { _vehicleSelect = ([_faction, "VehicleTechnicals"] call SpecOps_fnc_getEnemyVehicle); };
            case 3: { _vehicleSelect = ([_faction, "VehicleTransport"] call SpecOps_fnc_getEnemyVehicle); };
            default { _vehicleSelect = nil; };
        };
        if (isNil "_vehicleSelect") then { continue; };
        if (_vehicleType == 0 && _vehicleAntiAircraftCount <= 0) then { continue; };
        if (_vehicleType == 1 && _vehicleTankCount <= 0) then { continue; };
        if (_vehicleType == 2 && _vehicleTechnicalCount <= 0) then { continue; };
        if (_vehicleType == 3 && _transportTruckCount <= 0) then { continue; };

        if (_vehicleType == 0) then { _vehicleAntiAircraftCount = _vehicleAntiAircraftCount - 1; };
        if (_vehicleType == 1) then { _vehicleTankCount = _vehicleTankCount - 1; };
        if (_vehicleType == 2) then { _vehicleTechnicalCount = _vehicleTechnicalCount - 1; };
        if (_vehicleType == 3) then { _transportTruckCount = _transportTruckCount - 1; };
        diag_log format ["BSM (_dressupMapVehicles): _vehicleSelect = %1", _vehicleSelect];
        private _vehGroup = grpNull;
        private _vec = objNull;
        if (_vehicleType == 3) then {
            _vec = createVehicle [_vehicleSelect, _pos, [], 0, "CAN_COLLIDE"];
            diag_log format ["BSM (_dressupMapVehicles): _vec = %1", _vec];
        } else {
            _vehGroup = [_pos, _side, [_vehicleSelect], [], [], [], [], [-1, 1], _rot] call BIS_fnc_spawnGroup;
            _vec = vehicle (leader _vehGroup);
            _vehGroup deleteGroupWhenEmpty true;
            diag_log format ["BSM (_dressupMapVehicles): _vec = %1", _vec];
        };
        if (isNull _vec) then { continue; };
        clearWeaponCargoGlobal _vec; 
        clearMagazineCargoGlobal _vec; 
        clearItemCargoGlobal _vec;
        clearBackpackCargo _vec;
        _vec setVectorDir _dirVec;
        _vec setVectorUp _upVec;
        _vec allowdamage false;
        _vec hideObjectGlobal true;
        _vec enableSimulationGlobal false;
        diag_log format ["BSM (_dressupMapVehicles): push to _patrolVehicles _vec = %1", _vec];
        _patrolVehicles pushBackUnique _vec;
        if (!isNull _vehGroup) then {
            private _vehCrew = units _vehGroup;
            _patrolVehicleUnits append _vehCrew;
        };
    } forEach (_dressupMapVehicles);

    {
        diag_log format ["BSM (_dressupMapStaticWeapons): _x = %1", _x];

        private _pos = _x select 0;
        private _dirVec = _x select 1;
        private _upVec = _x select 2;
        private _rot = _x select 3;
        private _options = _x select 4; 
        private _staticType = (_options select 0);
        private _staticSelect = nil;
        switch (_staticType) do {
            case 0: { _staticSelect = ([_faction, "SamSystem"] call SpecOps_fnc_getEnemyVehicle); };
            case 1: { _staticSelect = ([_faction, "StaticAntiAir"] call SpecOps_fnc_getEnemyVehicle); };
            case 2: { _staticSelect = ([_faction, "StaticMotar"] call SpecOps_fnc_getEnemyVehicle); };
            case 3: { _staticSelect = ([_faction, "StaticLowMG"] call SpecOps_fnc_getEnemyVehicle); };
            case 4: { _staticSelect = ([_faction, "StaticHighMG"] call SpecOps_fnc_getEnemyVehicle); };
            case 5: { _staticSelect = ([_faction, "SearchLight"] call SpecOps_fnc_getEnemyVehicle); };
            case 6: { _staticSelect = selectRandom ["APERSMine", "APERSBoundingMine"]; };
            default { _staticSelect = nil; };
        };
        diag_log format ["BSM (_dressupMapStaticWeapons): _staticSelect = %1", _staticSelect];
        if (isNil "_staticSelect") then { continue; };
        if (typeName _staticSelect == "ARRAY") then { _staticSelect = _staticSelect select 0; };
        if (typename _staticSelect != "STRING") then { continue; };
        diag_log format ["BSM (_dressupMapStaticWeapons): _staticSelect %1", _staticSelect];
        if (_staticType == 0 && _staticSams <= 0) then { continue; };
        if (_staticType == 1 && _staticAAs <= 0) then { continue; };
        if (_staticType == 2 && _staticMortars <= 0) then { continue; };
        if (_staticType == 3 && _staticLmgs <= 0) then { continue; };
        if (_staticType == 4 && _staticHmgs <= 0) then { continue; };
        if (_staticType == 5 && _staticLights <= 0) then { continue; };
        if (_staticType == 6 && _maxIED <= 0) then { continue; };

        if (_staticType == 0) then { _staticSams = _staticSams - 1; };
        if (_staticType == 1) then { _staticAAs = _staticAAs - 1; };
        if (_staticType == 2) then { _staticMortars = _staticMortars - 1; };
        if (_staticType == 3) then { _staticLmgs = _staticLmgs - 1; };
        if (_staticType == 4) then { _staticHmgs = _staticHmgs - 1; };
        if (_staticType == 6) then { _maxIED = _maxIED - 1; };
        if (typename _staticSelect == "ARRAY") then { _staticSelect = _staticSelect select 0; };

        private _vehGroup = grpNull;
        private _leader = objNull;
        private _vec = objNull;
        if (_staticType == 6 || _staticType == 0) then {
            _vec = createVehicle [_staticSelect, _pos, [], 0, "CAN_COLLIDE"];
            diag_log format ["BSM (_dressupMapStaticWeapons): _vec = %1", _vec];
        } else {
            _vehGroup = [_pos, _side, [_staticSelect], [], [], [], [], [-1, 1], _rot] call BIS_fnc_spawnGroup;
            _leader = leader _vehGroup;
            _vec = vehicle _leader;
            _vehGroup deleteGroupWhenEmpty true;
            diag_log format ["BSM (_dressupMapStaticWeapons): _vec = %1", _vec];
        };
        if (isNull _vec) then { continue; };
        clearWeaponCargoGlobal _vec; 
        clearMagazineCargoGlobal _vec; 
        clearItemCargoGlobal _vec;
        clearBackpackCargo _vec;
        _vec setVectorDir _dirVec;
        _vec setVectorUp _upVec;
        _vec allowdamage false;
        _vec hideObjectGlobal true;
        _vec enableSimulationGlobal false;
        _staticVehicles pushBackUnique _vec;
        if (!isNull _vehGroup) then {
            private _vehCrew = units _vehGroup;
            _patrolVehicleUnits append _vehCrew;
        };

    } forEach (_dressupMapStaticWeapons);
    
    private _allCivilians = ("getNumber (_x >> 'side') == 3 &&  getText (_x >> 'faction') == _factionCiv" configClasses (configfile >> "CfgVehicles") apply { configName _x });
    {
        if (count _dressupMapCivilians <= 0) exitWith {};
        private _positionSets = _x call BIS_fnc_arrayShuffle;
        private _unitToSetup = [];
        {
            if (_civilianGroupNb <= 0) exitWith {};
            private _pos = _x select 0;
            private _dirVec = _x select 1;
            private _upVec = _x select 2;
            private _rot = _x select 3;
            private _options = _x select 4; 
            private _prob = [];
            private _selectUnitType = selectRandom _allCivilians; 
            _unitToSetup pushback [_x, _selectUnitType];
            _civilianGroupNb = _civilianGroupNb - 1;
        } forEach (_positionSets);

        private _safePos = [[getPos _logic, _areaLogic]] call BIS_fnc_randomPosTrigger;
        private _group = [_safePos, civilian, (_unitToSetup apply { _x select 1 }),[],[],[],[],[],0, true] call BIS_fnc_spawnGroup;
        {
            private _unit = _x;
            private _posToSet = nil;
            { if (_unit isKindOf (_x select 1)) exitWith { _posToSet = _x; }; } forEach (_unitToSetup);
            if (isNil "_posToSet") then { continue; };
            _unitToSetup = _unitToSetup - [_posToSet];
            _unit hideObjectGlobal true; 
            _unit enableSimulation false; 
        } forEach(units _group);
        _group deleteGroupWhenEmpty true;
        _patrolCivilianUnits append (units _group);
    } forEach (_dressupMapCivilians);


};



private _allMarkers = [];
if(_markedBuildings) then {
    {
        if (!([_x, 1] call BIS_fnc_isBuildingEnterable)) then { continue; };
        private _currentCount = missionNamespace getVariable ["bsm_dressup_mrk_count", 0];
        _currentCount = _currentCount + 1;
        missionNamespace setVariable ["bsm_dressup_mrk_count", _currentCount];

        _id = format ["aoBuilding_%1", _currentCount];
        _markerstr = createMarker [str _id, getPos _x];
        _markerstr setMarkerShape "ICON";
        _markerstr setMarkerType "hd_dot";
        _markerstr setMarkerSize [1, 1];
        _markerstr setMarkerColor "ColorRed";
        _allMarkers pushback str _id;
        
    } forEach (_aoActiveBuildings);
    if (_markedBuildingsAOOnly) then {
        ["hide", _allMarkers] spawn BIS_fnc_showMarkers;
    };
};


private _aoBuildingMarkers = _logic getVariable ["AO_Markers", []];
_aoBuildingMarkers append _allMarkers;
_logic setVariable ["AO_Markers", _aoBuildingMarkers];


private _aoBuildings = _logic getVariable ["AO_Buildings", []];
_aoBuildings append _aoActiveBuildings;
_logic setVariable ["AO_Buildings", _aoBuildings];

private _aoAllCqbBuildings = _logic getVariable ["AO_All_CQB_Buildings", []];
_aoAllCqbBuildings append _cqbBuildings;
_logic setVariable ["AO_All_CQB_Buildings", _aoAllCqbBuildings];

private _aoAllBogusBuildings = _logic getVariable ["AO_All_Bogus_Buildings", []];
_aoAllBogusBuildings append _bogusBuildings;
_logic setVariable ["AO_All_Bogus_Buildings", _aoAllBogusBuildings];

private _aoAllBuildingsVar = _logic getVariable ["AO_All_Buildings", []];
_aoAllBuildingsVar append _aoAllBuildings;
_logic setVariable ["AO_All_Buildings", _aoAllBuildingsVar];

private _aoPatrolVehicle = _logic getVariable ["AO_Patrol_Vehicle", []];
_aoPatrolVehicle append _patrolVehicles;
_aoPatrolVehicle append _staticVehicles;
_logic setVariable ["AO_Patrol_Vehicle", _aoPatrolVehicle];

private _aoDecoration = _logic getVariable ["AO_Decorations", []];
_aoDecoration append _decorations;
_logic setVariable ["AO_Decorations", _aoDecoration];

private _aoPatrolVehicleUnits = _logic getVariable ["AO_Patrol_Vehicle_Units", []];
_aoPatrolVehicleUnits append _patrolVehicleUnits;
_logic setVariable ["AO_Patrol_Vehicle_Units", _aoPatrolVehicleUnits];

private _aoPatrolCivilianUnits = _logic getVariable ["AO_Patrol_Civilian_Units", []];
_aoPatrolCivilianUnits append _patrolCivilianUnits;
_logic setVariable ["AO_Patrol_Civilian_Units", _aoPatrolCivilianUnits];

private _aoPatrolEnemyUnits = _logic getVariable ["AO_Patrol_Enemy_Units", []];
_aoPatrolEnemyUnits append _patrolEnemyUnits;
_logic setVariable ["AO_Patrol_Enemy_Units", _aoPatrolEnemyUnits];

[_logic, _aoPatrolEnemyUnits + _enemyUnits] call SpecOps_fnc_aoUnitSetupBehavior;

{
    private _building = _x;
	diag_log format ["SPEC-OPS (Ao Building): Listening to Death for %1 .", _building];
    if (isMultiplayer) then {
        _building addMPEventHandler ["MPKilled", {
            params ["_unit", "_killer"];
            _decoration = _unit getVariable ["AO_Decorations", []];
            _intels = _unit getVariable ["AO_Intels", []];
            diag_log format ["SPEC-OPS (Ao Building): Dead Building %1 | %2.", _intels, _decoration];
            { _x hideObjectGlobal true; } forEach (_decoration + _intels);
        }];
    } else {
        _building addEventHandler ["Killed", {
            params ["_unit", "_killer"];
            _decoration = _unit getVariable ["AO_Decorations", []];
            _intels = _unit getVariable ["AO_Intels", []];
            diag_log format ["SPEC-OPS (AO Building): Dead Building %1 | %2.", _intels, _decoration];
            { _x hideObjectGlobal true; } forEach (_decoration + _intels);
        }];
    };
} forEach (_aoActiveBuildings);

{
    private _hostage = _x;
    _hostage addMPEventHandler ["MPKilled", {
        params ["_unit", "_killer"];
    }];
} forEach (_hostages);

private _activeBuildings = missionNamespace getVariable ["AO_Active_Buildings", []];
_activeBuildings append _cqbBuildings;
missionNamespace setVariable ["AO_Active_Buildings", _activeBuildings, true];




private _AOModules = missionNamespace getVariable ["bsm_ao_modules", []];
if (count _AOModules <= 0) then {
    [] spawn {
        while { uiSleep 0.5; true } do {
            private _runningAOs = missionNamespace getVariable ["bsm_running_ao", []]; 
            private _AOModules = missionNamespace getVariable ["bsm_ao_modules", []]; 
            {
                private _trigger = _x select 0;
                private _logic = _x select 1;
                if (triggerActivated _trigger && !(_trigger in _runningAOs)) then {
                    _runningAOs pushback _trigger;
                    missionNamespace setVariable ["bsm_running_ao", _runningAOs];
                    [_logic, _trigger] call SpecOps_fnc_aoModuleActivate;
                };
                if ( !triggerActivated _trigger && (_trigger in _runningAOs)) then {
                    _runningAOs = _runningAOs - [_trigger];
                    missionNamespace setVariable ["bsm_running_ao", _runningAOs];
                    [_logic, _trigger] call SpecOps_fnc_aoModuleDeactivate;
                };
            } forEach (_AOModules); 
        };

    };
};

_AOModules pushBack [_trigger, _logic];
missionNamespace setVariable ["bsm_ao_modules", _AOModules];