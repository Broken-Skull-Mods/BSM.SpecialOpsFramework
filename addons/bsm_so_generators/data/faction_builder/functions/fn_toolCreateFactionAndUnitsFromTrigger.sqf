
/*
    [US_DEVGRU_2023, "US - DEVGRU (%1)", 1, "2023"] call SpecOps_fnc_toolCreateFactionAndUnitsFromTrigger;
    [MALI_FAMA_2021, "MALI - FAMA (%1)", 1, "2021"] call SpecOps_fnc_toolCreateFactionAndUnitsFromTrigger;
    [US_RANGER_2000, "US - RANGER (%1)", 1, "2008"] call SpecOps_fnc_toolCreateFactionAndUnitsFromTrigger;
    [ISRL_SHAYETET_2023, "ISRL - SHAYETET 13 (%1)", 1, "2023"] call SpecOps_fnc_toolCreateFactionAndUnitsFromTrigger;
    
    [MALI_FAMA_2021, "MALI - FAMA (%1)", 1, "2021"] execVM "test.sqf";
    [ASF_2008, "Atropian - Separatist Forces (%1)", 1, "2008"] execVM "test.sqf";
	[US_Marines_2012, "US - Marine (%1)", 1, "2012"] call SpecOps_fnc_toolCreateFactionAndUnitsFromTrigger;

	fn_test = compile preprocessFileLineNumbers "test.sqf";
	[US_Marines_2012, "US - Marine (%1)", 1, "2012"] call fn_test;
    [CIV_ARMA_BASE_2024, "Civilian Base (%1)", 3, "2024"] call SpecOps_fnc_toolCreateFactionAndUnitsFromTrigger;
	
	(allUnits inArea B_US_DEVGRU_2023)
*/

params ["_trigger", "_displayName", "_side", "_year", ["_flag", "\A3\Data_F\Flags\flag_US_CO.paa"]];

private _br = toString [13,10];
private _tab = (toString [9]);
private _2tab = _tab + _tab;
private _3tab = _2tab + _tab;
private _4tab = _3tab + _tab;
private _5tab = _4tab + _tab;
private _6tab = _5tab + _tab;
private _toCopy = "";
private _commonArsenal = [];




// compile preprocessFileLineNumbers "test.sqf";
private _units = "";
private _unitVariation = 0;
private _unitCommon = 0;
if (_side == 3) then {
_toCopy = _toCopy + format ['%1%1class CfgVehicles {%1%5class C_man_polo_1_F; ', _br, "", _year, _units, (toString [9])];

}else {
_toCopy = _toCopy + format ['%1%1class CfgVehicles {%1%5class B_Survivor_F;%1%5class I_G_Survivor_F;%1%5class O_G_Survivor_F; ', _br, "", _year, _units, (toString [9])];

};
private _requiredAddons = [];

private _woodlandUnits = ((allUnits) inAreaArray _trigger) select { (_x getVariable ["SpecOps_FactionGeneratorCamo", 0] == 0) && vehicle _x == _x; };
private _desertUnits = ((allUnits) inAreaArray _trigger) select { (_x getVariable ["SpecOps_FactionGeneratorCamo", 0] == 2) && vehicle _x == _x; };
private _winterUnits = ((allUnits) inAreaArray _trigger) select { (_x getVariable ["SpecOps_FactionGeneratorCamo", 0] == 1) && vehicle _x == _x; };

private _hasWoodland = true;
private _hasDesert = true;
private _hasWinter = true;
if (count _desertUnits <= 0) then {
    _hasDesert = false;
    if ((count _woodlandUnits) > 0) then { _desertUnits = _woodlandUnits; } else {
        if ((count _winterUnits) > 0) then { _desertUnits = _winterUnits; };
    };
};

if (count _winterUnits <= 0) then {
    _hasWinter = false;
    if ((count _woodlandUnits) > 0) then { _winterUnits = _woodlandUnits; } else {
        if ((count _desertUnits) > 0) then { _winterUnits = _desertUnits; };
    };
};

if (count _woodlandUnits <= 0) then {
    _hasWoodland = false;
    if ((count _winterUnits) > 0) then { _woodlandUnits = _winterUnits; } else {
        if ((count _desertUnits) > 0) then { _woodlandUnits = _desertUnits; };
    };
};

private _allUnitClassnames = [];


if (_side != 3) then {
    { 
        private _res = ([_x, 0, _allUnitClassnames, _requiredAddons, !_hasWoodland] call SpecOps_fnc_toolCreateFactionUnitType); 
        _allUnitClassnames = _res select 0;
        _toCopy = _toCopy + (_res select 1); 
        { _requiredAddons pushBackUnique _x; } forEach (_res select 2);
    } forEach (_woodlandUnits);

    { 
        private _res = ([_x, 2, _allUnitClassnames, _requiredAddons, !_hasDesert] call SpecOps_fnc_toolCreateFactionUnitType); 
        _allUnitClassnames = _res select 0;
        _toCopy = _toCopy + (_res select 1); 
        { _requiredAddons pushBackUnique _x; } forEach (_res select 2);
    } forEach (_desertUnits);
    
    {
        private _res = ([_x, 1, _allUnitClassnames, _requiredAddons, !_hasWinter] call SpecOps_fnc_toolCreateFactionUnitType); 
        _allUnitClassnames = _res select 0;
        _toCopy = _toCopy + (_res select 1); 
        { _requiredAddons pushBackUnique _x; } forEach (_res select 2);
    } forEach (_winterUnits);

} else {
    { 
        private _res = ([_x, 3, _allUnitClassnames, _requiredAddons, false] call SpecOps_fnc_toolCreateFactionUnitType); 
        diag_log format["ddd: %1", _res];
        _allUnitClassnames = _res select 0;
        _toCopy = _toCopy + (_res select 1); 
        { _requiredAddons pushBackUnique _x; } forEach (_res select 2);
    } forEach (_woodlandUnits);
};

