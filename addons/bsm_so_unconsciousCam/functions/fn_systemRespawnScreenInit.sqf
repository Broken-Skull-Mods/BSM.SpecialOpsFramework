if (!hasInterface || !isMultiplayer) exitWith { };
[] spawn {

	sleep 3;
	player setVariable ["initialPosition", getPos player];
	waitUntil { uiSleep 1; !isNil "BSM_ALLOW_UNCONCAM_ENABLED";};
	if (!BSM_ALLOW_UNCONCAM_ENABLED) exitWith {};

	_respawn = 0 call bis_fnc_missionRespawnType;
	_typeOfRespawn = [configfile >> "CfgRespawnTemplates","respawnTemplates" + (["",_respawn] call bis_fnc_missionRespawnType)] call bis_fnc_returnconfigentry;
	_playerside = if (player call bis_fnc_isUnitVirtual) then {"VIRTUAL"} else {str (player call bis_fnc_objectSide)};
	_typeOfRespawn = getMissionConfigValue ["respawnTemplates" + _playerside, getMissionConfigValue ["respawnTemplates",_typeOfRespawn]];
	_hasMenuPosition = false;
	_hasCounter = false;
	if (typename _typeOfRespawn == typename []) then { 
		_hasMenuPosition = ("MenuPosition" in _typeOfRespawn); 
		_hasCounter = ("Counter" in _typeOfRespawn);
	}else {
		_hasCounter = _typeOfRespawn == "Counter";
	};
	private _checkPass = true;
	if (!_hasCounter) exitWith { systemChat format ["The spec-ops uncounscious camera is enabled but the mission does not use the counter when death happens... Uncon cam is disabled."]; };
	if (_hasMenuPosition) exitWith { systemChat format ["The spec-ops uncounscious camera is enabled but the mission uses the menu selection for respawn it should not, just counter... Uncon cam is disabled."]; };
	
	bsm_spectator_cam = objNull;
	["ace_unconscious", {
		params ["_unit", "_state"];
		if (!isNull (getAssignedCuratorLogic player)) exitWith { };
		if (alive _unit && _unit == player && _state) then {
			bsm_spectator_cam = [] spawn {
				params ["_unit"];
				sleep 2;
				private _isUncon = player getVariable ["ace_isunconscious", false];
				if (_isUncon) then {
					
					["Initialize", [player, [(side group player)], bsm_unconcam_allow_ai, bsm_unconcam_allow_fcam, bsm_unconcam_allow_tps, false, false, false, true, true]] call BIS_fnc_EGSpectator;
					if (BSM_ALLOW_UNCONCAM_ALLOW_DAMAGE) then {
						player allowDamage true;
					};
				};
			};
		};
		if (alive _unit && _unit == player && !_state) then {
			if (!isNull bsm_spectator_cam) then { terminate bsm_spectator_cam; };
			[] spawn {
				sleep 1;
				["Terminate"] call BIS_fnc_EGSpectator;
				vehicle player switchCamera "External";
			};
		};
	}] call CBA_fnc_addEventHandler;

	player addEventHandler ["Killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		player setVariable ["bsm_so_deathPos", getPos _unit];
		player setVariable ["bsm_so_currentLoadout", getUnitLoadout _unit];

		if (!isNull (getAssignedCuratorLogic player)) exitWith { };
		if (!isNull bsm_spectator_cam) then { terminate bsm_spectator_cam; };
		["Terminate"] call BIS_fnc_EGSpectator;
		vehicle player switchCamera "External";
	}];

	player addEventHandler ["Respawn", {
		params ["_unit", "_corpse"];
		["Terminate"] call BIS_fnc_EGSpectator;
		vehicle player switchCamera "External";
		
		_unit enableSimulationGlobal false;
		_unit hideObjectGlobal true;
		// private _list = (missionNamespace getVariable ["moduleList", []]);
		private _list = [];
		{
			if (typename _x == "ARRAY" && { count _x >= 3 }) then { _list pushback [_x, "Position (No Name)"]; continue; }; 
			if (typename _x == "ARRAY" && { count _x == 2 }) then { _list pushback _x; continue; }; 
			if (typename _x == "STRING") then { _list pushback [getMarkerPos _x, str _x]; continue; }; 
			if (typename _x == "OBJECT") then { _list pushback [getPos _x, (_x getVariable ["name", "Position (No Name)"])]; continue; }; 
		} forEach (((player call bis_fnc_getRespawnPositions) + ((player call bis_fnc_objectSide) call bis_fnc_getRespawnMarkers)));
		missionNamespace setVariable ["moduleListTMP", _list];
		private _medicalRespawn = missionNamespace getVariable ["bsm_so_medicalRespawn_Tracker", createHashmap];
		private _medic = [];
		{ _medic pushback _y; } forEach _medicalRespawn;
		_list append _medic;

		player setPos (player getVariable ["initialPosition", getPos player]);
		private _deathPos = player getVariable ["bsm_so_deathPos", getPos player];
		_list = [_list, [], { if (typename _x == "ARRAY") then { (_x select 0) distance _deathPos; } else { _x distance _deathPos; } }, "ASCEND"] call BIS_fnc_sortBy; // sort by closest respawn

		missionNamespace setVariable ["moduleListTMP", _list];
		private _previousLoadout = player getVariable ["bsm_so_currentLoadout", []];
		if (count _previousLoadout > 0) then { _unit setUnitLoadout _previousLoadout; };

		[_unit, _corpse] spawn {
			params ["_unit", "_corpse"];
			player setVariable ["bsmRespawnUsed", false];
			while {!(player getVariable ["bsmRespawnUsed", false])} do {
				[(missionNamespace getVariable ["moduleListTMP", []])] spawn SpecOps_fnc_systemRespawnOpenUI;
				sleep 1;
				waitUntil { sleep 0.1; isNull (uiNamespace getVariable ["SpecOps_OrkaUI_Current",  objNull]) };
			};
		};
	}];



};



