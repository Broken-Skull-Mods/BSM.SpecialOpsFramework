if (isNil "BSM_CLEAN_CD") then { BSM_CLEAN_CD = false; };
if (BSM_CLEAN_CD) exitWith { systemChat "System already running empty layer clean up"; };
BSM_CLEAN_CD = true;
all3DENEntities params ["_objects", "_groups", "_triggers", "_systems", "_waypoints", "_markers", "_layers", "_comments"];
_layers = [_layers, [], {_x}, "DESCEND"] call BIS_fnc_sortBy;
{ if (count (get3DENLayerEntities _x) <= 0 ) then { remove3DENLayer _x; };  } forEach (_layers);
systemChat "System is done cleaning the empty layers.";
BSM_CLEAN_CD = false;
