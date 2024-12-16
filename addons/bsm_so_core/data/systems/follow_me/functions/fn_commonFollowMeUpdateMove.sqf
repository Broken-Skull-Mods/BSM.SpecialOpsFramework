params ["_unit", "_follower"];

_unit lookAt _follower; 
doStop _unit;
_unit doFollow _follower; 