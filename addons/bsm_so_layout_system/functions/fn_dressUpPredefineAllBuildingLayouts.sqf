// Run on server only.
if (!isServer) exitWith {};
/*
	[] spawn SpecOps_fnc_dressUpPredefineAllBuildingLayouts;
*/

private _objects = ["BUILDING", "BUNKER", "BUSSTOP", "CHAPEL",
"CHURCH", "FORTRESS", "FOUNTAIN", "FUELSTATION", "HOSPITAL",
"HOUSE", "LIGHTHOUSE", "POWERSOLAR", "RAILWAY",
"RUIN", "SHIPWRECK", "TRACK", "TRANSMITTER", "VIEW-TOWER", "WATERTOWER"];

private _allTerrainObjects = nearestTerrainObjects [[worldSize / 2, worldSize / 2], _objects, (worldSize * sqrt 2) / 2, false ];
_allTerrainObjects append (allMissionObjects "All");
diag_log format ["Assigning %1 Building Layouts", count _allTerrainObjects];
{
	[_x] call SpecOps_fnc_dressUpDefineBuildingLayout;
} forEach (_allTerrainObjects);

missionNamespace setVariable ["SpecOps_MapLayoutsDone", true, true];