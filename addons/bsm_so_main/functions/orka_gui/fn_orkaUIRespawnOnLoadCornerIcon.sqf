params ["_ctrl"];

private _currentIcon = missionNamespace getVariable ["cryptographicIcon", ""]; 
private _currentTick = missionNamespace getVariable ["cryptographicIconTick", time]; 
if (_currentIcon == "" || time > _currentTick) then {
    private _selectIconOfTheDay = selectRandom ("(['TFT', str (configName _x)] call BIS_fnc_inString) && {(['_OL', str (configName _x)] call BIS_fnc_inString)}" configClasses (configFile >> "CfgMarkers")); 
    private _cryptographicIcon = getText (_selectIconOfTheDay >> "icon"); 
    missionNamespace setVariable ["cryptographicIcon", _cryptographicIcon]; 
    missionNamespace setVariable ["cryptographicIconTick", (time + 10)]; 
};
_currentIcon = missionNamespace getVariable ["cryptographicIcon", ""]; 
_ctrl ctrlSetText _currentIcon;
