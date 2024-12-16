params ["_unit"];
/*
    [] call SpecOps_fnc_dressUpSetIdentity;
*/
params ["_unit"];
private _configFile = configfile >> 'CfgVehicles' >> (typeof _unit); 
diag_log format ["_configFile = %1", _configFile];
if (!isArray (_configFile >> "identityFacesSpecOps")) exitWith { };
// diag_log format ["isArray = %1", isArray (_configFile >> "identityFacesSpecOps")];
// diag_log format ["hasInterface = %1", hasInterface];
if (hasInterface) then {
    private _faces = getArray(_configFile >> "identityFacesSpecOps"); 
    // diag_log format ["_faces = %1", _faces];
    private _speakers = getNumber(_configFile >> "identityVoiceSpecOps"); 
    // diag_log format ["_speakers = %1", _speakers];
    private _faceSelected = [_faces] call SpecOps_fnc_commonGetRandomFace;
    // diag_log format ["_faceSelected = %1", _faceSelected];
    private _voiceSelected = [_speakers] call SpecOps_fnc_commonGetRandomVoice; 
    // diag_log format ["_voiceSelected = %1", _voiceSelected];
    _unit setFace _faceSelected;
    // _unit setSpeaker _voiceSelected;
    _unit setSpeaker "NoVoice";
    lockIdentity _unit;
};