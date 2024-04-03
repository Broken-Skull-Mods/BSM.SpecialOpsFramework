params ["_faction"];
/*
    ["usa_socom"] call SpecOps_fnc_isFactionAdvanced;
*/
_advanced = getNumber (configfile >> "SpecOpsFactions" >> _faction >> "Advanced");
if(_advanced == 1) exitWith { true };
false;

