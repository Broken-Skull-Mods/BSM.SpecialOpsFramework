params ["_unit", "_typeCamo", ["_allUnitClassnames", []], ["_addonList", []], ["_isShadow", false]];

private _output = "";
private _unit = _x;
private _autofill = _unit getVariable ["SpecOps_FactionAutoFillCommon", false];
private _usingACE = if (isClass(configFile >> "CfgPatches" >> "ace_main")) then { true; } else { false; };
private _usingKAT = if (isClass(configFile >> "CfgPatches" >> "kat_main")) then { true; } else { false; };
if (_autofill && _usingACE && _usingKAT) then {
    [_unit] call SpecOps_fnc_toolAutoFillLoadout;
};

private _typeVoice = _unit getVariable ["SpecOps_FactionGeneratorVoice", 0];
private _typeFacePersian = _unit getVariable ["SpecOps_FactionGeneratorFacePersian", false];
private _typeFaceWhite = _unit getVariable ["SpecOps_FactionGeneratorFaceWhite", false];
private _typeFaceBlack = _unit getVariable ["SpecOps_FactionGeneratorFaceBlack", false];
private _typeFaceGreek = _unit getVariable ["SpecOps_FactionGeneratorFaceGreek", false];
private _typeFaceAsian = _unit getVariable ["SpecOps_FactionGeneratorFaceAsian", false];
if (!_typeFacePersian && !_typeFaceWhite && !_typeFaceBlack && !_typeFaceGreek && !_typeFaceAsian) then {
    _typeFacePersian = 1; _typeFaceWhite = 1; _typeFaceBlack = 1; _typeFaceGreek = 1; _typeFaceAsian = 1;
} else {
    if (_typeFacePersian) then { _typeFacePersian = 1; } else { _typeFacePersian = 0; };
    if (_typeFaceWhite) then { _typeFaceWhite = 1; } else { _typeFaceWhite = 0; };
    if (_typeFaceBlack) then { _typeFaceBlack = 1; } else { _typeFaceBlack = 0; };
    if (_typeFaceGreek) then { _typeFaceGreek = 1; } else { _typeFaceGreek = 0; };
    if (_typeFaceAsian) then { _typeFaceAsian = 1; } else { _typeFaceAsian = 0; };
};
private _faceSelected = [[_typeFacePersian, _typeFaceWhite, _typeFaceBlack, _typeFaceGreek, _typeFaceAsian]] call SpecOps_fnc_commonGetRandomFace;
private _voiceSelected = [_typeVoice] call SpecOps_fnc_commonGetRandomVoice; 
diag_log format ["%1", _voiceSelected];

private _typePreset = _unit getVariable ["SpecOps_FactionGenerator", -1];
private _camoName = "";
private _camoNameShort = "";
private _subCat = "BSM_EdSubcat_Unit_Woodland";
if (_typeCamo == 0) then { _camoName = "Woodland"; _camoNameShort = "WL";  };
if (_typeCamo == 1) then { _subCat = "BSM_EdSubcat_Unit_Winter"; _camoName = "Winter"; _camoNameShort = "WT"; };
if (_typeCamo == 2) then { _subCat = "BSM_EdSubcat_Unit_Desert"; _camoName = "Desert"; _camoNameShort = "DT"; };
if (_typeCamo == 3) then { _subCat = "EdSubcat_Personnel"; _camoName = "Civilian"; _camoNameShort = "CIV"; };
private _typeName = "";
private _scope = 2;
if (_isShadow) then { _scope = 0; };
private _typeDisplayname = "";
if (_typeCamo != 3) then {
    if (_typePreset <= -1) then { continue; };
    if (_typePreset == 1) then { _typeName = "Rifleman"; _typeDisplayname = format["Rifleman (%1)", _camoName]; };
    if (_typePreset == 2) then { _typeName = "AR"; _typeDisplayname = format["Machine Gunner (%1)", _camoName]; };
    if (_typePreset == 3) then { _typeName = "GL"; _typeDisplayname = format["Grenadier (%1)", _camoName]; };
    if (_typePreset == 4) then { _typeName = "Medic"; _typeDisplayname = format["Doctor (%1)", _camoName]; };
    if (_typePreset == 5) then { _typeName = "SNP"; _typeDisplayname = format["Sniper (%1)", _camoName]; };
    if (_typePreset == 6) then { _typeName = "RTO"; _typeDisplayname = format["Anti-Tank (%1)", _camoName]; };
    if (_typePreset == 7) then { _typeName = "DIVER"; _typeDisplayname = format["Special (%1)", _camoName]; };
    if (_typePreset == 10) then { _typeName = "Officer"; _typeDisplayname = format["Officer (%1)", _camoName]; };
    if (_typePreset == 8) then { 
        _typeName = format["VAR_%1", _unitVariation]; _unitVariation = _unitVariation + 1; 
        _typeDisplayname = format["Variant %1", _unitVariation]; 
        _scope = 0;
    };
    if (_typePreset == 9) then { 
        _typeName = format["COMMON_%1", _unitCommon]; _unitCommon = _unitCommon + 1; 
        _typeDisplayname = format["Fixed %1", _unitCommon]; 
        _scope = 0;
    };
}else{
    _typeName = format["VAR_%1", _unitVariation]; _unitVariation = _unitVariation + 1; 
    _typeDisplayname = format["Variant %1", _unitVariation]; 
};


