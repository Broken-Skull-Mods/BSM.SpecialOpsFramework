params ["_faction", "_prop"];
/*
    ["usa_socom", "displayNamePlayer"] call SpecOps_fnc_getFactionName;
*/
getText (configfile >> "SpecOpsFactions" >> _faction >> _prop);