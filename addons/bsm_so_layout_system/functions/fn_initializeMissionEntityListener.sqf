
if (is3DEN) exitWith {};
addMissionEventHandler ["EntityCreated", {
	params ["_entity"];
	
	if (_entity isKindOf "Man") then {
		if ((_entity getVariable ["SpecOps_EnableGarrisonSystem", false]) && local _entity) then {
			[_entity] call SpecOps_fnc_dressUpSetupGarrisonUnit;
		};
		[_entity] call SpecOps_fnc_dressUpSetIdentity; 
	};

}];







