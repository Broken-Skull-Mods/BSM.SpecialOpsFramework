diag_log format ["SPEC-OPS (World Tiling): Warming up the World tiling system;"];
if (!isServer) exitWith {};
private _referencePoint = [] call SpecOps_fnc_getWorldReferenceBuilding;
if (isNull _referencePoint) exitWith { "Reference Building was not found."; };

diag_log format ["SPEC-OPS (World Tiling): World Reference Building Found: %1", _referencePoint];

private _allTiles = [] call SpecOps_fnc_getWorldTiles;
private _missionTilesEnemies = [];
private _missionTilesHostages = [];
private _missionTilesCivilians = [];
private _missionTilesFurnitures = [];
private _missionTilesStaticWeapons = [];
private _missionTilesVehicles = [];

{
	private _tileId = _x select 0;
	private _tileCenter = _x select 1;
	private _allTileAvailableClasses = "getText (_x >> 'Tile') == _tileId && getText (_x >> 'World') == worldName" configClasses (configFile >> "SpecOps_DressUp_Maps");
	if (count _allTileAvailableClasses <= 0) then { continue; };
	private _tileClass = selectRandom _allTileAvailableClasses;
	_missionTilesEnemies append (getArray (_tileClass >> 'Enemies'));
	_missionTilesHostages append (getArray (_tileClass >> 'Hostages'));
	_missionTilesCivilians append (getArray (_tileClass >> 'Civilians'));
	_missionTilesFurnitures append (getArray (_tileClass >> 'Furnitures'));
	_missionTilesStaticWeapons append (getArray (_tileClass >> 'StaticWeapons'));
	_missionTilesVehicles append (getArray (_tileClass >> 'Vehicles'));
} forEach (_allTiles);
diag_log format ["SPEC-OPS (World Tiling): Saving Tile Information"];
missionNamespace setVariable ["bsm_so_definedReferenceBuilding", _referencePoint];
missionNamespace setVariable ["bsm_so_defined_tiles_enemies", _missionTilesEnemies];
missionNamespace setVariable ["bsm_so_defined_tiles_civilians", _missionTilesCivilians];
missionNamespace setVariable ["bsm_so_defined_tiles_hostages", _missionTilesHostages];
missionNamespace setVariable ["bsm_so_defined_tiles_furnitures", _missionTilesFurnitures];
missionNamespace setVariable ["bsm_so_defined_tiles_vehicles", _missionTilesVehicles];
missionNamespace setVariable ["bsm_so_defined_tiles_staticWeapons", _missionTilesStaticWeapons];
