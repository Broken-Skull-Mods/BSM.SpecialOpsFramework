params ["_prefix", ["_author", "No Author"], ["_internalPwrgrid", false]];
/*
	["bmtic", "BloodyMystik", false] call SpecOps_fnc_toolCompileWorld;
	["bmtic", "BloodyMystik", true] call SpecOps_fnc_toolCompileWorld;
*/
private _br = toString [13,10];
private _tab = (toString [9]);
private _2tab = _tab + _tab;
private _3tab = _2tab + _tab;
private _4tab = _3tab + _tab;
private _5tab = _4tab + _tab;
private _6tab = _5tab + _tab;
private _referencePoint = call SpecOps_fnc_getWorldReferenceBuilding;
private _objectsInTile = allMissionObjects "";
private _toCopy = "";

if (_internalPwrgrid) then {
	_toCopy = _toCopy + "class SpecOps_Powergrid_Maps {" + _br;
		_modCode = format ["%2_so_power_%3_by_%1_%4", _prefix, ([-99999, 99999] call BIS_fnc_randomInt), _author, worldName];
		_modCode = [_modCode] call SpecOps_fnc_commonSafeHashValue;
		_toCopy = _toCopy + _tab + format["class %2_%3_%1 {", _modCode, _prefix, worldName] + _br;
		_toCopy = _toCopy + _2tab + (format ['World="%1";', worldName]) + _br;
		private _powergrids = _objectsInTile select { ((typeof _x) == "bsm_so_dressup_pwrgrid"); };
		_toCopy = _toCopy + _2tab + ([_toCopy, _powergrids] call SpecOps_fnc_toolCompileWorldPowergrid) + _br;
	_toCopy = _toCopy + _tab + "};" + _br;
	_toCopy = _toCopy + "};" + _br;
	copyToClipboard _toCopy;
	format ["OK! (%1)", ([0, 999999] call BIS_fnc_randomInt)];
}else{
	_toCopy = _toCopy + "class SpecOps_DressUp_Maps {" + _br;
	private _allTiles = [] call SpecOps_fnc_getWorldTiles;
	private _addons = [];
	{
		private _tileId = _x select 0;
		private _tileCenter = _x select 1;
		private _furnitures = _objectsInTile select { (_x inArea [_tileCenter, 500, 500, 0, true]) && ((_x getVariable ["SpecOps_Area_Type", -1]) == 4); };
		_addons = [_furnitures, _addons] call SpecOps_fnc_toolCompileAddonFromArray;

		private _hostages = _objectsInTile select { (_x inArea [_tileCenter, 500, 500, 0, true]) && (captive _x); };
		private _vehicles = _objectsInTile select { (_x inArea [_tileCenter, 500, 500, 0, true]) && ((_x getVariable ["SpecOps_GarageVehicleCategory", -1]) >= 0) };
		private _socialEvents = _objectsInTile select { ((getpos _x) inArea [_tileCenter, 500, 500, 0, true]) && _x isKindOf "bsm_so_ao_social_event" };
		private _statics = _objectsInTile select { (_x inArea [_tileCenter, 500, 500, 0, true]) && ((_x getVariable ["SpecOps_StaticGunCategory", -1]) >= 0) };
		private _enemies = _objectsInTile select { (_x isKindOf "CAManBase") && (_x inArea [_tileCenter, 500, 500, 0, true]) && !(captive _x) && (side _x == west) };
		private _enemiesGroup =[]; 
		{ _enemiesGroup pushBackUnique (group _x); } forEach (_enemies);
		private _civilians = _objectsInTile select { (_x isKindOf "CAManBase") && (_x inArea [_tileCenter, 500, 500, 0, true]) && !(captive _x) && (side _x == civilian) };
		private _civilianGroups = []; 
		{ _civilianGroups pushBackUnique (group _x); } forEach (_civilians);
		
		if ((count _hostages <=  0) && (count _vehicles <=  0) && (count _statics <=  0) && (count _enemiesGroup <=  0) && (count _furnitures <=  0)) then { continue; };
		_toCopy = _toCopy + _tab + (format ["class BSM_%1_%2_%3_%4", _prefix, worldName, _tileId, ([10000, 99999] call BIS_fnc_randomInt)]) + " {" + _br;
		_toCopy = _toCopy + _2tab + (format ['ReferenceObjectType="%1";', typeof(_referencePoint)]) + _br;
		_toCopy = _toCopy + _2tab + (format ['World="%1";', worldName]) + _br;
		_toCopy = _toCopy + _2tab + (format ['Tile="%1";', _tileId]) + _br;
		_toCopy = _toCopy + _2tab + (format ['TileCenter[]={%1, %2, %3};', (_tileCenter select 0), (_tileCenter select 1), (_tileCenter select 2)]) + _br;	
		// Process the Hostages
		_toCopy = _toCopy + _2tab + ([_toCopy, _hostages, _referencePoint] call SpecOps_fnc_toolCompileWorldHostages) + _br;
		_toCopy = _toCopy + _2tab + ([_toCopy, _civilianGroups, _referencePoint] call SpecOps_fnc_toolCompileWorldCivilians) + _br;
		_toCopy = _toCopy + _2tab + ([_toCopy, _enemiesGroup, _referencePoint] call SpecOps_fnc_toolCompileWorldEnemies) + _br;
		_toCopy = _toCopy + _2tab + ([_toCopy, _furnitures, _referencePoint] call SpecOps_fnc_toolCompileWorldFurnitures) + _br;
		_toCopy = _toCopy + _2tab + ([_toCopy, _statics, _referencePoint] call SpecOps_fnc_toolCompileWorldStaticWeapons) + _br;
		_toCopy = _toCopy + _2tab + ([_toCopy, _vehicles, _referencePoint] call SpecOps_fnc_toolCompileWorldVehicles) + _br;
		_toCopy = _toCopy + _2tab + ([_toCopy, _socialEvents, _referencePoint] call SpecOps_fnc_toolCompileWorldSocialEvents) + _br;

		_toCopy = _toCopy + _tab + "};" + _br;
	} forEach (_allTiles);

	_addons pushBackUnique "tft_spec_ops_editor";
	// private _requiredAddonsStr = (str _requiredAddons); 
	// _requiredAddonsStr = [_requiredAddonsStr, '[', '{'] call CBA_fnc_replace;
	// _requiredAddonsStr = [_requiredAddonsStr, ']', '}'] call CBA_fnc_replace;

	_toCopy = _toCopy + "};" + _br ;


	private _requiredAddonsStr = (str _addons);
	_requiredAddonsStr = [_requiredAddonsStr, '[', '{' + _br + _3tab] call CBA_fnc_replace;
	_requiredAddonsStr = [_requiredAddonsStr, ',', ',' + _br + _3tab ] call CBA_fnc_replace;
	_requiredAddonsStr = [_requiredAddonsStr, ']', _br + _3tab + '}'] call CBA_fnc_replace;

	_toCopy = _toCopy + "class CfgPatches {" + _br;
	_modCode = format ["%2_dress_up_%3_specOps_by_%1", _prefix, ([-99999, 99999] call BIS_fnc_randomInt), _author];
	_modCode = [_modCode] call SpecOps_fnc_commonSafeHashValue;
	_toCopy = _toCopy + _tab + format["class %2_%1 {", _modCode, _prefix] + _br;
	_toCopy = _toCopy + _2tab + format['author = "%1";', _author] + _br;
	_toCopy = _toCopy + _2tab + "units[]={ };" + _br;
	_toCopy = _toCopy + _2tab + "weapons[]={};" + _br;
	_toCopy = _toCopy + _2tab + "requiredVersion=0.1;" + _br;
	_toCopy = _toCopy + _2tab + 'requiredAddons[]= ' + _requiredAddonsStr + ';' + _br;
	_toCopy = _toCopy + _2tab + 'skipWhenMissingDependencies = 1;' + _br;
	_toCopy = _toCopy + _tab + '};' + _br;
	_toCopy = _toCopy + '};' + _br;

	copyToClipboard _toCopy;
	format ["OK! (%1)", ([0, 999999] call BIS_fnc_randomInt)];
};


