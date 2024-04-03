params ["_faction", "_prop"];

/*
 ["usa_socom", "vehicles"] call SpecOps_fnc_getFactionVehicles;
*/
getArray (configfile >> "SpecOpsFactions" >> _faction >> "GarageStore" >> _prop);
