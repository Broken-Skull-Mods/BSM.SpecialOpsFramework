if (!hasInterface || is3DEN || !isMultiplayer ) exitWith {};


_handleAction = {  
	params ["_target", "_player", "_params"];
	[_target] spawn {
		params["_target"];
		["Healing Crew & Passengers", 30, {true}, {
			params["_target"];
			
			[crew (_target select 0)] remoteExec ["SpecOps_fnc_applyHealToGroupOfPlayer", -2];
		}, {}, [_target]] call CBA_fnc_progressBar;
	};        
};

_condition = { 
	params["_target"];
	!visibleMap && (_target getVariable ["bsm_so_medevac_enable", false]) && { (_target getVariable ["bsm_so_medevac_heal_all", false]) || (player getVariable ["ace_medical_medicClass", 0]) >= 1 };
};
_action = ["bsm_medevec", "Heal All", "", _handleAction, _condition] call ace_interact_menu_fnc_createAction;
_parentAction = ["bsm_medevec_parent", "Medical", "", {}, {true}] call ace_interact_menu_fnc_createAction;

["AllVehicles", 1, ["ACE_SelfActions"], _parentAction, true] call ace_interact_menu_fnc_addActionToClass;
["AllVehicles", 1, ["ACE_SelfActions", "bsm_medevec_parent"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_handleMedicBayHealOnAction = { 
	params ["_target", "_player", "_params"];
    [_target] spawn {     
		params ["_target"];
        ["Healing Nearby Units", 60, { !(player getVariable ["ACE_isUnconscious", false]) }, {
			params ["_target"];
    		_players = allPlayers inAreaArray [(getPos player), 10, 10, 0];
			[_players] remoteExec ["SpecOps_fnc_applyHealToGroupOfPlayer", -2];
        }, {}, [_target]] call CBA_fnc_progressBar;
    }; 
};


// HEAL UNITS NEARBY
_lobbyMedicBayGroupHeal = ["MedicalBayArea", "Heal Nearby", "\tftm\icons\healing.paa", _handleMedicBayHealOnAction, {
    !visibleMap && (_target getVariable ["bsm_so_medevac_heal_nearby", false]) && { (_target getVariable ["bsm_so_medevac_heal_all", false]) || (player getVariable ["ace_medical_medicClass", 0]) >= 1 };
}] call ace_interact_menu_fnc_createAction;

["All", 0, ["ACE_MainActions"], _lobbyMedicBayGroupHeal, true] call ace_interact_menu_fnc_addActionToClass; 




// Medical RESPAWN
_conditionSpawnMedRespawn = { !visibleMap && (isMultiplayer) && (_target getVariable ["bsm_so_medevac_respawn", false]) && { (_target getVariable ["bsm_so_medevac_heal_all", false]) || (player getVariable ["ace_medical_medicClass", 0]) >= 1 }; };
_execSpawnMedRespawn = { 
	params ["_target"];
	[] spawn {
		private _trackMedicalSpawn = missionNamespace getVariable ["bsm_so_medicalRespawn_Tracker", createHashmap];
		_trackMedicalSpawn set [getPlayerID player, [getPos player, name player]];
		missionNamespace setVariable ["bsm_so_medicalRespawn_Tracker", _trackMedicalSpawn, true];
		hint "Team Respawn on this Location.";
	};
};

_actionSpawnMedRespawn = ["MedicalBayArea", "Set Team Respawn", "\tftm\icons\shadow_follower.paa", _execSpawnMedRespawn, _conditionSpawnMedRespawn] call ace_interact_menu_fnc_createAction;
["All", 0, ["ACE_MainActions"], _actionSpawnMedRespawn, true] call ace_interact_menu_fnc_addActionToClass;



_conditionMedic = { 
	params["_target"];
	!(player getUnitTrait "Medic") && (_target getVariable ["bsm_so_medic_role", false])
};
_conditionDisableMedic = { 
	params["_target"];
	(player getUnitTrait "Medic") && (_target getVariable ["bsm_so_medic_role", false])
};
_execSetMedic = {
    player setUnitTrait ["Medic", true];
    player setVariable ["ace_medical_medicClass", 2, true];
};
_execUnsetMedic = { 
    player setUnitTrait ["Medic", false];
    player setVariable ["ace_medical_medicClass", 0, true];
};

_setMedicAction = ["BSL_BeMedic", "Become Medic", "\tftm\icons\medical_pack_alt.paa", _execSetMedic, _conditionMedic] call ace_interact_menu_fnc_createAction;
_unSetMedicAction = ["BSL_DontBeMedic", "Ditch Medic", "\tftm\icons\medical_pack_alt.paa", _execUnsetMedic, _conditionDisableMedic] call ace_interact_menu_fnc_createAction;

["All", 0, ["ACE_MainActions"], _unSetMedicAction, true] call ace_interact_menu_fnc_addActionToClass;
["All", 0, ["ACE_MainActions"], _setMedicAction, true] call ace_interact_menu_fnc_addActionToClass;

// First Time Deployment
_conditionDeploy = { 
	params["_target"];
	!(missionNamespace getVariable ["hasDeployed", false]) && (_target getVariable ["bsm_so_medevac_deployment", false])
};

_execDeploy = {
	[((call BIS_fnc_listPlayers) select { side (group player) == side _x && !(_x isKindOf "VirtualMan_F") && !(_x isKindOf "HeadlessClient_F")})] spawn SpecOps_fnc_systemRespawnOpenUI;
};

_deployAction = ["BSM_Deploy_FirstTime", "Deploy (Once)", "\tftm\icons\teleport.paa", _execDeploy, _conditionDeploy] call ace_interact_menu_fnc_createAction;
["All", 0, ["ACE_MainActions"], _deployAction, true] call ace_interact_menu_fnc_addActionToClass;