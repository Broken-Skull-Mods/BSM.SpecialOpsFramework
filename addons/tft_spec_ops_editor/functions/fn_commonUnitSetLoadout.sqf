params ["_unit"];
/*
    [unit] call SpecOps_fnc_commonUnitSetLoadout;
*/
private _configFile = configfile >> 'cfgvehicles' >> (typeof _unit); 
if (hasInterface) then {
    // Set Identity

    private _faces = getArray(_configFile >> "identityFacesSpecOps"); 
    private _speakers = getNumber(_configFile >> "identityVoiceSpecOps"); 
    private _faceSelected = [_faces] call SpecOps_fnc_commonGetRandomFace;
    private _voiceSelected = [_speakers] call SpecOps_fnc_commonGetRandomVoice; 
    _unit setFace _faceSelected;
    _unit setSpeaker _voiceSelected;
    lockIdentity _unit;
};

if (local _unit) then {
    _onSpawn = {
        params ["_unit"];
        sleep 0.2; 
        private _configFile = configfile >> 'cfgvehicles' >> (typeof _unit); 
        private _backpack = gettext(_configFile >> 'backpack'); 
        waituntil {sleep 0.2; backpack _unit == _backpack};
        if !(_unit getVariable ['ALiVE_OverrideLoadout',false]) then {
            _loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _unit) >> 'ALiVE_orbatCreator_loadout'); 
            _unit setunitloadout _loadout;
            reload _unit;
            _unit setVariable ['ALiVE_OverrideLoadout',true];
        };
    };
    _unit spawn _onSpawn;
    (_unit) addMPEventHandler ['MPRespawn', _onSpawn];
};
