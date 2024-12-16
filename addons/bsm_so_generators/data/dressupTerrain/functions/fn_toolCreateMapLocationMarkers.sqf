private _allLocationTypes = [];
private _allowedLocationType = ["NameVillage", "NameLocal", "NameCity", "NameCityCapital", "Name", "CityCenter"];
private _locationsFound = "(getText (_x >> 'type')) in _allowedLocationType" configClasses (configFile >> "CfgWorlds" >> worldName >> "Names");
private _processedLocations = [];
{
    private _angle = getNumber(_x >> "angle"); 
    private _radiusA = getNumber(_x >> "radiusA"); 
    private _radiusB = getNumber(_x >> "radiusB");
    private _pos = getArray (_x >> "position"); 
    _pos pushBack 0;
    _processedLocations pushBackUnique [_angle, [_radiusA, _radiusB], _pos];
} forEach (_locationsFound);

{
    private _size = (_x select 1);
    private _m = create3DENEntity ["Marker", "", (_x select 2)]; // default rectangular marker
    _m set3DENAttribute ["markerType", 1];	// 0 - rectangle; 1 - ellipse
    _m set3DENAttribute ["brush", "DiagGrid"];
    _m set3DENAttribute ["size2", _size];
} forEach(_processedLocations);
