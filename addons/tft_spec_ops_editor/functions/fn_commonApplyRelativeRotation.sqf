


private _relatedPos = test getVariable ["initialPos", []];
private _testPitch = test getVariable ["initialPitch", []];
private _dirUp = test getVariable ["DirAndUp", []];
if (count _relatedPos <= 0) then {
    _testPitch = test call BIS_fnc_getPitchBank;
    _pos = getPosWorld test;
    _pos = ASLToATL _pos;
    _relPos = house worldToModel _pos;
    _relPos = _relPos vectorAdd (boundingCenter house);
    _relatedPos = _relPos;
    _dirUp = [test, house] call BIS_fnc_vectorDirAndUpRelative;
    test setVariable ["initialPos", _relatedPos];
    test setVariable ["initialPitch", _testPitch];
    test setVariable ["DirAndUp", _dirUp];
};


house setDir 120;

_absDir = house vectorModelToWorld (_dirUp select 0);
_absUp = house vectorModelToWorld (_dirUp select 1);
test setVectorDirAndUp [_absDir, _absUp];


_relPos = _relatedPos vectorDiff (boundingCenter house);
_absPos = house modelToWorldWorld _relPos;
test setPosWorld _abspos;


_posDir = [house, test] call SpecOps_fnc_commonGetRelPosRotObject;
house setDir 120;
[house, test, _posDir select 0, _posDir select 1, true, true] call SpecOps_fnc_commonRelPosObject;