if(_side == 3) then {
    _requiredAddons pushBackUnique "bm_specops_faction_CIV_ARMA_BASE_2024";
}else {
    _requiredAddons pushBackUnique "bm_specops_faction_US_ARMA_BASE";
};
_requiredAddons = _requiredAddons - [format ["bm_specops_faction_%1", (vehicleVarName _trigger)]];
private _requiredAddonsStr = (str _requiredAddons);
_requiredAddonsStr = [_requiredAddonsStr, '[', '{' + _br + _3tab] call CBA_fnc_replace;
_requiredAddonsStr = [_requiredAddonsStr, ',', ',' + _br + _3tab ] call CBA_fnc_replace;
_requiredAddonsStr = [_requiredAddonsStr, ']', _br + _2tab +  '}'] call CBA_fnc_replace;

_commonArsenalStr = (str _commonArsenal);
_commonArsenalStr = [_commonArsenalStr, '[', '{'] call CBA_fnc_replace;
_commonArsenalStr = [_commonArsenalStr, ']', '}'] call CBA_fnc_replace;
private _garage = [];
private _allVehicles = [];
private _SAM = [];
private _searchLight = [];
private _explosives = [];
private _staticMGLow = [];
private _staticMGHigh = [];
private _staticMortar = [];
private _staticAA = [];
private _troopTrucks = [];
private _tanks = [];
private _antiAir = [];
private _technical = [];

{
    private _unit = _x;
    private _staticCat = _unit getVariable ["SpecOps_StaticGunCategory", -1];
    diag_log format ["Generating Fatcion _staticCat = %1, %2", _staticCat, typeof(_unit)];
    if ((_x isKindOf "StaticWeapon") && {_staticCat == 3}) then { _allVehicles pushbackUnique _unit; continue; };
    if ((_x isKindOf "StaticWeapon") && {_staticCat == 4}) then { _allVehicles pushbackUnique _unit; continue; };
    if ((_x isKindOf "StaticWeapon") && {_staticCat == 2}) then { _allVehicles pushbackUnique _unit; continue; };
    if ((_x isKindOf "StaticWeapon") && {_staticCat == 1}) then { _allVehicles pushbackUnique _unit; continue; };
    if ((_x isKindOf "StaticWeapon") && {_staticCat == 0}) then { _allVehicles pushbackUnique _unit; continue; };
    if ((_x isKindOf "StaticWeapon") && {_staticCat == 5}) then { _allVehicles pushbackUnique _unit; continue; };
    
    if ((_unit isKindOf "LandVehicle")) then {  
        _allVehicles pushbackUnique _unit;
    };
    if ((_unit isKindOf "Ship_F")) then { 
        _allVehicles pushbackUnique _unit;
     };
    if ((_unit isKindOf "Air")) then { 
        _allVehicles pushbackUnique _unit;
    };
} forEach (((vehicles) inAreaArray _trigger));

