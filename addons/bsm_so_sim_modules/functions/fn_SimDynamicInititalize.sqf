params ["_logic"];
private _triggers = _triggers = (synchronizedObjects _logic) select { _x isKindOf "EmptyDetector";};
if (count _triggers <= 0) exitWith  { };
private _groups = (synchronizedObjects _logic) select { _x isKindOf "Group"; };
// Hide and Disable Everything by default.
{
	private _group = _x;
	{
		private _unit = _x;
		if (vehicle _unit != _unit) then {
			(vehicle _unit) enableSimulationGlobal false; 
			(vehicle _unit) hideObjectGlobal true; 
		};
		_unit enableSimulationGlobal false; 
		_unit hideObjectGlobal true; 

	} forEach (units _group);
} forEach (_groups);