/*
	[[reinforcement_1], getPos target_1, 25] call SpecOps_fnc_startPatroling;
*/

params ["_groups", "_attackPos", "_range"];

if (!isServer) exitWith {};
{
	// Enable them all
	private _group = _x;

	{
		private _unit = _x;
		if (!(simulationEnabled _unit)) then { _unit enableSimulationGlobal true; };
		if ((isObjectHidden _unit)) then { _unit hideObjectGlobal false; };
		if (!(isDamageAllowed _unit)) then { _unit allowDamage true; };
	} forEach (units _group);
	[_group, _attackPos, _range] call BIS_fnc_taskPatrol;
} forEach (_groups);


[] spawn {
	private _objects = "getText (_x >> 'editorCategory') == 'plpCat_BeachObjects'" configClasses (configfile >> "CfgVehicles");
	_objects append ("getText (_x >> 'editorCategory') == 'plpCat_Containers'" configClasses (configfile >> "CfgVehicles"));
	_objects append ("getText (_x >> 'editorCategory') == 'plpCat_Materials'" configClasses (configfile >> "CfgVehicles"));
	_objects append ("getText (_x >> 'editorCategory') == 'plpCat_Urban_BarriersFences'" configClasses (configfile >> "CfgVehicles"));
	_objects append ("getText (_x >> 'editorCategory') == 'plpCat_Urban_Private'" configClasses (configfile >> "CfgVehicles"));


	private _interation = 0;
	private _left = 0;
	private _biggest = 0;
	{
		private _classname = configName _x;
		private _size = sizeOf _classname;
		if (_size > _biggest) then { _biggest = _size; };

		create3DENEntity ["Object", _classname, [_interation,_left,0], false];
		_interation = _interation + 10;
		if (_interation >= 1000) then {_interation = 0; _left = _left + 10;};

		uiSleep 0.05;
	} forEach (_objects);
};


/*

_objects append ("getText (_x >> 'editorCategory') == 'plpCat_Containers'" configClasses (configfile >> "CfgVehicles"));
_objects append ("getText (_x >> 'editorCategory') == 'plpCat_Materials'" configClasses (configfile >> "CfgVehicles"));
_objects append ("getText (_x >> 'editorCategory') == 'plpCat_Urban_BarriersFences'" configClasses (configfile >> "CfgVehicles"));
_objects append ("getText (_x >> 'editorCategory') == 'plpCat_Urban_Private'" configClasses (configfile >> "CfgVehicles"));

private _objects = "getText (_x >> 'editorCategory') == 'plpCat_BeachObjects'" configClasses (configfile >> "CfgVehicles");
{
	private _size = sizeOf _x;
} forEach (_objects);
sizeOf 
plpCat_BeachObjects
plpCat_Containers
plpCat_Materials
plpCat_Urban_BarriersFences
plpCat_Urban_Private
*/