private _toCopyGarageVehicles = "";
private _vehicleProcessed = [];
{

    if ((typeof _x) in _vehicleProcessed) then { continue; };
    
    private _driver = selectRandom (crew _x);
    private _driverClass = typeof(_driver);
    private _driverInfo = [_driver] call SpecOps_fnc_toolExtractUnitTypeInfo;
    diag_log format ["Generating _driverInfo %1", _driver];
    if (count _driverInfo <= 0) then { continue; };

    private _hashedVecName = (typeof _x);
    diag_log format ["Generating Fatcion %1", _hashedVecName];
    _hashedVecName = hashValue _hashedVecName;
    _hashedVecName = [_hashedVecName, '+', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '=', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '-', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '*', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '/', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '@', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '~', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '`', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '#', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '$', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '%', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '^', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '&', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '(', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, ')', '_'] call CBA_fnc_replace;
    _hashedVecName = [_hashedVecName, '\', '_'] call CBA_fnc_replace;
    _classname = 'BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName;
    _allUnitClassnames pushBackUnique _classname;
    _toCopyGarageVehicles = _toCopyGarageVehicles + _br + _tab + 'class ' + (typeof _x) + ';' + _br;
    if(_side != 3) then {
        _toCopyGarageVehicles = _toCopyGarageVehicles + _tab + 'class ' + _classname + ':' + (typeof _x) + ' {' + _br;

        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'scope=2;' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'side=1;' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'faction="' + 'BS_B_' + (vehicleVarName _trigger) + '";' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'crew="' + 'BS_B_' + (vehicleVarName _trigger) + '_' + (_driverInfo select 0) + '_' + (_driverInfo select 1) + '";' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'typicalCargo[]= { ' + _br;
        private _useComma = false;
        {
            private _comma = ',' + _br;
            if (!_useComma) then { _comma = ''; };
            private _driverInfo = [_driver] call SpecOps_fnc_toolExtractUnitTypeInfo;
            if (count _driverInfo <= 0) then { continue; };
            _toCopyGarageVehicles = _toCopyGarageVehicles + _comma + _3tab + '"BS_B_' + (vehicleVarName _trigger) + '_' + (_driverInfo select 0) + '_' + (_driverInfo select 1) + '"';
            _useComma = true;
        } forEach (crew _x);
        _toCopyGarageVehicles = _toCopyGarageVehicles + _br + _2tab + '}; ' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _tab + '}; ' + _br;

        
        _classname = 'BS_O_' + (vehicleVarName _trigger) + '_' + _hashedVecName;
        _allUnitClassnames pushBackUnique _classname;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _tab + 'class ' + _classname + ':' + (typeof _x) + ' {' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'scope=2;' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'side=0;' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'faction="' + 'BS_O_' + (vehicleVarName _trigger) + '";' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'crew="' + 'BS_O_' + (vehicleVarName _trigger) + '_' + (_driverInfo select 0) + '_' + (_driverInfo select 1) + '";' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'typicalCargo[]= { ' + _br;
        _useComma = false;
        {
            private _comma = ',' + _br;
            if (!_useComma) then { _comma = ''; };
            private _driverInfo = [_driver] call SpecOps_fnc_toolExtractUnitTypeInfo;
            if (count _driverInfo <= 0) then { continue; };
            _toCopyGarageVehicles = _toCopyGarageVehicles + _comma + _3tab + '"BS_O_' + (vehicleVarName _trigger) + '_' + (_driverInfo select 0) + '_' + (_driverInfo select 1) + '"';
            _useComma = true;
        } forEach (crew _x);
        _toCopyGarageVehicles = _toCopyGarageVehicles + _br + _2tab + '}; ' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _tab + '}; ' + _br;
        _classname = 'BS_I_' + (vehicleVarName _trigger) + '_' + _hashedVecName;
        _allUnitClassnames pushBackUnique _classname;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _tab + 'class ' + _classname + ':' + (typeof _x) + ' {' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'scope=2;' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'side=2;' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'faction="' + 'BS_I_' + (vehicleVarName _trigger) + '";' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'crew="' + 'BS_I_' + (vehicleVarName _trigger) + '_' + (_driverInfo select 0) + '_' + (_driverInfo select 1) + '";' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'typicalCargo[]= { ' + _br;
        
        _useComma = false;
        {
            private _comma = ',' + _br;
            if (!_useComma) then { _comma = ''; };
            private _driverInfo = [_driver] call SpecOps_fnc_toolExtractUnitTypeInfo;
            if (count _driverInfo <= 0) then { continue; };
            _toCopyGarageVehicles = _toCopyGarageVehicles + _comma +  _3tab + '"BS_I_' + (vehicleVarName _trigger) + '_' + (_driverInfo select 0) + '_' + (_driverInfo select 1) + '"';
            _useComma = true;
        } forEach (crew _x);
        _toCopyGarageVehicles = _toCopyGarageVehicles + _br + _2tab + '}; ' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _tab + '}; ' + _br;
        private _cost = ceil (getNumber (configFile >> "CfgVehicles" >> typeof (_x) >> "Cost") / 1000);
        private _category = _x getVariable ["SpecOps_GarageVehicleCategory", -1];
        private _staticCat = _x getVariable ["SpecOps_StaticGunCategory", -1];
        private _certificationLevel = _x getVariable ["SpecOps_GarageRequiredCertification", 0];
        diag_log format ["Generating Fatcion %1 => %2",typeof(_x),  ('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName)];
        // 
        diag_log format ["Generating Fatcion SpecOps_GarageVehicleCategory = %1, SpecOps_StaticGunCategory = %2",_category,  _staticCat];
        private _displayNameVec = getText (configFile >> "CfgVehicles" >> (typeof _x) >> "displayName");
        if (_category == 0) then { _antiAir pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _displayNameVec]; };
        if (_category == 1) then { _tanks pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _displayNameVec]; };
        if (_category == 2) then { _technical pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _displayNameVec]; };
        if (_category == 3) then { _troopTrucks pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _displayNameVec]; };
        if (_category <= -1) then {
            if (_staticCat == 3) then { _staticMGLow pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _displayNameVec]; };
            if (_staticCat == 4) then { _staticMGHigh pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _displayNameVec];  };
            if (_staticCat == 2) then { _staticMortar pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _displayNameVec]; };
            if (_staticCat == 1) then { _staticAA pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _displayNameVec];  };
            if (_staticCat == 0) then { _SAM pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _displayNameVec]; };
            if (_staticCat == 5) then { _searchLight pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _displayNameVec]; };
        };


        if ((_x isKindOf "LandVehicle")) then { _garage pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _certificationLevel, _cost, _category]; };
        if ((_x isKindOf "Ship_F")) then { _garage pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _certificationLevel, _cost, _category]; };
        if ((_x isKindOf "Air")) then { _garage pushbackUnique [('BS_B_' + (vehicleVarName _trigger) + '_' + _hashedVecName), _certificationLevel, _cost, _category]; };
        
    } else {
        _toCopyGarageVehicles = _toCopyGarageVehicles + _tab + 'class ' + _classname + ':' + (typeof _x) + ' {' + _br;

        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'scope=2;' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'side=3;' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'faction="' + 'BS_C_' + (vehicleVarName _trigger) + '";' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'crew="' + 'BS_C_' + (vehicleVarName _trigger) + '_' + (_driverInfo select 0) + '_' + (_driverInfo select 1) + '";' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _2tab + 'typicalCargo[]= { ' + _br;
        private _useComma = false;
        {
            private _comma = ',' + _br;
            if (!_useComma) then { _comma = ''; };
            private _driverInfo = [_driver] call SpecOps_fnc_toolExtractUnitTypeInfo;
            if (count _driverInfo <= 0) then { continue; };
            _toCopyGarageVehicles = _toCopyGarageVehicles + _comma + _3tab + '"BS_C_' + (vehicleVarName _trigger) + '_' + (_driverInfo select 0) + '_' + (_driverInfo select 1) + '"';
            _useComma = true;
        } forEach (crew _x);
        _toCopyGarageVehicles = _toCopyGarageVehicles + _br + _2tab + '}; ' + _br;
        _toCopyGarageVehicles = _toCopyGarageVehicles + _tab + '}; ' + _br;
    };




    _vehicleProcessed pushbackUnique (typeof _x);
    
} forEach(_allVehicles);


