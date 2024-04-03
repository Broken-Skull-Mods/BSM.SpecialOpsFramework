/*
    call SpecOps_fnc_uiTdaButtonExit;
*/

private _current = uiNamespace getVariable ["SpecOps_OrkaUI_Current", nil];
if (isNil "_current") exitWith{};
_current closeDisplay 1; 
uiNamespace setVariable ["SpecOps_OrkaUI_Current", nil];
uiSleep 0.05;