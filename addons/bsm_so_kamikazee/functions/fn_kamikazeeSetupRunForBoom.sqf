params ["_unit"];
	if (!alive _unit) exitWith {}; // jic
_unit setVariable ["kamikazee_making_a_run", false];
	// removeAllWeapons _unit;// disarm to avoid impeding movements
	// get random range of activation
_distance = TFT_SVEST_KAMIKAZEE_SCAN_DISTANCE;
	// Sensitivity for knowledge is important to randomize kamikazee behavior towards player.
	// A Redicalize Kamikazee could decide to make a run for the player base on a hunch vs other which would require more definite kownledge.
_knowledgeSensitivity = random [1.5, 2, 3.4];
private _surrounding = [];
waitUntil { uiSleep 0.1;
	_surrounding = (_unit nearEntities ["Man", _distance]) select { side (group _x) == west };
	!alive _unit || {count _surrounding > 0}
};
_alreadyBlown = _unit getVariable ["svestTriggered", false];
	if (!alive _unit || _alreadyBlown) exitWith {}; // cancel if unit died

_nearestUnit = selectRandom _surrounding;
_nearestUnitGrp = group _nearestUnit;
_position = getPos _nearestUnit;
_grp = (group _unit);
{
	deleteWaypoint _x
} forEachReversed waypoints _grp;
diag_log format ["Kamikazee %1, has targeted %2 at %3.", _unit, _nearestUnit, _position];

_unit setVariable ["kamikazee_making_a_run", true];
_unit doMove _position;
_grp setSpeedMode "FULL";
_grp setCombatBehaviour "CARELESS";
_grp setBehaviourStrong "CARELESS";
_grp setBehaviour "CARELESS";
_grp setCombatMode "BLUE";
sleep 1;
[_unit] spawn SpecOps_fnc_kamikazeeSetupRunForBoom;

//                                  \bsm_so_core\data\systems\kamikazee\functions
// 23:18:47 Warning Message: Script \bsm_so_core\data\systems\medical_respawn\functions\fn_commonContentRandomTexture.sqf not found
// 23:18:47 Warning Message: Script \bsm_so_core\data\systems\medical_respawn\functions\fn_setBriefingTextures.sqf not found
// 23:18:47 Warning Message: Script bsm_so_core\data\systems\context_key\functions\fn_contextKeyInit.sqf not found
// 23:18:47 Warning Message: Script bsm_so_core\data\system\follow_me\functions\fn_commonFollowMeStopFollowing.sqf not found
// 23:18:47 Warning Message: Script bsm_so_core\data\system\follow_me\functions\fn_commonFollowMeSetup.sqf not found
// 23:18:47 Warning Message: Script bsm_so_core\data\system\follow_me\functions\fn_commonFollowMeHoldActionVehicle.sqf not found
// 23:18:47 Warning Message: Script bsm_so_core\data\system\follow_me\functions\fn_commonFollowMeEscortAIVehicle.sqf not found
// 23:18:47 Warning Message: Script bsm_so_core\data\system\follow_me\functions\fn_commonFollowMeAddAction.sqf not found
// 23:18:47 Warning Message: Script bsm_so_core\data\system\follow_me\functions\fn_commonLoadInVehicleAddAction.sqf not found