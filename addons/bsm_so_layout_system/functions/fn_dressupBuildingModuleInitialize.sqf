params ["_module"];




if (!isServer) exitWith {};

private _allObjects = synchronizedObjects _module;
private _maxEnemies = _module getVariable ["SpecOps_MaxEnemies", 1];
if (_maxEnemies <= 0) then {_maxEnemies = 1;};
private _allowT1 = _module getVariable ["SpecOps_T1", true];
private _allowT2 = _module getVariable ["SpecOps_T2", true];
private _allowT3 = _module getVariable ["SpecOps_T3", true];
private _allowGore = _module getVariable ["SpecOps_IsGore", false];
private _faction = _module getVariable ["SpecOps_Faction", "BS_B_US_ARMA_BASE"];
private _sideDef = _module getVariable ["SpecOps_FactionSide", 1];
private _side = east;
if (isNil "_faction" || {_faction == ""}) exitWith { _faction = "BS_B_US_ARMA_BASE"; };
if (_faction == "") then { _faction = "BS_B_US_ARMA_BASE"; };
private _factionCamo = _module getVariable ["SpecOps_FactionCamo", "WL"];
if (isNil "_factionCamo" || {_factionCamo == ""}) then { _factionCamo = "WL"; };
private _hasIntel = _module getVariable ["SpecOps_Intel", false];
private _hasHostage = _module getVariable ["SpecOps_Hostage", false];
private _hasStaticGun = _module getVariable ["SpecOps_HasStaticMachineGunner", false];
private _hasHVT = _module getVariable ["SpecOps_HasHVT", false];
private _moduleArea = _module getVariable ["objectArea", nil]; // [5.925,9.462,329.502,true,0]
if (isNil "_moduleArea") exitWith { diag_log "SPEC-OPS: Cannot find area for the module."; };
private _modulePos = getPos _module;
private _moduleCombineArea = [_modulePos, (_moduleArea select 0), (_moduleArea select 1), (_moduleArea select 2), (_moduleArea select 3)];
private _size = (_moduleArea select 0) + (_moduleArea select 1) + (_moduleArea select 2);
private _terrainObjects = nearestTerrainObjects [_module, [], _size];
private _objectsInArea = _terrainObjects inAreaArray _moduleCombineArea; 
_objectsInArea = _objectsInArea call BIS_fnc_arrayShuffle;
private _buildingObj = objNull;
private _buildingLayout = objNull;
{
    private _layout = _x getVariable ["spec_ops_building_layout", nil];
    if (!isNil "_layout") exitWith { _buildingObj = _x; _buildingLayout = _layout; };
} forEach(_objectsInArea);

if (isNull _buildingObj) exitWith { 
    diag_log "Couldn't find a layout for any building in area.";
};

private _buildingGroup = nil;
if (_sideDef == 0) then { _side = west; _buildingGroup = createGroup west; };
if (_sideDef == 1) then { _side = east; _buildingGroup = createGroup east; };
if (_sideDef == 2) then { _side = independent; _buildingGroup = createGroup independent; };
if (isNil "_buildingGroup") exitWith { };
_buildingObj setVariable ["AO_Building_Groups", _buildingGroup];
private _savedUnits = [];
private _savedVehicles = [];
private _savedHostages = [];
// Tag building as used for CQB;
_buildingObj setVariable ["AO_USED_CQB", true, true];

// Link Trigger and Modules
// private _triggers = [];
// { 
//     if (_x isKindOf "EmptyDetector") then {
//         private _modules = _x getVariable ["AO_Modules", []];
//         _modules pushbackUnique _module;
//         _x setVariable ["AO_Modules", _modules];
//         _triggers pushbackUnique _x; 
//     }; 
// } forEach (_allObjects);



private _furnitures = [_buildingObj, _buildingLayout] call SpecOps_fnc_dressUpBuildingApplyFurnitures;
_buildingObj setVariable ["AO_Decorations", _furnitures];


