/*
	[] call SpecOps_fnc_copyMapObjects;
*/
private _allBuildings = nearestTerrainObjects
[
	[worldSize / 2, worldSize / 2],
	[],
	worldSize * sqrt 2 / 2,
	false
];

{
	private _pos = getPos _x;
	private _dir = getDir _x;
	private _type = typeOf _x;
	private _entity  = create3DENEntity ["Object", _type, _pos, true];
	_entity setDir _dir;
} forEach(_allBuildings);