_toCopy = _toCopy + _toCopyGarageVehicles;
_toCopy = _toCopy + "};"; 

private _garageVehicles = str _garage;
_garageVehicles = [_garageVehicles, '[', '{'] call CBA_fnc_replace;
_garageVehicles = [_garageVehicles, ']', '}'] call CBA_fnc_replace;
if (_side != 3) then {
    private _cfgGroup = 'class CfgGroups { ' + _br;
    for "_i" from 0 to 2 do {
        private _grpSide = 0;
        private _sideClass = "East";
        private _sideClassPrefix = "BS_O";
        if (_i == 0) then { _sideClassPrefix = "BS_O"; _sideClass = "East"; _grpSide = 0; };
        if (_i == 1) then { _sideClassPrefix = "BS_I"; _sideClass = "Indep"; _grpSide = 2; };
        if (_i == 2) then { _sideClassPrefix = "BS_B"; _sideClass = "West"; _grpSide = 1; };

        _cfgGroup =  _cfgGroup + _tab + 'class ' + _sideClass + ' { ' + _br;
            _cfgGroup =  _cfgGroup + _2tab + 'class ' + (vehicleVarName _trigger) + ' { ' + _br; 
                _cfgGroup =  _cfgGroup + _3tab + 'name="' + (format[_displayName, _year]) + '";' + _br;
                _cfgGroup =  _cfgGroup + _3tab + 'class Infantry {' + _br;
                _cfgGroup =  _cfgGroup + _4tab + 'name="Infantry";' + _br;

                for "_ii" from 0 to 2 do {
                    private _camoNameShort = "WL";
                    private _camoName = "Woodland";
                    private _cat = "BSM_EdSubcat_Mec_Woodland";
                    
                    if (_ii == 0) then { _camoName = "Woodland"; _cat = "BSM_EdSubcat_Mec_Woodland"; _camoNameShort = "WL"; if (!_hasWoodland) then { continue; }; };
                    if (_ii == 1) then { _camoName = "Winter"; _cat = "BSM_EdSubcat_Mec_Winter"; _camoNameShort = "WT"; if (!_hasWinter) then { continue; }; };
                    if (_ii == 2) then { _camoName = "Desert"; _cat = "BSM_EdSubcat_Mec_Desert"; _camoNameShort = "DT"; if (!_hasDesert) then { continue; }; };
                    _cfgGroup =  _cfgGroup + _4tab + 'class ' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '_Fireteam_' + _camoNameShort + ' {' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'name="Fireteam (' + _camoName + ')";' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'editorSubcategory="' + _cat + '";' + _br;
                
                    _cfgGroup =  _cfgGroup + _5tab + 'side=' + (str _grpSide) + ';' + _br;

                    _cfgGroup =  _cfgGroup + _5tab + 'faction="' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '";' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'rarityGroup=0.5;' + _br;
                    private _groupPos = [["Rifleman", [0,0,0]], ["Rifleman", [5,-5,0]], ["AR", [-5,-5,0]], ["GL", [10,-10,0]]]; 
                    private _counterUnitGroup = 0;
                    {
                        private _pos = (_x select 1);
                        _cfgGroup =  _cfgGroup + _5tab + 'class Unit_' + (str _counterUnitGroup) + ' {' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'position[]={' + (str (_pos select 0)) + ',' + (str (_pos select 1)) +',' + ( str (_pos select 2)) + '};' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'rank="PRIVATE";' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'side=' + (str _grpSide) + ';' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'vehicle="' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '_' + (_x select 0) + '_' + _camoNameShort + '";' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + '};' + _br;
                        _counterUnitGroup = _counterUnitGroup + 1;
                    } forEach (_groupPos);
                    _cfgGroup =  _cfgGroup + _4tab + '};' + _br;
                };

                for "_ii" from 0 to 2 do {
                    private _camoNameShort = "WL";
                    private _camoName = "Woodland";
                    private _cat = "BSM_EdSubcat_Mec_Woodland";
                    if (_ii == 0) then { _camoName = "Woodland"; _cat = "BSM_EdSubcat_Mec_Woodland"; _camoNameShort = "WL"; if (!_hasWoodland) then { continue; }; };
                    if (_ii == 1) then { _camoName = "Winter"; _cat = "BSM_EdSubcat_Mec_Winter"; _camoNameShort = "WT"; if (!_hasWinter) then { continue; }; };
                    if (_ii == 2) then { _camoName = "Desert"; _cat = "BSM_EdSubcat_Mec_Desert"; _camoNameShort = "DT"; if (!_hasDesert) then { continue; }; };
                    _cfgGroup =  _cfgGroup + _4tab + 'class ' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '_Squad_' + _camoNameShort + ' {' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'editorSubcategory="' + _cat + '";' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'name="Squad (' + _camoName + ')";' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'side=' + (str _grpSide) + ';' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'faction="' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '";' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'rarityGroup=0.5;' + _br;
                    private _groupPos = [
                        ["Rifleman", [0,0,0]], ["Rifleman", [5,-5,0]], ["AR", [-5,-5,0]], ["GL", [10,-10,0]],
                        ["Rifleman", [20,-20,0]], ["Rifleman", [-15,-15,0]], ["AR", [15,-15,0]], ["GL", [-10,-10,0]]
                    ]; 
                    private _counterUnitGroup = 0;
                    {
                        private _pos = (_x select 1);
                        _cfgGroup =  _cfgGroup + _5tab + 'class Unit_' + (str _counterUnitGroup) + ' {' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'position[]={' + (str (_pos select 0)) + ',' + (str (_pos select 1)) +',' + ( str (_pos select 2)) + '};' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'rank="PRIVATE";' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'side=' + (str _grpSide) + ';' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'vehicle="' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '_' + (_x select 0) + '_' + _camoNameShort + '";' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + '};' + _br;
                        _counterUnitGroup = _counterUnitGroup + 1;
                    } forEach (_groupPos);
                    _cfgGroup =  _cfgGroup + _4tab + '};' + _br;
                };

                for "_ii" from 0 to 2 do {
                    private _camoNameShort = "WL";
                    private _camoName = "Woodland";
                    private _cat = "BSM_EdSubcat_Mec_Woodland";
                    if (_ii == 0) then { _camoName = "Woodland"; _cat = "BSM_EdSubcat_Mec_Woodland"; _camoNameShort = "WL"; if (!_hasWoodland) then { continue; }; };
                    if (_ii == 1) then { _camoName = "Winter"; _cat = "BSM_EdSubcat_Mec_Winter"; _camoNameShort = "WT"; if (!_hasWinter) then { continue; }; };
                    if (_ii == 2) then { _camoName = "Desert"; _cat = "BSM_EdSubcat_Mec_Desert"; _camoNameShort = "DT"; if (!_hasDesert) then { continue; }; };
                    _cfgGroup =  _cfgGroup + _4tab + 'class ' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '_AT_' + _camoNameShort + ' {' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'editorSubcategory="' + _cat + '";' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'name="Anti-Tank (' + _camoName + ')";' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'side=' + (str _grpSide) + ';' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'faction="' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '";' + _br;
                    _cfgGroup =  _cfgGroup + _5tab + 'rarityGroup=0.5;' + _br;
                    private _groupPos = [
                        ["Rifleman", [0,0,0]], ["Rifleman", [5,-5,0]], ["Rifleman", [-5,-5,0]], ["Rifleman", [10,-10,0]]
                    ]; 
                    private _counterUnitGroup = 0;
                    {
                        private _pos = (_x select 1);
                        _cfgGroup =  _cfgGroup + _5tab + 'class Unit_' + (str _counterUnitGroup) + ' {' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'position[]={' + (str (_pos select 0)) + ',' + (str (_pos select 1)) +',' + ( str (_pos select 2)) + '};' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'rank="PRIVATE";' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'side=' + (str _grpSide) + ';' + _br;
                        _cfgGroup =  _cfgGroup + _6tab + 'vehicle="' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '_' + (_x select 0) + '_' + _camoNameShort + '";' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + '};' + _br;
                        _counterUnitGroup = _counterUnitGroup + 1;
                    } forEach (_groupPos);
                    _cfgGroup =  _cfgGroup + _4tab + '};' + _br;
                };

                _cfgGroup =  _cfgGroup + _3tab + '};' + _br;

                _cfgGroup =  _cfgGroup + _3tab + 'class Motorized {' + _br;
                _cfgGroup =  _cfgGroup + _4tab + 'name="Mechanize Infantry";' + _br;


                private _mecGroupCount = 0;
                {
                    private _vec = _x select 0;
                    private _vecName = _x select 1;
                    for "_ii" from 0 to 2 do {
                    private _camoNameShort = "WL";
                    private _camoName = "Woodland";
                    private _cat = "BSM_EdSubcat_Mec_Woodland";
                    if (_ii == 0) then { _camoName = "Woodland"; _cat = "BSM_EdSubcat_Mec_Woodland"; _camoNameShort = "WL"; if (!_hasWoodland) then { continue; }; };
                    if (_ii == 1) then { _camoName = "Winter"; _cat = "BSM_EdSubcat_Mec_Winter"; _camoNameShort = "WT"; if (!_hasWinter) then { continue; }; };
                    if (_ii == 2) then { _camoName = "Desert"; _cat = "BSM_EdSubcat_Mec_Desert"; _camoNameShort = "DT"; if (!_hasDesert) then { continue; }; };
                        _cfgGroup =  _cfgGroup + _4tab + 'class ' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '_LightVehicle_' + _camoNameShort + '_' + (str _mecGroupCount) + ' {' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + 'editorSubcategory="' + _cat + '";' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + 'name="' + _vecName +' (' + _camoName + ')";' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + 'side=' + (str _grpSide) + ';' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + 'faction="' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '";' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + 'rarityGroup=0.5;' + _br;
                        
                        private _groupPos = [
                            [_vec, [0,0,0]], 
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_Rifleman_' + _camoNameShort), [5,-5,0]], 
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_Rifleman_' + _camoNameShort), [-5,-5,0]], 
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_Rifleman_' + _camoNameShort), [10,-10,0]], 
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_GL_' + _camoNameShort), [-10,-10,0]], 
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_AR_' + _camoNameShort), [15,-15,0]],  
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_AR_' + _camoNameShort), [-10,-20,0]]
                        ]; 
                        private _counterUnitGroup = 0;
                        {
                            private _pos = (_x select 1);
                            _cfgGroup =  _cfgGroup + _5tab + 'class Unit_' + (str _counterUnitGroup) + ' {' + _br;
                            _cfgGroup =  _cfgGroup + _6tab + 'position[]={' + (str (_pos select 0)) + ',' + (str (_pos select 1)) +',' + ( str (_pos select 2)) + '};' + _br;
                            _cfgGroup =  _cfgGroup + _6tab + 'rank="PRIVATE";' + _br;
                            _cfgGroup =  _cfgGroup + _6tab + 'side=' + (str _grpSide) + ';' + _br;
                            _cfgGroup =  _cfgGroup + _6tab + 'vehicle="' + (_x select 0) + '";' + _br;
                            _cfgGroup =  _cfgGroup + _5tab + '};' + _br;
                            _counterUnitGroup = _counterUnitGroup + 1;
                        } forEach (_groupPos);
                        _cfgGroup =  _cfgGroup + _4tab + '};' + _br;
                    };
                    _mecGroupCount = _mecGroupCount + 1; 
                } forEach (_technical);


                private _mecGroupCount = 0;
                {
                    private _vec = _x select 0;
                    private _vecName = _x select 1;
                    for "_ii" from 0 to 2 do {
                    private _camoNameShort = "WL";
                    private _camoName = "Woodland";
                    private _cat = "BSM_EdSubcat_Mec_Woodland";
                    if (_ii == 0) then { _camoName = "Woodland"; _cat = "BSM_EdSubcat_Mec_Woodland"; _camoNameShort = "WL"; if (!_hasWoodland) then { continue; }; };
                    if (_ii == 1) then { _camoName = "Winter"; _cat = "BSM_EdSubcat_Mec_Winter"; _camoNameShort = "WT"; if (!_hasWinter) then { continue; }; };
                    if (_ii == 2) then { _camoName = "Desert"; _cat = "BSM_EdSubcat_Mec_Desert"; _camoNameShort = "DT"; if (!_hasDesert) then { continue; }; };
                        _cfgGroup =  _cfgGroup + _4tab + 'class ' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '_Tank_' + _camoNameShort + '_' + (str _mecGroupCount) + ' {' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + 'editorSubcategory="' + _cat + '";' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + 'name="' + _vecName + ' (' + _camoName + ') ";' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + 'side=' + (str _grpSide) + ';' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + 'faction="' + _sideClassPrefix + '_' + (vehicleVarName _trigger) + '";' + _br;
                        _cfgGroup =  _cfgGroup + _5tab + 'rarityGroup=0.5;' + _br;

                        private _groupPos = [
                            [_vec, [0,0,0]], 
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_Rifleman_' + _camoNameShort), [5,-5,0]], 
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_Rifleman_' + _camoNameShort), [-5,-5,0]], 
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_Rifleman_' + _camoNameShort), [10,-10,0]], 
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_GL_' + _camoNameShort), [-10,-10,0]], 
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_AR_' + _camoNameShort), [15,-15,0]],  
                            [(_sideClassPrefix + '_' + (vehicleVarName _trigger) + '_AR_' + _camoNameShort), [-10,-20,0]]
                        ]; 
                        private _counterUnitGroup = 0;
                        {
                            private _pos = (_x select 1);
                            _cfgGroup =  _cfgGroup + _5tab + 'class Unit_' + (str _counterUnitGroup) + ' {' + _br;
                            _cfgGroup =  _cfgGroup + _6tab + 'position[]={' + (str (_pos select 0)) + ',' + (str (_pos select 1)) +',' + ( str (_pos select 2)) + '};' + _br;
                            _cfgGroup =  _cfgGroup + _6tab + 'rank="PRIVATE";' + _br;
                            _cfgGroup =  _cfgGroup + _6tab + 'side=' + (str _grpSide) + ';' + _br;
                            _cfgGroup =  _cfgGroup + _6tab + 'vehicle="' + (_x select 0) + '";' + _br;
                            _cfgGroup =  _cfgGroup + _5tab + '};' + _br;
                            _counterUnitGroup = _counterUnitGroup + 1;
                        } forEach (_groupPos);
                        _cfgGroup =  _cfgGroup + _4tab + '};' + _br; 
                    };
                    _mecGroupCount = _mecGroupCount + 1; 
                } forEach (_tanks);


                _cfgGroup =  _cfgGroup + _3tab + '};' + _br;


            _cfgGroup =  _cfgGroup + _2tab + '};' + _br;
        _cfgGroup =  _cfgGroup + _tab + '};' + _br;
    };

    _cfgGroup =  _cfgGroup + '};' + _br;
    _toCopy = _toCopy +  _br + _cfgGroup + _br;
};


