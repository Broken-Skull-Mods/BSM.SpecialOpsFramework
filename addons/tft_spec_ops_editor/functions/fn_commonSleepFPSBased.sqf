/*
    call SpecOps_fnc_commonSleepFPSBased;
*/
        private _fps = 1 / diag_deltaTime;

waitUntil { uiSleep 0.2; (1 / diag_deltaTime) >= 20 || {diag_fps >= 40 }; };
// private _fps = diag_fps;
// private _fpsLevel1 = _fps < 10;
// private _fpsLevel2 = _fps < 15;
// private _fpsLevel3 = _fps < 20;
// private _fpsLevel4 = _fps < 25;
// private _fpsLevel5 = _fps < 30;
// private _fpsLevel6 = _fps < 35;
// private _fpsLevel7 = _fps < 40;
// private _fpsLevel8 = _fps < 45;
// private _fpsLevel9 = _fps < 50;
// private _fpsLevel10 = _fps < 55;
// private _fpsLevel11 = _fps < 60;
// private _fpsHigh = _fps > 60;

// private _sleepFor = 0;
// if (!_fpsHigh) then {
//     if (_fpsLevel11) then { _sleepFor = 0.5; };
//     if (_fpsLevel10) then { _sleepFor = 1; };
//     if (_fpsLevel9) then { _sleepFor = 1.5; };
//     if (_fpsLevel8) then { _sleepFor = 1.75; };
//     if (_fpsLevel7) then { _sleepFor = 2.0; };
//     if (_fpsLevel6) then { _sleepFor = 2.5; };
//     if (_fpsLevel5) then { _sleepFor = 3; };
//     if (_fpsLevel4) then { _sleepFor = 3.5; };
//     if (_fpsLevel3) then { _sleepFor = 4; };
//     if (_fpsLevel2) then { _sleepFor = 4.5; };
//     if (_fpsLevel1) then { _sleepFor = 5; };
// };
// _sleepFor;
// diag_log format ["Sleep for %1 because FPS is %2", _sleepFor, _fps];

// uiSleep _sleepFor;

