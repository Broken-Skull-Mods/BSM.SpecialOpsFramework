class CfgPatches {
	class bsm_so_atlas_tfar_compat {
		author = "Broken Skull Mods™";
		name = "BSM - TFAR Atlas Radio BP Compat";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"A3_Data_F_Enoch", 
			"tfar_backpacks", 
			"tfar_handhelds",
			"A3_Atlas_Supplies_F_Atlas_Bags"
		};
		skipWhenMissingDependencies = 1;

	};
};

class CfgAddons {
	class PreloadAddons {
		class specops_radios {
			list[]= { "A3_Atlas_Supplies_F_Atlas_Bags" };
		};
	};
};

class CfgVehicles {
	class B_RadioBag_01_base_F;
	class B_RadioBag_01_commando_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack [HIMF-C] (Jungle)";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_jungle_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack [HIMF] (Jungle)";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_marar_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack [Marar]";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_aucamo_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack [ADF]";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_whex_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack (Woodland Hex) [CSAT]";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_semiarid_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack (Semi-Arid) [CSAT]";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_multitarn_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack (Multitarn)";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_flecktarn_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack (Flecktarn)";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};
};