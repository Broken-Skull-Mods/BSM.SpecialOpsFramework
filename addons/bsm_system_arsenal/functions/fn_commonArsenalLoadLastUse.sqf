[] spawn {
	{ 
		if (!(_x getVariable["bsm_so_isFactionInitial", false])) then { continue; };
		private _camo  = _x getVariable ["bs_specops_arsenal_camo", "WL"]; 
    	private _faction  = _x getVariable ["bs_specops_arsenal", ""];
		// using in-game system do not load last loadout.
		if (_faction == "" || _faction == "preset_1" || _faction == "preset_2" || _faction == "preset_3" || _faction == "preset_4") then { continue; };
		private _faction = [
			[format ["%1_Rifleman_%2", _faction, _camo], "Rifleman"],
    		[format ["%1_GL_%2", _faction, _camo], "Grenadier"],
    		[format ["%1_AR_%2", _faction, _camo], "Autorifleman"],
    		[format ["%1_SNP_%2", _faction, _camo], "Sniper"],
    		[format ["%1_Medic_%2", _faction, _camo], "Medic"],
    		[format ["%1_RTO_%2", _faction, _camo], "AT"],
    		[format ["%1_DIVER_%2", _faction, _camo], "Special"]
		];
		player setVariable ["bsm_so_faction_keypair", _faction];
	} forEach (allMissionObjects "");

	_factionInfo = player getVariable ["bsm_so_faction_keypair", []];
	_lastLoadout = profileNamespace getVariable ["bsm_so_lastLoadout", nil];
	
	waitUntil { uiSleep 1; count _factionInfo > 0 };
	private _className = "";
	{
		if ((_x select 1) == "Rifleman") then { _className = _x select 0; };
		if (!isNil "_lastLoadout" && { (_x select 1) == _lastLoadout }) exitWith { _className = _x select 0; };
	} forEach (_factionInfo);

	private _customPreset = profileNamespace getVariable [_className, nil];
	if(!isNil "_customPreset") exitWith { 
		player setUnitLoadout _customPreset; 
		player setVariable ["SpecOps_Selected_Loadout", _customPreset]; 
	};
	private _unitLoadout = getArray (configFile >> "CfgVehicles" >> _className >> "ALiVE_orbatCreator_loadout");
	player setUnitLoadout _unitLoadout;
	player setVariable ["SpecOps_Selected_Loadout", _unitLoadout];
};