private _unitInit = format ["[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;"];
private _unitIdentityOption = format ["{ %1, %2, %3, %4, %5 };", _typeFacePersian, _typeFaceWhite, _typeFaceBlack, _typeFaceGreek, _typeFaceAsian];

private _loadout =  str (getUnitLoadout [_unit, true]);
private _extractedStuff = [(getUnitLoadout [_unit, true])] call SpecOps_fnc_commonExtractUnitGearnStuff;
{
    private _addons = [];
    private _isMag = isClass (configFile >> "CfgMagazines" >> _x);
    if (_isMag) then { _addons = configSourceAddonList (configFile >> "CfgMagazines" >> _x); _commonArsenal pushbackUnique _x; };
    private _isWeapon = isClass (configFile >> "CfgWeapons" >> _x);
    if (_isWeapon) then { _addons = configSourceAddonList (configFile >> "CfgWeapons" >> _x); _commonArsenal pushbackUnique _x; };
    if (!_isMag && !_isWeapon) then { continue; };
    { _addonList pushbackUnique _x; } forEach (_addons);
} forEach(_extractedStuff);
_loadout = [_loadout, '[', '{'] call CBA_fnc_replace;
_loadout = [_loadout, ']', '}'] call CBA_fnc_replace;

private _linkedItems = str (assignedItems [_unit, true, false]);
_linkedItems = [_linkedItems, '[', '{'] call CBA_fnc_replace;
_linkedItems = [_linkedItems, ']', '}'] call CBA_fnc_replace;
_weapons = [];
if ((primaryWeapon _unit) != "" ) then { _weapons pushback (primaryWeapon _unit); };
if ((secondaryWeapon _unit) != "" ) then { _weapons pushback (secondaryWeapon _unit); };
if ((handgunWeapon _unit) != "" ) then { _weapons pushback (handgunWeapon _unit); };
if ((binocular _unit) != "" ) then { _weapons pushback (binocular _unit); };
private _weapons = str _weapons;
_weapons = [_weapons, '[', '{'] call CBA_fnc_replace;
_weapons = [_weapons, ']', '}'] call CBA_fnc_replace;
for "_i" from 0 to 2 do {
    private _sideToSet = 0;
    if (_i > 0 && _typeCamo == 3) then { continue; };
    private _baseUnit = "O_G_Survivor_F";
    private _prefix = "BS_O";
    private _comment = "This unit is for OpFOR";
    if (_typeCamo == 3) then {
        _baseUnit = "C_man_polo_1_F";
        _prefix = "BS_C";
        _comment = "This unit is for Civilian.";
        _sideToSet = 3;
    };
    if (_i == 1) then { _baseUnit = "B_Survivor_F"; _prefix = "BS_B"; _comment = "This unit is for BluFOR"; _sideToSet = 1;};
    if (_i == 2) then { _baseUnit = "I_G_Survivor_F"; _prefix = "BS_I"; _comment = "This unit is for GRE"; _sideToSet = 2; };
    _classname = _prefix + '_' + (vehicleVarName _trigger) + '_' + _typeName + '_' + _camoNameShort;
    if (_typeCamo == 3 || { _typePreset != 8 && _typePreset != 9 } ) then { _allUnitClassnames pushBackUnique _classname; };
    
    _output = _output + format ['
    %15%20 %22
    %15class %23_%3_%7_%14 : %2 {
    %15%15author = "Special Ops Framework Team"; 
    %15%15editorSubcategory = "%24";
    %15%15identityFacesSpecOps[] = %16 %20 Set Identity for SpecOps System.
    %15%15identityVoiceSpecOps = %17; %20 Choosen Voice Pool for this Unit.
    %15%15scope = %13; 
    %15%15scopeCurator = %13; 
    %15%15bsCamo = "%14"; 
    %15%15displayName = "%21"; 
    %15%15faction = "%23_%3"; 
    %15%15identityTypes[] = {%19, %18 ,"G_NATO_default"};
    %15%15uniformClass = %12; 
    %15%15linkedItems[] = %9; 
    %15%15respawnlinkedItems[] = %9; 
    %15%15weapons[] = %10; 
    %15%15respawnWeapons[] = %10;
    %15%15magazines[] = {};
    %15%15respawnMagazines[] = {};
    %15%15backpack = %11;
    %15%15class EventHandlers
    %15%15{
    %15%15%15init = "%6";
    %15%15};
    %15%15ALiVE_orbatCreator_loadout[] = %8;
    %15%15ALiVE_orbatCreator_owned = 1;
    %15%15side = %4; 
    %15}; %1', _br, _baseUnit, (vehicleVarName _trigger), _sideToSet, "", _unitInit, _typeName,
        _loadout, _linkedItems, _weapons, str (backpack _unit), str (uniform _unit), _scope, _camoNameShort, 
        (toString [9]), _unitIdentityOption, _typeVoice, str _voiceSelected, str _faceSelected, (toString [47, 47]), _typeDisplayname, _comment, _prefix, _subCat];
    
};

[_allUnitClassnames, _output, _addonList];

