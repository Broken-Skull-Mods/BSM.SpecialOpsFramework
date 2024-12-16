params ["_object", "_faction", ["_camo", "WL"]];


if (isNil "_faction" || { _faction == "" }) exitWith { };

private _presetFactions = "isArray (_x >> 'ALiVE_orbatCreator_loadout') && getNumber (_x >> 'side') == 1 && getText (_x >> 'bsCamo') == _camo  && getText (_x >> 'faction') == _faction" configClasses (configFile >> "CfgVehicles");
private _commonItems = getArray (configFile >> "CfgFactionClasses" >> _faction >> "brokenSkullArsenal");
private _allItems = [];
private _common = [];
// Include Vanila
if ((_object getVariable ["bsm_so_commonVanila", false])) then {
    _common append [
        "SmokeShellBlue", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "SmokeShellRed", "SmokeShellYellow",
        "ATMine_Range_Mag", "DemoCharge_Remote_Mag", "Medikit", "MineDetector", "ToolKit"
    ];
};

if ((_object getVariable ["bsm_so_commonACE", false])) then {
    _common append [
        "ACE_bodyBag", "ACE_bodyBag_blue", "ACE_bodyBag_white", 
        "ACE_bloodIV", "ACE_bloodIV_250", "ACE_bloodIV_500", 
        "ACE_plasmaIV", "ACE_plasmaIV_250", "ACE_plasmaIV_500", 
        "ACE_salineIV", "ACE_salineIV_250", "ACE_salineIV_500", 
        "ACE_splint", "ACE_surgicalKit", "ACE_suture", "ACE_tourniquet", "ACE_CableTie",
        "ACE_personalAidKit", "ACE_morphine", "ACE_epinephrine", "ACE_quikclot", "ACE_elasticBandage", "ACE_adenosine", "ACE_WaterBottle", 
        "ACE_Sunflower_Seeds", "ACE_Humanitarian_Ration", "ACE_Can_Franta", "ACE_wirecutter", "ACE_RangeCard", "MineDetector", "ACE_microDAGR", "ACE_MapTools", 
        "ACE_Clacker", "ACE_M26_Clacker", "ACE_Kestrel4500", "ACE_HuntIR_monitor", "ACE_Fortify", "ACE_EntrenchingTool", "ACE_DefusalKit", "ACE_DeadManSwitch",
        "ACE_SpraypaintBlack", "ACE_SpraypaintBlue", "ACE_SpraypaintGreen", "ACE_SpraypaintRed", "ACE_SpraypaintWhite", "ACE_SpraypaintYellow", 
        "ACE_UAVBattery", "ACE_Tripod", "ACE_SpottingScope", "ACE_SpareBarrel", 
        "ACE_DAGR", "ACE_ATragMX", "ACE_artilleryTable", "ACE_RangeTable_82mm", "ACE_Banana", "ACE_fieldDressing",
        "ACE_packingBandage","kat_crossPanel", "ACE_bodyBag","ACE_bodyBag_blue","ACE_bodyBag_white",
        "ACE_Can_Franta","ACE_Can_RedGull","ACE_Can_Spirit","ACE_Canteen","ACE_Canteen_Empty","ACE_Canteen_Half","ACE_Cellphone","ACE_Chemlight_Shield",
        "ACE_DAGR","ACE_DeadManSwitch","ACE_DefusalKit","ACE_EarPlugs","ACE_EntrenchingTool","ACE_epinephrine","FirstAidKit","ACE_Fortify",
        "ACE_Flashlight_MX991","ACE_IR_Strobe_Item","ACE_Flashlight_KSF1",
        "ACE_Flashlight_XL50","ace_marker_flags_black","ace_marker_flags_blue","ace_marker_flags_green",
        "ace_marker_flags_orange","ace_marker_flags_purple","ace_marker_flags_red","ace_marker_flags_white","ace_marker_flags_yellow",
        "ACE_morphine","ACE_MRE_BeefStew","ACE_MRE_ChickenTikkaMasala","ACE_MRE_ChickenHerbDumplings","ACE_MRE_CreamChickenSoup",
        "ACE_MRE_CreamTomatoSoup","ACE_MRE_LambCurry","ACE_MRE_MeatballsPasta","ACE_MRE_SteakVegetables","acex_intelitems_notepad","ACE_painkillers",
        "ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_PlottingBoard","ACE_RangeCard","ACE_rope12","ACE_rope15","ACE_rope18",
        "ACE_rope27","ACE_rope3","ACE_rope36","ACE_rope6","ACE_Sandbag_empty",
        "ACE_WaterBottle_Empty","ACE_WaterBottle_Half"
    ];
};

