    params ["_key"];
    _weaponPrimary = primaryWeapon player;
    _weaponPrimaryItems = primaryWeaponItems player;
    _weaponPrimaryMag = primaryWeaponMagazine player;
    _weaponSecondary = secondaryWeapon player;
    _weaponSecondaryItems = secondaryWeaponItems player;
    _weaponSecondaryMag = secondaryWeaponMagazine player;
    _weaponHandgun = handgunWeapon player;
    _weaponHandgunItems = handgunItems player;
    _weaponHandgunMag = handgunMagazine player;
    _assignedStuff = assignedItems player;
    _vest = vest player;
    _vestStuff = vestItems player;
    _uniform = uniform player;
    _uniformStuff = uniformItems player;
    _backpack = backpack  player;
    _backpackStuff = backpackItems player;
    _headgear =  headgear player;
    _goggles = goggles player;
    _nvg = hmd player;
    _binocular = binocular player;
    _presetInfo = [
        _weaponPrimary, // 0
        _weaponPrimaryItems, // 1
        _weaponPrimaryMag, // 2
        _weaponSecondary, // 3
        _weaponSecondaryItems, // 4
        _weaponSecondaryMag, // 5
        _weaponHandgun, // 6
        _weaponHandgunItems, // 7
        _weaponHandgunMag, // 8
        _assignedStuff, // 9
        _vest, // 10
        _vestStuff, // 11
        _uniform, // 12
        _uniformStuff, // 13
        _backpack, // 14
        _backpackStuff, // 15
        _headgear, // 16
        _goggles, // 17
        _nvg, // 18
        _binocular // 19e
    ];
    profileNamespace setVariable [_key, _presetInfo];
    saveProfileNamespace;