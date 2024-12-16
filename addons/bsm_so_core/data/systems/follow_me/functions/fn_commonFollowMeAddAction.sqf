if (!hasInterface || is3DEN) exitWith {};
private _isFriendlyWithWest = ([(side group player), west] call BIS_fnc_sideIsEnemy);
private _isFriendlyWithGRU = ([(side group player), independent] call BIS_fnc_sideIsEnemy);
private _isFriendlyWithCiv = ([(side group player), civilian] call BIS_fnc_sideIsEnemy);
private _isFriendlyWithEast = ([(side group player), east] call BIS_fnc_sideIsEnemy);

_conditionFollowMe = { 
	params ["_target"];
	alive _target 
	&& isNull (_target getVariable ["bsm_following_player", objNull])  
	&& (side group _target) != (side group player) 
	&& !(player getVariable ["_npcIsFollowing", false])
	&& !([(side group player), (side group _target)] call BIS_fnc_sideIsEnemy)
};
_conditionStopfollowMe = { 
	params ["_target"];
	alive _target 
	&& !(isNull (_target getVariable ["bsm_following_player", objNull])) 
	&& (_target getVariable ["bsm_following_player", objNull]) == player
};
_execFollowMe = { 
	params ["_target"];
	_target call BIS_fnc_ambientAnim__terminate;
	[_target, true] call SpecOps_fnc_commonFollowMeSetup; 
};
_execStopFollowingMe = { 
	params ["_target"];

	[_target, (selectRandom ["ApanPknlMstpSnonWnonDnon_G01", "ApanPknlMstpSnonWnonDnon_G02", "ApanPknlMstpSnonWnonDnon_G03"]), "ASIS"] call BIS_fnc_ambientAnim;
	[_target, false] call SpecOps_fnc_commonFollowMeSetup; 
};
_actionFollow = ["BSL_FollowMe", "Follow Me", "\tftm\icons\shadow_follower.paa", _execFollowMe, _conditionFollowMe] call ace_interact_menu_fnc_createAction;
_actionStopFollow = ["BSL_StopFollowingMe", "Stop Following", "\tftm\icons\shadow_follower.paa", _execStopFollowingMe, _conditionStopfollowMe] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions"], _actionFollow, true] call ace_interact_menu_fnc_addActionToClass;    
["CAManBase", 0, ["ACE_MainActions"], _actionStopFollow, true] call ace_interact_menu_fnc_addActionToClass; 

// ["CAManBase", 0, ["ACE_TapShoulderRight"], _actionFollow, true] call ace_interact_menu_fnc_addActionToClass;    
// ["CAManBase", 0, ["ACE_TapShoulderRight"], _actionStopFollow, true] call ace_interact_menu_fnc_addActionToClass; 

// ["CAManBase", 0, ["ACE_TapShoulderLeft"], _actionFollow, true] call ace_interact_menu_fnc_addActionToClass;    
// ["CAManBase", 0, ["ACE_TapShoulderLeft"], _actionStopFollow, true] call ace_interact_menu_fnc_addActionToClass; 

["CAManBase", 0, ["ACE_Head"], _actionFollow, true] call ace_interact_menu_fnc_addActionToClass;    
["CAManBase", 0, ["ACE_Head"], _actionStopFollow, true] call ace_interact_menu_fnc_addActionToClass; 

 