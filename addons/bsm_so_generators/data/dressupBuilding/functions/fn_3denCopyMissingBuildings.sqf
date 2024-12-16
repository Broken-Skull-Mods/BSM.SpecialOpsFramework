// [] call SpecOps_fnc_3denCopyMissingBuildings;
_allBuildingTypes = [false] call SpecOps_fnc_3denHighlightBuildings;
private _similar = call SpecOps_fnc_compileGetSimilarBuildings;
private _extra = [];
{
	_class = _x;
	_i = _similar findif { _class in _x; };
	if (_i <= -1) then { continue; };
	{
		if (_x in _allBuildingTypes) then { continue; };
		_extra pushBackUnique _x;
	} forEach (_similar select _i);
} forEach(_allBuildingTypes);
_allBuildingTypes append _extra;
_allBuildingTypes = [_allBuildingTypes, [], {_x}, "ASCEND"] call BIS_fnc_sortBy;

private _generatedCode = "[" + (str _allBuildingTypes) + "] call SpecOps_fnc_3denSpawnBuildingFromTypes;";
copyToClipboard _generatedCode;
systemChat "The code is copied in your clipboard go into VR and press CTRL + D, CTRL + V and execute."