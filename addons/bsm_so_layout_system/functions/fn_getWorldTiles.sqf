/*
	This function will extract all the squared tiles base off 1000 meter grid for the whole map.

	private _f = [] call SpecOps_fnc_toolGetWorldTiles;

*/
private _shot = worldName call BIS_fnc_mapSize;
private _gridRefAreas = [];
private _count = ceil (_shot / 1000);
private _startX = -500;
private _startY = -500;
for "_i" from 0 to _count do {
	private _centerX = _startX + (_i * 1000);
	for "_e" from 0 to _count do {
		private _centerY = _startY + (_e * 1000);
		_idA = [str _centerX, '-', '_'] call CBA_fnc_replace;
		_idA = [_idA, '.', '_'] call CBA_fnc_replace;

		_idB = [str _centerY, '-', '_'] call CBA_fnc_replace;
		_idB = [_idB, '.', '_'] call CBA_fnc_replace;
		_gridRefAreas pushBack [format ["%1%2", _idA, _idB], [_centerX, _centerY, 0]]; // ["100:100", [100,100,0]]
	};
};
_gridRefAreas;

