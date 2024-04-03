params ["_faction"];
/*
    ["usa_socom"] call SpecOps_fnc_getCampCodenames;
*/
getArray (configfile >> "CfgFactionClasses" >> _faction >> "CampCodenames");