if ((_object getVariable ["bsm_so_commonKAT", false])) then {
    _common append [
        "kat_IV_16","kat_aatKit","kat_accuvac","kat_AFAK","kat_X_AED","kat_amiodarone","kat_CarbonateItem","kat_Armband_Doctor_Item",
        "kat_Armband_Kat_Item","kat_Armband_Medic_Item","kat_Armband_Red_Cross_Item","kat_atropine","Attachable_Helistretcher","kat_AED",
        "kat_chestSeal","kat_clamp","kat_vacuum","kat_EACA","kat_oxygenTank_150_Empty","kat_oxygenTank_300_Empty","kat_etomidate","kat_IO_FAST",
        "kat_fentanyl","KAT_Empty_bloodIV_250","KAT_Empty_bloodIV_500","kat_flumazenil","kat_gasmaskFilter","kat_guedel","kat_IFAK","kat_ketamine",
        "kat_larynx","kat_lidocaine","kat_lorazepam","kat_suction","kat_MFAK","kat_nalbuphine","kat_naloxone","kat_ncdKit","kat_nitroglycerin",
        "kat_norepinephrine","kat_PainkillerItem","kat_PenthroxItem","kat_PervitinItem","kat_phenylephrine","kat_pocketBVM","kat_oxygenTank_150_Item",
        "kat_oxygenTank_300_Item","kat_Pulseoximeter","kat_retractor","kat_scalpel","kat_sealant","kat_stethoscope","kat_TXA",
        "kat_bloodIV_O","kat_bloodIV_O_N","kat_bloodIV_A","kat_bloodIV_A_N","kat_bloodIV_AB","kat_bloodIV_AB_N","kat_bloodIV_B","kat_bloodIV_B_N",
        "kat_bloodIV_O_250","kat_bloodIV_O_N_250","kat_bloodIV_A_250","kat_bloodIV_A_N_250","kat_bloodIV_AB_250","kat_bloodIV_AB_N_250",
        "kat_bloodIV_B_250","kat_bloodIV_B_N_250","kat_bloodIV_O_500","kat_bloodIV_O_N_500","kat_bloodIV_A_500","kat_bloodIV_A_N_500",
        "kat_bloodIV_AB_500","kat_bloodIV_AB_N_500","kat_bloodIV_B_500","kat_bloodIV_B_N_500","kat_plate",
        "kat_Bubble_Wrap_Item","kat_BVM","kat_CaffeineItem"
    ];
};

if ((_object getVariable ["bsm_so_commonUSP", false])) then {
    _common append [
        "USP_BAT_PVS31","USP_BOLTCUTTER","USP_CARABINER","USP_ROAM2","USP_CROWBAR","USP_CRYE_KNEEPAD","USP_FAST_COVER","USP_FAST_COVER_CBR",
        "USP_FAST_COVER_MC","USP_FAST_COVER_RGR","USP_EARMUFF","USP_EARMUFF_GRN","USP_EARMUFF_TAN","USP_FACESHIELD","USP_FACESHIELD_GRN",
        "USP_FACESHIELD_TAN","USP_WRISTWATCH","USP_GOGGLE_COVER","USP_GOGGLE_COVER_FG","USP_GOGGLE_COVER_MC","USP_GOGGLE_COVER_TAN","USP_GUNSIGHT",
        "USP_GUNSIGHT_MC","USP_GUNSIGHT_TAN","USP_COUNTERWEIGHT","USP_COUNTERWEIGHT_CBR","USP_COUNTERWEIGHT_MC","USP_COUNTERWEIGHT_RGR","USP_ACC_GPNVG18_BLK",
        "USP_ACC_GPNVG18_TAN","USP_ACC_PVS14_BLK","USP_ACC_PVS15_BLK","USP_ACC_PVS31_BLK","USP_ACC_PVS31_BLK2","USP_ACC_PVS31_TAN","USP_ACC_PVS31_TAN2",
        "USP_ACC_TARSIERS","USP_ACC_TARSIERS2","USP_MOHOC","USP_MOHOC_GRN","USP_CHARGE","USP_MS2000","USP_MECHANIX","USP_MECHANIX_BLK2","USP_MECHANIX_CBR",
        "USP_MECHANIX_CBR2","USP_MECHANIX_GRN","USP_MECHANIX_GRY","USP_MECHANIX_MC","USP_NIGHTCAP","USP_NIGHTCAP_CBR","USP_NIGHTCAP_MC","USP_NIGHTCAP_MCA",
        "USP_NIGHTCAP_MCB","USP_NIGHTCAP_MCD","USP_NIGHTCAP_MCT","USP_NIGHTCAP_RGR","USP_OVERLORD","USP_OVERLORD_CBR","USP_OVERLORD_GRN","USP_OVERLORD_MC",
        "USP_OVERLORD_MIX","USP_OVERLORD_TAN","USP_SEALSTRIKE","USP_TOMAHAWK","USP_ZIPTIE"
    ];
};