private _allUnitClassnamesStr = (str _allUnitClassnames);
_allUnitClassnamesStr = [_allUnitClassnamesStr, '[', '{' + _br + _3tab] call CBA_fnc_replace;
_allUnitClassnamesStr = [_allUnitClassnamesStr, ',', ',' + _br + _3tab ] call CBA_fnc_replace;
_allUnitClassnamesStr = [_allUnitClassnamesStr, ']', _br + _2tab + '}'] call CBA_fnc_replace;

_toCopy = _toCopy + "class CfgPatches { " + _br;
_toCopy = _toCopy + _tab + "class bm_specops_faction_" + (vehicleVarName _trigger) + "{" + _br;
_toCopy = _toCopy + _2tab + 'author = "Broken Skull Mods";' + _br;
_toCopy = _toCopy + _2tab + 'weapons[]={};' + _br;
_toCopy = _toCopy + _2tab + 'requiredVersion=0.1;' + _br;
// _toCopy = _toCopy + _2tab + 'skipWhenMissingDependencies = 1;' + _br;
_toCopy = _toCopy + _2tab + 'requiredAddons[]=' + _requiredAddonsStr + ';' + _br;
_toCopy = _toCopy + _2tab + 'units[]=' + _allUnitClassnamesStr + ';' + _br;
_toCopy = _toCopy + _tab + '};' + _br;
_toCopy = _toCopy + '};' + _br;

