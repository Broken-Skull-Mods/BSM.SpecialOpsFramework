/*
    [thisTrigger, "DressUpFurnituresAttributes"] call SpecOps_fnc_dressUpCompileAttributes;
    [thisTrigger, "DressUpAreaBuildingAttributes"] call SpecOps_fnc_dressUpCompileAttributes;
*/
params ["_trigger", "_attributeName"];
private _processed = [];
private _tab = (toString [9]);
private _br = toString [13,10];
private _toCopy = "";
{
    if (_x isKindOf "StaticWeapon" || _x isKindOf "CAManBase") then {continue;};
    if ((_x inArea _trigger) && !((typeOf _x) in _processed) ) then {
        _toCopy = _toCopy + format ["%2class %1 { class Attributes : %4 { }; };%3", typeOf _x, _tab, _br, _attributeName];
        _processed pushbackUnique (typeOf _x);
    };
} forEach (allMissionObjects "All");

copytoclipboard _toCopy;
hint format ["%1 Copied!", _attributeName];