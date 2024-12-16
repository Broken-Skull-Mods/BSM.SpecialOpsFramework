params ["_unit", ["_zeusOnly", false]];
_unit setVariable ["SpecOps_EnableKamikazee", true, true];

if ( !_zeusOnly) then {
	waitUntil { sleep 0.1; (simulationEnabled _unit) };
	private _handleProx = [_unit] spawn SpecOps_fnc_kamikazeeProximityBlow;
	private _handlerRunForBoom = [_unit] spawn SpecOps_fnc_kamikazeeSetupRunForBoom;

	_unit setVariable ["bsm_kamikazee_prox_handle", _handleProx];
	_unit setVariable ["bsm_run_for_boom", _handlerRunForBoom];

	// make sure kamikazee die on water.
	_unit setUnitPos "UP";
	_unit disableAI "AUTOCOMBAT"; // combat awareness (careless)
	_unit disableAI "COVER";
	_unit disableAI "MINEDETECTION";
	_unit disableAI "SUPPRESSION";
	_unit disableAI "TARGET";
	_unit disableAI "WEAPONAIM";
	_unit disableAI "FSM";
};


    // Chain Explosion
_unit addEventHandler ["Explosion", {
	params ["_vehicle", "_damage", "_source"];
	diag_log format ["%2 Explosion Hit, Blow %1", _damage, _vehicle];
	if (_damage > TFT_SVEST_PROB_BLOW_ON_EXPLOSION) then {
		[_vehicle, getPos _vehicle] spawn SpecOps_fnc_kamikazeeTriggerExplosion;
	};
}];

_unit addMPEventHandler ["MPKilled", {
	params ["_unit"];
	_alreadyBlown = _unit getVariable ["svestTriggered", false];
	if (_alreadyBlown) exitWith {};

	private _blowChance = ([0, 6] call BIS_fnc_randomInt);
	_chanceBlowOnDeath = [true, _blowChance, false, 1];
	
			// _chanceBlowOnDeath = [true, 1, false, 0];
	_blowOnDeath = selectRandomWeighted _chanceBlowOnDeath;
	if (!(_x isKindOf "CAManBase")) then { _blowOnDeath = true; };
	if (_blowOnDeath) then {
		[_unit, getPos _unit] spawn SpecOps_fnc_kamikazeeTriggerExplosion;
	};
}];

_unit addMPEventHandler ["MPHit", {
	params ["_unit"];
			// if unit dies cancel it let killed handler handle it.
	_alreadyBlown = _unit getVariable ["svestTriggered", false];
	if (!alive _unit || _alreadyBlown) exitWith { };
			// Each hit have a chance to trigger svest
	private _blowChance = ([0, 20] call BIS_fnc_randomInt);
	_chanceToTwitch = [true, _blowChance, false, 100];
	_blow = selectRandomWeighted _chanceToTwitch;
	diag_log format ["%2 Getting Hit, Blow %1", str _blow, _unit];
	if (_blow) then {
		[_unit, getPos _unit] call SpecOps_fnc_kamikazeeTriggerExplosion;
	};
}];