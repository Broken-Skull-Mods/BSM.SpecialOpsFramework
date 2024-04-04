params ["_unit", "_typeCamo"];
/*
    [unit, 0] call SpecOps_fnc_toolCreateFactionUnitType; 
*/
private _output = "";
private _unit = _x;
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
if (_typeCamo == 0) then { _camoName = "Woodland"; _camoNameShort = "WL"; };
if (_typeCamo == 1) then { _camoName = "Winter"; _camoNameShort = "WT"; };
if (_typeCamo == 2) then { _camoName = "Desert"; _camoNameShort = "DT"; };
private _typeName = "";
private _scope = 2;
private _typeDisplayname = "";
if (_typePreset <= -1) then { continue; };
if (_typePreset == 1) then { _typeName = "Rifleman"; _typeDisplayname = format["Rifleman (%1)", _camoName]; };
if (_typePreset == 2) then { _typeName = "AR"; _typeDisplayname = format["Machine Gunner (%1)", _camoName]; };
if (_typePreset == 3) then { _typeName = "GL"; _typeDisplayname = format["Grenadier (%1)", _camoName]; };
if (_typePreset == 4) then { _typeName = "Medic"; _typeDisplayname = format["Doctor (%1)", _camoName]; };
if (_typePreset == 5) then { _typeName = "SNP"; _typeDisplayname = format["Sniper (%1)", _camoName]; };
if (_typePreset == 6) then { _typeName = "RTO"; _typeDisplayname = format["Radio Operator (%1)", _camoName]; };
if (_typePreset == 7) then { _typeName = "DIVER"; _typeDisplayname = format["Diver (%1)", _camoName]; };
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

private _unitInit = format ["[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;"];
private _unitIdentityOption = format ["{ %1, %2, %3, %4, %5 };", _typeFacePersian, _typeFaceWhite, _typeFaceBlack, _typeFaceGreek, _typeFaceAsian];
/*

*/
private _loadout =  str (getUnitLoadout [_unit, true]);
private _extractedStuff = [(getUnitLoadout [_unit, true])] call SpecOps_fnc_commonExtractUnitGearnStuff;
{
    private _addons = [];
    private _isMag = isClass (configFile >> "CfgMagazines" >> _x);
    if (_isMag) then { _addons = configSourceAddonList (configFile >> "CfgMagazines" >> _x); _commonArsenal pushbackUnique _x; };
    private _isWeapon = isClass (configFile >> "CfgWeapons" >> _x);
    if (_isWeapon) then { _addons = configSourceAddonList (configFile >> "CfgWeapons" >> _x); _commonArsenal pushbackUnique _x; };
    { _requiredAddons pushbackUnique _x; } forEach (_addons);
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
    private _baseUnit = "O_G_Survivor_F";
    private _prefix = "BS_O";
    private _comment = "This unit is for OpFOR";
    if (_i == 1) then { _baseUnit = "B_Survivor_F"; _prefix = "BS_B"; _comment = "This unit is for BluFOR"; };
    if (_i == 2) then { _baseUnit = "I_G_Survivor_F"; _prefix = "BS_I"; _comment = "This unit is for GRE"; };
    _output = _output + format ['
    %15%20 %22
    %15class %23_%3_%7_%14 : %2 {
    %15%15author = "Special Ops Framework Team"; 
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
    %15}; %1', _br, _baseUnit, (vehicleVarName _trigger), _i, "", _unitInit, _typeName,
        _loadout, _linkedItems, _weapons, str (backpack _unit), str (uniform _unit), _scope, _camoNameShort, 
        (toString [9]), _unitIdentityOption, _typeVoice, str _voiceSelected, str _faceSelected, (toString [47, 47]), _typeDisplayname, _comment, _prefix];
};

_output;