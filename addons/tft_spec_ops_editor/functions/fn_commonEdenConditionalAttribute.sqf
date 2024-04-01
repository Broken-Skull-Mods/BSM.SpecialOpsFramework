params ["_obj", "_key", "_value", "_expected", "_keyVal"];
/*
[] call SpecOps_fnc_commonEdenConditionalAttribute;
*/
_obj setVariable [_key, _value]; 
if (_value == _expected) then {
    { _obj setVariable [(_x select 0), (_x select 1)]; } forEach (_keyVal);
};
