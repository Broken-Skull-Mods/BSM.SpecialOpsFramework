/*
    call SpecOps_fnc_keybindCommandEscort;
*/
private _faction = missionNameSpace getVariable ["bsm_so_factionInitial", "BS_B_US_ARMA_BASE"];
private _audioHashmap = [_faction] call SpecOps_fnc_voiceInitialize;
_target = cursorObject;
if (isNull _target) exitWith {};
isMan = _target isKindOf "Man";
if (!isMan) exitWith {};
if (!alive _target) exitWith {};
_distance = player distance _target;
if(_distance > 1.5) exitWith {};
_canEscort = [player, _target] call ACE_captives_fnc_canEscortCaptive;
if (!_canEscort) exitWith {};
[player, _target, true] call ACE_captives_fnc_doEscortCaptive;
_voiceAudio = [_faction, _audioHashmap, "PlayerOperator", "Escort"] call SpecOps_fnc_voiceSelectFromHashMap;
private _isValid = isClass (configFile >> "CfgSounds" >> _voiceAudio);
if (_isValid) then { player say3D _voiceAudio; };

