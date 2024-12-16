    params ["_modelGrp", "_destination", "_icon", "_land"];

    // Clear all waypoints
    { deleteWaypoint _x } forEachReversed waypoints _modelGrp;
    // Assign Next Move
    _wp = _modelGrp addWaypoint [_destination, 0];	
    _wp setWaypointBehaviour "AWARE";
    _wp setWaypointCombatMode "GREEN";
    _wp setWaypointSpeed "FULL";
    _wp setWaypointType "MOVE";
    if(_land) then {
        _wp setWaypointStatements ["true", "(vehicle this) land 'LAND';"];
    };
    // _marker = group _player getVariable ["TFT_SUPP_AIR_TSP_MARKER", nil];
    // _marker setMarkerShape "ICON";
    // _marker setMarkerType  _icon;
    // _marker setMarkerColor markerColorPlayers;
    // _marker setMarkerText "Extract";	
    // _marker setMarkerPos _finalDestination;