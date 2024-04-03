params ["_faction", "_camo", "_unit"];

/*
 ["usa_socom", "Woodland", bob] call SpecOps_fnc_turnCivilianEnemy;
*/
_unit setCaptive false;
removeAllWeapons _unit;

_primaryGun = selectRandom [
    ["hgun_ACPC2_F", "9Rnd_45ACP_Mag"], 
    ["hgun_Pistol_heavy_01_F", "11Rnd_45ACP_Mag"],
    ["hgun_Rook40_F", "17Rnd_9x21_Mag"],
    ["hgun_P07_F", "16Rnd_9x21_Mag_v2"]
];
_weapon = _primaryGun select 0;
_mag = _primaryGun select 1;
_unit addWeapon _weapon;
for "_i" from 1 to 4 do { _unit addItemToBackpack _mag; };