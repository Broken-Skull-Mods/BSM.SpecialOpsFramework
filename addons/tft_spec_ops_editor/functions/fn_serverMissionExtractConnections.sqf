params ["_area"];
/*
    Use to extract mission connection for objectives.
    [_area] call SpecOps_fnc_serverMissionExtractConnections;
*/
private _cycledPassedArea = [];
_cycledPassedArea pushback _area;
private _fallbackAreas = [];
private _transitAreas = [];
private _missions = [];
private _isFinish = false;
private _connections = synchronizedObjects _area;
{
    _isPassed = _x in _cycledPassedArea;
    _isFailurePos = _x isKindOf "TFTE_SystemFallbackFailure" && !_isPassed;
    _isTransit = _x isKindOf "TFTE_SystemSuccessTransit"  && !_isPassed;
    _isFramework = _x isKindOf "TFTE_SystemMissionFramework" ||  _x isKindOf "TFTE_SystemOpenWorldArea";
    _isBorderMarker = _x isKindOf "TFTE_SystemBorderMaker";
    _isOpenWorld = _x isKindOf "TFTE_SystemOpenWorldArea"; 
    if (!_isFinish) then { _isFinish = _x isKindOf "TFTE_SystemEnding"; };        
    if (_isFailurePos && !_isPassed) then { _fallbackAreas pushback _x; };
    if (_isTransit && !_isPassed ) then { _transitAreas pushback _x; };
    if (!_isTransit && !_isFailurePos && !_isFramework && !_isBorderMarker && !_isOpenWorld && !_isPassed) then {
        _missions pushback _x;
    };
} forEach (_connections);
[_fallbackAreas, _transitAreas, _missions, _isFinish];