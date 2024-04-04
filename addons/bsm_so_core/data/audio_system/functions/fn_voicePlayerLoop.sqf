
if (!hasInterface) exitWith {};
[] spawn {
    uiSleep 10;
    while {uiSleep 0.1; true;} do {
        waitUntil {uiSleep 0.2; count (missionNamespace getVariable ["SpecOps_Audio_Queue", []]) > 0};
        private _list =  missionNamespace getVariable ["SpecOps_Audio_Queue", []];
        // Can be either an array "Sound" or SCALAR (Number) for sleeping;
        private _audio = _list select 0;
        _list set[0, ""];
        _list = _list - [""];
        private _isValid = isClass (configFile >> "CfgSounds" >> _audio);
        if (!_isValid) then { continue; };
        if(typeName _audio == "SCALAR") then {
            uiSleep _audio; // uiSleep for defined time
        } else{
            if(typeName _audio == "STRING") then {
                missionNamespace setVariable ["SpecOps_Audio_Queue", _list];
                private _audioPlayer = playSound [_audio, 10];
                waitUntil {uiSleep 0.1; isNull _audioPlayer};
            };     
        };
        
    };
};
