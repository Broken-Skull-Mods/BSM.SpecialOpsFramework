
if (is3DEN) exitWith {};

[] spawn {
	waitUntil {uiSleep 0.2; !isNil "BSM_SO_CBA_OSK_E" && !isNil "BSM_SO_CBA_OSK_P_E" && !isNil "BSM_SO_CBA_OSK_DEBUG" };
	{ 
		if (isPlayer _x && !BSM_SO_CBA_OSK_P_E) then { continue; };
		if (BSM_SO_CBA_OSK_DEBUG) then {
			systemChat format ["OSK: Added Event Handler to %1", _x];
		};
		_x addEventHandler ["HitPart", {
			(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect", "_instigator"];
			[_target, _ammo] call SpecOps_fnc_medicOneShotCheck;
		}];
	} forEach (allMissionObjects "CAManBase");

	addMissionEventHandler ["EntityCreated", {
		params ["_entity"];
		if (!(_entity isKindOf "CAManBase")) exitWith { };
		if (isPlayer _entity && !BSM_SO_CBA_OSK_P_E) exitWith { };
		if (BSM_SO_CBA_OSK_DEBUG) then {
			systemChat format ["OSK: Added Event Handler to %1", _entity];
		};
		this addEventHandler ["HitPart", {
			(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect", "_instigator"];
			[_target, _ammo] call SpecOps_fnc_medicOneShotCheck;
		}];
	}];
};

