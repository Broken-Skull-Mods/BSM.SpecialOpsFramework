class CfgPatches
{
	class specops_radios
	{
		author = "BloodyMystik & Orka";
		name = "Special Ops Framework (Radio)";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"A3_Data_F_Enoch"
		};
	};
};

class CfgVehicles {

    class TFAR_Bag_Base;
    class TFT_RADIO_PACK_BASE: TFAR_Bag_Base {
		scope=2;
		scopeCurator=2;
		displayName="TFT Radio Pack [Greece]";
		picture="\z\tfar\addons\backpacks\anarc164\ui\anarc164_icon.paa";
		model="a3\supplies_f_enoch\bags\b_radiobag_01_f.p3d";
		hiddenSelections[]= { "camo1" };
		hiddenSelectionsTextures[] = { "a3_athena\supplies_f_athena\bags\data\b_radiobag_01_greece_co.paa" };
		maximumLoad=80;
		mass=160;
		tf_range=40000;
		tf_encryptionCode="tf_independent_radio_code";
		tf_dialog="anarc164_radio_dialog";
		tf_subtype="airborne";
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
	};
    
	class TFT_RADIO_PACK_TURKEY: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack [Turkey]";
		hiddenSelectionsTextures[] = { "a3_athena\supplies_f_athena\bags\data\b_radiobag_01_turkey_co.paa" };
	};

    class TFT_RADIO_PACK_TAIGA: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack [RU] (Taiga)";
		hiddenSelectionsTextures[] = { "a3_aegis\supplies_f_aegis\bags\data\b_radiobag_01_rutaiga_co.paa" };
	};

    class TFT_RADIO_PACK_ARID: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack [RU] (Arid)";
		hiddenSelectionsTextures[] = { "a3_aegis\supplies_f_aegis\bags\data\b_radiobag_01_ruarid_co.paa" };
	};

    class TFT_RADIO_PACK_JUNGLE: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack [HIMF] (Jungle)";
		hiddenSelectionsTextures[] = { "a3_atlas\supplies_f_atlas\bags\data\b_radiobag_01_jungle_co.paa" };
	};

    class TFT_RADIO_PACK_MARAR: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Marar)";
		hiddenSelectionsTextures[] = { "a3_atlas\supplies_f_atlas\bags\data\b_radiobag_01_marar_co.paa" };
	};

    class TFT_RADIO_PACK_JUNGLE_2: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack [HIMF-C] (Jungle)";
		hiddenSelectionsTextures[] = { "a3_atlas\supplies_f_atlas\bags\data\b_radiobag_01_commando_co.paa" };
	};

    class TFT_RADIO_PACK_ADF: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack [ADF]";
		hiddenSelectionsTextures[] = { "a3_atlas\supplies_f_atlas\bags\data\b_radiobag_01_aucamo_co.paa" };
	};

    class TFT_RADIO_PACK_WOODLAND: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Woodland) [NATO]";
		hiddenSelectionsTextures[] = { "a3\supplies_f_enoch\bags\data\b_radiobag_01_wdl_co.paa" };
	};

    class TFT_RADIO_PACK_WOODLAND_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Woodland Hex) [CSAT]";
		hiddenSelectionsTextures[] = { "a3_atlas\supplies_f_atlas\bags\data\b_radiobag_01_whex_co.paa" };
	};

    class TFT_RADIO_PACK_URBAN_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Urban) [CSAT]";
		hiddenSelectionsTextures[] = { "a3\supplies_f_enoch\bags\data\b_radiobag_01_urban_co.paa" };
	};

    class TFT_RADIO_PACK_TROPIC_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Tropic) [NATO]";
		hiddenSelectionsTextures[] = { "a3\supplies_f_enoch\bags\data\b_radiobag_01_tropic_co.paa" };
	};

    class TFT_RADIO_PACK_SEMI_ARID_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Semi-Arid) [CSAT]";
		hiddenSelectionsTextures[] = { "a3_atlas\supplies_f_atlas\bags\data\b_radiobag_01_semiarid_co.paa" };
	};

    class TFT_RADIO_PACK_SAGE_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Sage)";
		hiddenSelectionsTextures[] = { "a3_aegis\supplies_f_aegis\bags\data\b_radiobag_01_sage_co.paa" };
	};

    class TFT_RADIO_PACK_MULTITARN_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Multitarn)";
		hiddenSelectionsTextures[] = { "a3_atlas\supplies_f_atlas\bags\data\b_radiobag_01_multitarn_co.paa" };
	};

    class TFT_RADIO_PACK_MTP_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (MTP) [NATO]";
		hiddenSelectionsTextures[] = { "a3\supplies_f_enoch\bags\data\b_radiobag_01_mtp_co.paa" };
	};

    class TFT_RADIO_PACK_CSAT_HEX_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Hex) [CSAT]";
		hiddenSelectionsTextures[] = { "a3_aegis\supplies_f_aegis\bags\data\b_radiobag_01_hex_co.paa" };
	};

    class TFT_RADIO_PACK_GREEN_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Green)";
		hiddenSelectionsTextures[] = { "a3_aegis\supplies_f_aegis\bags\data\b_radiobag_01_rukhk_co.paa" };
	};

    class TFT_RADIO_PACK_CSAT_GREEN_HEX_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Green Hex) [CSAT]";
		hiddenSelectionsTextures[] = { "a3\supplies_f_enoch\bags\data\b_radiobag_01_ghex_co.paa" };
	};
	
    class TFT_RADIO_PACK_LDF_GEOMETRIC_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Geometric) [LDF]";
		hiddenSelectionsTextures[] = { "a3\supplies_f_enoch\bags\data\b_radiobag_01_eaf_co.paa" };
	};

    class TFT_RADIO_PACK_FLECKTARN_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Flecktarn)";
		hiddenSelectionsTextures[] = { "a3_atlas\supplies_f_atlas\bags\data\b_radiobag_01_flecktarn_co.paa" };
	};

    class TFT_RADIO_PACK_AAF_DIGITAL_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Digital) [AAF]";
		hiddenSelectionsTextures[] = { "a3\supplies_f_enoch\bags\data\b_radiobag_01_aaf_co.paa" };
	};

    class TFT_RADIO_PACK_TURKEY_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack 2 [Turkey]";
		hiddenSelectionsTextures[] = { "a3_athena\supplies_f_athena\bags\data\b_radiobag_01_turkey_co.paa" };
	};

    class TFT_RADIO_PACK_COYOTE_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Coyote)";
		hiddenSelectionsTextures[] = { "a3_aegis\supplies_f_aegis\bags\data\b_radiobag_01_coyote_co.paa" };
	};

    class TFT_RADIO_PACK_CSAT_DESERT_HEX_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Desert Hex) [CSAT]";
		hiddenSelectionsTextures[] = { "a3_aegis\supplies_f_aegis\bags\data\b_radiobag_01_oicamo_co.paa" };
	};

    class TFT_RADIO_PACK_BLACK_1: TFT_RADIO_PACK_BASE
	{
		displayName="TFT Radio Pack (Black)";
		hiddenSelectionsTextures[] = { "a3\supplies_f_enoch\bags\data\b_radiobag_01_black_co.paa" };
	};
};