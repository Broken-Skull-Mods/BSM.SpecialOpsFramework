params ["_unit", "_options"];
/*
	([_unit, _options] call SpecOps_fnc_aoAssignUnitOptions) params [
		"_isLeader", "_canBeRifleman", "_canBeAutorifleman", "_canBeGrenadier", "_canAT", "_canSniper", "_IsProne", "_IsCanCrouch", "_IsCanStand", "_IsCanMove", "_canVisibleFromOutside", 
		"_isFixedPos", "_fixedAnimation", "_ambientCanStand", "_ambientCanSitLow", "_ambientCanKneel", "_ambientCanWatch", "_hideAtDay", "_hideAtNight", "_onRoofBalcony", "_unlockStance",
		"_chosenAmbientAnimation", "_direction", "_canActuallyMove", "_initialPosition", "_chosenStance"
	];
	[0,0,0,0,0,0,0,1,0,0,0,0,"""",0,0,0,0,0,0,0,0,0]
*/
private _isLeader = false; 
_unit setVariable ["TFT_CanBeLeader", false];
_canBeRifleman = false; 
_unit setVariable ["TFT_CanBeRifleman", false]; 
_canBeAutorifleman = false; 
_unit setVariable ["TFT_CanBeAutoRifleman", false];
_canBeGrenadier = false; 
_unit setVariable ["TFT_CanBeGrenadier", false];
_canAT = false; 
_unit setVariable ["TFT_CanBeAT", false];
_canSniper = false; 
_unit setVariable ["TFT_CanBeSniper", false]; 
_IsProne = false; 
_unit setVariable ["TFT_CanProne", false]; 
_IsCanCrouch = false; 
_unit setVariable ["TFT_CanCrouch", false]; 
_IsCanStand = false; 
_unit setVariable ["TFT_CanStand", false];
_IsCanMove = false; 
_unit setVariable ["TFT_CanMove", false];
_canVisibleFromOutside = false; 
_unit setVariable ["TFT_CanVisibleFromOutside", false]; 
_isFixedPos = false; 
_unit setVariable ["TFT_CanMoveFixed", false];
_fixedAnimation = ""; 
_unit setVariable ["TFT_FixedAnimation", ""];
_ambientCanStand = false;
_unit setVariable ["SpecOps_AmbientCanStand", false]; 
_ambientCanSitLow = false; 
_unit setVariable ["SpecOps_AmbientCanSitLow", false];
_ambientCanKneel = false; 
_unit setVariable ["SpecOps_AmbientCanKneel", false];
_ambientCanWatch = false; 
_unit setVariable ["SpecOps_AmbientCanWatch", false];
_hideAtDay = false; 
_unit setVariable ["SpecOps_HideAtDay", false];
_hideAtNight = false; 
_unit setVariable ["SpecOps_HideAtNight", false];
_onRoofBalcony = false; 
_unit setVariable ["TFT_OnRoofBalcony", false]; 
_unlockStance = false; 
_unit setVariable ["bsm_so_can_unlock_stance", false];

if ((_options select 0) == 1) then { _isLeader = true; _unit setVariable ["TFT_CanBeLeader", true]; };
if ((_options select 1) == 1) then { _canBeRifleman = true; _unit setVariable ["TFT_CanBeRifleman", true]; };
if ((_options select 2) == 1) then { _canBeAutorifleman = true; _unit setVariable ["TFT_CanBeAutoRifleman", true]; };
if ((_options select 3) == 1) then { _canBeGrenadier = true; _unit setVariable ["TFT_CanBeGrenadier", true]; };
if ((_options select 4) == 1) then { _canAT = true; _unit setVariable ["TFT_CanBeAT", true]; };
if ((_options select 5) == 1) then { _canSniper = true; _unit setVariable ["TFT_CanBeSniper", true]; };
if ((_options select 6) == 1) then { _IsProne = true; _unit setVariable ["TFT_CanProne", true]; };
if ((_options select 7) == 1) then { _IsCanCrouch = true; _unit setVariable ["TFT_CanCrouch", true]; };
if ((_options select 8) == 1) then { _IsCanStand = true; _unit setVariable ["TFT_CanStand", true]; };
if ((_options select 9) == 1) then { _IsCanMove = true; _unit setVariable ["TFT_CanMove", true]; };
if ((_options select 10) == 1) then { _canVisibleFromOutside = true;  _unit setVariable ["TFT_CanVisibleFromOutside", true]; } ;
if ((_options select 11) == 1) then { _isFixedPos = true; _unit setVariable ["TFT_CanMoveFixed", true]; } ;
if ((_options select 12) != "") then { _fixedAnimation = (_options select 12); _unit setVariable ["TFT_FixedAnimation", (_options select 12)]; } ;
if ((_options select 13) == 1) then { _ambientCanStand = true; _unit setVariable ["SpecOps_AmbientCanStand", true]; } ;
if ((_options select 14) == 1) then { _ambientCanSitLow = true; _unit setVariable ["SpecOps_AmbientCanSitLow", true]; } ;
if ((_options select 15) == 1) then { _ambientCanKneel = true; _unit setVariable ["SpecOps_AmbientCanKneel", true]; } ;
if ((_options select 17) == 1) then { _ambientCanWatch = true; _unit setVariable ["SpecOps_AmbientCanWatch", true]; } ;
if ((_options select 18) == 1) then { _hideAtDay = true; _unit setVariable ["SpecOps_HideAtDay", true]; } ;
if ((_options select 19) == 1) then { _hideAtNight = true; _unit setVariable ["SpecOps_HideAtNight", true]; } ;
if ((_options select 20) == 1) then { _onRoofBalcony = true; _unit setVariable ["TFT_OnRoofBalcony", true]; } ;
if ((_options select 21) == 1) then { _unlockStance = true; _unit setVariable ["bsm_so_can_unlock_stance", true]; } ;


