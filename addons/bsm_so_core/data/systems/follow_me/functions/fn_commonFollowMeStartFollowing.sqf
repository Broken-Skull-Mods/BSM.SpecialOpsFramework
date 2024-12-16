params ["_unit", "_follower"];

{deleteWaypoint _x} forEach waypoints group _unit; 
_unit setSpeedMode "FULL";
_unit setSkill 1;
_unit setCombatMode "BLUE";
_unit setBehaviour "CARELESS";
_unit setUnloadInCombat [false, false];
_unit doFollow _follower; //resuming unit from stop
_unit enableSimulation true;
_unit switchMove "";
_unit setUnitPos "UP";
