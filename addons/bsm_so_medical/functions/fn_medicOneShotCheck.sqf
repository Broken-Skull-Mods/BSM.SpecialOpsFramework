params ["_target", "_ammo"];
private _ammoObject = _ammo select 4;
private _mass = (getNumber (configfile >> "CfgAmmo" >> _ammoObject >> "ACE_bulletMass"));
private _length = (getNumber (configfile >> "CfgAmmo" >> _ammoObject >> "ACE_bulletLength"));
private _caliber = (getNumber (configfile >> "CfgAmmo" >> _ammoObject >> "ACE_caliber"));
if (BSM_SO_CBA_OSK_DEBUG) then {
	systemChat format ["ACE_bulletLength = %4 | ACE_bulletMass = %1 | ACE_caliber = %2 | _ammo = %3", _mass, _caliber, _ammoObject, _length];
};
if (_mass >= 12.5 && _caliber >= 7) then { _target setDamage 1; };

