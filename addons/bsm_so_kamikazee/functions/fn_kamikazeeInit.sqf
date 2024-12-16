



if (hasInterface) then {
	
	
	["Special Ops Framework", "bsm_ctxk_uavblow", ["Blow Controlled UAV", "When press, UAV will blow up if Kamikazee Allows."], {  }, {
		[] spawn {
			private _uav = getConnectedUAV player;
			if (isNull _uav) exitWith {};
			private _hasBomb = (_uav getVariable ["SpecOps_EnableKamikazee", false]);
			if (!_hasBomb) exitWith {};
			playSound "FD_Start_F";
			sleep 0.1;
			[_uav, getPos _uav] call SpecOps_fnc_kamikazeeTriggerExplosion;
		};
	}] call CBA_fnc_addKeybind;

	["Special Ops Framework", "bsm_ctxk_blowsvest", ["Blow Remote Unit", "When press, Remote Controlled Unit will blow up."], {  }, {
		[] spawn {
			private _unit = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];
			if (_unit == player ) exitWith {};
			playSound "FD_Start_F";
			sleep 0.5;
			[_unit, getPos _unit] call SpecOps_fnc_kamikazeeTriggerExplosion;
		};
	}] call CBA_fnc_addKeybind;


	["Special Ops Framework", "bsm_ctxk_setdeadmanswitch", ["Deadman Switch Remote Unit", "When press, Remote Controlled Unit will have a chance to blow on hit and death."], {  }, {
		[] spawn {
			private _unit = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];
			if (_unit == player ) exitWith {};
			playSound "FD_Start_F";
			sleep 0.5;
			[_unit, true] call SpecOps_fnc_kamikazeeSetup;
		};
	}] call CBA_fnc_addKeybind;


	_condition = { 
		params["_target"];
		(player getUnitTrait "explosiveSpecialist") && unitIsUAV _target && !(_target getVariable ["SpecOps_EnableKamikazee", false])
	};

	_exec = {
		params["_target"];
		[_target, true] spawn SpecOps_fnc_kamikazeeSetup;
	};

	_action = ["bsm_so_hook_bomb", "Hook Bomb", "\tftm\icons\mine_explosion.paa", _exec, _condition] call ace_interact_menu_fnc_createAction;
	["All", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
	 
};

if (isServer) then {
	{ 
		if (!(_x getVariable ["SpecOps_EnableKamikazee", false])) then { continue; };
		if (_x isKindOf "CAManBase") then {
			[_x] spawn SpecOps_fnc_kamikazeeSetup;
		}else {
			[_x, true] spawn SpecOps_fnc_kamikazeeSetup;
		};
	} forEach (allMissionObjects "CAManBase");
};


