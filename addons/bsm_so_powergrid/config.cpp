class CfgPatches
{
	class bsm_so_powergrid
	{
		author = "Broken Skull Mods™";
		name = "BSM - Powergrid";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "bsm_so_main", "ace_main", "cba_main"  };
	};
};

class Extended_PreInit_EventHandlers
{
    class bsm_so_powergrid
    {
        init = "[] call compile preprocessFileLineNumbers 'bsm_so_powergrid\cba_setting_editor.sqf';";
    };
};				

class CfgFunctions {
	class SpecOps {
		class Core {
			file = "bsm_so_powergrid\functions";
			class powergridAssignLightPoles { };
			class powergridAssignActions { postInit = 1; };
			class powergridAssignLayout { postInit = 1; };
			class powerlinesShutdown { };
			class powerlineShutdown { };
		}
	};
};



class SpecOps_Powergrid_Maps {
	class bmtic_MONMcrCAnXU {
		World="Altis";
		Hubs[]={
			{{8231.7,10887,0.813},{200.14,103.884,0.972,true,-1},{0,1,100,100,1,"Land_spp_Tower_F"},{{{5673.63,5628.07,139.451},23669.3,8961.25,42.1073,true}}},
			{{15721.7,16002.1,0.812474},{200.14,103.884,0.972,true,-1},{0,1,100,150,1,"Land_spp_Tower_F"},{{{6708.81,22637.7,-64.9352},12854.3,4353.65,42.1073,true}}},
			{{20701.5,15699.9,0.959},{200.14,84.833,319.861,true,-1},{0,1,50,100,1,"Land_spp_Tower_F"},{{{24133.2,6898.7,25.2681},10634.9,4353.65,42.1073,true}}},
			{{25415.2,20339,1.038},{58.543,76.943,319.861,true,-1},{0,0,0,0,1,"Land_TBox_F"},{{{23007.3,26665.6,148.582},21899.2,9537.58,42.1073,true}}}
		};
	};
	class bmtic_fapovo_O1NnBYdJQHY {
		World="fapovo";
		Hubs[]={
			{{2743.63,1210.31,0},{17.8485,16.4747,0,false,-1},{1,0,0,0,1,"Land_Misc_PowerStation"},{}}
		};
	};
	class bmtic_kunduz_valley_rz_pba4utes {
		World="kunduz_valley";
		Hubs[]={
			{{4401.56,3251.81,0.669571},{28.802,25.315,0,false,-1},{1,0,0,0,1,"Land_PowerStation_01_F"},{}}
		};
	};
	class bmtic_tem_anizay_BPlsOte23HE {
		World="tem_anizay";
		Hubs[]={
			{{5578.09,5537.97,0.0680008},{11.316,7.762,336.407,true,-1},{1,0,0,0,1,"Land_House_C_10_EP1"},{}}
		};
	};

	class bmtic_Enoch_hZLVZIrPoWo {
		World="Enoch";
		Hubs[]={
			{{11507.3,7158.29,0.95002},{9.084,7.461,347.815,true,-1},{1,0,0,0,1,"Land_PowerStation_01_F","Color5_FD_F"},{}}
		};
	};

	class bmtic_Malden_a88Fk0FEybQ {
		World="Malden";
		Hubs[]={
			{{7773.14,3336.74,-0.0320005},{9.652,9.305,346.563,true,-1},{0,0,0,0,1,"Land_spp_Transformer_F","Color5_FD_F"},{{{4708.66,6258.94,-410.687},4274.75,6125.25,0,true}}},
			{{9714.25,3883.92,0},{1.956,2.716,0.87,true,-1},{0,0,0,0,1,"Land_TBox_F","Color3_FD_F"},{{{10664.4,3817.4,-11.4499},1525.52,1245.33,0,true}}}
		};
	};

	class bmtic_SefrouRamal_HFaEMmFHerk {
		World="SefrouRamal";
		Hubs[]={
			{{5842.47,6435.64,-0.00600052},{2.163,3.189,16.591,true,-1},{1,0,0,0,1,"Land_TBox_F","Color5_FD_F"},{}}
		};
	};

	class bmtic_Stratis_9BxwrVbey04 {
		World="Stratis";
		Hubs[]={
			{{2711.57,5719.29,-9.53674e-007},{908.025,811.679,0,true,-1},{1,0,0,0,1,"Land_spp_Transformer_F","Color5_FD_F"},{}}
		};
	};
	
	class bmtic_Tanoa_Up6ouWOmt68 {
		World="Tanoa";
		Hubs[]={
			{{7515,8605.35,0},{2.224,3.455,314.305,true,-1},{1,0,0,0,1,"Land_TBox_F","Color5_FD_F"},{}}
		};
	};
};



// Land_spp_Transformer_F