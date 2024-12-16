params ["_showHasLayout", ["_doorMode", -1]];
/*
    doorMode => -1 = Nothing | 1 = With Doors Only | 0 = With No Doors Only
    TO SHOW BUILDING THAT CONTAIN LAYOUTS
    [true] call SpecOps_fnc_3denHighlightBuildings;

    TO HIDE BUILDING WITH LAYOUTS (ONLY SHOW NON LAYOUT BUILDINGS)
    [false] call SpecOps_fnc_3denHighlightBuildings;
*/
private _allTerrainObjects = nearestTerrainObjects [[worldSize / 2, worldSize / 2], ["BUILDING", "BUNKER", "BUSSTOP", "CHAPEL", 
"CHURCH", "FORTRESS", "FOUNTAIN", "FUELSTATION", "HOSPITAL", 
"HOUSE", "LIGHTHOUSE", "POWERSOLAR", "RAILWAY", 
"RUIN", "SHIPWRECK", "TRACK", "TRANSMITTER", "VIEW-TOWER", "WATERTOWER"], (worldSize * sqrt 2) / 2, false ];
private _banned = call SpecOps_fnc_3denGetBannedBuildings;
private _notDoneTypes = [];
{
    private _buildingType = typeof _x;
    if (_buildingType in _banned) then { continue; };
    if (isnil "_buildingType" || {_buildingType == ""}) then {continue;};
    private _layouts = [];
    _layouts = [_x, true, 3] call SpecOps_fnc_dressUpBuildingGetBuildingLayouts; 
    if (count _layouts <= 0) then { 
        private _nbDoors = (getNumber (configfile >> "CfgVehicles" >> _buildingType >> "numberOfDoors"));
        if (_doorMode == 1 && _nbDoors <= 0) then { continue; };
        if (_doorMode == 0 && _nbDoors > 0) then { continue; };
        _notDoneTypes pushBackUnique (_buildingType);
        if (_showHasLayout) then { _x hideObject true; } else { _x hideObject false; };
        continue; 
    };
    _layout = selectRandom _layouts;
    if (_showHasLayout) then { _x hideObject false; } else { _x hideObject true; };
} forEach (_allTerrainObjects);
_notDoneTypes;