private _intelPos = [_buildingLayout, "intelFurnitures"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
if (_hasIntel && (count _intelPos > 0)) then {
    private _intel = [_buildingObj , _buildingLayout] call SpecOps_fnc_dressUpBuildingApplyIntel;
    if (!isNil "_intel") then {
        _buildingObj setVariable ["AO_Intels", [_intel]];
    };
};

if (_hasHostage) then {
    private _hostagesPositions = [_buildingLayout, "hostages"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
    if (count _hostagesPositions > 0) then { 
        private _hostageSet = selectRandom _hostagesPositions;
        private _randomHostagePos = _hostageSet select 0;
        private _randomHostageDir = _hostageSet select 1;
        private _randomHostageUp = _hostageSet select 2;
        private _randomHostageHeading = _hostageSet select 3;
        private _randomHostageOptions = _hostageSet select 4;
        private _canProne = (_randomHostageOptions select 0) == 0;
        private _IsCanCrouch = (_randomHostageOptions select 1) == 0;
        private _IsCanStand = (_randomHostageOptions select 2) == 0;
        private _spawnPos = [_buildingObj, _randomHostagePos] call SpecOps_fnc_getRelatedPosition;
        private _hostageAgent = createAgent ["B_Survivor_F", _spawnPos, [], 0, "CAN_COLLIDE"];
        _unit = _hostageAgent;

        private _animHostage = [];
        if (_canProne || {!_canProne && !_IsCanCrouch && !_IsCanStand}) then { _animHostage pushbackUnique "revive_secured"; };
        if (_IsCanCrouch || {!_canProne && !_IsCanCrouch && !_IsCanStand}) then { _animHostage pushbackUnique "ACE_HandcuffedFFV"; };
        if (_IsCanStand || {!_canProne && !_IsCanCrouch && !_IsCanStand}) then { 
            _animHostage append [
                "UnaErcPoslechVelitele1",
                "UnaErcPoslechVelitele2",
                "UnaErcPoslechVelitele3",
                "UnaErcPoslechVelitele4"
            ]; 
        };

        private _cuffAnim = selectRandom _animHostage;

        _savedUnits pushback (_hostageAgent);
        private _isVisibleFromOutside = (_randomHostageOptions select 1) == 1;
        _hostageAgent setVariable ["Unit_VisibleFromOutside", _isVisibleFromOutside];
        _hostageAgent setCaptive true;
        // _hostageAgent allowDamage false;
        _hostageAgent hideObjectGlobal true;
        [_buildingObj, _hostageAgent, _randomHostagePos, 0] call BIS_fnc_relPosObject;
        _hostageAgent setDir (getDir _buildingObj - _randomHostageHeading);
        _hostageAgent setFormDir (getDir _buildingObj - _randomHostageHeading);
        _hostageAgent enableSimulationGlobal false;
        _hostageAgent disableAI "PATH";
        _hostageAgent disableAI "MOVE";

        [_hostageAgent, true, _hostageAgent] call ACE_captives_fnc_setHandcuffed;
        _hostageAgent switchMove _cuffAnim;
        _hostageAgent playMoveNow _cuffAnim;
        // [_hostageAgent] spawn { sleep 2; (_this select 0) allowDamage true; };
        _savedHostages pushbackUnique _hostageAgent;
        
    };
};

if (_hasStaticGun) then {
    private _staticMachineGunsPositions = [_buildingLayout, "staticWeapons"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
    if (count _staticMachineGunsPositions > 0) then { 
        private _staticGunSet = selectRandom _staticMachineGunsPositions;
        private _staticGunPos = _staticGunSet select 0;
        private _staticGunDir = _staticGunSet select 1;
        private _staticGunUp = _staticGunSet select 2;
        private _staticGunOptions = _staticGunSet select 4;
        private _typeOfGun = _staticGunOptions select 0;
        private _lowMachineGuns = getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticLowMG") apply { _x select 0 };
        private _highMachineGuns = getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticHighMG") apply { _x select 0 };

        private _motar = getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticMotar") apply { _x select 0 };
        private _antiAir = getArray (configfile >> "CfgFactionClasses" >> _faction >> "StaticAntiAir") apply { _x select 0 };
        private _sam = getArray (configfile >> "CfgFactionClasses" >> _faction >> "SamSystem") apply { _x select 0 };
        private _staticGun = nil;
        if (_typeOfGun == 0) then { _staticGun = selectRandom _lowMachineGuns; };
        if (_typeOfGun == 1) then { _staticGun = selectRandom _highMachineGuns; };
        if (_typeOfGun == 2) then { _staticGun = selectRandom _motar; };
        if (_typeOfGun == 3) then { _staticGun = selectRandom _antiAir; };
        if (_typeOfGun == 4) then { _staticGun = selectRandom _sam; };
        if (!isNil "_staticGun") then {
            _spawnPos = [_buildingObj, _staticGunPos] call SpecOps_fnc_getRelatedPosition;
            private _vehicle = createVehicle [_staticGun, _spawnPos, [], 0, "CAN_COLLIDE"];
            private _gunner = (format ["%1_Rifleman_%2", _faction, _factionCamo]);
            private _grp = [_staticGunPos, _side, [_gunner],[],[],[],[],[],0, true] call BIS_fnc_spawnGroup;
            {
                private _unit = _x;
                _unit moveInAny _vehicle;
                [_buildingObj, _vehicle, _staticGunPos, [_staticGunDir, _staticGunUp], false, true] call SpecOps_fnc_commonRelPosObject;
                _savedUnits pushback (_unit);
                _savedVehicles pushback (_vehicle);
                _unit enableSimulationGlobal false;
                _vehicle enableSimulationGlobal false;
                _unit hideObjectGlobal true;
                _vehicle hideObjectGlobal true;
                _unit disableAI "PATH";
            } forEach ((units _grp));

            // Merge Groups
            if (isNil "_buildingGroup") then {
                _buildingGroup = _grp;
            } else {
                _buildingGroup = _grp;
                (units _grp) join _buildingGroup;
            };
            _grp deleteGroupWhenEmpty true;

            // _unit disableAI "MOVE";
        };
    };
};


private _enemyGarrisonPositions = [_buildingLayout, "men"] call SpecOps_fnc_dressUpBuildingGetBuildingSection;
private _leaderPos = _enemyGarrisonPositions select { ((_x select 2) select 0) == 1; };
if (_hasHVT && (count _leaderPos > 0)) then {
    private _leaderPosSet = selectRandom _leaderPos;
    _enemyGarrisonPositions = _enemyGarrisonPositions - [_leaderPos];
    private _randomPos = _leaderPosSet select 0;
    private _randomDir = _leaderPosSet select 1;
    private _randomOptions = _leaderPosSet select 2;
    private _buildingUnitSpawned = [_buildingObj, _leaderPosSet, true, _buildingGroup, _faction, _factionCamo, false, _side] call SpecOps_fnc_dressUpBuildingSpawnEnemy;
    private _unit = (_buildingUnitSpawned select 1);
    // [_unit] join (_buildingGroup);
    
    _savedUnits pushback _unit;
};

if (_maxEnemies > (count _enemyGarrisonPositions)) then { _maxEnemies = (count _enemyGarrisonPositions); };
for "_i" from 1 to _maxEnemies do {
    if (count _enemyGarrisonPositions > 0) then {
        private _enemyGarrisonSet = selectRandom _enemyGarrisonPositions;
        _enemyGarrisonPositions = _enemyGarrisonPositions - [_enemyGarrisonSet];
        private _randomPos = _enemyGarrisonSet select 0;
        private _randomDir = _enemyGarrisonSet select 1;
        private _randomOptions = _enemyGarrisonSet select 2;
        private _buildingUnitSpawned = [_buildingObj, _enemyGarrisonSet, false, _buildingGroup, _faction, _factionCamo, false, _side] call SpecOps_fnc_dressUpBuildingSpawnEnemy;
        private _unit = (_buildingUnitSpawned select 1);
        [_unit] join (_buildingGroup);
        _savedUnits pushback _unit;
    };
};

_savedUnits join _buildingGroup; 
[_buildingGroup] spawn { params ["_buildingGroup"]; uiSleep 10; _buildingGroup deleteGroupWhenEmpty true; };


_buildingObj setVariable ["AO_Units", _savedUnits];
_buildingObj setVariable ["AO_Hostages", _savedHostages];
_buildingObj setVariable ["AO_StaticGunVehicle", _savedVehicles];
_module setVariable ["AO_Building", _buildingObj];


diag_log "SPEC-OPS (Module Building): House Loaded";
