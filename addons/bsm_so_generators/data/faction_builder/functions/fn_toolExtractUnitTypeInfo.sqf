params ["_unit"];
/*
[this] call SpecOps_fnc_toolExtractUnitTypeInfo;
*/
private _typePreset = _unit getVariable ["SpecOps_FactionGenerator", -1];
if (isNil "_typePreset") exitWith { [] };
private _typeCamo = _unit getVariable ["SpecOps_FactionGeneratorCamo", 0];
if (isNil "_typeCamo") exitWith { [] };
private _camoNameShort = "";
if (_typeCamo == 0) then { _camoNameShort = "WL"; };
if (_typeCamo == 1) then { _camoNameShort = "WT"; };
if (_typeCamo == 2) then { _camoNameShort = "DT"; };
if (_camoNameShort == "") exitWith { [] };
private _typeName = "";
if (_typePreset <= -1) exitWith { [] };
if (_typePreset == 1) then { _typeName = "Rifleman"; };
if (_typePreset == 2) then { _typeName = "AR"; };
if (_typePreset == 3) then { _typeName = "GL"; };
if (_typePreset == 4) then { _typeName = "Medic"; };
if (_typePreset == 5) then { _typeName = "SNP"; };
if (_typePreset == 6) then { _typeName = "RTO"; };
if (_typePreset == 7) then { _typeName = "DIVER"; };
if (_typePreset == 10) then { _typeName = "Officer"; };
if (_typePreset == 8) then { 
    _typeName = format["VAR_%1", _unitVariation]; _unitVariation = _unitVariation + 1; 
};
if (_typePreset == 9) then { 
    _typeName = format["Common_%1", _unitCommon]; _unitCommon = _unitCommon + 1; 
};
if (_typeName == "") exitWith { [] };

[_typeName, _camoNameShort];