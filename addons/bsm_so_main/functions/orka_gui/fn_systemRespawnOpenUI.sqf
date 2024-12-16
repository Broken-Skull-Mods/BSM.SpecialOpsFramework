params ["_allowedLocations", ["_overrideDeploy", "[] spawn SpecOps_fnc_orkaUIRespawnButtonDeploy;"]];
/*
	Input: [Pos, Name], [Pos], "MarkerName", Object (Player, Vehicle)
	[((call BIS_fnc_listPlayers) select { side (group player) == side _x && !(_x isKindOf "VirtualMan_F") && !(_x isKindOf "HeadlessClient_F")})] spawn SpecOps_fnc_systemRespawnOpenUI; // list all friendly players
	[((allUnits) select { side (group player) == side _x && !(_x isKindOf "HeadlessClient_F")})] spawn SpecOps_fnc_systemRespawnOpenUI; // List all friendly units excluding headless clients. 


	[((player call bis_fnc_getRespawnPositions) + ((player call bis_fnc_objectSide) call bis_fnc_getRespawnMarkers))] spawn SpecOps_fnc_systemRespawnOpenUI; // All available respawn of the side
*/

 private _list = [];
 {
	if (typename _x == "ARRAY" && { count _x >= 3 }) then { _list pushback [_x, "Position (No Name)"]; continue; }; 
	if (typename _x == "ARRAY" && { count _x == 2 }) then { _list pushback _x; continue; }; 
	if (typename _x == "STRING") then { _list pushback [getMarkerPos _x, str _x]; continue; }; 
	if (typename _x == "OBJECT") then {
		
		private _name = (_x getVariable ["name", "Position (No Name)"]);
		if (_name == "") then { _name = "Position (No Name)"; };
		if (_x isKindof "CAManBase") then { _name = name _x; };
		_list pushback [getPos _x, _name]; continue; 
	}; 
 } forEach (_allowedLocations);
missionNamespace setVariable ["moduleListTMP", _list];

private _child = findDisplay 46 createDisplay 'BSM_Respawn_Screen';
if (isNull _child) exitWith { systemChat "Error, Couldn't open deployement screen. (CHILD NULL)"; };
uiNamespace setVariable ["SpecOps_OrkaUI_Current",  _child];
private _deployBtn = _child displayCtrl 1602;
if (isNull _deployBtn) exitWith { systemChat "Error, Cannot find Deploy Button, weird shit might happen!"; };
_deployBtn buttonSetAction _overrideDeploy;
