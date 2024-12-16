/*
    call SpecOps_fnc_keybindCommandYouAlive;
*/
private _faction = missionNameSpace getVariable ["bsm_so_factionInitial", "BS_B_US_ARMA_BASE"];
private _audioHashmap = [_faction] call SpecOps_fnc_voiceInitialize;
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
        _soundToPlay = ([_faction, _audioHashmap, "SoundEffect", "Cuff"] call SpecOps_fnc_voiceSelectFromHashMap);
        private _isValid = isClass (configFile >> "CfgSounds" >> _soundToPlay);
        if (_isValid) then { player say3D _soundToPlay; };
    };
    missionNamespace setVariable ["TFT_SPECOP_COMMAND_MEDICAL_CHECK_COOLDOWN", true];
    _voiceAudio = [_faction, _audioHashmap, "PlayerOperator", "MedicalAlive"] call SpecOps_fnc_voiceSelectFromHashMap;
    private _isValid = isClass (configFile >> "CfgSounds" >> _voiceAudio);
    if (_isValid) then { player say3D _voiceAudio; };
    waitUntil { isNull _source };
    
    private _isBleeding = [_target] call ace_medical_blood_fnc_isBleeding;
    private _isInStableCondition = [_target] call ace_medical_status_fnc_isInStableCondition;
    private _isInStableVital = [_target] call ace_medical_status_fnc_hasStableVitals;
    if (_isBleeding) then {
        _voiceAudio = [_faction, _audioHashmap, "PlayerOperator", "MedicalAliveBleeding"] call SpecOps_fnc_voiceSelectFromHashMap;
        private _isValid = isClass (configFile >> "CfgSounds" >> _voiceAudio);
        if (_isValid) then {_source = player say3D _voiceAudio; };

        _voiceAudio = [_faction, _audioHashmap, "SoundEffect", "MedicalBleeding"] call SpecOps_fnc_voiceSelectFromHashMap;
        private _isValid = isClass (configFile >> "CfgSounds" >> _voiceAudio);
        if (_isValid) then {_source = _target say3D _voiceAudio; };

        
    }else {
        if(!_isInStableCondition || !_isInStableVital) then {
            _voiceAudio = [_faction, _audioHashmap, "PlayerOperator", "MedicalAliveUnstable"] call SpecOps_fnc_voiceSelectFromHashMap;
            
            private _isValid = isClass (configFile >> "CfgSounds" >> _voiceAudio);
            if (_isValid) then { _source = player say3D _voiceAudio; };

            _voiceAudio = [_faction, _audioHashmap, "SoundEffect", "MedicalUnstable"] call SpecOps_fnc_voiceSelectFromHashMap;
            private _isValid = isClass (configFile >> "CfgSounds" >> _voiceAudio);
            if (_isValid) then {_source = _target say3D _voiceAudio; };
 
        }else{
            _voiceAudio = [_faction, _audioHashmap, "SoundEffect", "MedicalStable"] call SpecOps_fnc_voiceSelectFromHashMap;
            private _isValid = isClass (configFile >> "CfgSounds" >> _voiceAudio);
            if (_isValid) then {_source = _target say3D _voiceAudio; };
        };
    };

    // ["<t color='#009544' size='1.5'>ALIVE</t>",-1,-1,1,0.5] spawn bis_fnc_dynamicText;
}else{
    missionNamespace setVariable ["TFT_SPECOP_COMMAND_MEDICAL_CHECK_COOLDOWN", true];
    _voiceAudio = [_faction, _audioHashmap, "PlayerOperator", "MedicalDead"] call SpecOps_fnc_voiceSelectFromHashMap;
    private _isValid = isClass (configFile >> "CfgSounds" >> _voiceAudio);
    if (_isValid) then { _source = player say3D _voiceAudio; };

    // ["<t color='#950000' size='1.5'>DEAD</t>",-1,-1,1,0.5] spawn bis_fnc_dynamicText;
};

waitUntil { isNull _source };
missionNamespace setVariable ["TFT_SPECOP_COMMAND_MEDICAL_CHECK_COOLDOWN", false];
