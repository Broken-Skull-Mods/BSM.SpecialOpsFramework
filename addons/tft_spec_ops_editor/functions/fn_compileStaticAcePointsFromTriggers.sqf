/*
    [] call SpecOps_fnc_compileStaticAcePointsFromTriggers;
*/

_objects = (nearestObjects [player, ["EmptyDetector"], 20000]);
_br = toString [13,10];
_copying = [];
{
    _string = [_x] call SpecOps_fnc_createStaticAcePointsFromTrigger;
    _copying pushback _string;
} forEach(_objects);
copyToClipboard (_copying joinString  _br);
_copying;


