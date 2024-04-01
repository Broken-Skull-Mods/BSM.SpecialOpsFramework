
class When_Enemy {


    VehicleTanks[] = {
    };
    VehicleAntiAircraftGun[] = {
        "O_SFIA_Truck_02_aa_lxWS", 1
    };
    VehicleTechnicals[] = {
        "O_G_Offroad_01_armor_armed_lxWS", 1,
        "O_G_Offroad_01_armed_F", 1,
        "O_G_Offroad_01_AT_F", 0.3,
        "O_G_Offroad_01_armor_AT_lxWS", 0.3
    };
    VehicleTroopTransport[] = { 
        "O_SFIA_Truck_02_covered_lxWS", 1,
        "Atlas_O_T_Truck_02_transport_F", 1
    };
    
    SystemSolAirMissile[] = { };
    SystemStaticGunner[] = {
        "O_G_HMG_02_high_F", 1, 
        "O_G_HMG_02_F", 1
    };

    WoodlandRifleman[] = { Rifleman_0_WL };
    WoodlandGrenadier[] = { Grenadier_0_WL };
    WoodlandMarksman[] = { Marksman_0_WL };
    WoodlandAutoRifleman[] = { AutoRifleman_0_WL };
    WoodlandAntitank[] = { AntiTank_0_WL };
    WoodlandHVT[] = { HVT_0_WL, HVT_1_WL };
    
    WinterRifleman[] = { Rifleman_0_WL };
    WinterGrenadier[] = { Grenadier_0_WL };
    WinterMarksman[] = { Marksman_0_WL };
    WinterAutoRifleman[] = { AutoRifleman_0_WL };
    WinterAntitank[] = { AntiTank_0_WL };
    WinterHVT[] = { HVT_0_WL };

    DesertRifleman[] = { Rifleman_0_WL };
    DesertGrenadier[] = { Grenadier_0_WL };
    DesertMarksman[] = { Marksman_0_WL };
    DesertAutoRifleman[] = { AutoRifleman_0_WL };
    DesertAntitank[] = { AntiTank_0_WL };
    DesertHVT[] = { HVT_0_WL, HVT_1_WL };

    class UnitBase {
        Headgear = "";
        Backpack = "";
        Vest = "";
        Binocular = "Binocular";
        Goggles = "G_Combat_Goggles_blk_F";
        
        Weapon = "";
        WeaponAccessories[] = {};
        
        WeaponSecondary = "";
        WeaponSecondaryAccessories[] = {};

        WeaponHandgun = "";
        WeaponHandgunAccessories[] = {};

        LinkItems[] = {
            "ItemMap", "ItemCompass", "ItemGPS", "rhsusf_bino_lerca_1200_tan"
        };
        VestItems[] = {};
        BackpackItems[] = {};
        UniformItems[] = {};

    };
    class Rifleman_0_WL: UnitBase {
        Uniform = "rhs_uniform_FROG01_wd";
        Headgear = "rhsusf_lwh_helmet_marpatwd_headset_blk2";
        Backpack = "B_mas_cia_AssaultPack";
        Vest = "V_mas_cia_PlateCarrierAR_mul";

        Weapon = "arifle_MX_Black_F";
        WeaponAccessories[] = {
            "30Rnd_65x39_caseless_black_mag", 
            "muzzle_mzls_B", 
            "bipod_01_F_blk", 
            "Aegis_acc_pointer_DM", 
            "optic_Arco_blk_F"
        };

        WeaponHandgun = "rhsusf_weap_m1911a1";
        WeaponHandgunAccessories[] = {
            "rhsusf_mag_7x45acp_MHP"
        };
        
        VestItems[] = {
            {"30Rnd_65x39_caseless_black_mag", 12}, 
            {"rhsusf_mag_7x45acp_MHP", 5} 
        };

        BackpackItems[] = {
            {"MiniGrenade", 5}, 
            {"SmokeShell", 8}
        };

