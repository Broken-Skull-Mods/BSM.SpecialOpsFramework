params ["_unit"];
/*
[_this] call SpecOps_fnc_toolAutoFillLoadout;
[cursorObject] execVM 'test.sqf';
Andosine: 3 (2.20)
Elastics: 40 (29.41)
Quickclots: 40 (29.41)
Epi: 12 (8.82)
Morphine: 12 (8.82)
PAK: 6 (4.41)
Saline (1K): 9 (6.62)
Saline (500mL): 4 (2.94)
Splint: 0
Tourniquets: 10 (7.35)

total supplies: 136
*/
private _usingACE = if (isClass(configFile >> "CfgPatches" >> "ace_main")) then { true; } else { false; };
private _usingKAT = if (isClass(configFile >> "CfgPatches" >> "kat_main")) then { true; } else { false; };
private _unitType = _unit getVariable ["SpecOps_FactionGenerator", -1];
private _riflemanUniform = [
    ["ACE_EarPlugs", 1], 
    ["ACE_morphine", 1], 
    ["ACE_tourniquet", 4],
    ["ACE_packingBandage", 10],
    ["ACE_quikclot", 10],  
    ["ACE_RangeCard", 1],
    ["ACE_microDAGR", 1],
    ["ACE_IR_Strobe_Item", 1],
    ["ACE_epinephrine", 1], 
    ["ACE_CableTie", 3],

    ["kat_PainkillerItem", 2],
    ["kat_chestSeal", 1],
    ["kat_guedel", 2]
];


private _riflemanUniformClean = _riflemanUniform apply { _x select 0; };

private _riflemanVest = [
    ["ACE_wirecutter", 1]
];
private _riflemanVestClean = _riflemanVest apply { _x select 0; };
// 53 0.24
private _grenadierPercentage = [
	["1Rnd_HE_Grenade_shell", 0.6315],
	["1Rnd_Smoke_Grenade_shell", 0.3685]
];


private _medicVest = [
    ["kat_accuvac", 1],
    ["kat_AED", 1],
    ["kat_stethoscope", 1],
    ["ACE_surgicalKit", 1],
    ["ACE_surgicalKit", 1]
];

