
// private _objects = ["BUILDING", "BUNKER", "BUSSTOP", "CHAPEL",
// "CHURCH", "FORTRESS", "FOUNTAIN", "FUELSTATION", "HOSPITAL",
// "HOUSE", "LIGHTHOUSE", "POWERSOLAR", "RAILWAY",
// "RUIN", "SHIPWRECK", "TRACK", "TRANSMITTER", "VIEW-TOWER", "WATERTOWER"];
// private _allTerrainObjects = nearestTerrainObjects [[worldSize / 2, worldSize / 2], _objects, (worldSize * sqrt 2) / 2, false ];
// _allTerrainObjects append (allMissionObjects "building");

// {
//     private _building = _x;
// 	diag_log format ["SPEC-OPS (Ao Building): Listening to Death for %1 .", _building];
//     _building addMPEventHandler ["MPKilled", {
//         params ["_unit", "_killer"];
//         _decoration = _unit getVariable ["AO_Decorations", []];
//         _intels = _unit getVariable ["AO_Intels", []];
//         diag_log format ["SPEC-OPS (Ao Building): Dead Building %1 | %2.", _intels, _decoration];
//         { _x hideObjectGlobal true; } forEach (_decoration + _intels);
//     }];
// } forEach (_allTerrainObjects);


if (!isServer && is3DEN) exitWith {};
addMissionEventHandler ["BuildingChanged", {
	params ["_from", "_to", "_isRuin"];
	_decoration = _from getVariable ["AO_Decorations", []];
	_intels = _from getVariable ["AO_Intels", []];
	_to setVariable ["AO_Decorations", _decoration];
	_to setVariable ["AO_Intels", _intels];
	// Handle Destroyed
	if (damage _from >= 1) then {
		{ _x hideObjectGlobal true; } forEach (_decoration + _intels);
	};
	// systemChat format ["SPEC-OPS (Ao Building): Dead Building %1 | %2 | %3 | %4 | %5.", damage _from, damage _to, _isRuin, _decoration, _intels];
	 
}];