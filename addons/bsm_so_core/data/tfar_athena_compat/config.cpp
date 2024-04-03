class CfgPatches {
	class specops_radios {
		author = "Broken Skull Mods™";
		name = "Special Ops Framework (Radio Compat)";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"A3_Data_F_Enoch", 
			"tfar_backpacks", 
			"tfar_handhelds",
			"A3_athena_Supplies_F_athena_Bags"
		};
		skipWhenMissingDependencies = 1;
	};
};

class CfgAddons {
	class PreloadAddons {
		class specops_radios {
			list[]= { "A3_athena_Supplies_F_athena_Bags" };
		};
	};
};

class CfgVehicles {
	class B_RadioBag_01_base_F;
	class B_RadioBag_01_coyote_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack [ADF]";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_oicamo_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack (Desert Hex) [CSAT]";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_green_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack (Green)";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class Aegis_B_RadioBag_01_des_lxWS: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack (MCU-D)";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_sage_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack (Sage)";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_greece_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack [Greece]";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_arid_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack [RU] (Arid)";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_taiga_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack [RU] (Taiga)";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};

	class B_RadioBag_01_Turkey_F: B_RadioBag_01_base_F {
		displayName="TFAR Radio Pack [Turkey]";
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};
};