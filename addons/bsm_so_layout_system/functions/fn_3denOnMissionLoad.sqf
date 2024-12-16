


all3DENEntities params ["_objects", "_groups", "_triggers", "_systems", "_waypoints", "_markers", "_layers", "_comments"];

{
	private _entity = _x;
	if (_entity isKindOf "CAManBase") then {
		private _isFixedPos = _entity getVariable ["TFT_CanMoveFixed", false];
		if (_isFixedPos) then {
			private _fixedAnimation = _entity getVariable ["TFT_FixedAnimation", ""];
			if (_fixedAnimation != "") then {
				_entity switchMove _fixedAnimation;
			};
		};

	};
} forEach (_objects);