_SAM = str _SAM;
_SAM = [_SAM, '[', '{'] call CBA_fnc_replace;
_SAM = [_SAM, ']', '}'] call CBA_fnc_replace;

_searchLight = str _searchLight;
_searchLight = [_searchLight, '[', '{'] call CBA_fnc_replace;
_searchLight = [_searchLight, ']', '}'] call CBA_fnc_replace;

_staticMGLow = str _staticMGLow;
_staticMGLow = [_staticMGLow, '[', '{'] call CBA_fnc_replace;
_staticMGLow = [_staticMGLow, ']', '}'] call CBA_fnc_replace;

_staticMGHigh = str _staticMGHigh;
_staticMGHigh = [_staticMGHigh, '[', '{'] call CBA_fnc_replace;
_staticMGHigh = [_staticMGHigh, ']', '}'] call CBA_fnc_replace;

_staticMortar = str _staticMortar;
_staticMortar = [_staticMortar, '[', '{'] call CBA_fnc_replace;
_staticMortar = [_staticMortar, ']', '}'] call CBA_fnc_replace;

_staticAA = str _staticAA;
_staticAA = [_staticAA, '[', '{'] call CBA_fnc_replace;
_staticAA = [_staticAA, ']', '}'] call CBA_fnc_replace;


_troopTrucks = str (_troopTrucks apply { _x select 0; });
_troopTrucks = [_troopTrucks, '[', '{'] call CBA_fnc_replace;
_troopTrucks = [_troopTrucks, ']', '}'] call CBA_fnc_replace;

