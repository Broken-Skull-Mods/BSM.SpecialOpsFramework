params ["_unit", "_opt"];
private _ran = _opt select 0;
private _positionDM =  _ran select 0;
private _positionDirVec =  _ran select 1;
private _positionDirUp =  _ran select 2;
private _positionDir =  _ran select 3;
private _positionOptions =  _ran select 4;
diag_log format ['SPEC-OPS _positionDM %1 | _positionDirVec %2 | _positionDirUp %3', _positionDM, _positionDirVec, _positionDirUp];
diag_log format ['SPEC-OPS _positionOptions %1', _positionOptions];
([_unit, _positionOptions] call SpecOps_fnc_aoAssignUnitOptions) params [
	"_isLeader", "_canBeRifleman", "_canBeAutorifleman", "_canBeGrenadier", "_canAT", "_canSniper", "_IsProne", "_IsCanCrouch", "_IsCanStand", "_IsCanMove", "_canVisibleFromOutside", 
	"_isFixedPos", "_fixedAnimation", "_ambientCanStand", "_ambientCanSitLow", "_ambientCanKneel", "_ambientCanWatch", "_hideAtDay", "_hideAtNight", "_onRoofBalcony", "_unlockStance",
	"_chosenAmbientAnimation", "_direction", "_canActuallyMove", "_initialPosition", "_chosenStance"
];

_unit setSpeaker "NoVoice";
_unit enableMimics false; 
if (local _unit) then {
    
    if (!_IsCanMove) then { _unit disableAI "PATH"; };
    if(_isFixedPos) then { 
        _unit disableAI "AUTOCOMBAT";
		_unit disableAI "COVER";
        _unit disableAI "PATH";
        _unit disableAI "MOVE";
    }else {
        if (_chosenAmbientAnimation != "" ) then {
            [_unit, _chosenAmbientAnimation, "ASIS"] call SpecOps_fnc_a3AmbientAnimCombat;
        };
    };
	
	_unit setVariable ["Unit_Related_Position", _positionDM];
	_unit setVariable ["Unit_Initial_Position", getPosATL _unit];
	_unit setPos _positionDM;
	_unit setDir _positionDir;
	_unit setVariable ["Unit_Rotation", _direction];
	_unit setUnitPos _chosenStance;
	_unit hideObjectGlobal true;
	_unit enableSimulationGlobal false;
	_unit setSpeaker "NoVoice";
	_unit enableMimics false;

	if(!_isFixedPos) then { 
		_unit disableAI "AUTOCOMBAT";
		_unit disableAI "COVER";
		_unit disableAI "PATH";
		_unit disableAI "MOVE";
	}else {
		if (_chosenAmbientAnimation != "") then {
			[_unit, _chosenAmbientAnimation, "ASIS"] call SpecOps_fnc_a3AmbientAnimCombat;
		};
	};

    if(_isFixedPos) then {
        _unit removeAllEventHandlers "AnimChanged";
        _unit addEventHandler ["AnimChanged", {
            params ["_unit", "_anim"];
            diag_log format ["SPEC OPS (dressUp Unit): Checking Animation: %1", _anim];
            
            private _isUncon = _unit getVariable ["ACE_isUnconscious", false];
            if (_isUncon || (incapacitatedState _unit == "UNCONSCIOUS")) exitWith {
                _unit removeAllEventHandlers "AnimChanged";
                _unit setDamage 1; 
                diag_log format ["SPEC OPS (dressUp Unit): Uncounscious: %1", _anim];
            };

            if (!alive _unit && _captive ) exitWith {
                diag_log format ["SPEC OPS (dressUp Unit): Unit is dead or captive ignore"];
                _unit removeAllEventHandlers "AnimChanged";
            };

            private _forbiddenAnims = ["MstpSrasWpstDnon", "MstpSrasWrflDnon", "MstpSrasWlnrDnon"];
            private _isNotAllowedAnim = false;
            {
                _isNotAllowedAnim = [_x, _anim] call BIS_fnc_inString;
                if (_isNotAllowedAnim) then { break; diag_log format ["SPEC OPS (dressUp Unit): _isNotAllowedAnim: %1", _anim]; };
            } forEach(_forbiddenAnims);

            if (!_isNotAllowedAnim) exitWith { 
                diag_log format ["SPEC OPS (dressUp Unit): Animation Allowed: %1", _anim];
            };
            private _fixedAnimation = _unit getVariable ["Unit_FixedAnimation", ""];

            if (_anim == _fixedAnimation) exitWith {
                diag_log format ["SPEC OPS (dressUp Unit): Animation is the same leave."];
            };
            private _rotation = _unit getVariable ["Unit_Rotation", []];
            private _initialPos = _unit getVariable ["Unit_Initial_Position", [0,0,0]];
            if(_fixedAnimation != "") then {
                [_unit, _initialPos, _rotation, _fixedAnimation] call SpecOps_fnc_dressUpEnemyUpdateFixedPosition;
            };
        }];
    };
    if (_unlockStance) then {
        _unit addEventHandler ["FiredNear", {
            params ["_unit", "_firer", "_distance", "_weapon", "_muzzle", "_mode", "_ammo", "_gunner"];
            if (_unit == _gunner || _unit == _firer || { side (group _unit) != side (group _gunner) || side (group _unit) != side (group _firer) } ) exitWith {};
            if (_distance >= 15) exitWith {};
            _unit setVariable ["bsm_so_movement_unlocked", true];
            _unit enableAI "AUTOCOMBAT";
            _unit enableAI "COVER";
            _unit enableAI "PATH";
            _unit enableAI "MOVE";
            _unit setUnitPos "MIDDLE";
        }];
    };
    _unit setVariable ["Unit_Initialized", true];
};

