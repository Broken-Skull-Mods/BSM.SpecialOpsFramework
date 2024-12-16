params ["_value"];
_value = (hashValue _modCode);
_specialChar = [ '!' , '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+', '=', '{', '}', '[', ']', ':', ';', '"', '\', '<', '>', ',', '.', '?', '/'];
{
	_value = [_value, _x, '_'] call CBA_fnc_replace;
} forEach (_specialChar);
_value;