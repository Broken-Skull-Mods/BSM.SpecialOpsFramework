    params ["_customPreset"];
    removeAllWeapons player;
    removeUniform player;
    removeVest player;
    removeBackpack player;
    removeHeadgear player;
    removeGoggles player;
    uiSleep 0.1;
    private _weaponPrimary = _customPreset select 0;
    private _weaponPrimaryItems = _customPreset select 1;
    private _weaponPrimaryMag = _customPreset select 2;
    private _weaponSecondary = _customPreset select 3;
    private _weaponSecondaryItems = _customPreset select 4;
    private _weaponSecondaryMag = _customPreset select 5;
    private _weaponHandgun = _customPreset select 6;
    private _weaponHandgunItems = _customPreset select 7;
    private _weaponHandgunMag = _customPreset select 8;
    private _assignedStuff = _customPreset select 9;
    private _vest = _customPreset select 10;
    private _vestStuff = _customPreset select 11;
    private _uniform = _customPreset select 12;
    private _uniformStuff = _customPreset select 13;
    private _backpack = _customPreset select 14;
    private _backpackStuff = _customPreset select 15;
    private _headgear =  _customPreset select 16;
    private _goggles = _customPreset select 17;
    private _nvg = _customPreset select 18;
    private _binocular = _customPreset select 19;
    
    if (_headgear != "") then { player addHeadgear _headgear; };
    if (_nvg != "") then { player linkItem _nvg; };
    if (_goggles != "") then { player addGoggles _goggles; };
    if (_binocular != "") then { player addWeapon _binocular; };
    if (_weaponPrimary != "") then {
        player addWeapon _weaponPrimary;
        { 
            player addPrimaryWeaponItem _x;
        } forEach (_weaponPrimaryItems + _weaponPrimaryMag);
    };

    if (_weaponSecondary != "") then {
        player addWeapon _weaponSecondary;
        { 
            player addSecondaryWeaponItem _x;
        } forEach (_weaponSecondaryItems + _weaponSecondaryMag);
    };

    if (_weaponHandgun != "") then {
        player addWeapon _weaponHandgun;
        { 
            player addhandgunItem _x;
        } forEach (_weaponHandgunItems + _weaponHandgunMag);
    };




    private _currentRadio = (player getSlotItemName 611); 
    // if current radio type is not the same type as new linkedItems then remove all items
    if(!(_currentRadio in _assignedStuff)) then { removeAllAssignedItems player} 
    else {
        // Otherwise for each assigned item check if it's the radio if not remove it.
        {
            if (_x != _currentRadio) then {    
                player unassignItem _x;
                player removeItem _x;
            };
        } forEach (assignedItems player);
    };

    { 
        if(_x == "") then { continue; };
        if(_x in (assignedItems player)) then { continue; };
        player linkItem _x;
    } forEach (_assignedStuff);

    if (_vest != "") then {
        { 
            player addVest _x;
        } forEach (_vestStuff);
    };

    if (_vest != "") then {
        player addVest _vest;
        { player addItemToVest _x; } forEach (_vestStuff);
    };

    if (_uniform != "") then {
        player forceAddUniform _uniform;
        { player addItemToUniform _x; } forEach (_uniformStuff);
    };

    if (_backpack != "") then {
        player addBackpack _backpack;
        { player addItemToBackpack _x; } forEach (_backpackStuff);
    };