#include "\A3\Missions_F_Oldman\Systems\defines\escortAIDefines.inc";
params["_unit", ["_toggleOn", true]];

if (!_toggleOn) exitWith {
	private _followMeMessage = [
		"Player_Stop_Following_Kurt_1", 1,
		"Player_Stop_Following_Kurt_2", 1,
		"Player_Stop_Following_Kurt_3", 1,
		"Player_Stop_Following_Kurt_4", 1
	]; 
	playSound [selectRandomWeighted _followMeMessage, 10];
	[_unit] call SpecOps_fnc_commonFollowMeStopFollowing;
};

private _followMeMessage = [
	"USA_SOCOM_Generic_Player_Voice_Call_Escort_0", 1,
	"USA_SOCOM_Generic_Player_Voice_Call_Escort_1", 1,
	"USA_SOCOM_Generic_Player_Voice_Call_Escort_2", 1
]; 

playSound [selectRandomWeighted _followMeMessage, 10];
[player, _unit] remoteExec ["SpecOps_fnc_commonFollowMeStartFollowing", 2];
_unit setVariable ["bsm_following_player", player, true];
player setVariable ["_npcIsFollowing", true];

(group _unit) setGroupOwner (owner player);

[_unit] spawn {
	params["_unit"];
	while { alive _unit } do {
		if (!alive player) then { break; }; // Break if player dies
		if (isNull (_unit getVariable ["bsm_following_player", objNull])) then { break; }; // Break if player is no longer to followed.
		if ((_unit getVariable ["ACE_isUnconscious", false])) then { break; };
		if (vehicle player isEqualTo player) then {
			if (player distance2D _unit >= ESCORT_AI_PLAYER_RADIUS) then { 
				[_unit, (getPos vehicle player)] remoteExec ["doMove", 2];
			} else {
				[_unit, player] remoteExec ["SpecOps_fnc_commonFollowMeUpdateMove", 2];
				// fn_commonFollowMeUpdateMove
			}; // doStop _unit;_unit doFollow _unit; 
		};
		sleep ESCORT_AI_DELAY;
	};
	[_unit] call SpecOps_fnc_commonFollowMeStopFollowing;
};

player setVariable ["_trackedUnit", _unit];

if ((player getVariable ["_idGetInMan", -1]) isEqualTo -1) then { 
	_idGetInMan = player addEventHandler ["GetInMan", { 
		["EscortAI HoldAction AI GetInMan"] call bis_fnc_logFormat;
		params["_unit", "_positon", "_vehicle"];
		_trackedUnit = _unit getVariable "_trackedUnit";
		_trackedUnit setVariable ["_getInFired", time];
		
		_trackedUnit assignAsCargo _vehicle;
		[_trackedUnit, _vehicle] remoteExec ["moveInCargo", 2];
		
		// if ((_vehicle getVariable ["_idHoldAction", -1]) isEqualTo -1 ) then {
		// 	[_vehicle, true, {}, !(player getVariable ["_vehicleToggle", true])] call SpecOps_fnc_commonFollowMeHoldActionVehicle; 	
		// };
	}];
	player setVariable ["_idGetInMan", _idGetInMan];
};

if ((player getVariable ["_idGetOutMan", -1]) isEqualTo -1) then {
	_idGetOutMan = player addEventHandler ["GetOutMan", { 
		params["_unit", "_positon", "_vehicle"];
		_trackedUnit = _unit getVariable "_trackedUnit";
		[_trackedUnit] remoteExec ["unassignVehicle", 2];
		moveOut _trackedUnit;
		// [_vehicle, false] call SpecOps_fnc_commonFollowMeHoldActionVehicle;
	}];
	player setVariable ["_idGetOutMan", _idGetOutMan];
};