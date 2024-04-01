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
    WinterHVT[] = { HVT_0_WL, HVT_1_WL };

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
        Binocular = "";
        Goggles = "";
        
        Weapon = "";
        WeaponAccessories[] = {};
        
        WeaponSecondary = "";
        WeaponSecondaryAccessories[] = {};

        WeaponHandgun = "";
        WeaponHandgunAccessories[] = {};

        LinkItems[] = {
            "ItemMap", "ItemCompass", "TFAR_anprc152", "ItemGPS"
        };
        VestItems[] = {};
        BackpackItems[] = {};
        UniformItems[] = {};

    };
    
    class Rifleman_0_WL : UnitBase {
        Uniform = "U_BG_Guerilla1_1";
        Headgear = "H_Cap_ghex_F";
        Backpack = "B_CivilianBackpack_01_Everyday_Black_F";
        Vest = "V_Rangemaster_belt_tna_F";
        Binocular = "Binocular";

        Weapon = "rhs_weap_aks74n";
        WeaponAccessories[] = {
            "rhs_45Rnd_545X39_7N10_AK", 
            "rhs_acc_2dpZenit"
        };
        WeaponHandgun = "rhs_weap_pya";
        WeaponHandgunAccessories[] = {
            "rhs_mag_9x19_17"
        };
        
        VestItems[] = {
            {"SmokeShell", 4}, 
            {"rhs_mag_rgd5", 3} 
        };

        BackpackItems[] = {
            {"rhs_45Rnd_545X39_7N10_AK", 10}
        };

        UniformItems[] = { 
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, 
            {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };
    class Grenadier_0_WL: UnitBase {
        Uniform = "U_BG_Guerilla1_2_F";
        Headgear = "H_Cap_oli";
        Backpack = "B_CivilianBackpack_01_Everyday_Black_F";
        Vest = "V_Rangemaster_belt_tna_F";
        Binocular = "Binocular";

        Weapon = "rhs_weap_aks74n_gp25";
        WeaponAccessories[] = {
            "rhs_45Rnd_545X39_7N10_AK", 
            "rhs_acc_2dpZenit",
            "rhs_VG40MD"
        };
        WeaponHandgun = "rhs_weap_pya";
        WeaponHandgunAccessories[] = {
            "rhs_mag_9x19_17"
        };
        
        VestItems[] = {
            {"SmokeShell", 4}, 
            {"rhs_mag_rgd5", 3} 
        };

        BackpackItems[] = {
            {"rhs_45Rnd_545X39_7N10_AK", 10}, 
            {"rhs_VG40MD", 4}
        };

        UniformItems[] = { 
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, 
            {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };
    class Marksman_0_WL: UnitBase {
        Uniform = "U_I_L_Uniform_01_deserter_F";
        Headgear = "lxWS_H_turban_03_green";
        Backpack = "B_CivilianBackpack_01_Everyday_Black_F";
        Vest = "V_Rangemaster_belt_tna_F";
        Binocular = "Binocular";

        Weapon = "rhs_weap_svdp_wd_npz";
        WeaponAccessories[] = {
            "rhs_10Rnd_762x54mmR_7N14", 
            "rhs_acc_tgpv",
            "rhs_acc_dh520x56"
        };
        WeaponHandgun = "rhs_weap_pya";
        WeaponHandgunAccessories[] = {
            "rhs_mag_9x19_17"
        };
        
        VestItems[] = {
            {"SmokeShell", 4}, 
            {"rhs_mag_rgd5", 3} 
        };

        BackpackItems[] = {
            {"rhs_10Rnd_762x54mmR_7N14", 10} 
        };

        UniformItems[] = { 
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, 
            {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };
    class AutoRifleman_0_WL: UnitBase {
        Uniform = "U_I_L_Uniform_01_deserter_F";
        Headgear = "lxWS_H_turban_03_green";
        Backpack = "B_CivilianBackpack_01_Everyday_Black_F";
        Vest = "V_Rangemaster_belt_tna_F";
        Binocular = "Binocular";

        Weapon = "rhs_weap_pkm";
        WeaponAccessories[] = {
            "rhs_100Rnd_762x54mmR_7N26" 
        };
        WeaponHandgun = "rhs_weap_pya";
        WeaponHandgunAccessories[] = {
            "rhs_mag_9x19_17"
        };
        
        VestItems[] = {
            {"SmokeShell", 4},
            {"rhs_mag_9x19_17", 3}
        };

        BackpackItems[] = {
            {"rhs_100Rnd_762x54mmR_7N26", 3} 
        };

        UniformItems[] = { 
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, 
            {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };
    class AntiTank_0_WL: UnitBase {
        Uniform = "U_C_Poloshirt_tricolour";
        Headgear = "H_Bandanna_khk";
        Backpack = "rhs_rpg_empty";
        Vest = "V_Rangemaster_belt_blk";
        Binocular = "Binocular";

        Weapon = "rhs_weap_aks74n";
        WeaponAccessories[] = {
            "rhs_45Rnd_545X39_7N10_AK", 
            "rhs_acc_2dpZenit"
        };
        WeaponSecondary = "rhs_weap_rpg7";
        WeaponSecondaryAccessories[] = {
            "rhs_rpg7_PG7VS_mag"
        };
        
        VestItems[] = {
            {"SmokeShell", 4}, 
            {"rhs_mag_rgd5", 3} 
        };

        BackpackItems[] = {
            {"rhs_45Rnd_545X39_7N10_AK", 5},
            {"rhs_rpg7_PG7VS_mag", 3}
        };

        UniformItems[] = { 
            {"ACE_packingBandage", 10}, {"ACE_quikclot", 10}, {"ACE_epinephrine", 2}, 
            {"ACE_morphine", 2}, {"ACE_tourniquet", 4}
        };
    };

    class HVT_0_WL: Rifleman_0_WL {
        Uniform = "U_BG_Guerilla1_1";
        Headgear = "rhs_beret_milp";
        Goggles = "";
        Backpack = "B_CivilianBackpack_01_Everyday_Black_F";
        Vest = "V_Rangemaster_belt_tna_F";
        Weapon = "Aegis_arifle_AK74_gold_F";
        WeaponAccessories[] = {
            "30Rnd_545x39_Steel_Gold_Tracer_Mag_F" 
        };
        BackpackItems[] = {
            {"30Rnd_545x39_Steel_Gold_Tracer_Mag_F", 10}
        };
    };
    class HVT_1_WL: Rifleman_0_WL {
        Uniform = "U_BG_Guerilla1_1";
        Headgear = "H_Beret_EAF_01_F";
        Backpack = "B_CivilianBackpack_01_Everyday_Black_F";
        Vest = "V_Rangemaster_belt_tna_F";
        Weapon = "Aegis_arifle_AKS74_gold_F";
        WeaponAccessories[] = {
            "30Rnd_545x39_Steel_Gold_Tracer_Mag_F" 
        };
        BackpackItems[] = {
            {"30Rnd_545x39_Steel_Gold_Tracer_Mag_F", 10}
        };
    };

};