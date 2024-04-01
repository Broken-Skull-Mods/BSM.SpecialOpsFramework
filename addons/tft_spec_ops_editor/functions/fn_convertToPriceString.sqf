params ["_price"];
/*
    [1] call SpecOps_fnc_convertToPriceString;
*/
_noDecimal = _price * 1000;

if (_noDecimal >= 1000) exitWith { format ["%1M", _noDecimal]; };
if (_noDecimal >= 100) exitWith { format ["%1K", _noDecimal]; };
_noDecimal;