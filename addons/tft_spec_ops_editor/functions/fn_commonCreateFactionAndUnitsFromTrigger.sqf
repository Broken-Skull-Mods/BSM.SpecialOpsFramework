
params ["_trigger", "_displayName", "_side", "_year", ["_flag", "\A3\Data_F\Flags\flag_US_CO.paa"]];
/*
    [US_DEVGRU_2023, "US - DEVGRU (%1)", 1, "2023"] call SpecOps_fnc_commonCreateFactionAndUnitsFromTrigger;
    [US_DEVGRU_2023, "US - DEVGRU (%1)", 1, "2023"] execVM "test.sqf";
    (allUnits inArea B_US_DEVGRU_2023)
*/
private _br = toString [13,10];
private _toCopy = "";
// configSourceAddonList (configFile >> "CfgVehicles" >> "Man")

private _commonArsenal = [
    "SmokeShellBlue", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "SmokeShellRed", "SmokeShellYellow",
    "ACE_bodyBag", "ACE_bodyBag_blue", "ACE_bodyBag_white", "ACE_bloodIV", "ACE_bloodIV_250", "ACE_bloodIV_500", "ACE_plasmaIV", "ACE_plasmaIV_250",
    "ACE_plasmaIV_500", "ACE_salineIV", "ACE_salineIV_250", "ACE_salineIV_500", "ACE_splint", "ACE_surgicalKit", "ACE_suture", "ACE_tourniquet",
    "ACE_personalAidKit", "ACE_morphine", "ACE_epinephrine", "ACE_quikclot", "ACE_elasticBandage", "ACE_adenosine", "ACE_WaterBottle", "ACE_Sunflower_Seeds", 
    "ACE_Humanitarian_Ration", "ACE_Can_Franta", "ACE_wirecutter", "ACE_RangeCard", "MineDetector", "ACE_microDAGR", "ACE_MapTools", "ACE_Clacker", 
    "ACE_M26_Clacker", "ACE_Kestrel4500", "ACE_HuntIR_monitor", "ACE_Fortify", "ACE_EntrenchingTool", "ACE_DefusalKit", "ACE_DeadManSwitch", "ACE_DAGR", 
    "ACE_ATragMX", "ACE_artilleryTable", "ACE_RangeTable_82mm", "DemoCharge_Remote_Mag", "rhsusf_m112_mag", "ATMine_Range_Mag", "Aegis_HandFlare_Green", 
    "Aegis_HandFlare_Red", "plp_bo_w_BottleLiqCream", "plp_bo_w_BottleGin", "plp_bo_w_BottleLiqOrange", "plp_bo_w_BottleTequila", "ACE_CableTie", 
    "plp_bo_w_Cigar", "plp_bo_w_CigarCutter", "ACE_EarPlugs", "plp_bo_w_CigarFine", "ACE_IR_Strobe_Item", "plp_bo_w_CigarBoxSealed", "ACE_SpareBarrel", 
    "ACE_SpraypaintBlack", "ACE_SpraypaintBlue", "ACE_SpraypaintGreen", "ACE_SpraypaintRed", "ACE_SpraypaintWhite", "ACE_SpraypaintYellow", "plp_bo_w_SunBlocker", 
    "plp_bo_w_SunMilk", "ACE_UAVBattery"
];





private _units = "";
private _unitVariation = 0;
private _unitCommon = 0;
_toCopy = _toCopy + format ['%1%1class CfgVehicles {%1%5class B_Survivor_F;%1%5class I_G_Survivor_F;%1%5class O_G_Survivor_F; ', _br, "", _year, _units, (toString [9])];
private _requiredAddons = [];

