params ["_faction"];
/*
    ["usa_socom"] call SpecOps_fnc_getObjectiveCodenames;
*/
getArray (configfile >> "CfgFactionClasses" >> _faction >> "ObjectiveCodenames");
