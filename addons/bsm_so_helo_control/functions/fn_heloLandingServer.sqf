params ["_vehicle", "_modelGrp", "_player"];
{ deleteWaypoint _x } forEachReversed waypoints _modelGrp;
_wp = _modelGrp addWaypoint [getPos _player, 0];	
_wp setWaypointBehaviour "AWARE";
_wp setWaypointCombatMode "GREEN";
_wp setWaypointSpeed "NORMAL";
_wp setWaypointType "MOVE";
_wp setWaypointStatements ["true", "(vehicle this) land 'LAND';"];