
_checkRole = {
	params ["_entity"];
	!(_entity getVariable["bsm_so_arsenal_unitRifleman", false]) &&
	!(_entity getVariable["bsm_so_arsenal_unitAR", false]) &&
	!(_entity getVariable["bsm_so_arsenal_unitGren", false]) &&
	!(_entity getVariable["bsm_so_arsenal_unitMedic", false]) &&
	!(_entity getVariable["bsm_so_arsenal_unitSniper", false]) &&
	!(_entity getVariable["bsm_so_arsenal_unitSpecial1", false]) &&
	!(_entity getVariable["bsm_so_arsenal_unitSpecial2", false]) &&
	!(_entity getVariable["bsm_so_arsenal_unitVariation", false])
};
_extractRole = {
	params ["_entity"];
	if ((_entity getVariable["bsm_so_arsenal_unitRifleman", false])) exitWith { "Rifleman"; };
	if ((_entity getVariable["bsm_so_arsenal_unitAR", false])) exitWith { "GL"; };
	if ((_entity getVariable["bsm_so_arsenal_unitGren", false])) exitWith { "AR"; };
	if ((_entity getVariable["bsm_so_arsenal_unitMedic", false])) exitWith { "Medic"; };
	if ((_entity getVariable["bsm_so_arsenal_unitSniper", false])) exitWith { "SNP"; };
	if ((_entity getVariable["bsm_so_arsenal_unitSpecial1", false])) exitWith { "RTO"; };
	if ((_entity getVariable["bsm_so_arsenal_unitSpecial2", false])) exitWith { "DIVER"; };
	if ((_entity getVariable["bsm_so_arsenal_unitVariation", false])) exitWith { "Variation"; };
	"";
};

private _ingamePresets = [];
{ 
	if (!(_x isKindOf "CAManBase")) then { continue; };

	if (([_x] call _checkRole)) then { continue; };

	private _faction  = _x getVariable ["bs_specops_arsenal_ingame", ""];
	// using in-game system do not load last loadout.
	if (_faction == "") then { continue; };
	private _theRole = [_x] call _extractRole;
	if (_theRole == "") then { continue; };
	if (_theRole == "Variation") then {
		private _iteration = 0;
		private _roleName = format ["Variation_%1", _iteration];
		private _exist = count (_ingamePresets select { (_x select 0) == _faction && (_x select 1) == _roleName; }) > 0;
		while { _exist } do {
			_iteration = _iteration + 1;
			_roleName = format ["Variation_%1", _iteration];
			_exist = count (_ingamePresets select { (_x select 0) == _faction && (_x select 1) == _roleName; }) > 0;
		};
		// push preset loadout
		_ingamePresets pushBack [_faction, _roleName, getUnitLoadout _x];
	}else {
		private _exist = count (_ingamePresets select { (_x select 0) == _faction && (_x select 1) == _theRole; }) > 0;
		if (_exist) then { continue; };
		// push preset loadout
		_ingamePresets pushBack [_faction, _theRole, getUnitLoadout _x];
	};
	deleteVehicle _x; // Delete Unit
} forEach (allMissionObjects "");
missionNamespace setVariable ["bsm_so_session_presets", _ingamePresets];