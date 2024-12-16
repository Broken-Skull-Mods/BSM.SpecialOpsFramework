/*
	[[reinforcement_1], getPos target_1, false, 15] call SpecOps_fnc_reinforcementAttack;
*/

params ["_groups", "_attackPos", ["_forceRoad", false], ["_convoySeparation", nil]];

if (!isServer) exitWith {};



{
	// Enable them all
	private _group = _x;

	{
		private _unit = _x;
		if (!(simulationEnabled _unit)) then { _unit enableSimulationGlobal true; };
		if ((isObjectHidden _unit)) then { _unit hideObjectGlobal false; };
		if (!(isDamageAllowed _unit)) then { _unit allowDamage true; };
		if (vehicle _unit != _unit) then {
			if (_forceRoad) then {
				(vehicle _unit) forceFollowRoad true;
			};
			if (!isNil "_convoySeparation") then {
				(vehicle _unit) setConvoySeparation _convoySeparation;
			};
		};

	} forEach (units _group);
	
	[_group, _attackPos] call BIS_fnc_taskAttack;
} forEach (_groups);