{
    private _unit = _x;
    private _typeVoice = _unit getVariable ["SpecOps_FactionGeneratorVoice", 0];
    private _typeFacePersian = _unit getVariable ["SpecOps_FactionGeneratorFacePersian", false];
    private _typeFaceWhite = _unit getVariable ["SpecOps_FactionGeneratorFaceWhite", false];
    private _typeFaceBlack = _unit getVariable ["SpecOps_FactionGeneratorFaceBlack", false];
    private _typeFaceGreek = _unit getVariable ["SpecOps_FactionGeneratorFaceGreek", false];
    private _typeFaceAsian = _unit getVariable ["SpecOps_FactionGeneratorFaceAsian", false];
    if (!_typeFacePersian && !_typeFaceWhite && !_typeFaceBlack && !_typeFaceGreek && !_typeFaceAsian) then {
        _typeFacePersian = 1; _typeFaceWhite = 1; _typeFaceBlack = 1; _typeFaceGreek = 1; _typeFaceAsian = 1;
    } else {
        if (_typeFacePersian) then { _typeFacePersian = 1; } else { _typeFacePersian = 0; };
        if (_typeFaceWhite) then { _typeFaceWhite = 1; } else { _typeFaceWhite = 0; };
        if (_typeFaceBlack) then { _typeFaceBlack = 1; } else { _typeFaceBlack = 0; };
        if (_typeFaceGreek) then { _typeFaceGreek = 1; } else { _typeFaceGreek = 0; };
        if (_typeFaceAsian) then { _typeFaceAsian = 1; } else { _typeFaceAsian = 0; };
    };
    private _faceSelected = [[_typeFacePersian, _typeFaceWhite, _typeFaceBlack, _typeFaceGreek, _typeFaceAsian]] call SpecOps_fnc_commonGetRandomFace;
    private _voiceSelected = [_typeVoice] call SpecOps_fnc_commonGetRandomVoice; 
    diag_log format ["%1", _voiceSelected];

    private _typePreset = _unit getVariable ["SpecOps_FactionGenerator", -1];
    private _typeCamo = _unit getVariable ["SpecOps_FactionGeneratorCamo", 0];
    private _camoName = "";
    private _camoNameShort = "";
    if (_typeCamo == 0) then { _camoName = "Woodland"; _camoNameShort = "WL"; };
    if (_typeCamo == 1) then { _camoName = "Winter"; _camoNameShort = "WT"; };
    if (_typeCamo == 2) then { _camoName = "Desert"; _camoNameShort = "DT"; };

    private _typeName = "";
    private _scope = 2;
    private _typeDisplayname = "";
    if (_typePreset <= -1) then { continue; };
    if (_typePreset == 1) then { _typeName = "Rifleman"; _typeDisplayname = format["Rifleman (%1)", _camoName]; };
    if (_typePreset == 2) then { _typeName = "AR"; _typeDisplayname = format["Machine Gunner (%1)", _camoName]; };
    if (_typePreset == 3) then { _typeName = "GL"; _typeDisplayname = format["Grenadier (%1)", _camoName]; };
    if (_typePreset == 4) then { _typeName = "Medic"; _typeDisplayname = format["Doctor (%1)", _camoName]; };
    if (_typePreset == 5) then { _typeName = "SNP"; _typeDisplayname = format["Sniper (%1)", _camoName]; };
    if (_typePreset == 6) then { _typeName = "RTO"; _typeDisplayname = format["Radio Operator (%1)", _camoName]; };
    if (_typePreset == 7) then { _typeName = "DIVER"; _typeDisplayname = format["Diver (%1)", _camoName]; };
    if (_typePreset == 10) then { _typeName = "Officer"; _typeDisplayname = format["Officer (%1)", _camoName]; };
    if (_typePreset == 8) then { 
        _typeName = format["VAR_%1", _unitVariation]; _unitVariation = _unitVariation + 1; 
        _typeDisplayname = format["Variant %1", _unitVariation]; 
        _scope = 0;
    };
    if (_typePreset == 9) then { 
        _typeName = format["COMMON_%1", _unitCommon]; _unitCommon = _unitCommon + 1; 
        _typeDisplayname = format["Fixed %1", _unitCommon]; 
        _scope = 0;
    };

    private _unitInit = format ["[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;"];
    private _unitIdentityOption = format ["{ %1, %2, %3, %4, %5 };", _typeFacePersian, _typeFaceWhite, _typeFaceBlack, _typeFaceGreek, _typeFaceAsian];
    /*

    */
    private _loadout =  str (getUnitLoadout [_unit, true]);
    private _extractedStuff = [(getUnitLoadout [_unit, true])] call SpecOps_fnc_commonExtractUnitGearnStuff;
    {
        private _addons = [];
        private _isMag = isClass (configFile >> "CfgMagazines" >> _x);
        if (_isMag) then { _addons = configSourceAddonList (configFile >> "CfgMagazines" >> _x); _commonArsenal pushbackUnique _x; };
        private _isWeapon = isClass (configFile >> "CfgWeapons" >> _x);
        if (_isWeapon) then { _addons = configSourceAddonList (configFile >> "CfgWeapons" >> _x); _commonArsenal pushbackUnique _x; };
        { _requiredAddons pushbackUnique _x; } forEach (_addons);
    } forEach(_extractedStuff);
    _loadout = [_loadout, '[', '{'] call CBA_fnc_replace;
    _loadout = [_loadout, ']', '}'] call CBA_fnc_replace;

    private _linkedItems = str (assignedItems [_unit, true, false]);
    _linkedItems = [_linkedItems, '[', '{'] call CBA_fnc_replace;
    _linkedItems = [_linkedItems, ']', '}'] call CBA_fnc_replace;
    _weapons = [];
    if ((primaryWeapon _unit) != "" ) then { _weapons pushback (primaryWeapon _unit); };
    if ((secondaryWeapon _unit) != "" ) then { _weapons pushback (secondaryWeapon _unit); };
    if ((handgunWeapon _unit) != "" ) then { _weapons pushback (handgunWeapon _unit); };
    if ((binocular _unit) != "" ) then { _weapons pushback (binocular _unit); };
    private _weapons = str _weapons;
    _weapons = [_weapons, '[', '{'] call CBA_fnc_replace;
    _weapons = [_weapons, ']', '}'] call CBA_fnc_replace;
    for "_i" from 0 to 2 do {
        private _baseUnit = "O_G_Survivor_F";
        private _prefix = "BS_O";
        private _comment = "This unit is for OpFOR";
        if (_i == 1) then { _baseUnit = "B_Survivor_F"; _prefix = "BS_B"; _comment = "This unit is for BluFOR"; };
        if (_i == 2) then { _baseUnit = "I_G_Survivor_F"; _prefix = "BS_I"; _comment = "This unit is for GRE"; };
        _toCopy = _toCopy + format ['
        %15%20 %22
        %15class %23_%3_%7_%14 : %2 {
        %15%15author = "Special Ops Framework Team"; 
        %15%15identityFacesSpecOps[] = %16 %20 Set Identity for SpecOps System.
        %15%15identityVoiceSpecOps = %17; %20 Choosen Voice Pool for this Unit.
        %15%15scope = %13; 
        %15%15scopeCurator = %13; 
        %15%15bsCamo = "%14"; 
        %15%15displayName = "%21"; 
        %15%15faction = "%23_%3"; 
        %15%15identityTypes[] = {%19, %18 ,"G_NATO_default"};
        %15%15uniformClass = %12; 
        %15%15linkedItems[] = %9; 
        %15%15respawnlinkedItems[] = %9; 
        %15%15weapons[] = %10; 
        %15%15respawnWeapons[] = %10;
        %15%15magazines[] = {};
        %15%15respawnMagazines[] = {};
        %15%15backpack = %11;
        %15%15class EventHandlers
        %15%15{
        %15%15%15init = "%6";
        %15%15};
        %15%15ALiVE_orbatCreator_loadout[] = %8;
        %15%15ALiVE_orbatCreator_owned = 1;
        %15%15side = %4; 
        %15}; %1', _br, _baseUnit, (vehicleVarName _trigger), _i, "", _unitInit, _typeName,
            _loadout, _linkedItems, _weapons, str (backpack _unit), str (uniform _unit), _scope, _camoNameShort, 
            (toString [9]), _unitIdentityOption, _typeVoice, str _voiceSelected, str _faceSelected, (toString [47, 47]), _typeDisplayname, _comment, _prefix];
    };

} forEach (((allUnits) inAreaArray _trigger));

