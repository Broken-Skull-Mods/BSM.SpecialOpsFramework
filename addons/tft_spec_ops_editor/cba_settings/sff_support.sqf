["TFT_SUPPORT_ENABLE_AIR_TRANSPORT_MIL", "CHECKBOX", ["Military Air Transport", "Enable/Disable Military Air Transport."],  ["Special Ops Framework - Support", "Support Settings"], false, 1, {}, true] call CBA_fnc_addSetting;
["TFT_SUPPORT_HELO_TRANSPORT_MIL_COST", "SLIDER",   ["Cost of Military Air Transport",   "Cost for military helicopter transport."], ["Special Ops Framework - Support", "Support Settings"], [0, 1000, 50, 0], 1, {}] call CBA_fnc_addSetting;

["TFT_SUPPORT_ENABLE_AIR_TRANSPORT_CIV", "CHECKBOX", ["Civilian Air Transport", "Enable/Disable Civilian Air Transport."],  ["Special Ops Framework - Support", "Support Settings"], false, 1, {}, true] call CBA_fnc_addSetting;
["TFT_SUPPORT_HELO_TRANSPORT_CIV_COST", "SLIDER",   ["Cost of Civilian Air Transport",   "Cost for civilian helicopter transport."], ["Special Ops Framework - Support", "Support Settings"], [0, 1000, 30, 0], 1, {}] call CBA_fnc_addSetting;

["TFT_SUPPORT_ENABLE_SUPPLY_DROP", "CHECKBOX", ["Air Supply Drops", "Enable/Disable Air Supply Drops."],  ["Special Ops Framework - Support", "Support Settings"], false, 1, {}, true] call CBA_fnc_addSetting;
["TFT_SUPPORT_SUPPLY_DROP_BM_COST", "SLIDER",   ["Cost of Supply Box",   "Cost for black market supply drop."], ["Special Ops Framework - Support", "Support Settings"], [0, 1000, 10, 0], 1, {}] call CBA_fnc_addSetting;
["TFT_SUPPORT_SUPPLY_DROP_BM_TIME", "SLIDER",   ["Time Limit to Black Market Box",   "How long before box despawn."], ["Special Ops Framework - Support", "Support Settings"], [1, 10, 4, 0], 1, {}] call CBA_fnc_addSetting;

["TFT_SUPPORT_ENABLE_BOMB_DROP", "CHECKBOX", ["Air Bomb Strike", "Enable/Disable Air Bomb Strike."],  ["Special Ops Framework - Support", "Support Settings"], false, 1, {}, true] call CBA_fnc_addSetting;
["TFT_SUPPORT_BOMB_DROP_BM_COST", "SLIDER",   ["Cost of Bomb Strike",   "Cost for black market Bomb Strike."], ["Special Ops Framework - Support", "Support Settings"], [0, 1000, 75, 0], 1, {}] call CBA_fnc_addSetting;

["TFT_SUPPORT_ENABLE_MORTAR_DROP", "CHECKBOX", ["Artillery Strike", "Enable/Disable Artillery Strike."],  ["Special Ops Framework - Support", "Support Settings"], false, 1, {}, true] call CBA_fnc_addSetting;
["TFT_SUPPORT_MORTAR_DROP_BM_COST", "SLIDER",   ["Cost of Artillery Strike",   "Cost for black market Artillery strike."], ["Special Ops Framework - Support", "Support Settings"], [0, 1000, 30, 0], 1, {}] call CBA_fnc_addSetting;

["TFT_SUPPORT_ENABLE_CAS_HELO", "CHECKBOX", ["Helicopter CAS", "Enable/Disable Helicopter Strike."],  ["Special Ops Framework - Support", "Support Settings"], false, 1, {}, true] call CBA_fnc_addSetting;
["TFT_SUPPORT_CAS_HELO_BM_COST", "SLIDER",   ["Cost of CAS",   "cost for black market helicopter CAS request."], ["Special Ops Framework - Support", "Support Settings"], [0, 25000, 1000, 0], 1, {}] call CBA_fnc_addSetting;
