params ["_unit"];


/*
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
private _unitType = _unit getVariable ["SpecOps_FactionGenerator", -1];
private _riflemanUniform = [
    ["ACE_EarPlugs", 1], 
    ["ACE_tourniquet", 4],
    ["ACE_epinephrine", 1], 
    ["ACE_morphine", 2], 
    ["ACE_elasticBandage", 12], 
    ["ACE_RangeCard", 1]
    ["ACE_DAGR", 1],
    ["ACE_IR_Strobe_Item", 1],
    ["ACE_personalAidKit", 1], 
    ["ACE_CableTie", 3]
];
private _riflemanUniformClean = _riflemanUniform apply { _x select 0; };

private _riflemanVest = [
    ["ACE_wirecutter", 1]
];
private _riflemanVestClean = _riflemanVest apply { _x select 0; };
// 53 0.24
private _grenadierPercentage = [
	["1Rnd_HE_Grenade_shell", 0.47],
	["1Rnd_Smoke_Grenade_shell", 0.28]
];


// "30Rnd_556x45_AUG_Mag_Green_F"
private _mag = primaryWeaponMagazine _unit;
switch (_unitType) do {
    case 1: { // Rifleman
        { if ((_x in _riflemanUniformClean)) then { _unit removeItemFromUniform _x; }; } forEach (uniformItems _unit);
        // Fill Uniform with all we can
        { 
            for "_i" from 1 to (_x select 1) do {
                if ((_unit canAddItemToUniform _x)) then { break; };
                _unit addItemToUniform _x;
            };
         } forEach (_riflemanUniform); 

        { 
            for "_i" from 1 to (_x select 1) do {
                if ((_unit canAddItemToUniform _x)) then { break; };
                _unit addItemToUniform _x;
            };
         } forEach (_riflemanVest); 

         // fill with mags
         for "_i" from 1 to 20 do {
            if (!(_unit canAdd _mag)) then { break;};
            _unit addItem _mag;
         };

    };
    case 3: { // Grenadier
        { if ((_x in _riflemanUniformClean)) then { _unit removeItemFromUniform _x; }; } forEach (uniformItems _unit);
        // Fill Uniform with all we can
        { 
            for "_i" from 1 to (_x select 1) do {
                if ((_unit canAddItemToUniform _x)) then { break; };
                _unit addItemToUniform _x;
            };
        } forEach (_riflemanUniform); 

        
        { 
            for "_i" from 1 to (_x select 1) do {
                if ((_unit canAddItemToUniform _x)) then { break; };
                _unit addItemToUniform _x;
            };
        } forEach (_riflemanVest); 
        _grenadierPercentage pushback [_mag, 0.24];
         [_unit, "backpack", _grenadierPercentage, 53] call SpecOps_fnc_toolFillCargoWithPercentageTable;
         // fill with mags
         for "_i" from 1 to 20 do {
            if (!(_unit canAdd _mag)) then { break;};
            _unit addItem _mag;
         };
    };
    case "vest": {
        
    };
};
private _unit = player;
private _medical = [
	["ACE_adenosine", 0.022],
	["ACE_fieldDressing", 0],
	["ACE_elasticBandage", 0.2941],
	["ACE_packingBandage", 0],
	["ACE_quikclot", 0.2941],
	["ACE_epinephrine", 0.0882],
	["ACE_morphine", 0.0882],
	["ACE_personalAidKit", 0.0441],
	["ACE_bloodIV", 0],
	["ACE_bloodIV_250", 0],
	["ACE_bloodIV_500", 0],
	["ACE_plasmaIV", 0],
	["ACE_plasmaIV_250", 0],
	["ACE_plasmaIV_500", 0],
	["ACE_salineIV", 0.0662],
	["ACE_salineIV_500", 0.0294],
	["ACE_salineIV_250", 0],
	["ACE_splint", 0],
	["ACE_surgicalKit", 0],
	["ACE_suture", 0],
	["ACE_tourniquet", 0.0735]
];
[player, "backpack", _medical, 136] call SpecOps_fnc_toolFillCargoWithPercentageTable;


private _totalMedicalSupplies = 136;
private _medicalClearList = _medical apply { _x select 0; };
diag_log format ["_medicalClearList %1", _medicalClearList];
private _backpackItems = backpackItems _unit;
diag_log format ["_backpackItems %1", _backpackItems];
clearAllItemsFromBackpack _unit;
private _backpackNonMedicalItems = [];
{ if (!(_x in _medicalClearList)) then { _backpackNonMedicalItems pushback _x; }; } forEach (_backpackItems);
_backpackItems = backpackItems _unit;
diag_log format ["_backpackItems %1", _backpackItems];

private _currentLoad = ceil (loadAbs backpackContainer _unit);
diag_log format ["_currentLoad %1", _currentLoad];
private _backpackContainer = backpackContainer _unit;
diag_log format ["_backpackContainer %1", _backpackContainer];
private _maxLoadBackpack = getContainerMaxLoad backpack _unit;
diag_log format ["_maxLoadBackpack %1", _maxLoadBackpack];
for "_i" from 1 to 0 step -0.01 do {
    diag_log format ["Percentage %1", _i];
   { _unit addItemToBackpack _x; } forEach (_backpackNonMedicalItems); 
    diag_log format ["Backpack Load %1", (ceil (loadAbs backpackContainer _unit))];
   _totalMedicalSupplies = _totalMedicalSupplies * _i;
    diag_log format ["_totalMedicalSupplies %1", _totalMedicalSupplies];
   {
        private _item = _x select 0;
        private _percent = _x select 1;
        private _amount = floor (_totalMedicalSupplies * _percent);
        diag_log format ["_item %1 | %2", _item, _amount];
        _backpackContainer addItemCargo [_item, _amount];
   } forEach (_medical);
    if ((ceil (loadAbs backpackContainer _unit)) > (getContainerMaxLoad backpack _unit)) then { clearAllItemsFromBackpack _unit;  } else {
        break;
    };
};

true;