_toCopy = _toCopy + "};";

private _requiredAddonsStr = (str _requiredAddons);
_requiredAddonsStr = [_requiredAddonsStr, '[', '{'] call CBA_fnc_replace;
_requiredAddonsStr = [_requiredAddonsStr, ']', '}'] call CBA_fnc_replace;

_commonArsenalStr = (str _commonArsenal);
_commonArsenalStr = [_commonArsenalStr, '[', '{'] call CBA_fnc_replace;
_commonArsenalStr = [_commonArsenalStr, ']', '}'] call CBA_fnc_replace;
private _garage = [];
private _SAM = [];
private _staticMGLow = [];
private _staticMGHigh = [];
private _staticMortar = [];
private _staticAA = [];
private _troopTrucks = [];
private _tanks = [];
private _antiAir = [];
private _technical = [];
{
    private _unit = _x;

    if ((_x isKindOf "B_HMG_01_A_F") || {(_x isKindOf "HMG_01_A_base_F")}) then { _staticMGLow pushbackUnique (typeOf _x); continue;  };
    if ((_x isKindOf "B_HMG_01_high_F") || {(_x isKindOf "HMG_01_high_base_F")}) then { _staticMGHigh pushbackUnique (typeOf _x); continue;  };
    if ((_x isKindOf "B_Mortar_01_F") || {(_x isKindOf "Mortar_01_base_F")}) then { _staticMortar pushbackUnique (typeOf _x); continue;  };
    if ((_x isKindOf "B_static_AA_F") || {(_x isKindOf "AA_01_base_F")}) then { _staticAA pushbackUnique (typeOf _x); continue;  };
    if ((_x isKindOf "B_SAM_System_02_F") || (_x isKindOf "SAM_System_02_base_F")) then { _SAM pushbackUnique (typeOf _x); continue; };

    private _cost = ceil (getNumber (configFile >> "CfgVehicles" >> typeof (_x) >> "Cost") / 1000);
    private _category = _unit getVariable ["SpecOps_GarageVehicleCategory", -1];
    private _certificationLevel = _unit getVariable ["SpecOps_GarageRequiredCertification", 0];
    
    if (_category == 0) then { _antiAir pushbackUnique (typeOf _x); };
    if (_category == 1) then { _tanks pushbackUnique (typeOf _x); };
    if (_category == 2) then { _technical pushbackUnique (typeOf _x); };
    if (_category == 3) then { _troopTrucks pushbackUnique (typeOf _x); };

    if ((_unit isKindOf "LandVehicle")) then {  
        _garage pushbackUnique [(typeof _unit), _certificationLevel, _cost, _category]; 
    };
    if ((_unit isKindOf "Ship_F")) then { _garage pushbackUnique [(typeof _unit), _certificationLevel, _cost, _category];  };
    if ((_unit isKindOf "Air")) then { _garage pushbackUnique [(typeof _unit), _certificationLevel, _cost, _category]; };
} forEach (((vehicles) inAreaArray _trigger));
_SAM = str _SAM;
_SAM = [_SAM, '[', '{'] call CBA_fnc_replace;
_SAM = [_SAM, ']', '}'] call CBA_fnc_replace;