if ((_object getVariable ["bsm_so_commonPLP", false])) then {
    _common append [
        "plp_bo_w_BottleGin", "plp_bo_w_BottleLiqOrange", "plp_bo_w_BottleTequila", 
        "plp_bo_w_Cigar", "plp_bo_w_CigarCutter", "plp_bo_w_CigarFine", "plp_bo_w_CigarBoxSealed", 
        "plp_bo_w_SunBlocker", "plp_bo_w_SunMilk", "plp_bo_w_BottleLiqCream"
    ];
};

// Aegis
if ((_object getVariable ["bsm_so_commonOTHER", false])) then {
    _common append [
        "Aegis_HandFlare_Green", "Aegis_HandFlare_Red"
    ];
};

// Cig Immersion
if ((_object getVariable ["bsm_so_commonOTHER", false])) then {
    _common append [
        "murshun_cigs_cigpack", "murshun_cigs_lighter", "murshun_cigs_matches", 
        "immersion_cigs_cigar0", "G_Cigarette", "murshun_cigs_cig0", "immersion_cigs_cigar0_nv", "murshun_cigs_cig0_nv"
    ];
};

// RHS
if ((_object getVariable ["bsm_so_commonOTHER", false])) then {
    _common append [
        "rhs_weap_M320", "rhsusf_m112_mag"
    ];
};

// Attachable Stretcher
if ((_object getVariable ["bsm_so_commonOTHER", false])) then {
    _common append [
        "Attachable_Stretcher" 
    ];
};

// VME
if ((_object getVariable ["bsm_so_commonOTHER", false])) then {
    _common append [
         "vme_camonet_med_DES","vme_camonet_DES","vme_camonet_med_FOR","vme_camonet_FOR" 
    ];
};

// Long Range BP
if ((_object getVariable ["bsm_so_commonTFARLR", false])) then {
    _common append [
         "CUP_B_Kombat_Radio_Olive","CUP_B_Motherlode_Radio_MTP","CUP_B_Predator_Radio_MTP",
         "B_RadioBag_01_black_F","B_RadioBag_01_digi_F","B_RadioBag_01_eaf_F","B_RadioBag_01_ghex_F",
         "B_RadioBag_01_hex_F","B_RadioBag_01_mtp_F","B_RadioBag_01_tropic_F","B_RadioBag_01_oucamo_F",
         "B_RadioBag_01_wdl_F","TFAR_rt1523g_bwmod","TFAR_rt1523g_rhs","B_RadioBag_01_oicamo_F","B_RadioBag_01_flecktarn_F",
         "B_RadioBag_01_green_F","Aegis_B_RadioBag_01_des_lxWS","B_RadioBag_01_multitarn_F","B_RadioBag_01_sage_F","B_RadioBag_01_semiarid_F",
         "B_RadioBag_01_whex_F","B_RadioBag_01_coyote_F","B_RadioBag_01_aucamo_F","B_RadioBag_01_greece_F","B_RadioBag_01_commando_F",
         "B_RadioBag_01_jungle_F","B_RadioBag_01_marar_F","B_RadioBag_01_arid_F","B_RadioBag_01_taiga_F","B_RadioBag_01_Turkey_F",
         "TFAR_anarc164","TFAR_anarc210","TFAR_anprc155","TFAR_anprc155_coyote","TFAR_bussole","TFAR_mr3000","TFAR_mr3000_bwmod","TFAR_mr3000_bwmod_tropen",
         "TFAR_mr3000_multicam","TFAR_mr3000_rhs","TFAR_mr6000l","TFAR_rt1523g","TFAR_rt1523g_big","TFAR_rt1523g_big_bwmod","TFAR_rt1523g_big_bwmod_tropen",
         "TFAR_rt1523g_big_rhs","TFAR_rt1523g_black","TFAR_rt1523g_fabric","TFAR_rt1523g_green","TFAR_rt1523g_sage"
    ];
};

if ((_object getVariable ["bsm_so_commonTFARSR", false])) then {
    _common append [
         "TFAR_anprc148jem","TFAR_anprc152","TFAR_anprc154","TFAR_fadak","TFAR_pnr1000a","TFAR_rf7800str"
    ];
};
{ _allItems pushbackUnique _x; } forEach (_commonItems);
{ _allItems pushbackUnique _x; } forEach (_common);
{
    private _loadout = getArray (_x >> "ALiVE_orbatCreator_loadout");
    if (count _loadout <= 0) then { continue; };
    private _extracted  = [_loadout] call SpecOps_fnc_commonExtractUnitGearnStuff;
    { _allItems pushbackUnique _x; } forEach (_extracted);
} forEach(_presetFactions);
_allItems;