        UniformItems[] = { 
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, 
            {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };
    class Grenadier_0_WL: UnitBase {
        Uniform = "rhs_uniform_FROG01_wd";
        Headgear = "rhsusf_lwh_helmet_marpatwd_headset_blk2";
        Backpack = "B_mas_cia_AssaultPack";
        Vest = "V_mas_cia_PlateCarrierAR_mul";

        Weapon = "arifle_MX_GL_Black_F";
        WeaponAccessories[] = {
            "1Rnd_HEDP_Grenade_shell",
            "30Rnd_65x39_caseless_black_mag", 
            "muzzle_mzls_B", 
            "bipod_01_F_blk", 
            "Aegis_acc_pointer_DM", 
            "optic_Arco_blk_F"
        };

        WeaponHandgun = "rhsusf_weap_m1911a1";
        WeaponHandgunAccessories[] = {
            "rhsusf_mag_7x45acp_MHP"
        };
        
        VestItems[] = {
            {"30Rnd_65x39_caseless_black_mag", 12}, 
            {"rhsusf_mag_7x45acp_MHP", 5} 
        };

        BackpackItems[] = {
            {"1Rnd_HEDP_Grenade_shell", 20},
            {"MiniGrenade", 5}, 
            {"SmokeShell", 8}
        };

        UniformItems[] = { 
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, 
            {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };
    class AutoRifleman_0_WL: UnitBase {
        Uniform = "rhs_uniform_FROG01_wd";
        Headgear = "rhsusf_lwh_helmet_marpatwd_headset_blk2";
        Backpack = "B_mas_cia_AssaultPack";
        Vest = "V_mas_cia_PlateCarrierAR_mul";

        Weapon = "LMG_03_khk_F";
        WeaponAccessories[] = {
            "rhsusf_200Rnd_556x45_box", 
            "muzzle_mzls_M", 
            "bipod_01_F_blk", 
            "Aegis_acc_pointer_DM_Khaki", 
            "optic_ERCO_khk_F"
        };

        WeaponHandgun = "rhsusf_weap_m1911a1";
        WeaponHandgunAccessories[] = {
            "rhsusf_mag_7x45acp_MHP"
        };
        
        VestItems[] = {
            {"MiniGrenade", 5}, 
            {"SmokeShell", 10},
            {"rhsusf_mag_7x45acp_MHP", 5} 
        };

        BackpackItems[] = {
            {"rhsusf_200Rnd_556x45_box", 5}, 
        };

        UniformItems[] = { 
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, 
            {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };
    class AntiTank_0_WL: UnitBase {
        Uniform = "rhs_uniform_FROG01_wd";
        Headgear = "rhsusf_lwh_helmet_marpatwd_headset_blk2";
        Backpack = "B_mas_cia_AssaultPack";
        Vest = "V_mas_cia_PlateCarrierAR_mul";

        Weapon = "arifle_MX_Black_F";
        WeaponAccessories[] = {
            "30Rnd_65x39_caseless_black_mag", 
            "muzzle_mzls_B", 
            "bipod_01_F_blk", 
            "Aegis_acc_pointer_DM", 
            "optic_ERCO_blk_F"
        };
        
        WeaponSecondary = "rhs_weap_maaws";
        WeaponSecondaryAccessories[] = {
            "rhs_optic_maaws", 
            "rhs_mag_maaws_HEDP"
        };

        WeaponHandgun = "rhsusf_weap_m1911a1";
        WeaponHandgunAccessories[] = {
            "rhsusf_mag_7x45acp_MHP"
        };
        
        VestItems[] = {
            {"30Rnd_65x39_caseless_black_mag", 5}, 
            {"rhsusf_mag_7x45acp_MHP", 2} 
        };

        BackpackItems[] = {
            {"rhs_mag_maaws_HEAT", 1} 
        };

        UniformItems[] = { 
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, 
            {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };
    class Marksman_0_WL: UnitBase {
        Uniform = "U_I_L_Uniform_01_deserter_F";
        Headgear = "lxWS_H_turban_03_green";
        Backpack = "B_mas_cia_AssaultPack";
        Vest = "V_Rangemaster_belt_tna_F";

        Weapon = "srifle_mas_cia_LRR_F";
        WeaponAccessories[] = {
            "10Rnd_mas_cia_408_APDS_Mag", 
            "rhsusf_acc_M8541",
            "muzzle_snds_408_black"
        };

        WeaponHandgun = "rhs_weap_pya";
        WeaponHandgunAccessories[] = {
            "rhs_mag_9x19_17"
        };
        
        VestItems[] = {
            {"SmokeShell", 10}, 
            {"rhsusf_mag_7x45acp_MHP", 5} 
        };

        BackpackItems[] = {
            {"10Rnd_mas_cia_408_APDS_Mag", 15} 
        };

        UniformItems[] = { 
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, 
            {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };

    class HVT_0_WL: Rifleman_0_WL {
        Uniform = "U_BG_Guerilla1_1";
        Headgear = "rhs_beret_milp";
        Backpack = "B_mas_cia_AssaultPack";
        Vest = "V_Rangemaster_belt_tna_F";
    };


};