params ["_faction", "_camo"];

getArray (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _camo) apply {
    [_faction, _x, getText (configfile >> "SpecOpsFactions" >> _faction >> "Loadouts" >> _x >> "Name")];
};

