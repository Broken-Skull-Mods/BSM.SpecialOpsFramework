params ["_building", "_positionInfo", ["_priorityLeader", false], ["_group", grpNull], 
       ["_faction", "BS_B_US_ARMA_BASE_BASE"], ["_factionCamo", "WL"], ["_noSleep", false], ["_side", east], ["_logic", objNull]];

/*
 [building, positionInformation] call SpecOps_fnc_dressUpBuildingSpawnEnemy;

 { 4.42407, -0.655029, 3.85359 }, // Position
 264.551, // Direction
 { 
   false, // _IsLeader
   false, // _IsRifleman
   false, // _IsAutoRifleman
   false, // _IsGrenadier
   false, // _IsAT
   true, // _IsSniper
   false, // _IsProne
   true, // _IsCanCrouch
   false, // _IsCanStand
   false, // _IsCanMove
   true // _IsCanVisibleFromOutside
 } 
 [[11.9922,-6.69531,17.8532],139.394,[""false"",""false"",""false"",""false"",""false"",""true"",""false"",""false"",""true"",""false"",""true""]]
*/

private _relatedPosition = _positionInfo select 0;
private _itemDir = _positionInfo select 1;
private _itemUp = _positionInfo select 2;
private _direction = _positionInfo select 3;
private _options = _positionInfo select 4;
diag_log format ["SPEC-OPS (dressUpBuildingSpawnEnemy): %1", _options];

private _IsLeader = (_options select 0) == 1;
private _IsRifleman = (_options select 1) == 1;
private _IsAutoRifleman = (_options select 2) == 1;
private _IsGrenadier = (_options select 3) == 1;
private _IsAT = (_options select 4) == 1;
private _IsSniper = (_options select 5) == 1;
private _IsProne = (_options select 6) == 1;
private _IsCanCrouch = (_options select 7) == 1;
private _IsCanStand = (_options select 8) == 1;
private _IsCanMove = (_options select 9) == 1;
private _IsCanVisibleFromOutside = (_options select 10) == 1;
private _canStanceOut = (_options select 21) == 1;
private _IsAbleToRotate = (_options select 11) == 0;
private _fixedAnimation = (_options select 12);

private _ambientCanStand = (_options select 13) == 1;
private _ambientCanSitLow = (_options select 14) == 1;
private _ambientCanKneel = (_options select 15) == 1;

private _ambientCanWatch = (_options select 17) == 1;

private _isHiddenDay = (_options select 18) == 1;
private _isHiddenNight = (_options select 19) == 1;

private _classesAllowed = [];
private _stanceAllowed = [];

private _ambientAnimation = [];

diag_log format ["SPEC-OPS (dressUpBuildingSpawnEnemy): Checking Ambient Animation: %1", _ambientAnimation];

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

if (count _ambientAnimation > 0) then { _chosenAmbientAnimation = selectRandomWeighted _ambientAnimation; };
diag_log format ["SPEC-OPS (dressUpBuildingSpawnEnemy): _chosenAmbientAnimation = %1", _chosenAmbientAnimation];

if(_IsRifleman) then { _classesAllowed append [ format ["%1_Rifleman_%2", _faction, _factionCamo], 3]; };
if(_IsAutoRifleman) then { _classesAllowed append [ format ["%1_AR_%2", _faction, _factionCamo], 1]; };
if(_IsGrenadier) then { _classesAllowed append [ format ["%1_GL_%2", _faction, _factionCamo], 1]; };
if(_IsAT) then { _classesAllowed append [ format ["%1_RTO_%2", _faction, _factionCamo], 1]; };
if(_IsSniper) then { _classesAllowed append [ format ["%1_SNP_%2", _faction, _factionCamo], 2]; };
if(!_IsRifleman && !_IsSniper && !_IsAT && !_IsGrenadier && !_IsAutoRifleman && !_IsLeader) then { _classesAllowed append [ format ["%1_Rifleman_%2", _faction, _factionCamo], 3]; };
if(_IsLeader && _priorityLeader) then {
    _classesAllowed = []; // Force Leaders
    _classesAllowed append [format ["%1_Officer_%2", _faction, _factionCamo], 0.01];
};
if (_IsLeader && !_priorityLeader) then {
  _classesAllowed append [format ["%1_Rifleman_%2", _faction, _factionCamo], 3];
};

if(_IsCanCrouch) then { _stanceAllowed append ["MIDDLE", 5]; };
if(_IsCanStand) then { _stanceAllowed append ["UP", 0.5]; };
if(_IsProne) then { _stanceAllowed append ["DOWN", 3]; };

if(!_IsProne && !_IsCanStand && !_IsCanCrouch) then {
  _stanceAllowed append ["MIDDLE", 1];
  _stanceAllowed append ["UP", 5];
  _stanceAllowed append ["DOWN", 0.1];
};
_spawnPos = [_building, _relatedPosition] call SpecOps_fnc_getRelatedPosition;
_chosenUnit = (selectRandomWeighted _classesAllowed);
diag_log format["SPEC-OPS (SpecOps_fnc_dressUpBuildingSpawnEnemy): %1 | %2 | %3", _building, _positionInfo, _chosenUnit];

private _grp = [_spawnPos, _side, [_chosenUnit],[],[],[],[],[],0, true] call BIS_fnc_spawnGroup;
private _unit = leader _grp;	

diag_log format ["SPEC-OPS (dressUpBuildingSpawnEnemy): _chosenUnit = %1", _chosenUnit];
_unit setVariable ["acex_headless_blacklist", true, true];

[_building, _unit, _relatedPosition, [_itemDir, _itemUp], false, true] call SpecOps_fnc_commonRelPosObject;

