
params [
	["_logic", objNull, [objNull]],		// Argument 0 is module logic
	["_units", [], [[]]],				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
	["_activated", true, [true]]		// True when the module was activated, false when it is deactivated (i.e., synced triggers are no longer active)
];
if (is3DEN || !isServer) exitWith {};
if (isNull _logic) exitWith {};

private _moduleArea = _logic getVariable ["objectArea", nil]; // [5.925,9.462,329.502,true,0]
private _moduleCombineArea = [getPos _logic, (_moduleArea select 0), (_moduleArea select 1), (_moduleArea select 2), (_moduleArea select 3), -1];
private _terrainObjects = nearestTerrainObjects [ [worldSize / 2, worldSize / 2], [], worldSize * sqrt 2 / 2, false ];
private _objectsInArea = (_terrainObjects + (allMissionObjects "All")) inAreaArray _moduleCombineArea; 

{
	private _hasDoors = (getNumber (configfile >> "CfgVehicles" >> (typeof _x) >> "numberOfDoors")) > 0;
	if (!_hasDoors) then { continue; };
	for "_i" from 0 to 30 do {
		if ((_x animationPhase format ["Door_%1_rot", _i]) >= 0) then {
			_x animate [format ["Door_%1_rot", _i], 0]; 
			_x setVariable [format ["bis_disabled_door_%1", _i], 1, true];
		};
	};
} forEach (_objectsInArea);
