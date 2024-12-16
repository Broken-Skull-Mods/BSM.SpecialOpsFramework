
/*
    call SpecOps_fnc_keybindCommandSurrender;
*/

private _faction = missionNameSpace getVariable ["bsm_so_factionInitial", "BS_B_US_ARMA_BASE"];
private _audioHashmap = [_faction] call SpecOps_fnc_voiceInitialize;
_target = cursorObject;
if ((missionNamespace getVariable["bsm_so_cmd_surrender_cd_chk", false])) exitWith {};
_coolingDown = missionNamespace getVariable ["bsm_so_cmd_surrender_cd_chk", false];
if (isNull _target) exitWith {};
isMan = _target isKindOf "Man";
if (!isMan) exitWith {};
if (!alive _target) exitWith {};
_distance = player distance _target;
if(_distance > 15) exitWith {};
moveOut _target;

// if has no surrender table, surrender is alway assured
_source = objNull;
private _enemyAround = player nearEntities [["CAManBase"], 15] select { (side (group _x)) == sideEnemy };
private _friendlyAround = player nearEntities [["CAManBase"], 50] select { (side (group _x)) == sideFriendly };


private _surrenderTable = [true, 100, false, 0];
if (count _enemyAround <= 0) then { _surrenderTable = [true, 100, false, 10]; };
if (count _enemyAround >= 1) then { _surrenderTable = [true, 80, false, 30]; };
if (count _enemyAround >= 2) then { _surrenderTable = [true, 60, false, 50]; };
if (count _enemyAround >= 3) then { _surrenderTable = [true, 40, false, 60]; };
if (count _enemyAround >= 4) then { _surrenderTable = [true, 20, false, 80]; };
if (count _enemyAround >= 5) then { _surrenderTable = [true, 1, false, 100]; };

if (side (group _target) == civilian && !((_x getVariable ["SpecOps_EnableKamikazee", false]))) then {
    _surrenderTable = [true, 100, false, 1];
}; 

// is player too close unit cannot say no to surrender (combat simulation)?
if ((_target distance player) <= 1) then { 
    _surrenderTable = [true, 100, false, 0];
};

private _willSurrender = selectRandomWeighted _surrenderTable;
_alreadyCapture = captive _target;
if (_willSurrender || _alreadyCapture) then { 
    [_target] remoteExec ["SpecOps_fnc_setSurrender", 2]; 
    _voiceAudio =[_faction, _audioHashmap, "SoundEffect", "Cuff"] call SpecOps_fnc_voiceSelectFromHashMap;
    private _isValid = isClass (configFile >> "CfgSounds" >> _voiceAudio);
    if (_isValid) then { _source = player say3D _voiceAudio; };
};
missionNamespace setVariable ["bsm_so_cmd_surrender_cd_chk", true];
_voiceAudio = [_faction, _audioHashmap, "PlayerOperator", "SurrenderShouts"] call SpecOps_fnc_voiceSelectFromHashMap;
private _isValid = isClass (configFile >> "CfgSounds" >> _voiceAudio);
if (_isValid) then { _source = player say3D _voiceAudio; };
waitUntil { isNull _source };

missionNamespace setVariable ["bsm_so_cmd_surrender_cd_chk", false];