_staticMGLow = str _staticMGLow;
_staticMGLow = [_staticMGLow, '[', '{'] call CBA_fnc_replace;
_staticMGLow = [_staticMGLow, ']', '}'] call CBA_fnc_replace;

_staticMGHigh = str _staticMGHigh;
_staticMGHigh = [_staticMGHigh, '[', '{'] call CBA_fnc_replace;
_staticMGHigh = [_staticMGHigh, ']', '}'] call CBA_fnc_replace;

_staticMortar = str _staticMortar;
_staticMortar = [_staticMortar, '[', '{'] call CBA_fnc_replace;
_staticMortar = [_staticMortar, ']', '}'] call CBA_fnc_replace;

_staticAA = str _staticAA;
_staticAA = [_staticAA, '[', '{'] call CBA_fnc_replace;
_staticAA = [_staticAA, ']', '}'] call CBA_fnc_replace;


_troopTrucks = str _troopTrucks;
_troopTrucks = [_troopTrucks, '[', '{'] call CBA_fnc_replace;
_troopTrucks = [_troopTrucks, ']', '}'] call CBA_fnc_replace;

_tanks = str _tanks;
_tanks = [_tanks, '[', '{'] call CBA_fnc_replace;
_tanks = [_tanks, ']', '}'] call CBA_fnc_replace;

