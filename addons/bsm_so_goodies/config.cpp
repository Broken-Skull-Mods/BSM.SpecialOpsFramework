class CfgPatches {
	class bsm_so_goodies {
		author = "BSM - Goodies";
		units[]={ };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={  };
	};
};

class CfgFunctions {
	class SpecOps {
		class Goodies_FunFact {
			file = "bsm_so_goodies\functions";
			class goodiesLoadFunFacts { postInit = 1; };
			class goodiesSpawnFunFactLoop { };
		}
	};
};

class SpecOps_Goodies
{
	class FunFact {
		class DidYouKnow {
			class Default {
				list[] = {
					"The first time Systm used Halo jump, he splatter on the ground.",
					"The id of the current screen is 5523, BloodyMystik's favorite number given by google's random number generator.",
					"We used to have minor roles and major roles, then realize it was a stupid idea and created only major roles.",
					"Orka as invested sweat and tears to build the UI of spec-ops? think about that next time we harras you for a donation.",
					"The UI of spec-ops was inspired by the UI of OPCOM Mod.",
					"Antistasi give us the idea to implement the fast travel..",
					"Spec-Ops started as a modified version of Dynamic Recon Ops, then was completely rewritten to fit the evolving vision we had.",
					"The guy, whom we wont say the name, that started the project with BloodyMystik after a while completely ignored him then was silently removed from the project.",
					"some of the guys who ran test pilot of Spec-ops and face massive lags spit on the mod saying it sucks... no knowing that test run always sucks.",
					"If you do a donation, right now this loading wont go any faster ;) ;)",
					"If your donation is in cryptocurrency, IRS wont get a cent...",
					"Spec-Ops has one of the best AI controlled helicopter system.",
					"Spec-Ops brutal addon settings are inspired from a highly tactical realisim unit called Task Force Trauma.",
					"Every building has layouts of furniture, enemy positions, intel positions and hostages all uniquely built by our team.",
					"BloodyMystik once wrote 600 lines of sqf code without testing every step... when he ran it, he hope of a hail mary! to your surprise, there was no hail mary! damm fool.",
					"Spec-Ops has one of the best CQB system, that came from BloodyMystik's experience in a highly tactical realism unit.",
					"Spec-Ops was built on the idea of tactical teamwork, which makes it very difficult to play alone or maybe i just suck at it.",
					"This patch was built from what was believed to be a coup, by member of a unit, which was in fact not a coup but, BloodyMystik made the logo before and after the so called coup, which was not a coup... still logo is pretty sick.",
					"If you use too much botox you will gain the ability to smile while crying.",
					"Orka had the restart Arma everytime he had to change or test a new background image.",
					"Orka and BloodyMystik fought about the exit button location on the Command UI... I let you figure out who won.",
					"Every donation goes to improve Spec-Ops... at least the ones we do not embezzle :]",
					"BloodyMystik's unit leader lost all his data after a hard-drive crash...  it's a lesson in failure to make backups... you must have backups, i said! While not having any backups of spec-ops myself... what a hypocrite.",
					"Orka randomly place his main character on the map and the whole time he built the UI, his character was spawning on top of a tree in a perfect position not the get arma'd... so much could've gone wrong.",
					"The bottom left icons on the command ui is part of Special Ops Framework - Markers & Icons, it has more than 4000 icons.",
					"If you accidentally reset your campaign, you are not screwed... just load the campaign again.",
					"We struggled to find the NVG's name which is actually called HMD... we couldn't figure it out and google confirmed our suspucious, it stand for hold my dick.",
					"If you google HMD meaning google will tell you that it stands for Hold my Dick! what happen to happy mother's day?",
					"Slacker (No Role) button class name is Letingi_1610, Letingi is an Icelandic word to describe a lazy fuck who ain't working.",
					"All comments of long line of dashes in the codes came from orka?"
				};
			};
		};
	};
};