params ["_loadout"];
/*
    private _items = [getUnitLoadout [this, true]] call SpecOps_fnc_commonExtractUnitGearnStuff;
    [player, _items] call ace_arsenal_fnc_initBox;
    [player, player, false] call ace_arsenal_fnc_openBox;
    [] call SpecOps_fnc_commonExtractUnitGearnStuff;
    
*/
private _items = [];
{
    if(typeName _x == "STRING") then { _items pushbackUnique _x;};
    if(typeName _x == "ARRAY") then {
        {
            if(typeName _x == "STRING") then { _items pushbackUnique _x;};
            if(typeName _x == "ARRAY") then {
                {
                    if(typeName _x == "STRING") then { _items pushbackUnique _x;};
                    if(typeName _x == "ARRAY") then {
                        {
                            if(typeName _x == "STRING") then { _items pushbackUnique _x;};   
                        } forEach (_x);
                    };       
                } forEach (_x);
            };       
        } forEach (_x);
    };
} forEach(_loadout);

_items;
