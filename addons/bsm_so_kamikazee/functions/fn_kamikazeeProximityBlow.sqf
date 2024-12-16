params ["_unit"];

while {uiSleep 0.1; alive _unit} do {
	// Only run when simulation is on
	if (!(simulationEnabled _unit)) then { continue; };
	_list = _unit nearEntities ["Man", 5];
	{
		if (side (group _x) == sideEnemy) exitWith {
			[_unit, getPos _unit] call SpecOps_fnc_kamikazeeTriggerExplosion;
		};
	} forEach(_list);
	uiSleep 0.1;
};


