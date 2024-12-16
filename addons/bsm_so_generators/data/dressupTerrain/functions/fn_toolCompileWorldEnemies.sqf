params ["_toCopySub", "_objects", "_reference"];
private _br = toString [13,10];
private _tab = (toString [9]);
private _2tab = _tab + _tab;
private _3tab = _2tab + _tab;
private _4tab = _3tab + _tab;
private _5tab = _4tab + _tab;
private _6tab = _5tab + _tab;
private _objectInfo = [];
{
	private _groupUnits = [];
	{
		private _pos = getPos _x;
		private _dir = vectorDir _x;
		private _up = vectorUp _x;

		private _IsLeader = _x getVariable ["TFT_CanBeLeader", false];
		if (_IsLeader) then { _IsLeader = 1; } else { _IsLeader = 0;  };

		private _IsRifleman = _x getVariable ["TFT_CanBeRifleman", false];
		if (_IsRifleman) then { _IsRifleman = 1; } else { _IsRifleman = 0;  };
		
		private _IsAutoRifleman = _x getVariable ["TFT_CanBeAutoRifleman", false];
		if (_IsAutoRifleman) then { _IsAutoRifleman = 1; } else { _IsAutoRifleman = 0;  };
		
		private _IsGrenadier = _x getVariable ["TFT_CanBeGrenadier", false];
		if (_IsGrenadier) then { _IsGrenadier = 1; } else { _IsGrenadier = 0;  };
		
		private _IsAT = _x getVariable ["TFT_CanBeAT", false];
		if (_IsAT) then { _IsAT = 1; } else { _IsAT = 0;  };
		
		private _IsSniper = _x getVariable ["TFT_CanBeSniper", false];
		if (_IsSniper) then { _IsSniper = 1; } else { _IsSniper = 0;  };
		
		private _IsProne = _x getVariable ["TFT_CanProne", false];
		if (_IsProne) then { _IsProne = 1; } else { _IsProne = 0;  };

		private _isOnRoofOrBalcony = _x getVariable ["TFT_OnRoofBalcony", false];
		if (_isOnRoofOrBalcony) then { _isOnRoofOrBalcony = 1; } else { _isOnRoofOrBalcony = 0;  };

		private _CanUnlockStance = _x getVariable ["bsm_so_can_unlock_stance", false];
		if (_CanUnlockStance) then { _CanUnlockStance = 1; } else { _CanUnlockStance = 0;  };

		private _IsCanCrouch = _x getVariable ["TFT_CanCrouch", false];
		if (_IsCanCrouch) then { _IsCanCrouch = 1; } else { _IsCanCrouch = 0;  };
		
		private _IsCanStand = _x getVariable ["TFT_CanStand", false];
		if (_IsCanStand) then { _IsCanStand = 1; } else { _IsCanStand = 0;  };
		
		private _IsCanMove = _x getVariable ["TFT_CanMove", false];
		if (_IsCanMove) then { _IsCanMove = 1; } else { _IsCanMove = 0;  };

		private _CanRotate = _x getVariable ["TFT_CanMoveFixed", false];
		if (_CanRotate) then { _CanRotate = 1; } else { _CanRotate = 0;  };

		private _ambientCanStand = _x getVariable ["SpecOps_AmbientCanStand", false];
		if (_ambientCanStand) then { _ambientCanStand = 1; } else { _ambientCanStand = 0;  };

		private _ambientCanSitLow = _x getVariable ["SpecOps_AmbientCanSitLow", false];
		if (_ambientCanSitLow) then { _ambientCanSitLow = 1; } else { _ambientCanSitLow = 0;  };

		private _ambientCanKneel = _x getVariable ["SpecOps_AmbientCanKneel", false];
		if (_ambientCanKneel) then { _ambientCanKneel = 1; } else { _ambientCanKneel = 0;  };

		private _ambientCanWatch = _x getVariable ["SpecOps_AmbientCanWatch", false];
		if (_ambientCanWatch) then { _ambientCanWatch = 1; } else { _ambientCanWatch = 0;  };

		private _forcedAnimationStance = _x getVariable ["TFT_FixedAnimation", ""];
		private _IsCanVisibleFromOutside = _x getVariable ["TFT_CanVisibleFromOutside", false];
		if (_IsCanVisibleFromOutside) then { _IsCanVisibleFromOutside = 1; } else { _IsCanVisibleFromOutside = 0;  };

		private _isHiddenDuringDay = _x getVariable ["SpecOps_HideAtDay", false];
		if (_isHiddenDuringDay) then { _isHiddenDuringDay = 1; } else { _isHiddenDuringDay = 0;  };

		private _isHiddenDuringNight = _x getVariable ["SpecOps_HideAtNight", false];
		if (_isHiddenDuringNight) then { _isHiddenDuringNight = 1; } else { _isHiddenDuringNight = 0;  };
		
		_groupUnits pushBack [_pos, _dir, _up, ((getDir _x)), [_IsLeader, _IsRifleman, _IsAutoRifleman, _IsGrenadier, _IsAT, _IsSniper, _IsProne, _IsCanCrouch, _IsCanStand, _IsCanMove, _IsCanVisibleFromOutside, _CanRotate, _forcedAnimationStance, _ambientCanStand, _ambientCanSitLow, _ambientCanKneel, 0, _ambientCanWatch, _isHiddenDuringDay, _isHiddenDuringNight, _isOnRoofOrBalcony, _CanUnlockStance]
		];
	} forEach (units _x);
	_objectInfo pushback _groupUnits;
} forEach (_objects);

private _strEnd = "{" + _br;
private _passedFirst = false;
{
	if (_passedFirst) then {
        _strEnd = _strEnd + ',' + _br; 
    };

	private _group = _3tab;
	 _group = _group + (str _x);
	_group = [_group, '[', '{'] call CBA_fnc_replace;
	_group = [_group, ']', '}'] call CBA_fnc_replace;
	_strEnd = _strEnd + _group;
	_passedFirst = true;
} forEach (_objectInfo);
_strEnd = _strEnd +_br + _2tab + "};";
// _objectInfo = (str _objectInfo);
// _objectInfo = [_objectInfo, '[', '{'] call CBA_fnc_replace;
// _objectInfo = [_objectInfo, ']', '}'] call CBA_fnc_replace;
"Enemies[]=" + _strEnd; 


