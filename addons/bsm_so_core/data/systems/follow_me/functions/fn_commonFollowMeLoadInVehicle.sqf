params ["_target", "_follower"];

_follower assignAsCargo _target;
_follower moveInCargo _target;
_follower disableAI "FSM";
_follower setBehaviour "CARELESS";
_target setUnloadInCombat [true, true];