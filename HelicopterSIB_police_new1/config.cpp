class CfgPatches
{
	class HelicopterModSIB_police_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"HelicopterModSIB_police"};
	};
};
class CfgMods
{
	class HelicopterModSIB_police_new1
	{
		dir="HelicopterModSIB_police_new1";
		hideName=0;
		hidePicture=0;
		name="HelicopterModSIB_police_new1";
		credits="";
		author="SIBNIC";
		authorID="";
		version="version 4";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			
			
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_police_new1/4_World/"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_police_new1/3_Game/"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_police_new1/5_Mission/"
				};
			};
		};
	};
};

class CfgVehicles
{
	
	class SIBPolice_Door_1_1;
	class SIBPolice_Door_1_2;
	class SIBPolice_Door_2_1;
	class SIBPolice_Door_2_2;
	
	class SIBPolice_Door_1_1_new1: SIBPolice_Door_1_1
	{
		hiddenSelections[] = {"camo1_door"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_police_new1\data\Helicopter_Police_new1.paa"};
	};
	class SIBPolice_Door_1_2_new1: SIBPolice_Door_1_2
	{
		hiddenSelections[] = {"camo1_door"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_police_new1\data\Helicopter_Police_new1.paa"};
	};
	class SIBPolice_Door_2_1_new1: SIBPolice_Door_2_1
	{
		hiddenSelections[] = {"camo1_door"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_police_new1\data\Helicopter_Police_new1.paa"};
	};
	class SIBPolice_Door_2_2_new1: SIBPolice_Door_2_2
	{
		hiddenSelections[] = {"camo1_door"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_police_new1\data\Helicopter_Police_new1.paa"};
	};
	
	
	class Helipolice_SIB4;
	class Helipolice_SIB4_clear;
	
	class Helipolice_SIB4_new1: Helipolice_SIB4
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_police_new1\data\Helicopter_Police_new1.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,50};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};

	class Helipolice_SIB4_new1_clear: Helipolice_SIB4_clear
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_police_new1\data\Helicopter_Police_new1.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,50};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
};