/*
    call SpecOps_fnc_keybindCommandYouAlive;
*/
_target = cursorObject;
if ((missionNamespace getVariable["TFT_SPECOP_COMMAND_MEDICAL_CHECK_COOLDOWN", false])) exitWith {};
_coolingDown = missionNamespace getVariable ["TFT_SPECOP_COMMAND_MEDICAL_CHECK_COOLDOWN", false];
if (isNull _target) exitWith {};
isMan = _target isKindOf "Man";
if (!isMan) exitWith {};
_distance = player distance _target;
if(_distance > 2.5) exitWith {};
_source = objNull;
if (alive _target) then {
    _eastOrCiv = (side (group _target)) == east || (side (group _target)) == civilian;
    _alreadyHandcuff = (_target getVariable["ACE_captives_isHandcuffed", false]);
    if (_eastOrCiv && !_alreadyHandcuff) then { 
        [_target] remoteExec ["SpecOps_fnc_setSurrender", 2];
        playSound ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "SoundEffect", "Cuff"] call SpecOps_fnc_voiceSelectFromHashMap);
    };
    missionNamespace setVariable ["TFT_SPECOP_COMMAND_MEDICAL_CHECK_COOLDOWN", true];
    _voiceAudio = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "PlayerOperator", "MedicalAlive"] call SpecOps_fnc_voiceSelectFromHashMap;
    _source = playSound _voiceAudio;
    waitUntil { isNull _source };
    
    private _isBleeding = [_target] call ace_medical_blood_fnc_isBleeding;
    private _isInStableCondition = [_target] call ace_medical_status_fnc_isInStableCondition;
    private _isInStableVital = [_target] call ace_medical_status_fnc_hasStableVitals;
    if (_isBleeding) then {
        _voiceAudio = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "PlayerOperator", "MedicalAliveBleeding"] call SpecOps_fnc_voiceSelectFromHashMap;
        _source = playSound _voiceAudio;
        _target say3D ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "SoundEffect", "MedicalBleeding"] call SpecOps_fnc_voiceSelectFromHashMap);
        
    }else {
        if(!_isInStableCondition || !_isInStableVital) then {
            _voiceAudio = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "PlayerOperator", "MedicalAliveUnstable"] call SpecOps_fnc_voiceSelectFromHashMap;
            _source = playSound _voiceAudio;
            _target say3D ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "SoundEffect", "MedicalUnstable"] call SpecOps_fnc_voiceSelectFromHashMap);
        }else{
            _target say3D ([TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "SoundEffect", "MedicalStable"] call SpecOps_fnc_voiceSelectFromHashMap);
        };
    };

    // ["<t color='#009544' size='1.5'>ALIVE</t>",-1,-1,1,0.5] spawn bis_fnc_dynamicText;
}else{
    missionNamespace setVariable ["TFT_SPECOP_COMMAND_MEDICAL_CHECK_COOLDOWN", true];
    _voiceAudio = [TFTSRV_SAVEDVAR_PLAYER_FACTION, (missionNamespace getVariable ["spec_ops_genericVoicesHashed", createHashMap]), "PlayerOperator", "MedicalDead"] call SpecOps_fnc_voiceSelectFromHashMap;
    _source = playSound _voiceAudio;
    // ["<t color='#950000' size='1.5'>DEAD</t>",-1,-1,1,0.5] spawn bis_fnc_dynamicText;
};

waitUntil { isNull _source };
missionNamespace setVariable ["TFT_SPECOP_COMMAND_MEDICAL_CHECK_COOLDOWN", false];
