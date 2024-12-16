    private _helicopter = player getVariable ["bsm_so_helicopter", objNull];
	if (isNull _helicopter) exitWith {};

    // _hasRadio = !isNil "TFT_CURRENT_RADIO";
    // _longRadio = (backpack player) in TFT_COMM_RADIO_BACKPACK;
    // if (!_longRadio && !_hasRadio) exitWith {
    //     ["TaskFailed", ["", format["You need a radio to contact the aircraft."]]] call BIS_fnc_showNotification; 
    // };
    _damage = damage _helicopter;
    _driver = driver _helicopter;
    _driverIsAI = !isPlayer _driver;
    if(_damage <= 0.3 && alive _driver &&  _driverIsAI) then {
        private _faction = missionNameSpace getVariable ["bsm_so_factionInitial", "BS_B_US_ARMA_BASE"];
        private _audioHashmap = [_faction] call SpecOps_fnc_voiceInitialize;
        _sound = [_faction, _audioHashmap, "HeloPilot", "ControlKeepEngineCold"] call SpecOps_fnc_voiceSelectFromHashMap;
        [_sound] remoteExec ["TFT_FUNC_COMMON_PLAY_AUDIO_QUEUED", player];
    	[_helicopter, true] remoteExec ["engineOn", 2];
    };
