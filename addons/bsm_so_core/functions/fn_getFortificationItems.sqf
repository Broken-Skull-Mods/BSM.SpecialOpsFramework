params ["_faction"];

/*
 ["usa_socom"] call SpecOps_fnc_getFortificationItems;
*/

_everyone = getArray (configfile >> "SpecOpsFactions" >> _faction >> "FortifyItems");
_engineer = getArray (configfile >> "SpecOpsFactions" >> _faction >> "EngineerItems");

[_everyone, _engineer];