/*
	[[""]] call SpecOps_fnc_missionCheckVisited;
	[""] call SpecOps_fnc_missionCheckVisited;
*/

params [["_visit", ""]];

if (typeName _visit == "STRING" && { _visit == "" }) exitWith { true; };
if (typeName _visit == "STRING") exitWith { 
	missionNamespace getVariable [format["%1Visited", _visit], false]; 
};
// if any name has not been visited then stop 
{ 
	if (!(missionNamespace getVariable [format["%1Visited", _x], false])) exitWith { false; }; 
} forEach (_visit);

true;