

/*
    [testTrigger] call SpecOps_fnc_createBuildingGarrisonLayoutFromTrigger;
    [testTrigger] call TFT_TEST_FUNC;

*/
params ["_trigger", ["_prefix", "NoPrefix"]];

private _comment = (toString [47, 47]);
private _tab = (toString [9]);
private _br = toString [13,10];
private _toCopy = "";
private _area = (allMissionObjects "All") inAreaArray _trigger;
private _areaBoundaries = triggerArea _trigger;
private _men = [];
private _menHostage = [];
private _explosives = [];
private _furnitureAndDecoration = [];
private _intelligenceFurnature = [];
private _staticMachineGuns = [];
private _building = objNull;
private _buildingAreaType = 0;
private _gore = 0;
private _tier = 0;
private _isEnterable = 0;


{
    
    private _areaType = _x getVariable ["SpecOps_Area_Type", 0];
    if (_areaType == 1) then { 
        _building = _x; 
        _buildingAreaType = _areaType;
        private _isGore = _building getVariable ["TFT_IsGore", false];
        if (_isGore) then { _isGore = 1; } else { _isGore = 0;  };
        if(_isGore == 1) then {
            _gore = 1;
        };
        _tier = _building getVariable ["SpecOps_Area_TierLevel", 1];
        _isEnterable = _building getVariable ["TFT_BuildingIsEnterable", false];
        if (_isEnterable) then { _isEnterable = 1; } else { _isEnterable = 0;  };
        continue;
    };
    private _classname = typeof _x;
	diag_log format ["SPEC-OPS (createBuildingGarrisonLayoutFromTrigger): Scanning %1", _classname];
    if (_areaType == 6) then {
        _explosives pushback _x;
        continue;
    };

    if (_x isKindOf "CAManBase") then {
        _isMenHostage = captive _x;
        if(_areaType == 5) then {
            _menHostage pushback _x;
            continue;
        }else {
            _men pushback _x;
            continue;
        };
    };

    private _staticMark = _x getVariable ["SpecOps_StaticGunCategory", -1];
    if (_staticMark != -1) then {
        _staticMachineGuns pushback _x;
        continue;
    };

    if ((_x getVariable ["TFT_IsIntelSearchable", false])) then {
        _intelligenceFurnature pushback _x;
        continue;
    };

    if (_areaType == 4) then {
        _furnitureAndDecoration pushback _x;
    };
} forEach (_area);




// TODO: Add Behaviour for Social Events and Camp


// TODO: Add Behaviour for Social Events and Camp
if(isNull _building) exitWith {
	diag_log format ["SPEC-OPS (createBuildingGarrisonLayoutFromTrigger): Building Not Found"];
    "";
};
if ((count _intelligenceFurnature <= 0) && (count _men <= 0) && (count _menHostage <= 0) && (count _staticMachineGuns <= 0) && (count _furnitureAndDecoration <= 0)) exitWith {
	diag_log format ["SPEC-OPS (createBuildingGarrisonLayoutFromTrigger): Building is empty."];
    "";
};


if (_buildingAreaType == 2) then { _areaTypeClassname = "SpecOps_CampSite" };
if (_buildingAreaType == 3) then { _areaTypeClassname = "SpecOps_SocialEvent" };

