params ["_vehicle", "_freq", "_marker", ["_amount", 1], ["_progressUp", -1]];
/*
	[this, [5,10], "market", 1, 20] spawn SpecOps_fnc_missionArtilleryConstantFire; 
*/
private _amountCount = _amount;
while {alive _vehicle} do {
	private _gunner = gunner _vehicle;
	if (!isNil "_gunner" && !alive _gunner) then { break; }; // Cancel loop if gunner dies
	private _size = getMarkerSize _marker;
	private _pos = getMarkerPos _marker;
	private _posTarget = _pos;
	_vehicle setVehicleAmmo 1;
	_vehicle doArtilleryFire [_posTarget, currentMagazine _vehicle, _amountCount];
	uiSleep (_freq call BIS_fnc_randomInt);
	if (_progressUp > -1) then {
		if (_amountCount < _progressUp) then { _amountCount = _amountCount + 1; };
	};
};

