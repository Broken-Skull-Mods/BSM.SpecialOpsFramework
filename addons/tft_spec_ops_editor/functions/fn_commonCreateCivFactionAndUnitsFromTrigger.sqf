
params ["_trigger", "_displayName", "_side", "_year", ["_flag", "\A3\Data_F\Flags\flag_US_CO.paa"]];
/*
    [US_DEVGRU_2023, "US - DEVGRU (%1)", 1, "2023"] call SpecOps_fnc_commonCreateCivFactionAndUnitsFromTrigger;
    [AFICAN_POP_2024, "African - Muslim (%1)", 1, "2024"] call SpecOps_fnc_commonCreateCivFactionAndUnitsFromTrigger;
*/
private _br = toString [13,10];
private _toCopy = "";
// configSourceAddonList (configFile >> "CfgVehicles" >> "Man")

private _commonArsenal = [
];





private _units = "";
private _unitVariation = 0;
private _unitCommon = 0;
_toCopy = _toCopy + format ['%1%1class CfgVehicles {%1%5class C_man_1; ', _br, "", _year, _units, (toString [9])];
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

    private _typeName = "";
    private _scope = 2;
    private _typeDisplayname = "";
    if (_typePreset != 9) then { continue; };
    private _unitInit = format ["[(_this select 0)] call SpecOps_fnc_commonUnitSetLoadout;"];
    if (_typePreset == 9) then { 
        _typeName = format["COMMON_%1", _unitCommon]; _unitCommon = _unitCommon + 1; 
        _typeDisplayname = format["Fixed %1", _unitCommon]; 
        _scope = 2;
        
    };

    
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
    _weapons = str [];
    _weapons = [_weapons, '[', '{'] call CBA_fnc_replace;
    _weapons = [_weapons, ']', '}'] call CBA_fnc_replace;
    private _baseUnit = "C_man_1";
    private _prefix = "BS_C";
    private _comment = "This unit is a Civilian";
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
    %15%15side = 3; 
    %15}; %1', _br, _baseUnit, (vehicleVarName _trigger), 3, "", 
            _unitInit, _typeName, _loadout, _linkedItems, _weapons, 
            str (backpack _unit), str (uniform _unit), _scope, _camoNameShort, (toString [9]),
             _unitIdentityOption, _typeVoice, str _voiceSelected, str _faceSelected, (toString [47, 47]), 
             _typeDisplayname, _comment, _prefix];

} forEach (((allUnits) inAreaArray _trigger));




_toCopy = _toCopy + "};";

private _requiredAddonsStr = "";

_requiredAddonsStr = (str _requiredAddons);
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
%6class BS_C_%2_BASE { 
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

_toCopy = _toCopy + format ['
%2};', _br, (toString [9]), (toString [47, 47])];


_toCopy = _toCopy + format ['
%6class BS_C_%2 : BS_C_%2_BASE { 
%6%6useForSpecOps = 1;   
%6%6displayName = "%5";
%6%6side = 3;       
%6%6flag = "%4";
%6%6icon = "%4";
%6%6priority = 0; 
%6};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];

_toCopy = _toCopy + _br + "};";


_toCopy = _toCopy + format ['
%6%7 As CIV
%6class SpecOps_Module_CIV_Factions { 
%6%6class BS_C_%2 { name = "%5"; value = "BS_C_%2"; };  
%6};', _br, (vehicleVarName _trigger), _year, _flag, (format[_displayName, _year]), (toString [9]), (toString [47, 47]), _commonArsenalStr];



copyToClipboard _toCopy;


format ["OK! (%1)", ([0, 999999] call BIS_fnc_randomInt)];
