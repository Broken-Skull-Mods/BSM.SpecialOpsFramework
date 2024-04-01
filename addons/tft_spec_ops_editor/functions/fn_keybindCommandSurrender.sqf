
/*
    call SpecOps_fnc_keybindCommandSurrender;
*/
_target = cursorObject;
if ((missionNamespace getVariable["TFT_SPECOP_COMMAND_SURRENDER_CHECK_COOLDOWN", false])) exitWith {};
_coolingDown = missionNamespace getVariable ["TFT_SPECOP_COMMAND_SURRENDER_CHECK_COOLDOWN", false];
if (isNull _target) exitWith {};
isMan = _target isKindOf "Man";
if (!isMan) exitWith {};
if (!alive _target) exitWith {};
_distance = player distance _target;
if(_distance > 15) exitWith {};
moveOut _target;
// if has no surrender table, surrender is alway assured
    _willSurrender = selectRandomWeighted (_target getVariable["surrenderTable", [true, 1]]);
    _alreadyCapture = captive _target;
    if (_willSurrender || _alreadyCapture) then { 
        [_target] remoteExec ["SpecOps_fnc_setSurrender", 2]; 
        playSound ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "SoundEffect", "Cuff"] call SpecOps_fnc_voiceSelectFromHashMap);
    };
    missionNamespace setVariable ["TFT_SPECOP_COMMAND_SURRENDER_CHECK_COOLDOWN", true];
    _voiceAudio = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "PlayerOperator", "SurrenderShouts"] call SpecOps_fnc_voiceSelectFromHashMap;
    _source = playSound _voiceAudio;
    waitUntil { isNull _source };

missionNamespace setVariable ["TFT_SPECOP_COMMAND_SURRENDER_CHECK_COOLDOWN", false];