// [_building, _unit, _relatedPosition, 0] call BIS_fnc_relPosObject;

private _chosenStance = (selectRandomWeighted _stanceAllowed);
if (_fixedAnimation == "") then {
  diag_log format ["SPEC-OPS (dressUpBuildingSpawnEnemy): _chosenStance = %1", _chosenStance];
  switch (_chosenStance) do {
    case "UP": { _fixedAnimation = "AmovPercMstpSrasWrflDnon"; };
    case "MIDDLE": { _fixedAnimation = "AmovPknlMstpSrasWpstDnon"; };
    case "DOWN": { _fixedAnimation = "AmovPpneMstpSrasWpstDnon"; };
  };
};

private _canActuallyMove = _IsCanMove && _IsAbleToRotate;


private _buildingLeaderList = _building getVariable ["AO_Units", []];
_buildingLeaderList pushbackUnique _unit;
_building setVariable ["AO_Units", _buildingLeaderList];

if (_IsLeader && {!_priorityLeader}) then {
  private _buildingLeaderList = _building getVariable ["AO_Units_Leaders", []];
  _buildingLeaderList pushbackUnique _unit;
  _building setVariable ["AO_Units_Leaders", _buildingLeaderList];
};


_unit setVariable ["Unit_Initialized", false];
// _unit setVariable ["Unit_CanMove", _canActuallyMove, true];
_unit setVariable ["Unit_VisibleFromOutside", _IsCanVisibleFromOutside];
_unit setVariable ["Unit_AbleToRotate", _IsAbleToRotate];
_unit setVariable ["Unit_ChosenStance", _chosenStance];
_unit setVariable ["Unit_Building", _building];
_unit setVariable ["Unit_Related_Position", _relatedPosition];
_unit setVariable ["Unit_FixedAnimation", _fixedAnimation];
_unit setVariable ["Unit_Initial_Position", getPosATL _unit];

_unit setVariable ["SpecOps_HideAtDay", _isHiddenDay];
_unit setVariable ["SpecOps_HideAtNight", _isHiddenNight];
private _correctedRotation = (getDir _building) + _direction;
// _unit setDir _correctedRotation;
// _unit setFormDir _correctedRotation;
_unit setVariable ["Unit_Rotation", _correctedRotation];
// _unit allowDamage false;
_unit setUnitPos _chosenStance;
_unit hideObjectGlobal true;
_unit enableSimulationGlobal false;

// [_unit] spawn { sleep 2; (_this select 0) allowDamage true; };

// [_building, _unit, _relatedPosition, _direction] call BIS_fnc_relPosObject;

_unit setSpeaker "NoVoice";
// _group deleteGroupWhenEmpty true;

_unit enableMimics false; 

diag_log format ["SPEC-OPS (dressUpBuildingSpawnEnemy): _IsCanMove = %1", _IsCanMove];
if (!_IsCanMove) then {
  _unit disableAI "PATH";
};

  diag_log format ["SPEC-OPS (dressUpBuildingSpawnEnemy): _IsAbleToRotate = %1", _IsAbleToRotate];
if(!_IsAbleToRotate) then { 
  _unit disableAI "AUTOCOMBAT";
  _unit disableAI "COVER";
  _unit disableAI "PATH";
  _unit disableAI "MOVE";
}else {
  diag_log format ["SPEC-OPS (dressUpBuildingSpawnEnemy): _chosenAmbientAnimation = %1", _chosenAmbientAnimation];
  if (_chosenAmbientAnimation != "") then {
    [_unit, _chosenAmbientAnimation, "ASIS"] call SpecOps_fnc_a3AmbientAnimCombat;
  };
};

// Only work for unit able to rotate
if (!_IsCanMove && _IsAbleToRotate && _canStanceOut) then {
  _unit addEventHandler ["FiredNear", {
      params ["_unit", "_firer", "_distance", "_weapon", "_muzzle", "_mode", "_ammo", "_gunner"];
      if (!alive _firer) exitWith {};
      if (_distance >= 10) exitWith {};
      _unit enableAI "PATH";
      _unit removeEventHandler [_thisEvent, _thisEventHandler];
  }];
};

if(!_IsAbleToRotate) then {
  diag_log format ["SPEC-OPS (dressUpBuildingSpawnEnemy): Starting Animation Event"];
    _unit addEventHandler ["AnimChanged", {
        params ["_unit", "_anim"];
        // diag_log format ["SPEC OPS (dressUp Unit): Checking Animation: %1", _anim];
        
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
        private _forbiddenAnims = ["MstpSrasWpstDnon", "MstpSrasWrflDnon", "MstpSrasWlnrDnon"];
        private _isNotAllowedAnim = false;
        {
          _isNotAllowedAnim = [_x, _anim] call BIS_fnc_inString;
          if (_isNotAllowedAnim) then { break; };
        } forEach(_forbiddenAnims);

        if (!_isNotAllowedAnim) exitWith { 
          // diag_log format ["SPEC OPS (dressUp Unit): Animation Allowed: %1", _anim];
         };
        private _fixedAnimation = _unit setVariable ["Unit_FixedAnimation", ""];

        if (_anim == _fixedAnimation) exitWith {
          // diag_log format ["SPEC OPS (dressUp Unit): Animation is the same leave."];
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

if (isNull _group) then {
    _group = _grp;
} else {
    _group = _grp;
    (units _grp) join _group;
};
_grp deleteGroupWhenEmpty true;
_unit setVariable ["Unit_Initialized", true];
[_building, _unit, _group, (_priorityLeader && _IsLeader)];



