class CfgPatches
{
	class spec_ops_dressup_buildings
	{
		author = "BloodyMystik & Orka";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
		};
	};
};



class SpecOps_DressUp {
	class ItemRandomization {
			ComputerScreens[] = {
				"Land_PCSet_Intel_01_F", "Land_PCSet_Intel_02_F", "SpecOps_Screen_1A", "SpecOps_Screen_10A", 
				"SpecOps_Screen_11A", "SpecOps_Screen_13A", "SpecOps_Screen_14A", "SpecOps_Screen_15A", 
				"SpecOps_Screen_16A", "SpecOps_Screen_17A", "SpecOps_Screen_18A", "SpecOps_Scre6en_19A", 
				"SpecOps_Screen_2A", "SpecOps_Screen_20A", "SpecOps_Screen_21A", "SpecOps_Screen_22A", 
				"SpecOps_Screen_23A", "SpecOps_Screen_24A", "SpecOps_Screen_25A", "SpecOps_Screen_26A", 
				"SpecOps_Screen_27A", "SpecOps_Screen_29A", "SpecOps_Screen_3A", "SpecOps_Screen_30A", 
				"SpecOps_Screen_31A", "SpecOps_Screen_32A", "SpecOps_Screen_33A", "SpecOps_Screen_34A", 
				"SpecOps_Screen_35A", "SpecOps_Screen_36A", "SpecOps_Screen_37A", "SpecOps_Screen_38A", 
				"SpecOps_Screen_39A", "SpecOps_Screen_4A", "SpecOps_Screen_40A", "SpecOps_Screen_5A", 
				"SpecOps_Screen_6A", "SpecOps_Screen_7A", "SpecOps_Screen_8A"
			};
			TabletScreens[] = {
				"SpecOps_Screen_1B", "SpecOps_Screen_10B", "SpecOps_Screen_11B", "SpecOps_Screen_12B", 
				"SpecOps_Screen_13B", "SpecOps_Screen_14B", "SpecOps_Screen_15B", "SpecOps_Screen_16B", 
				"SpecOps_Screen_17B", "SpecOps_Screen_18B", "SpecOps_Screen_19B", "SpecOps_Screen_2B", 
				"SpecOps_Screen_20B", "SpecOps_Screen_21B", "SpecOps_Screen_22B", "SpecOps_Screen_23B", 
				"SpecOps_Screen_24B", "SpecOps_Screen_25B", "SpecOps_Screen_26B", "SpecOps_Screen_27B", 
				"SpecOps_Screen_28B", "SpecOps_Screen_29B", "SpecOps_Screen_3B", "SpecOps_Screen_30B", 
				"SpecOps_Screen_31B", "SpecOps_Screen_32B", "SpecOps_Screen_33B", "SpecOps_Screen_34B", 
				"SpecOps_Screen_35B", "SpecOps_Screen_36B", "SpecOps_Screen_37B", "SpecOps_Screen_38B", 
				"SpecOps_Screen_39B", "SpecOps_Screen_4B", "SpecOps_Screen_40B", "SpecOps_Screen_5B", 
				"SpecOps_Screen_7B", "SpecOps_Screen_8B", "SpecOps_Screen_6B", "SpecOps_Screen_9B", 
				"Land_Tablet_01_F"
			};
			TelevisionScreens[] ={
				"SpecOps_Screen_1", "SpecOps_Screen_10", "SpecOps_Screen_11", "SpecOps_Screen_12", "SpecOps_Screen_13", 
				"SpecOps_Screen_15", "SpecOps_Screen_16", "SpecOps_Screen_17", "SpecOps_Screen_18", "SpecOps_Screen_19", 
				"SpecOps_Screen_2", "SpecOps_Screen_20", "SpecOps_Screen_21", "SpecOps_Screen_22", "SpecOps_Screen_23", 
				"SpecOps_Screen_24", "SpecOps_Screen_25", "SpecOps_Screen_26", "SpecOps_Screen_27", "SpecOps_Screen_28", 
				"SpecOps_Screen_29", "SpecOps_Screen_3", "SpecOps_Screen_30", "SpecOps_Screen_31", "SpecOps_Screen_32", 
				"SpecOps_Screen_33", "SpecOps_Screen_34", "SpecOps_Screen_35", "SpecOps_Screen_36", "SpecOps_Screen_37", 
				"SpecOps_Screen_39", "SpecOps_Screen_38", "SpecOps_Screen_4", "SpecOps_Screen_40", "SpecOps_Screen_5", 
				"SpecOps_Screen_6",  "SpecOps_Screen_7", "SpecOps_Screen_8", "SpecOps_Screen_9", "Land_FlatTV_01_F"
			};
	};
	class Buildings {
		#include "\bsm_so_core\data\dressup_buildings\common\_includes.hpp"
		#include "\bsm_so_core\data\dressup_buildings\tanoa\_includes.hpp"
		#include "\bsm_so_core\data\dressup_buildings\altis\_includes.hpp"
		#include "\bsm_so_core\data\dressup_buildings\stratis\_includes.hpp"
	};
};
