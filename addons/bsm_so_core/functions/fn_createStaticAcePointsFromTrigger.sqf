params ["_trigger"];
_br = toString [13,10];
_toCopy = "";
_objects = (nearestObjects [_trigger, [], 50]);
_area = _objects inAreaArray _trigger;
_classesGenerated = [];
_points = [];
_main = objNull;
{
    if(_x isKindOf "Static") then {
        _main = _x;
    };
} forEach (_area);

if(isNull _main) exitWith {};
_pointPositions = [];
_counter = 0;

{
    _XY = _main worldToModelVisual getPosATL _x;
    _Z = (_main vectorWorldToModelVisual ASLToAGL getPosASL _x) select 2;
    _pos = [_XY select 0, _XY select 1, _Z];
    _string = format ['class %1_ACE_P%5 : TFT_Static_Ace_Point_Base { %6 parentClass="%1"; %6 position[] = { %2, %3, %4 }; %6 displayName="%1_ACE_P%5"; %6 };', (typeOf _main), (_XY select 0), (_XY select 1), _Z, _counter, _br];
    _toCopy = _toCopy + _br + _string;
    _counter = _counter + 1;
} forEach(_points);
_toCopy;