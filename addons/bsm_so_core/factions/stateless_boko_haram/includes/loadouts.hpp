class Loadouts {

    ArsenalPresetWoodland[] = {        
        Rifleman_WL, Medic_WL, Grenadier_WL, Marksman_WL, 
        AutoRifleman_WL, RadioOperator_WL, DivingKit
    };

    ArsenalPresetWinter[] = {
        Rifleman_WL, Medic_WL, Grenadier_WL, Marksman_WL, 
        AutoRifleman_WL, RadioOperator_WL, DivingKit
    };

    ArsenalPresetDesert[] = {
        Rifleman_WL, Medic_WL, Grenadier_WL, Marksman_WL, 
        AutoRifleman_WL, RadioOperator_WL, DivingKit
    };
    Drone = "B_UAV_01_F";
    ArsenalExtraUniforms[] = {};
    ArsenalExtraVests[] = {};
    ArsenalExtraBackpacks[] = {};
    ArsenalExtraWeapons[] = {
        "arifle_AK12U_545_F"
    };
    ArsenalExtraMagazines[] = {};
    ArsenalExtraAccessories[] = {
        "rhs_acc_okp7_picatinny", "rhs_acc_ekp8_18"
    };
    ArsenalExtraItems[] = {
        "ACE_M26_Clacker", "ACE_Clacker", "ACE_SpottingScope", "ACE_RangeCard", "ACE_MapTools",
        "ACE_artilleryTable", "ACE_RangeTable_82mm", "DemoCharge_Remote_Mag", "B_UavTerminal", "ToolKit"
    };

    class LoadoutBase {
        Headgear = "";
        Backpack = "";
        Vest = "";
        Binocular = "";
        Goggles = "G_Bandanna_blk";
        
        Weapon = "";
        WeaponAccessories[] = {};
        
        WeaponSecondary = "";
        WeaponSecondaryAccessories[] = {};

        WeaponHandgun = "";
        WeaponHandgunAccessories[] = {};

        LinkItems[] = {
            "ItemMap", "ItemCompass", "TFAR_fadak", "ItemGPS", "rhs_1PN138"
        };
        VestItems[] = {};
        BackpackItems[] = {};
        UniformItems[] = {};
    };

    class Rifleman_WL : LoadoutBase {
        Name = "Rifleman";
        Uniform = "U_BG_Guerilla1_1";
        Headgear = "H_HelmetSpecB_blk";
        Backpack = "B_CivilianBackpack_01_Everyday_Vrana_F";
        Vest = "V_TacVest_blk";
        Binocular = "rhs_pdu4";
        Weapon = "Aegis_arifle_AK103_F";
        WeaponAccessories[] = {
            "30Rnd_762x39_AK12_Mag_F",
            "muzzle_snds_B", 
            "Aegis_acc_pointer_compact_pistol_red", 
            "rhs_acc_1p87"
        };
        WeaponSecondary = "rhs_weap_m72a7";
        VestItems[] = {
            {"SmokeShell", 6}, {"rhs_mag_m67", 1}, {"ACE_CTS9", 1}, {"30Rnd_762x39_AK12_Mag_F", 10}
        };
        BackpackItems[] = {
            "ACE_wirecutter", "ACE_EntrenchingTool", "ACE_Fortify", "ACE_microDAGR", "ACE_IR_Strobe_Item",
            {"30Rnd_762x39_AK12_Mag_F", 10}
        };
        UniformItems[] = { 
            {"ACE_CableTie", 4}, "ACE_EarPlugs",
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };

    class Medic_WL : Rifleman_WL {
        Name = "Medic";
        Uniform = "U_BG_Guerilla2_3";
        Backpack = "B_CivilianBackpack_01_Everyday_Vrana_F";
        VestItems[] = {
            {"SmokeShell", 4}, {"30Rnd_762x39_AK12_Mag_F", 14}
        };
        BackpackItems[] = {
            {"ACE_morphine", 12}, {"ACE_tourniquet", 6},
            {"ACE_packingBandage", 30}, {"ACE_quikclot", 30}, {"ACE_epinephrine", 12}, {"ACE_adenosine", 10}, 
            {"ACE_bloodIV", 4}, {"ACE_bloodIV_250", 8}, {"ACE_bloodIV_500", 6}, {"ACE_personalAidKit", 2}, 
            {"ACE_salineIV", 4}, {"ACE_salineIV_250", 8}, {"ACE_salineIV_500", 6}, {"ACE_splint", 4}
        };
        UniformItems[] = { 
            "ACE_EarPlugs", "ACE_Fortify", "ACE_microDAGR", "ACE_IR_Strobe_Item", {"30Rnd_762x39_AK12_Mag_F", 3}
        };

    };

    class Grenadier_WL : LoadoutBase {
        Name = "Grenadier";
        Uniform = "U_BG_Guerilla2_2";
        Headgear = "H_HelmetSpecB_blk";
        Backpack = "B_CivilianBackpack_01_Everyday_Vrana_F";
        Vest = "V_TacVest_blk";
        Binocular = "rhs_pdu4";
        Weapon = "Aegis_arifle_AK103_GL_F";
        WeaponAccessories[] = {
            "1Rnd_HE_Grenade_shell",
            "30Rnd_762x39_AK12_Mag_F",
            "muzzle_snds_B", 
            "Aegis_acc_pointer_compact_pistol_red", 
            "rhs_acc_1p87"
        };
        VestItems[] = {
            {"SmokeShell", 6}, {"rhs_mag_m67", 1}, {"ACE_CTS9", 1}, {"30Rnd_762x39_AK12_Mag_F", 10}
        };
        BackpackItems[] = {
            "ACE_HuntIR_monitor", "ACE_wirecutter", "ACE_EntrenchingTool", "ACE_Fortify", "ACE_microDAGR", "ACE_IR_Strobe_Item",
            {"30Rnd_762x39_AK12_Mag_F", 10}, {"ACE_HuntIR_M203", 10}, {"1Rnd_HE_Grenade_shell", 10}, 
            {"rhs_mag_m714_White", 10}, {"1Rnd_HEDP_Grenade_shell", 10}
        };
        UniformItems[] = { 
            {"ACE_CableTie", 4}, "ACE_EarPlugs",
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };

    class Marksman_WL : LoadoutBase {
        Name = "Marksman";
        Uniform = "U_mas_cia_B_suite_VEG";
        Headgear = "H_HelmetSpecB_blk";
        Backpack = "B_CivilianBackpack_01_Everyday_Vrana_F";
        Vest = "V_TacVest_blk";
        Binocular = "rhs_pdu4";
        Weapon = "Aegis_arifle_AK103_F";
        WeaponAccessories[] = {
            "30Rnd_762x39_AK12_Mag_F",
            "muzzle_snds_B", 
            "Aegis_acc_pointer_compact_pistol_red", 
            "rhs_acc_1p87"
        };
        VestItems[] = {
            {"SmokeShell", 4}, {"30Rnd_762x39_AK12_Mag_F", 7}
        };
        BackpackItems[] = {
            {"30Rnd_762x39_AK12_Mag_F", 15}, "ACE_Fortify", "ACE_microDAGR", "ACE_IR_Strobe_Item", "ACE_RangeCard"
        };
        UniformItems[] = { 
            {"ACE_CableTie", 4}, "ACE_EarPlugs", {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, 
            {"ACE_epinephrine", 2}, {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };

    class AutoRifleman_WL : LoadoutBase {
        Name = "AutoRifleman";
        Uniform = "U_BG_Guerilla3_1";
        Headgear = "H_HelmetSpecB_blk";
        Backpack = "B_CivilianBackpack_01_Everyday_Vrana_F";
        Vest = "V_TacVest_blk";
        Binocular = "rhs_pdu4";
        Weapon = "rhs_weap_rpk74m";
        WeaponAccessories[] = {
            "rhs_60Rnd_545X39_7N22_AK",
            "rhs_acc_ekp8_02", 
            "rhs_acc_perst1ik", 
            "rhs_acc_dtk1"
        };
        VestItems[] = {
            {"SmokeShell", 6}, {"rhs_mag_m67", 3}, {"ACE_CTS9", 1}
        };
        BackpackItems[] = {
            {"rhs_60Rnd_545X39_7U1_AK", 12}, "ACE_Fortify", "ACE_microDAGR", "ACE_IR_Strobe_Item"
        };
        UniformItems[] = { 
            {"ACE_CableTie", 4}, "ACE_EarPlugs", {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, 
            {"ACE_epinephrine", 2}, {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };

    class RadioOperator_WL : Rifleman_WL {
        Name = "Radio Operator";
        Uniform = "U_BG_Guerilla3_2";
        Headgear = "B_CivilianBackpack_01_Everyday_Vrana_F";
        Backpack = "TFT_RADIO_PACK_GREEN_1";
        Vest = "V_TacVest_blk";
        Binocular = "rhs_pdu4";
        Weapon = "Aegis_arifle_AK103_F";
        WeaponAccessories[] = {
            "30Rnd_762x39_AK12_Mag_F",
            "muzzle_snds_B", 
            "Aegis_acc_pointer_compact_pistol_red", 
            "rhs_acc_1p87"
        };
        VestItems[] = {
            {"SmokeShell", 6}, {"rhs_mag_m67", 1}, {"ACE_CTS9", 1}, {"30Rnd_762x39_AK12_Mag_F", 10}
        };
        BackpackItems[] = {
            "ACE_Fortify", "ACE_microDAGR", "ACE_IR_Strobe_Item", {"30Rnd_762x39_AK12_Mag_F", 5}
        };
        UniformItems[] = { 
            {"ACE_CableTie", 4}, "ACE_EarPlugs",
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };

    class DivingKit : LoadoutBase {
        Name = "Diving";
        Uniform = "U_B_Wetsuit";
        Headgear = "";
        Goggles = "G_B_Diving";
        Backpack = "B_CivilianBackpack_01_Everyday_Vrana_F";
        Vest = "V_RebreatherB";
        Binocular = "Rangefinder";
        Weapon = "Aegis_arifle_AK103_F";
        WeaponAccessories[] = {
            "30Rnd_762x39_AK12_Mag_F",
            "muzzle_snds_B", 
            "Aegis_acc_pointer_compact_pistol_red", 
            "rhs_acc_1p87"
        };
        VestItems[] = {
            {"SmokeShell", 4}, {"30Rnd_762x39_AK12_Mag_F", 7}
        };
        BackpackItems[] = {
            {"30Rnd_762x39_AK12_Mag_F", 15}, "ACE_Fortify", "ACE_microDAGR", "ACE_IR_Strobe_Item"
        };
        UniformItems[] = { 
            {"ACE_CableTie", 4}, "ACE_EarPlugs", {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, 
            {"ACE_epinephrine", 2}, {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };
};