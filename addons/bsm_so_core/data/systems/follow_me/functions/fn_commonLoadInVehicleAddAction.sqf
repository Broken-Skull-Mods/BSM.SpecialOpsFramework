if (!hasInterface || is3DEN) exitWith {};

_conditionLoadInVehicle = { 
	params ["_target"];
	alive _target && (player getVariable ["_npcIsFollowing", false])
};

_execLoadInVehicle = { 
	params ["_target"];
	private _unit = player getVariable ["_trackedUnit", objNull];
	if (isNull _unit) exitWith {};
	
	[_unit, false] call SpecOps_fnc_commonFollowMeSetup; 

	if (!isPlayer (driver (vehicle player))) exitWith { 
		deleteVehicle _unit;
		systemChat "Follower has been extracted, only player drivers can fully extract.";
	 };

	[_target, _unit] remoteExec ["SpecOps_fnc_commonFollowMeLoadInVehicle", 2];

};

		


_actionFollow = ["BSL_LoadFollower", "Load Follower", "\tftm\icons\shadow_follower.paa", _execLoadInVehicle, _conditionLoadInVehicle] call ace_interact_menu_fnc_createAction;
["Air", 0, ["ACE_MainActions"], _actionFollow, true] call ace_interact_menu_fnc_addActionToClass;    
["Land", 0, ["ACE_MainActions"], _actionFollow, true] call ace_interact_menu_fnc_addActionToClass;    
["Ship", 0, ["ACE_MainActions"], _actionFollow, true] call ace_interact_menu_fnc_addActionToClass;    