private _medicalPercentage = [
	["ACE_adenosine", 0.0180], // 4
	["ACE_elasticBandage", 0.1131], // 25
	["ACE_packingBandage", 0.1131], // 25
	["ACE_quikclot", 0.1131], // 25
	["ACE_morphine", 0.0361], // 8
	["ACE_epinephrine", 0.0361], // 8
	["ACE_plasmaIV", 0.0271], // 6
	["ACE_plasmaIV_500", 0.04524], // 10
	["ACE_splint", 0.0180], // 4
	["ACE_suture", 0.09049], // 20
	["ACE_tourniquet", 0.0361], // 8
    ["kat_larynx", 0.04524], // 10
	["kat_naloxone", 0.0180], // 4
	["kat_CaffeineItem", 0.0904], // 2
	["kat_PainkillerItem", 0.0180], // 4
	["kat_CarbonateItem", 0.0180], // 4
	["kat_IO_FAST", 0.0542], // 12
	["kat_ncdKit", 0.0180], // 4
	["kat_aatKit", 0.0904], // 2
	["kat_chestSeal", 0.04524], // 10
	["kat_Pulseoximeter", 0.0271] // 6
];
// kat_PenthroxItem
// "30Rnd_556x45_AUG_Mag_Green_F"
private _mag = primaryWeaponMagazine _unit;
diag_log format ["%1", _mag];
switch (_unitType) do {
    case 1: { // Rifleman
		// 
        { if ((_x in _riflemanUniformClean)) then { _unit removeItemFromUniform _x; }; } forEach (uniformItems _unit);
        { if ((_x in _riflemanVestClean)) then { _unit removeItemFromVest _x; }; } forEach (vestItems _unit);
        // Fill Uniform with all we can
        { 
            for "_i" from 1 to (_x select 1) do {
                diag_log format ["%1", _x];
                if (!(_unit canAddItemToUniform (_x select 0))) then { break; };
                _unit addItemToUniform (_x select 0);
            };
         } forEach (_riflemanUniform); 

        { 
            for "_i" from 1 to (_x select 1) do {
                if (!(_unit canAddItemToUniform (_x select 0))) then { break; };
                _unit addItemToUniform (_x select 0);
            };
         } forEach (_riflemanVest); 

         // fill with mags
         for "_i" from 1 to 30 do {
            diag_log format ["%1", _mag];

            if (!(_unit canAdd (_mag select 0))) then { break;};
            diag_log format ["YES TO %1", _mag];
            _unit addItem (_mag select 0);
         };

    };
    case 3: { // Grenadier
        { if ((_x in _riflemanUniformClean)) then { _unit removeItemFromUniform _x; }; } forEach (uniformItems _unit);
        // Fill Uniform with all we can
        { 
            for "_i" from 1 to (_x select 1) do {
                if (!(_unit canAddItemToUniform (_x select 0))) then { break; };
                _unit addItemToUniform (_x select 0);
            };
        } forEach (_riflemanUniform); 



        _grenadierPercentage pushback [(_mag select 0), 0.24];
         [_unit, "vest", _grenadierPercentage, 53] call SpecOps_fnc_toolFillCargoWithPercentageTable;
         [_unit, "backpack", _grenadierPercentage, 53] call SpecOps_fnc_toolFillCargoWithPercentageTable;
         // fill with mags
         for "_i" from 1 to 20 do {
            if (!(_unit canAdd (_mag select 0))) then { break;};
            _unit addItem (_mag select 0);
         };
    };
	
    case 5: { // Marksman
        { if ((_x in _riflemanUniformClean)) then { _unit removeItemFromUniform _x; }; } forEach (uniformItems _unit);
        // Fill Uniform with all we can
        { 
            for "_i" from 1 to (_x select 1) do {
                if (!(_unit canAddItemToUniform (_x select 0))) then { break; };
                _unit addItemToUniform (_x select 0);
            };
        } forEach (_riflemanUniform); 
  
         // fill with mags
         for "_i" from 1 to 20 do {
            if (!(_unit canAdd (_mag select 0))) then { break;};
            _unit addItem (_mag select 0);
         };
    };

    case 6: { // Special 1
        { if ((_x in _riflemanUniformClean)) then { _unit removeItemFromUniform _x; }; } forEach (uniformItems _unit);
        { if ((_x in _riflemanVestClean)) then { _unit removeItemFromVest _x; }; } forEach (vestItems _unit);
        // Fill Uniform with all we can
        { 
            for "_i" from 1 to (_x select 1) do {
                diag_log format ["%1", _x];
                if (!(_unit canAddItemToUniform (_x select 0))) then { break; };
                _unit addItemToUniform (_x select 0);
            };
         } forEach (_riflemanUniform); 

        { 
            for "_i" from 1 to (_x select 1) do {
                if (!(_unit canAddItemToUniform (_x select 0))) then { break; };
                _unit addItemToUniform (_x select 0);
            };
         } forEach (_riflemanVest); 

         // fill with mags
         for "_i" from 1 to 20 do {
            diag_log format ["%1", _mag];

            if (!(_unit canAdd (_mag select 0))) then { break;};
            diag_log format ["YES TO %1", _mag];
            _unit addItem (_mag select 0);
         };
    };

	case 7: { // Special 2
        { if ((_x in _riflemanUniformClean)) then { _unit removeItemFromUniform _x; }; } forEach (uniformItems _unit);
        { if ((_x in _riflemanVestClean)) then { _unit removeItemFromVest _x; }; } forEach (vestItems _unit);
        // Fill Uniform with all we can
        { 
            for "_i" from 1 to (_x select 1) do {
                diag_log format ["%1", _x];
                if (!(_unit canAddItemToUniform (_x select 0))) then { break; };
                _unit addItemToUniform (_x select 0);
            };
         } forEach (_riflemanUniform); 

        { 
            for "_i" from 1 to (_x select 1) do {
                if (!(_unit canAddItemToUniform (_x select 0))) then { break; };
                _unit addItemToUniform (_x select 0);
            };
         } forEach (_riflemanVest); 

         // fill with mags
         for "_i" from 1 to 20 do {
            diag_log format ["%1", _mag];

            if (!(_unit canAdd (_mag select 0))) then { break;};
            diag_log format ["YES TO %1", _mag];
            _unit addItem (_mag select 0);
         };
    };

    case 2: { // LMG
        { if ((_x in _riflemanUniformClean)) then { _unit removeItemFromUniform _x; }; } forEach (uniformItems _unit);
        // Fill Uniform with all we can
        { 
            for "_i" from 1 to (_x select 1) do {
                if (!(_unit canAddItemToUniform (_x select 0))) then { break; };
                _unit addItemToUniform (_x select 0);
            };
        } forEach (_riflemanUniform); 
  
         // fill with mags
         for "_i" from 1 to 20 do {
            if (!(_unit canAdd (_mag select 0))) then { break;};
            _unit addItem (_mag select 0);
         };
    };
	
    case 4: {
        { if ((_x in _riflemanUniformClean)) then { _unit removeItemFromUniform _x; }; } forEach (uniformItems _unit);
        // Fill Uniform with all we can
        { 
            for "_i" from 1 to (_x select 1) do {
                if (!(_unit canAddItemToUniform (_x select 0))) then { break; };
                _unit addItemToUniform (_x select 0);
            };
        } forEach (_riflemanUniform); 

        
        { 
            for "_i" from 1 to (_x select 1) do {
                if (!(_unit canAddItemToUniform (_x select 0))) then { break; };
                _unit addItemToUniform (_x select 0);
            };
        } forEach (_medicVest); 
        _grenadierPercentage pushback [(_mag select 0), 0.24];

         [_unit, "backpack", _medicalPercentage, 136] call SpecOps_fnc_toolFillCargoWithPercentageTable;
         // fill with mags
         for "_i" from 1 to 20 do {
            if (!(_unit canAdd (_mag select 0))) then { break;};
            _unit addItem (_mag select 0);
         };

    };
};

true;