_tanks = str (_tanks apply { _x select 0; });
_tanks = [_tanks, '[', '{'] call CBA_fnc_replace;
_tanks = [_tanks, ']', '}'] call CBA_fnc_replace;

_antiAir = str (_antiAir apply { _x select 0; });
_antiAir = [_antiAir, '[', '{'] call CBA_fnc_replace;
_antiAir = [_antiAir, ']', '}'] call CBA_fnc_replace;

_technical = str (_technical apply { _x select 0; });
_technical = [_technical, '[', '{'] call CBA_fnc_replace;
_technical = [_technical, ']', '}'] call CBA_fnc_replace;


_toCopy = _toCopy + "class CfgFactionClasses {";
_toCopy = _toCopy + format ['
%6%7 As Friendly (BluFOR)
%6class BS_B_%2_BASE { 
%6%6Advanced = 0; 
%6%6FortifyItems[] = {
%6%6%6{"Land_BagFence_Corner_F", 0.25}, {"Land_BagFence_End_F", 0.25}, {"Land_BagFence_Short_F", 0.5}, 
%6%6%6{"Land_BagFence_Round_F", 0.75}, {"Land_ConcreteHedgehog_01_F", 0.75}
%6%6};

%6%6EngineerItems[] = {
%6%6%6{"Land_BagBunker_Small_F", 1}, {"Land_HBarrierWall4_lxWS", 2}, {"Land_HBarrierWall_corner_lxWS", 3}, 
%6%6%6{"Land_HBarrierWall6_lxWS", 4}, {"Land_HBarrierTower_lxWS", 5}, {"Land_Cargo_Patrol_V1_F", 10}
%6%6};
%6%6ObjectiveCodenames[] = {
%6%6%6"Falcon", "Hurricane", "Twinkle", "Scout", "Roadrunner", "Wasp", "Crystal ", "Foxtail", "Aurora", 
%6%6%6"Sunburn", "Frostbite", "Nighthawk", "Sandstorm", "Lazy", "Phantom", "Unicorn", "Omega", "Watchdog", 
%6%6%6"Goose", "Mosquito", "Raven", "Chick", "Ladybug", "Salmon", "Termite", "Seagull", "Vulture", "Grasshopper", 
%6%6%6"Golden Eye", "Eureka", "Comet", "Lincoln", "Octopus", "Obsidian", "November", "Balloon", "Pigeons", "Preach",
%6%6%6"Impulse", "Cougar", "Scorpion", "Lightning", "Starburst", "Watchtower", "Cobra"
%6%6};

%6%6CampCodenames[] = {
%6%6%6"Camp Dignity", "Camp Diamond", "Camp Sundown", "Camp Detention", "Camp Venom", "Camp Enigma", "Camp Dragonfire", 
%6%6%6"Camp Hazard", "Camp Ambition", "Camp Honesty", "Camp Energy", "Camp Chaos", "Camp Satellite", "Camp Stormgaze", 
%6%6%6"Camp Solitude", "Camp Fear", "Camp Hurricane", "Camp Murder",  "Camp Carnage", "Camp Salvation"
%6%6};
%6%6brokenSkullArsenal[]=%8;
', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];
_toCopy = _toCopy + format ['%1%2%2garage[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _garageVehicles + ";";

_toCopy = _toCopy + format ['%1%2%2SamSystem[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _SAM + ";";

_toCopy = _toCopy + format ['%1%2%2SearchLight[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _searchLight + ";";

_toCopy = _toCopy + format ['%1%2%2StaticLowMG[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _staticMGLow + ";";

_toCopy = _toCopy + format ['%1%2%2StaticHighMG[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _staticMGHigh + ";";

_toCopy = _toCopy + format ['%1%2%2StaticMotar[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _staticMortar + ";";

_toCopy = _toCopy + format ['%1%2%2StaticAntiAir[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _staticAA + ";";

_toCopy = _toCopy + format ['%1%2%2VehicleTechnicals[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _technical + ";";

_toCopy = _toCopy + format ['%1%2%2VehicleAntiAircraft[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _antiAir + ";";

_toCopy = _toCopy + format ['%1%2%2VehicleTanks[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _tanks + ";";

_toCopy = _toCopy + format ['%1%2%2VehicleTransport[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _troopTrucks + ";";

_toCopy = _toCopy + format ['%1%2};', _br, (toString [9]), (toString [47, 47])];

if (_side != 3) then{
    _toCopy = _toCopy + format ['
    %6%7 As Friendly (BluFOR)
    %6class BS_B_%2 : BS_B_%2_BASE { 
    %6%6useForSpecOps = 1;   
    %6%6displayName = "%5";
    %6%6side = 1;       
    %6%6flag = "%4";
    %6%6icon = "%4";
    %6%6priority = 0; 
    %6};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];

    _toCopy = _toCopy + format ['
    %6%7 As Opposite Forces (OpFOR)
    %6class BS_O_%2 : BS_B_%2_BASE { 
    %6%6useForSpecOps = 1;
    %6%6displayName = "%5";
    %6%6side = 0;       
    %6%6flag = "%4";
    %6%6icon = "%4";
    %6%6priority = 0; 
    %6};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];


    _toCopy = _toCopy + format ['
    %6%7 As Independent (Independent)
    %6class BS_I_%2 : BS_B_%2_BASE { 
    %6%6useForSpecOps = 1;
    %6%6displayName = "%5";
    %6%6side = 2;       
    %6%6flag = "%4";
    %6%6icon = "%4";
    %6%6priority = 0; 
    %6};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];
    _toCopy = _toCopy + _br + "};";

    _toCopy = _toCopy + format ['
    %7 As Friendly (BluFOR)
    class SpecOps_Module_BLUFOR_Factions { 
    %6class BS_B_%2 { name = "%5"; value = "BS_B_%2"; };  
    };', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];

    _toCopy = _toCopy + format ['
    %7 As Friendly (BluFOR)
    class SpecOps_Module_OPFOR_Factions { 
    %6class BS_O_%2 { name = "%5"; value = "BS_O_%2"; };  
    };', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];


    _toCopy = _toCopy + format ['
    %7 As Friendly (BluFOR)
    class SpecOps_Module_GRE_Factions { 
    %6class BS_I_%2 { name = "%5"; value = "BS_I_%2"; };  
    };', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];


}else{
    _toCopy = _toCopy + format ['
    %6%7 As CIV
    %6class BS_C_%2 : BS_B_%2_BASE { 
    %6%6useForSpecOps = 1;   
    %6%6displayName = "%5";
    %6%6side = 3;       
    %6%6flag = "%4";
    %6%6icon = "%4";
    %6%6priority = 0; 
    %6};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];



};

copyToClipboard _toCopy;


format ["OK! (%1)", ([0, 999999] call BIS_fnc_randomInt)];
