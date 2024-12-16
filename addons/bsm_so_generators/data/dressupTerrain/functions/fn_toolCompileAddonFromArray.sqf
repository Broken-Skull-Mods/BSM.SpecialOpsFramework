params ["_array", ["_requiredAddons", []]];
/*
	[items] call SpecOps_fnc_toolCompileAddonFromArray;
*/
{
	private _addons = [];
	private _isMag = isClass (configFile >> "CfgMagazines" >> typeof (_x));
	if (_isMag) then { _addons = configSourceAddonList (configFile >> "CfgMagazines" >> typeof (_x)); };
	private _isWeapon = isClass (configFile >> "CfgWeapons" >> typeof (_x));
	if (_isWeapon) then { _addons = configSourceAddonList (configFile >> "CfgWeapons" >> typeof (_x)); };
	private _isVehicle = isClass (configFile >> "CfgVehicles" >> typeof (_x));
	if (_isVehicle) then { _addons = configSourceAddonList (configFile >> "CfgVehicles" >> typeof (_x)); };
	{ _requiredAddons pushbackUnique _x; } forEach (_addons);
} forEach (_array);
_requiredAddons;
