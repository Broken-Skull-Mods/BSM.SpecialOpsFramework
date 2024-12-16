params["_unit"];
doStop _unit;
player removeEventHandler ["GetInMan", player getVariable ["_idGetInMan", -1]];
player removeEventHandler ["GetOutMan",  player getVariable ["_idGetOutMan", -1]];
player setVariable ["_idGetInMan", nil];
player setVariable ["_idGetOutMan", nil];
player setVariable ["_npcIsFollowing", nil];

_unit setVariable ["bsm_following_player", objNull, true];