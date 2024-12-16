params ["_unit"];
/*
    [] call SpecOps_fnc_dressUpSetupGarrisonUnit;
    property = "TFT_CanVisibleFromOutside";
    property = "SpecOps_HideAtNight";
    property = "TFT_CanProne";
    property = "TFT_CanCrouch";
    property = "TFT_CanStand";
    property = "TFT_CanMove";
    property = "TFT_CanMoveFixed";
    property = "TFT_FixedAnimation";
        class none { name = "Unspecified"; value = ""; };
        class AadjPpneMstpSrasWrflDdown { name = "Prone (Face Down Stance)"; value = "AadjPpneMstpSrasWrflDdown"; };
        class AadjPpneMstpSrasWrflDleft { name = "Prone (Left Stance)"; value = "AadjPpneMstpSrasWrflDleft"; };
        class AadjPpneMstpSrasWrflDright { name = "Prone (Right Stance)"; value = "AadjPpneMstpSrasWrflDright"; };
        class AadjPpneMstpSrasWrflDup { name = "Prone (Sit Stance)"; value = "AadjPpneMstpSrasWrflDup"; };
        
        class AadjPknlMstpSrasWrflDdown { name = "Crouch (Down Stance)"; value = "AadjPknlMstpSrasWrflDdown"; };
        class AadjPknlMstpSrasWrflDleft { name = "Crouch (Left Stance)"; value = "AadjPknlMstpSrasWrflDleft"; };
        class AadjPknlMstpSrasWrflDright { name = "Crouch (Right Stance)"; value = "AadjPknlMstpSrasWrflDright"; };
        class AadjPknlMstpSrasWrflDup { name = "Crouch (Up Stance)"; value = "AadjPknlMstpSrasWrflDup"; };

        class AadjPercMstpSrasWrflDdown { name = "Stand (Down Stance)"; value = "AadjPercMstpSrasWrflDdown"; };
        class AadjPercMstpSrasWrflDleft { name = "Stand (Left Stance)"; value = "AadjPercMstpSrasWrflDleft"; };
        class AadjPercMstpSrasWrflDright { name = "Stand (Right Stance)"; value = "AadjPercMstpSrasWrflDright"; };
        class AadjPercMstpSrasWrflDup { name = "Stand (Up Stance)"; value = "AadjPercMstpSrasWrflDup"; };
    property = "SpecOps_AmbientCanStand";
    property = "SpecOps_AmbientCanSitLow";
    property = "SpecOps_AmbientCanKneel";
    property = "SpecOps_AmbientCanWatch";

    
*/

diag_log "Running Unit Garrison Checker";
private _enabled = _unit getVariable ["SpecOps_EnableGarrisonSystem", false];

if (!_enabled) exitWith { diag_log "Spec-Ops Disabled"; };

_unit setSpeaker "NoVoice";
_unit enableMimics false; 
// Run on Owner Only
if (local _unit) then {
    
    (leader (group _unit)) setVariable ["acex_headless_blacklist", true, true];
    if ((leader (group _unit)) != _unit) then { _unit setVariable ["acex_headless_blacklist", true, true]; };
    
    diag_log "Unit Local";
    private _IsProne = _unit getVariable ["TFT_CanProne", true];
    private _IsCanCrouch = _unit getVariable ["TFT_CanCrouch", true];
    private _IsCanStand = _unit getVariable ["TFT_CanStand", true];
    private _IsCanMove = _unit getVariable ["TFT_CanMove", true];
    private _isFixedPos = _unit getVariable ["TFT_CanMoveFixed", false];
    private _fixedAnimation = _unit getVariable ["TFT_FixedAnimation", ""];
    private _canStanceOut = _unit getVariable ["bsm_so_can_unlock_stance", false];
    private _ambientCanStand = _unit getVariable ["SpecOps_AmbientCanStand", false];
    private _ambientCanSitLow = _unit getVariable ["SpecOps_AmbientCanSitLow", false];
    private _ambientCanKneel = _unit getVariable ["SpecOps_AmbientCanKneel", false];
    private _ambientCanWatch = _unit getVariable ["SpecOps_AmbientCanWatch", false];
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

    private _chosenAmbientAnimation = "";
    private _animHostage = [];

    if (count _ambientAnimation > 0) then { _chosenAmbientAnimation = selectRandomWeighted _ambientAnimation; };
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

    _unit setVariable ["Unit_Initialized", false];
    // _unit setVariable ["Unit_VisibleFromOutside", _IsCanVisibleFromOutside];
    _unit setVariable ["Unit_AbleToRotate", !_isFixedPos];
    _unit setVariable ["Unit_ChosenStance", _chosenStance];
    // _unit setVariable ["Unit_Building", _building];
    // _unit setVariable ["Unit_Related_Position", _relatedPosition];
    _unit setVariable ["Unit_FixedAnimation", _fixedAnimation];
    _unit setVariable ["Unit_Initial_Position", getPosATL _unit];
    _unit setVariable ["Unit_Rotation", _direction];
    _unit setUnitPos _chosenStance;


    if (!_IsCanMove) then {
        _unit disableAI "PATH";
    };
    private _captive = (captive _unit);
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

    if(_isFixedPos && !_captive) then {
        _unit addEventHandler ["AnimChanged", {
            params ["_unit", "_anim"];
            diag_log format ["SPEC OPS (dressUp Unit): Checking Animation: %1", _anim];
            if (_unit getVariable ["bsm_so_movement_unlocked", false]) then {
                _unit removeEventHandler [_thisEvent, _thisEventHandler];
            };
            private _isUncon = _unit getVariable ["ACE_isUnconscious", false];
            if (_isUncon || (incapacitatedState _unit == "UNCONSCIOUS")) exitWith {
                _unit removeEventHandler [_thisEvent, _thisEventHandler];
                _unit setDamage 1; 
                diag_log format ["SPEC OPS (dressUp Unit): Uncounscious: %1", _anim];
            };

            if (!alive _unit && _captive ) exitWith {
                diag_log format ["SPEC OPS (dressUp Unit): Unit is dead or captive ignore"];
                _unit removeEventHandler [_thisEvent, _thisEventHandler];
            };

            // AmovPercMstpSrasWrflDnon
            // AmovPknlMstpSrasWpstDnon AmovPpneMstpSrasWlnrDnon
            // AmovPpneMstpSrasWpstDnon
            // amovpknlmstpsraswrfldnon
            // aidlppnemstpsraswrfldnon_ai
            // aidlpknlmstpsraswrfldnon_ai
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
    if (_canStanceOut) then {
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



true;

