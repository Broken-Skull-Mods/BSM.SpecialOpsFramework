params ["_allBuildingTypes", ["_spawnWithTrigger", true]];

private _banned = call SpecOps_fnc_3denGetBannedBuildings;
private _row = 1;
private _xPos = 0 + (100 * _row);
private _yPos = 100;
{
	if (_x in _banned) then { continue; };
	private _entity = create3DENEntity ["Object", _x, [_xPos, _yPos, 0]];
	private _nbDoors = (getNumber (configfile >> "CfgVehicles" >> _x >> "numberOfDoors")) > 0;
	if (_nbDoors) then { _entity set3DENAttribute ["TFT_BuildingIsEnterable", true]; }; // when has door you 100% its enterable.
	_entity set3DENAttribute ["SpecOps_Area_Type", 1];
	if (_spawnWithTrigger) then {
		private _trigger = create3DENEntity ["Trigger", "EmptyDetector", getPos _entity];
		_trigger set3DENAttribute ["Size3",  [40,40, -1]];
		_trigger set3DENAttribute ["IsRectangle",  true];
	};

	_yPos = _yPos + 100;
	if (_yPos >= 8000) then { _yPos = 100; _row = _row + 3; _xPos = 0 + (100 * _row);};
} forEach (_allBuildingTypes);
