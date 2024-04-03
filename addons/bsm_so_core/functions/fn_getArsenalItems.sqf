params ["_faction", "_camo"];
/*
    ["usa_socom", "Woodland"] call SpecOps_fnc_getArsenalItems;
*/
_selectedCamo = format["ArsenalPreset%1", _camo];
_selectedCamoExtra = format["ArsenalExtra%1", _camo];
_camoClasses = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _selectedCamo);
_camoExtraClasses = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _selectedCamo);
_camoExtraClasses = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> "ArsenalCommonStuff");

private _outputs = [];
{
    _camoSelect = _x;
    _ok = isArray (configfile >> "CfgVehicles" >> _camoSelect >> "ALiVE_orbatCreator_loadout");
    if (_ok) then {
        _loadout = getArray (configfile >> "CfgVehicles" >> _camoSelect >> "ALiVE_orbatCreator_loadout");
        {
            if (_x == "") then { continue; };
            _outputs pushbackUnique _x;
        } forEach (([_loadout] call SpecOps_fnc_commonExtractUnitGearnStuff));
    }else {
        _loadout = getUnitLoadout _camoSelect;
        {
            if (_x == "" ) then { continue; };
            _outputs pushbackUnique _x;
        } forEach (([_loadout] call SpecOps_fnc_commonExtractUnitGearnStuff));
    };
} forEach (_camoClasses + _camoExtraClasses + _camoExtraClasses);

_outputs;

// _arsenalExtraUniforms = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> "ArsenalExtraUniforms");
// _arsenalExtraVests = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> "ArsenalExtraVests");
// _arsenalExtraBackpacks = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> "ArsenalExtraBackpacks");
// _arsenalExtraWeapons = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> "ArsenalExtraWeapons");
// _arsenalExtraMagazines = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> "ArsenalExtraMagazines");
// _arsenalExtraAccessories = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> "ArsenalExtraAccessories");
// _arsenalExtraItems = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> "ArsenalExtraItems");

// {
//     _camoSelect = _x;
//     _uniform = getText (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "Uniform");
//     _items pushback _uniform;
//     _headgear = getText (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "Headgear");
//     _items pushback _headgear;
//     _backpack = getText (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "Backpack");
//     _items pushback _backpack;
//     _vest = getText (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "Vest");
//     _items pushback _vest;
//     _binocular = getText (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "Binocular");
//     _items pushback _binocular;
//     _goggles = getText (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "Goggles");
//     _items pushback _goggles;
//     _weapon = getText (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "Weapon");
//     _items pushback _weapon;
//     _weaponAccessories = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "WeaponAccessories");
//     _items = _items + _weaponAccessories;
    
//     _weaponSecondary = getText (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "WeaponSecondary");
//     _items pushback _weaponSecondary;
//     _weaponSecondaryAccessories = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "WeaponSecondaryAccessories");
//     _items = _items + _weaponSecondaryAccessories;
//     _weaponHandgun = getText (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "WeaponHandgun");
//     _items pushback _weaponHandgun;
//     _weaponHandgunAccessories = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "WeaponHandgunAccessories");
//     _items = _items + _weaponHandgunAccessories;
//     _linkedItems = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "LinkItems");
//     _items = _items + _linkedItems;

//     _addVestItems = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "VestItems");
//     _addUniformItems = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "UniformItems");
//     _addBackpackItems = getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camoSelect >> "BackpackItems");
//     { 
//         _item = _x;
//         if (typeName _x == "ARRAY") then { _item = _x select 0; };
//         _items pushback _item;
//     } forEach (_addVestItems + _addUniformItems + _addBackpackItems);

// } forEach (_camoClasses);

// _items = _items - [""];
// _finalItems = [];
// _finalItems = _finalItems + _arsenalExtraUniforms;
// _finalItems = _finalItems + _arsenalExtraVests;
// _finalItems = _finalItems + _arsenalExtraBackpacks;
// _finalItems = _finalItems + _arsenalExtraWeapons;
// _finalItems = _finalItems + _arsenalExtraMagazines;
// _finalItems = _finalItems + _arsenalExtraAccessories;
// _finalItems = _finalItems + _arsenalExtraItems;
// {
//     if(!(_x in _finalItems)) then {
//         _finalItems pushback _x;
//     };
// } forEach (_items);

// _finalItems;