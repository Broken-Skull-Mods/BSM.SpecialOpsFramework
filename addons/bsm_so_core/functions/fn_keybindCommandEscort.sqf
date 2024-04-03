/*
    call SpecOps_fnc_keybindCommandEscort;
*/
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
_voiceAudio = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "PlayerOperator", "Escort"] call SpecOps_fnc_voiceSelectFromHashMap;
playSound _voiceAudio;
