private _br = toString [13,10];
private _tab = (toString [9]);
private _allBuildings = (allMissionObjects "All") select {(_x getVariable ["SpecOps_Area_Type", 0]) == 1};
private _array = [];

{
	_array pushbackUnique (typeof _x);
} forEach(_allBuildings);
private _toCopy = "class SpecOps_DressUp {" + _br;
_toCopy = _toCopy + _tab + "class System {" + _br;
_toCopy = _toCopy + _tab + _tab + "KnownBuildingClasses[] += ";
private _arrayStr = str _array;

_arrayStr = [_arrayStr, '[', '{' + _br + _tab + _tab + _tab] call CBA_fnc_replace;
_arrayStr = [_arrayStr, ',', ',' + _br + _tab + _tab + _tab] call CBA_fnc_replace;
_arrayStr = [_arrayStr, ']', _br + _tab + _tab + '};'] call CBA_fnc_replace;
_toCopy = _toCopy + _arrayStr + _br;
_toCopy = _toCopy + _br + _tab + "};";
_toCopy = _toCopy + _br + "};";

copyToClipboard _toCopy;

format ["OK! (%1)", ([0, 999999] call BIS_fnc_randomInt)];
