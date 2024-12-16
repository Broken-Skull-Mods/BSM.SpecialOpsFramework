params[["_selectedTriggers", []]];

all3DENEntities params ["_objects", "_groups", "_triggers", "_systems", "_waypoints", "_markers", "_layers", "_comments"];
if (count _selectedTriggers > 0) then {_triggers = _selectedTriggers;};
{
	private _inareaObjs = [];
	private _trigger = _x;
	{
		private _pos = (_x get3DENAttribute "position") select 0;
		if ( _x inArea _trigger ) then {_inareaObjs pushBack _x; _objects = _objects - [_x]; };
	} forEach(_objects);
	_inareaObjs pushBackUnique _x;

	{_x set3DENLayer -1; } forEach (_inareaObjs);
	[_inareaObjs] call SpecOps_fnc_3denSortAndGroup;
} forEach (_triggers);

[] spawn SpecOps_fnc_3denCleanEmptyLayers;
