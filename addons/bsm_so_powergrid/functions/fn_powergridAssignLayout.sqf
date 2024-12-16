if (!isServer || is3DEN) exitWith {};

waitUntil { sleep 1; !isNil "bsm_so_powrgrid_enabled" };

private _layouts = "getText (_x >> 'World') == worldName" configClasses (configFile >> "SpecOps_Powergrid_Maps");
private _layout = selectRandom _layouts;
if (isNil "_layout") exitWith {};
missionNamespace setVariable ["bms_so_powergrid_layout", getArray (_layout >> "Hubs"), true];
[] call SpecOps_fnc_powergridAssignLightPoles;


addMissionEventHandler ["BuildingChanged", {
	params ["_from", "_to", "_isRuin"];
	private _canDestroy = _transformer getVariable ["bsm_can_destroy", false];
	if (_canDestroy) exitWith {};
	private _markerName = _from getVariable ["bsm_power_name", ""];

    _markerName setMarkerColor "ColorRed";

	_links = _from getVariable ["lampLinked", []];
	if (damage _from >= 1) then { [_from, -1] spawn SpecOps_fnc_powerlineShutdown; };
}];