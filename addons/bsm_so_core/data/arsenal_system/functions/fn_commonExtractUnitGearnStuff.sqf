params ["_loadout"];
/*
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
