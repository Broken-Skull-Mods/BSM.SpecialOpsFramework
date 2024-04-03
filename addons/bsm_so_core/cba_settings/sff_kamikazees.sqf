["TFT_SPECOPS_GEN_CIV_KAMIKAZEE_ENABLED", "CHECKBOX", ["Enable Kamikazees", "Enable/Disable Suicide Bomber Runners"], ["Special Ops Framework - Kamikazee", "Kamikazee Bomber"], true, 1,
{}, true] call CBA_fnc_addSetting;

["TFT_SPECOPS_GEN_CIV_KAMIKAZEE_PROB", "SLIDER",   ["Chance Civilian Kamikazee",   "Chances civilian wears svest running to boom."], ["Special Ops Framework - Kamikazee", "Kamikazee Bomber"], [0, 1, 0.02, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SVEST_KAMIKAZEE_SCAN_DISTANCE", "SLIDER",   ["Kamikazee Scan Distance",   "Closer to 0 the closer the player will need to be for the kamikaze the activate."], ["Special Ops Framework - Kamikazee", "Kamikazee Bomber"], [10, 500, 100, 0], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SVEST_PROB_BLOW_ON_DEATH", "SLIDER",   ["Blow on Death",   "Closer to 0 the less likely it will blow on death."], ["Special Ops Framework - Kamikazee", "Kamikazee Bomber"], [0, 1, 0.1, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SVEST_PROB_BLOW_ON_HIT", "SLIDER",   ["Blow on Hit",   "Closer to 0 the less likely it will blow on hit."], ["Special Ops Framework - Kamikazee", "Kamikazee Bomber"], [0, 1, 0.1, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SVEST_PROB_BLOW_ON_EXPLOSION", "SLIDER",   ["Blow on Shock Wave",   "Closer to 1 the less likely it will blow on nearby explosions."], ["Special Ops Framework - Kamikazee", "Kamikazee Bomber"], [0, 1, 0.3, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SVEST_PROB_EXPLOSIVE_SMALL", "SLIDER",   ["Chance Small Explosive",   "Closer to 0 the less likely the explosive will be small."], ["Special Ops Framework - Kamikazee", "Kamikazee Bomber"], [0, 1, 1, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SVEST_PROB_EXPLOSIVE_MEDIUM", "SLIDER",   ["Chance of Medium Explosive",   "Closer to 0 the less likely the explosive will be medium size."], ["Special Ops Framework - Kamikazee", "Kamikazee Bomber"], [0, 1, 0.15, 2], 1, 
{}, true] call CBA_fnc_addSetting;

["TFT_SVEST_PROB_EXPLOSIVE_LARGE", "SLIDER",   ["Chance of Large Explosive",   "Closer to 0 the less likely the explosive will be large."], ["Special Ops Framework - Kamikazee", "Kamikazee Bomber"], [0, 1, 0, 2], 1, 
{}, true] call CBA_fnc_addSetting;