private _areaTypeClassname = (typeof _building);
private _similarToDuplicate = call SpecOps_fnc_compileGetSimilarBuildings;
private _indexDuplicate = _similarToDuplicate findIf { _areaTypeClassname in _x };
private _duplicateClasses = [];
// Not found? No similar classes
if (_indexDuplicate <= -1) then {
    _duplicateClasses pushBackUnique _areaTypeClassname;
} else {
    _duplicateClasses = _similarToDuplicate select _indexDuplicate;
};
{
    _areaTypeClassname = _x;
    _randomSeed = [0, 999999] call BIS_fnc_randomInt;

    _toCopy = _toCopy + format [_tab + _tab + 'class %4_%3_%2 { %1', _br, _randomSeed, _areaTypeClassname, _prefix];

    if (_buildingAreaType == 1) then {
        _toCopy = _toCopy + format [_tab + _tab + _tab + 'parentClass="%1"; %2', _areaTypeClassname, _br];
    };
    _areaBoundaries =  (str _areaBoundaries);
    _areaBoundaries = [_areaBoundaries, '[', '{'] call CBA_fnc_replace;
    _areaBoundaries = [_areaBoundaries, ']', '};'] call CBA_fnc_replace;
    _toCopy = _toCopy + format [_tab + _tab + _tab + 'Boundaries[]=%1; %2', (_areaBoundaries), _br];
    _toCopy = _toCopy + format [_tab + _tab + _tab + 'isGoreScene=%1; %2', (_gore), _br];
    _toCopy = _toCopy + format [_tab + _tab + _tab + 'tierLevel=%1; %2', (_tier), _br];
    _toCopy = _toCopy + format [_tab + _tab + _tab + 'isEnterable=%1; %2', (_isEnterable), _br];

    private _lockedDoors = []; 
    private _openedDoors = []; 
    for "_i" from 0 to 30 do {
        if ((_building getVariable [format ["bis_disabled_door_%1", _i], 0]) == 1) then {
            _lockedDoors pushBack _i; // push door id;
        };
        if ((_building animationPhase format ["Door_%1_rot", _i]) > 0) then { 
            _openedDoors pushBack _i;
        };
    };
    _lockedDoors = (str _lockedDoors);
    _lockedDoors = [_lockedDoors, '[', '{'] call CBA_fnc_replace;
    _lockedDoors = [_lockedDoors, ']', '};'] call CBA_fnc_replace;
    _toCopy = _toCopy + _tab + _tab + _tab + "lockedDoors[]=" + _lockedDoors + _br;

    _openedDoors =  (str _openedDoors);
    _openedDoors = [_openedDoors, '[', '{'] call CBA_fnc_replace;
    _openedDoors = [_openedDoors, ']', '};'] call CBA_fnc_replace;
    _toCopy = _toCopy  +_tab + _tab + _tab + "openedDoors[]=" + _openedDoors + _br;



    _toCopy = _toCopy + format [_tab + _tab + _tab + 'men[] = { %1', _br];
    {
        private _newRelPosDir = [_building, _x] call SpecOps_fnc_commonGetRelPosRotObject;
        private _posX = (_newRelPosDir select 0) select 0;
        private _posY = (_newRelPosDir select 0) select 1;
        private _posZ = (_newRelPosDir select 0) select 2;

        private _dirX = ((_newRelPosDir select 1) select 0) select 0;
        private _dirY = ((_newRelPosDir select 1) select 0) select 1;
        private _dirZ = ((_newRelPosDir select 1) select 0) select 2;
        
        private _upX = ((_newRelPosDir select 1) select 1) select 0;
        private _upY = ((_newRelPosDir select 1) select 1) select 1;
        private _upZ = ((_newRelPosDir select 1) select 1) select 2;
        
        private _IsLeader = _x getVariable ["TFT_CanBeLeader", false];
        if (_IsLeader) then { _IsLeader = 1; } else { _IsLeader = 0;  };

        private _IsRifleman = _x getVariable ["TFT_CanBeRifleman", false];
        if (_IsRifleman) then { _IsRifleman = 1; } else { _IsRifleman = 0;  };
        
        private _IsAutoRifleman = _x getVariable ["TFT_CanBeAutoRifleman", false];
        if (_IsAutoRifleman) then { _IsAutoRifleman = 1; } else { _IsAutoRifleman = 0;  };
        
        private _IsGrenadier = _x getVariable ["TFT_CanBeGrenadier", false];
        if (_IsGrenadier) then { _IsGrenadier = 1; } else { _IsGrenadier = 0;  };
        
        private _IsAT = _x getVariable ["TFT_CanBeAT", false];
        if (_IsAT) then { _IsAT = 1; } else { _IsAT = 0;  };
        
        private _IsSniper = _x getVariable ["TFT_CanBeSniper", false];
        if (_IsSniper) then { _IsSniper = 1; } else { _IsSniper = 0;  };
        
        private _IsProne = _x getVariable ["TFT_CanProne", false];
        if (_IsProne) then { _IsProne = 1; } else { _IsProne = 0;  };

        private _isOnRoofOrBalcony = _x getVariable ["TFT_OnRoofBalcony", false];
        if (_isOnRoofOrBalcony) then { _isOnRoofOrBalcony = 1; } else { _isOnRoofOrBalcony = 0;  };

        private _CanUnlockStance = _x getVariable ["bsm_so_can_unlock_stance", false];
        if (_CanUnlockStance) then { _CanUnlockStance = 1; } else { _CanUnlockStance = 0;  };

        
        private _IsCanCrouch = _x getVariable ["TFT_CanCrouch", false];
        if (_IsCanCrouch) then { _IsCanCrouch = 1; } else { _IsCanCrouch = 0;  };
        
        private _IsCanStand = _x getVariable ["TFT_CanStand", false];
        if (_IsCanStand) then { _IsCanStand = 1; } else { _IsCanStand = 0;  };
        
        private _IsCanMove = _x getVariable ["TFT_CanMove", false];
        if (_IsCanMove) then { _IsCanMove = 1; } else { _IsCanMove = 0;  };

        private _CanRotate = _x getVariable ["TFT_CanMoveFixed", false];
        if (_CanRotate) then { _CanRotate = 1; } else { _CanRotate = 0;  };


        private _ambientCanStand = _x getVariable ["SpecOps_AmbientCanStand", false];
        if (_ambientCanStand) then { _ambientCanStand = 1; } else { _ambientCanStand = 0;  };

        private _ambientCanSitLow = _x getVariable ["SpecOps_AmbientCanSitLow", false];
        if (_ambientCanSitLow) then { _ambientCanSitLow = 1; } else { _ambientCanSitLow = 0;  };

        private _ambientCanKneel = _x getVariable ["SpecOps_AmbientCanKneel", false];
        if (_ambientCanKneel) then { _ambientCanKneel = 1; } else { _ambientCanKneel = 0;  };


        private _ambientCanWatch = _x getVariable ["SpecOps_AmbientCanWatch", false];
        if (_ambientCanWatch) then { _ambientCanWatch = 1; } else { _ambientCanWatch = 0;  };



        private _forcedAnimationStance = _x getVariable ["TFT_FixedAnimation", ""];
        private _IsCanVisibleFromOutside = _x getVariable ["TFT_CanVisibleFromOutside", false];
        if (_IsCanVisibleFromOutside) then { _IsCanVisibleFromOutside = 1; } else { _IsCanVisibleFromOutside = 0;  };

        private _isHiddenDuringDay = _x getVariable ["SpecOps_HideAtDay", false];
        if (_isHiddenDuringDay) then { _isHiddenDuringDay = 1; } else { _isHiddenDuringDay = 0;  };

        private _isHiddenDuringNight = _x getVariable ["SpecOps_HideAtNight", false];
        if (_isHiddenDuringNight) then { _isHiddenDuringNight = 1; } else { _isHiddenDuringNight = 0;  };
        
        if ((_men select 0) != _x) then {
            _toCopy = _toCopy + format [',', _br]; 
        };

        _toCopy = _toCopy + format ['%30%30%30%30{ { %14, %15, %16 }, {%24, %25, %26}, {%27, %28, %29}, %13, { %2, %3, %4, %5, %6, %7, %8, %9, %10, %11, %12, %17, %18, %19, %20, %21, %22, %23, %31, %32, %33, %34 } }', 
            _br, // 1
            _IsLeader, _IsRifleman, _IsAutoRifleman, _IsGrenadier, _IsAT, // 6
            _IsSniper, _IsProne, _IsCanCrouch, _IsCanStand, _IsCanMove, // 11
            _IsCanVisibleFromOutside, ((getDir _building) + (getDir _x)), _posX, _posY, _posZ, // 16
            _CanRotate, str _forcedAnimationStance, _ambientCanStand, _ambientCanSitLow, _ambientCanKneel, // 21
            0 // Options 16 (Lean)
            , _ambientCanWatch,
            _dirX, _dirY, _dirZ, _upX, _upY, _upZ, _tab, _isHiddenDuringDay, _isHiddenDuringNight, _isOnRoofOrBalcony, _CanUnlockStance
        ];
    } forEach (_men);
    _toCopy = _toCopy + format ['%1%2%2%2}; %1', _br, _tab];

    _toCopy = _toCopy + format [_tab + _tab + _tab + 'hostages[] = { %1', _br];
    {
        private _newRelPosDir = [_building, _x] call SpecOps_fnc_commonGetRelPosRotObject;
        private _posX = (_newRelPosDir select 0) select 0;
        private _posY = (_newRelPosDir select 0) select 1;
        private _posZ = (_newRelPosDir select 0) select 2;

        private _dirX = ((_newRelPosDir select 1) select 0) select 0;
        private _dirY = ((_newRelPosDir select 1) select 0) select 1;
        private _dirZ = ((_newRelPosDir select 1) select 0) select 2;
        
        private _upX = ((_newRelPosDir select 1) select 1) select 0;
        private _upY = ((_newRelPosDir select 1) select 1) select 1;
        private _upZ = ((_newRelPosDir select 1) select 1) select 2;

        private _IsProne = _x getVariable ["TFT_CanProne", false];
        if (_IsProne) then { _IsProne = 1; } else { _IsProne = 0;  };
        private _IsCanCrouch = _x getVariable ["TFT_CanCrouch", false];
        if (_IsCanCrouch) then { _IsCanCrouch = 1; } else { _IsCanCrouch = 0;  };
        private _IsCanStand = _x getVariable ["TFT_CanStand", false];
        if (_IsCanStand) then { _IsCanStand = 1; } else { _IsCanStand = 0;  };
        private _IsCanMove = _x getVariable ["TFT_CanMove", false];
        if (_IsCanMove) then { _IsCanMove = 1; } else { _IsCanMove = 0;  };
        private _IsCanVisibleFromOutside = _x getVariable ["TFT_CanVisibleFromOutside", false];
        if (_IsCanVisibleFromOutside) then { _IsCanVisibleFromOutside = 1; } else { _IsCanVisibleFromOutside = 0;  };
        if ((_menHostage select 0) != _x) then {
            _toCopy = _toCopy + format [', %1', _br]; 
        };
        _toCopy = _toCopy + format ['%17%17%17%17%17{ { %8, %9, %10 }, {%11, %12, %13}, {%14, %15, %16}, %7, { %2, %3, %4, %5, %6 } }', _br, 
            _IsProne, _IsCanCrouch, _IsCanStand, _IsCanMove, _IsCanVisibleFromOutside, 
            ((getDir _building) + (getDir _x)), _posX, _posY, _posZ, _dirX, _dirY, _dirZ, _upX, _upY, _upZ, _tab
        ];
    } forEach (_menHostage);
    _toCopy = _toCopy + format ['%1%2%2%2}; %1', _br, _tab];

    _toCopy = _toCopy + format [_tab + _tab + _tab + 'staticWeapons[] = { %1', _br];
    {
        private _newRelPosDir = [_building, _x] call SpecOps_fnc_commonGetRelPosRotObject;
        private _posX = (_newRelPosDir select 0) select 0;
        private _posY = (_newRelPosDir select 0) select 1;
        private _posZ = (_newRelPosDir select 0) select 2;

        private _dirX = ((_newRelPosDir select 1) select 0) select 0;
        private _dirY = ((_newRelPosDir select 1) select 0) select 1;
        private _dirZ = ((_newRelPosDir select 1) select 0) select 2;
        
        private _upX = ((_newRelPosDir select 1) select 1) select 0;
        private _upY = ((_newRelPosDir select 1) select 1) select 1;
        private _upZ = ((_newRelPosDir select 1) select 1) select 2;  
        if ((_staticMachineGuns select 0) != _x) then {
            _toCopy = _toCopy + format [', %1', _br]; 
        };

        private _staticType = -1;
        private _staticMark = _x getVariable ["SpecOps_StaticGunCategory", -1];
        if (_staticMark <= -1) then {continue;};
        if (_staticMark == 3) then { _staticType = 0; };
        if (_staticMark == 4) then { _staticType = 1; };
        if (_staticMark == 2) then { _staticType = 2; };
        if (_staticMark == 1) then { _staticType = 3; };
        if (_staticMark == 0) then { _staticType = 4; };
        if (_staticMark == 5) then { _staticType = 5; };

        private _isHiddenDuringDay = _x getVariable ["SpecOps_HideAtDay", false];
        if (_isHiddenDuringDay) then { _isHiddenDuringDay = 1; } else { _isHiddenDuringDay = 0;  };

        private _isHiddenDuringNight = _x getVariable ["SpecOps_HideAtNight", false];
        if (_isHiddenDuringNight) then { _isHiddenDuringNight = 1; } else { _isHiddenDuringNight = 0;  };

        _toCopy = _toCopy + format ['%13%13%13%13{ { %3, %4, %5 }, {%7, %8, %9}, {%10, %11, %12}, %2 , { %6, %14, %15 }} ', 
            _br, ((getDir _building) + (getDir _x)), _posX, _posY, _posZ, _staticType,
            _dirX, _dirY, _dirZ, _upX, _upY, _upZ, _tab, _isHiddenDuringDay, _isHiddenDuringNight
        ];

    } forEach (_staticMachineGuns);
    _toCopy = _toCopy + format ['%1%2%2%2%2}; %1', _br, _tab];

    _toCopy = _toCopy + format [_tab + _tab + _tab + 'explosives[] = { %1', _br];
    {
        private _newRelPosDir = [_building, _x] call SpecOps_fnc_commonGetRelPosRotObject;
        private _posX = (_newRelPosDir select 0) select 0;
        private _posY = (_newRelPosDir select 0) select 1;
        private _posZ = (_newRelPosDir select 0) select 2;

        private _dirX = ((_newRelPosDir select 1) select 0) select 0;
        private _dirY = ((_newRelPosDir select 1) select 0) select 1;
        private _dirZ = ((_newRelPosDir select 1) select 0) select 2;
        
        private _upX = ((_newRelPosDir select 1) select 1) select 0;
        private _upY = ((_newRelPosDir select 1) select 1) select 1;
        private _upZ = ((_newRelPosDir select 1) select 1) select 2;  
        if ((_staticMachineGuns select 0) != _x) then {
            _toCopy = _toCopy + format [', %1', _br]; 
        };
        if ((_explosives select 0) != _x) then {
            _toCopy = _toCopy + format [', %1', _br]; 
        };
        _toCopy = _toCopy + format ['%13%13%13%13{%14, { %3, %4, %5 }, {%7, %8, %9}, {%10, %11, %12}, %2} ', 
            _br, ((getDir _building) + (getDir _x)), _posX, _posY, _posZ, 0,
            _dirX, _dirY, _dirZ, _upX, _upY, _upZ, _tab, str (typeOf _x)
        ];

    } forEach (_explosives);
    _toCopy = _toCopy + format ['%1%2%2%2%2}; %1', _br, _tab];

    _toCopy = _toCopy + format [_tab + _tab + _tab + 'furnitures[] = { %1', _br];
    {  
        private _newRelPosDir = [_building, _x] call SpecOps_fnc_commonGetRelPosRotObject;
        private _posX = (_newRelPosDir select 0) select 0;
        private _posY = (_newRelPosDir select 0) select 1;
        private _posZ = (_newRelPosDir select 0) select 2;

        private _dirX = ((_newRelPosDir select 1) select 0) select 0;
        private _dirY = ((_newRelPosDir select 1) select 0) select 1;
        private _dirZ = ((_newRelPosDir select 1) select 0) select 2;
        
        private _upX = ((_newRelPosDir select 1) select 1) select 0;
        private _upY = ((_newRelPosDir select 1) select 1) select 1;
        private _upZ = ((_newRelPosDir select 1) select 1) select 2;

        private _isVehicle = _x getVariable ["SpecOps_Spawn_As_Vehicle", false];
        if (_isVehicle) then { _isVehicle = 1; } else { _isVehicle = 0;  };

        private _isImportantDecoration = _x getVariable ["SpecOps_Furniture_Important", false];
        if (_isImportantDecoration) then { _isImportantDecoration = 1; } else { _isImportantDecoration = 0;  };

        private _IsCanVisibleFromOutside = _x getVariable ["TFT_CanVisibleFromOutside", false];
        if (_IsCanVisibleFromOutside) then { _IsCanVisibleFromOutside = 1; } else { _IsCanVisibleFromOutside = 0;  };

        private _isDemoLead = _x getVariable ["TFT_IsDemoLead", false];
        if (_isDemoLead) then { _isDemoLead = 1; } else { _isDemoLead = 0;  };

        private _isDemoTrigger = _x getVariable ["TFT_IsDemoTrigger", false];
        if (_isDemoTrigger && _isDemoLead == 0) then { _isDemoTrigger = 1; } else { _isDemoTrigger = 0;  };

        private _isHackable = _x getVariable ["TFT_IsHacking", false];
        if (_isHackable) then { _isHackable = 1; } else { _isHackable = 0;  };
        
        if ((_furnitureAndDecoration select 0) != _x) then {
            _toCopy = _toCopy + format [', %1', _br]; 
        };

        private _isHiddenDuringDay = _x getVariable ["SpecOps_HideAtDay", false];
        if (_isHiddenDuringDay) then { _isHiddenDuringDay = 1; } else { _isHiddenDuringDay = 0;  };

        private _isHiddenDuringNight= _x getVariable ["SpecOps_HideAtNight", false];
        if (_isHiddenDuringNight) then { _isHiddenDuringNight = 1; } else { _isHiddenDuringNight = 0;  };

        _toCopy = _toCopy + format ['%20%20%20%20%20{ %7, { %4, %5, %6 }, {%14, %15, %16}, {%17, %18, %19}, %3, { %2, %8, %9, %10, %11, %12, %13, %21, %22 } }', _br, 
            0, ((getDir _building) + (getDir _x)), _posX, _posY, _posZ, str (typeOf _x), _IsCanVisibleFromOutside, 
            _isDemoLead, _isDemoTrigger, _isHackable, _isImportantDecoration, _isVehicle, _dirX, _dirY, _dirZ, _upX, _upY, _upZ, _tab,
            _isHiddenDuringDay, _isHiddenDuringNight
        ];
    } forEach (_furnitureAndDecoration);
    _toCopy = _toCopy + format ['%1%2%2%2}; %1', _br, _tab];





    _toCopy = _toCopy + format [_tab + _tab + _tab + 'intelFurnitures[] = { %1', _br];
    {
        private _newRelPosDir = [_building, _x] call SpecOps_fnc_commonGetRelPosRotObject;
        private _posX = (_newRelPosDir select 0) select 0;
        private _posY = (_newRelPosDir select 0) select 1;
        private _posZ = (_newRelPosDir select 0) select 2;

        private _dirX = ((_newRelPosDir select 1) select 0) select 0;
        private _dirY = ((_newRelPosDir select 1) select 0) select 1;
        private _dirZ = ((_newRelPosDir select 1) select 0) select 2;
        
        private _upX = ((_newRelPosDir select 1) select 1) select 0;
        private _upY = ((_newRelPosDir select 1) select 1) select 1;
        private _upZ = ((_newRelPosDir select 1) select 1) select 2;

        private _isImportantDecoration = _x getVariable ["SpecOps_Furniture_Important", false];
        if (_isImportantDecoration) then { _isImportantDecoration = 1; } else { _isImportantDecoration = 0;  };
        
        private _IsCanVisibleFromOutside = _x getVariable ["TFT_CanVisibleFromOutside", false];
        if (_IsCanVisibleFromOutside) then { _IsCanVisibleFromOutside = 1; } else { _IsCanVisibleFromOutside = 0;  };
        if ((_intelligenceFurnature select 0) != _x) then {
            _toCopy = _toCopy + format [', %1', _br]; 
        };
        _toCopy = _toCopy + format ['%15%15%15%15%15{ %7, { %4, %5, %6 }, {%9, %10, %11}, {%12, %13, %14}, %3, { %2, %8 } }', _br, 
            _isImportantDecoration, ((getDir _building) + (getDir _x)), _posX, _posY, _posZ, 
            str (typeOf _x), _IsCanVisibleFromOutside, _dirX, _dirY, _dirZ, _upX, _upY, _upZ, _tab
        ];
    } forEach (_intelligenceFurnature);
    _toCopy = _toCopy + format ['%1%2%2%2}; %1', _br, _tab];
    _toCopy = _toCopy + format ['%2%2}; %1', _br, _tab];
} forEach (_duplicateClasses);


_toCopy;