_antiAir = str _antiAir;
_antiAir = [_antiAir, '[', '{'] call CBA_fnc_replace;
_antiAir = [_antiAir, ']', '}'] call CBA_fnc_replace;

_technical = str _technical;
_technical = [_technical, '[', '{'] call CBA_fnc_replace;
_technical = [_technical, ']', '}'] call CBA_fnc_replace;

private _garageVehicles = str _garage;
_garageVehicles = [_garageVehicles, '[', '{'] call CBA_fnc_replace;
_garageVehicles = [_garageVehicles, ']', '}'] call CBA_fnc_replace;

_toCopy = _toCopy + format ['
class CfgPatches
{
%3class bm_specops_faction_%2
%3{
%3%3author = "BloodyMystik & Orka";
%3%3units[]={};
%3%3weapons[]={};
%3%3requiredVersion=0.1;
%3%3requiredAddons[]=%4;
%3};
};
',_br, (vehicleVarName _trigger), (toString [9]), _requiredAddonsStr];



_toCopy = _toCopy + "class CfgFactionClasses {";
_toCopy = _toCopy + format ['
%6%7 As Friendly (BluFOR)
%6class BS_B_%2_BASE { 
%6%6Advanced = 0; 
%6%6FortifyItems[] = {
%6%6%6{"Land_BagFence_Corner_F", 0.25}, {"Land_BagFence_End_F", 0.25}, {"Land_BagFence_Short_F", 0.5}, 
%6%6%6{"Land_BagFence_Round_F", 0.75}, {"Land_ConcreteHedgehog_01_F", 0.75}
%6%6};

%6%6EngineerItems[] = {
%6%6%6{"Land_BagBunker_Small_F", 1}, {"Land_HBarrierWall4_lxWS", 2}, {"Land_HBarrierWall_corner_lxWS", 3}, 
%6%6%6{"Land_HBarrierWall6_lxWS", 4}, {"Land_HBarrierTower_lxWS", 5}, {"Land_Cargo_Patrol_V1_F", 10}
%6%6};
%6%6ObjectiveCodenames[] = {
%6%6%6"Falcon", "Hurricane", "Twinkle", "Scout", "Roadrunner", "Wasp", "Crystal ", "Foxtail", "Aurora", 
%6%6%6"Sunburn", "Frostbite", "Nighthawk", "Sandstorm", "Lazy", "Phantom", "Unicorn", "Omega", "Watchdog", 
%6%6%6"Goose", "Mosquito", "Raven", "Chick", "Ladybug", "Salmon", "Termite", "Seagull", "Vulture", "Grasshopper", 
%6%6%6"Golden Eye", "Eureka", "Comet", "Lincoln", "Octopus", "Obsidian", "November", "Balloon", "Pigeons", "Preach",
%6%6%6"Impulse", "Cougar", "Scorpion", "Lightning", "Starburst", "Watchtower", "Cobra"
%6%6};

%6%6CampCodenames[] = {
%6%6%6"Camp Dignity", "Camp Diamond", "Camp Sundown", "Camp Detention", "Camp Venom", "Camp Enigma", "Camp Dragonfire", 
%6%6%6"Camp Hazard", "Camp Ambition", "Camp Honesty", "Camp Energy", "Camp Chaos", "Camp Satellite", "Camp Stormgaze", 
%6%6%6"Camp Solitude", "Camp Fear", "Camp Hurricane", "Camp Murder",  "Camp Carnage", "Camp Salvation"
%6%6};
%6%6brokenSkullArsenal[]=%8;
', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];
_toCopy = _toCopy + format ['%1%2%2garage[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _garageVehicles + ";";

_toCopy = _toCopy + format ['%1%2%2SamSystem[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _SAM + ";";

_toCopy = _toCopy + format ['%1%2%2StaticLowMG[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _staticMGLow + ";";

_toCopy = _toCopy + format ['%1%2%2StaticHighMG[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _staticMGHigh + ";";

_toCopy = _toCopy + format ['%1%2%2StaticMotar[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _staticMortar + ";";

_toCopy = _toCopy + format ['%1%2%2StaticAntiAir[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _staticAA + ";";

_toCopy = _toCopy + format ['%1%2%2VehicleTechnicals[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _technical + ";";

_toCopy = _toCopy + format ['%1%2%2VehicleAntiAircraft[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _antiAir + ";";

_toCopy = _toCopy + format ['%1%2%2VehicleTanks[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _tanks + ";";

_toCopy = _toCopy + format ['%1%2%2VehicleTransport[]=', _br, (toString [9]), (toString [47, 47])];
_toCopy = _toCopy + _troopTrucks + ";";

_toCopy = _toCopy + format ['
%2};', _br, (toString [9]), (toString [47, 47])];


_toCopy = _toCopy + format ['
%6%7 As Friendly (BluFOR)
%6class BS_B_%2 : BS_B_%2_BASE { 
%6%6useForSpecOps = 1;   
%6%6displayName = "%5";
%6%6side = 1;       
%6%6flag = "%4";
%6%6icon = "%4";
%6%6priority = 0; 
%6};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];

_toCopy = _toCopy + format ['
%6%7 As Opposite Forces (OpFOR)
%6class BS_O_%2 : BS_B_%2_BASE { 
%6%6useForSpecOps = 1;
%6%6displayName = "%5";
%6%6side = 0;       
%6%6flag = "%4";
%6%6icon = "%4";
%6%6priority = 0; 
%6};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];


_toCopy = _toCopy + format ['
%6%7 As Independent (Independent)
%6class BS_I_%2 : BS_B_%2_BASE { 
%6%6useForSpecOps = 1;
%6%6displayName = "%5";
%6%6side = 2;       
%6%6flag = "%4";
%6%6icon = "%4";
%6%6priority = 0; 
%6};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];
_toCopy = _toCopy + _br + "};";

_toCopy = _toCopy + format ['
%7 As Friendly (BluFOR)
class SpecOps_Module_BLUFOR_Factions { 
%6class BS_B_%2 { name = "%5"; value = "BS_B_%2"; };  
};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];

_toCopy = _toCopy + format ['
%7 As Friendly (BluFOR)
class SpecOps_Module_OPFOR_Factions { 
%6class BS_O_%2 { name = "%5"; value = "BS_O_%2"; };  
};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];


_toCopy = _toCopy + format ['
%7 As Friendly (BluFOR)
class SpecOps_Module_GRE_Factions { 
%6class BS_I_%2 { name = "%5"; value = "BS_I_%2"; };  
};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];


// _toCopy = _toCopy + _br + format ['
// class Cfg3DEN {
// %1class Object {
// %1%1class AttributeCategories {
// %1%1%1class bs_specops_arsenal_options {
// %1%1%1%1displayName = "Spec-Ops (Arsenal)";
// %1%1%1%1class Attributes {
// %1%1%1%1%1class bs_specops_arsenal {
// %1%1%1%1%1%1class Values {
// %1%1%1%1%1%1%1class BS_B_%2 { 
// %1%1%1%1%1%1%1%1name = "%4";
// %1%1%1%1%1%1%1%1value = "BS_B_%2"; 
// %1%1%1%1%1%1%1};
// %1%1%1%1%1%1};
// %1%1%1%1%1};
// %1%1%1%1};
// %1%1%1}; 
// %1%1};
// %1};
// };', (toString [9]), (vehicleVarName _trigger), _year, (format[_displayName, _year])];


copyToClipboard _toCopy;


format ["OK! (%1)", ([0, 999999] call BIS_fnc_randomInt)];