private _stanceAllowed = [];
private _ambientAnimation = [];
if(_ambientCanStand) then {
	_ambientAnimation append ["STAND", 10];
	_ambientAnimation append ["STAND_IA", 10];
};
if(_ambientCanSitLow) then { _ambientAnimation append ["SIT_LOW", 2]; };
if(_ambientCanKneel) then { _ambientAnimation append ["KNEEL", 2]; };
if(_ambientCanWatch) then { 
	_ambientAnimation append ["WATCH", 10];
	_ambientAnimation append ["WATCH1", 10];
	_ambientAnimation append ["WATCH2", 10];
};
private _chosenAmbientAnimation = (selectRandomWeighted _ambientAnimation);
if (count _ambientAnimation > 0) then { _unit setVariable ["bsm_so_ambient_animation", _chosenAmbientAnimation]; } else {_chosenAmbientAnimation = "";};



private _animHostage = [];
if(_IsCanCrouch) then { _stanceAllowed append ["MIDDLE", 5]; _animHostage pushbackUnique "ACE_HandcuffedFFV"; };
if(_IsCanStand) then { 
	_stanceAllowed append ["UP", 0.5]; 
	_animHostage append [
		"UnaErcPoslechVelitele1",
		"UnaErcPoslechVelitele2",
		"UnaErcPoslechVelitele3",
		"UnaErcPoslechVelitele4"
	]; 
};
if(_IsProne) then { _stanceAllowed append ["DOWN", 3]; _animHostage pushbackUnique "revive_secured"; };
if(!_IsProne && !_IsCanStand && !_IsCanCrouch) then {
	_stanceAllowed append ["MIDDLE", 1];
	_stanceAllowed append ["UP", 5];
	_stanceAllowed append ["DOWN", 0.1];
	_animHostage append [
		"revive_secured",
		"ACE_HandcuffedFFV",
		"UnaErcPoslechVelitele1",
		"UnaErcPoslechVelitele2",
		"UnaErcPoslechVelitele3",
		"UnaErcPoslechVelitele4"
	]; 
};
private _chosenStance = (selectRandomWeighted _stanceAllowed);
if (_fixedAnimation == "") then {
	switch (_chosenStance) do {
		case "UP": { _fixedAnimation = "AmovPercMstpSrasWrflDnon"; };
		case "MIDDLE": { _fixedAnimation = "AmovPknlMstpSrasWpstDnon"; };
		case "DOWN": { _fixedAnimation = "AmovPpneMstpSrasWpstDnon"; };
	};
};
private _direction = getDir _unit;
private _canActuallyMove = _IsCanMove && !_isFixedPos;

_unit setVariable ["Unit_AbleToRotate", (!_isFixedPos)]; 
_unit setVariable ["Unit_ChosenStance", _chosenStance];
_unit setVariable ["Unit_FixedAnimation", _fixedAnimation];
_unit setVariable ["Unit_Initial_Position", getPosATL _unit];
_unit setVariable ["Unit_Rotation", _direction];


[
	_isLeader, _canBeRifleman, _canBeAutorifleman, _canBeGrenadier, _canAT, _canSniper, _IsProne, _IsCanCrouch, _IsCanStand, _IsCanMove, _canVisibleFromOutside, 
	_isFixedPos, _fixedAnimation, _ambientCanStand, _ambientCanSitLow, _ambientCanKneel, _ambientCanWatch, _hideAtDay, _hideAtNight, _onRoofBalcony, _unlockStance,
	_chosenAmbientAnimation, _direction, _canActuallyMove, (getPosATL _unit), _chosenStance
]