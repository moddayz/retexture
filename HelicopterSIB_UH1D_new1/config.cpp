class CfgPatches
{
	class HelicopterSIB_UH1D_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={"HelicopterModSIBUH1D"};
	};
}; 
class CfgMods
{
	class HelicopterSIB_UH1D_new1
	{
		dir="HelicopterSIB_UH1D_new1";
		hideName=0;
		hidePicture=0;
		name="HelicopterSIB_UH1D_new1";
		credits="";
		author="SIBNIC";
		authorID="";
		version="version 3";
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
					"HelicopterSIB_UH1D_new1/4_World/"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_UH1D_new1/3_Game/"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_UH1D_new1/5_Mission/"
				};
			};
		};
	};
};


class CfgVehicles
{
	
	class SIBUH1D_Door_1_1;
	class SIBUH1D_Door_1_2;
	class SIBUH1D_Door_2_1;
	class SIBUH1D_Door_2_2;
	
	
	class SIBUH1D_Door_1_1_new1: SIBUH1D_Door_1_1
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D_new1\data\Uh-1h_do_airforce_new1.paa"};
	};
	class SIBUH1D_Door_1_2_new1: SIBUH1D_Door_1_2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D_new1\data\Uh-1h_do_airforce_new1.paa"};
	};
	class SIBUH1D_Door_2_1_new1: SIBUH1D_Door_2_1
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D_new1\data\Uh-1h_do_airforce_new1.paa"};
	};
	class SIBUH1D_Door_2_2_new1: SIBUH1D_Door_2_2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D_new1\data\Uh-1h_do_airforce_new1.paa"};
	};
	
	
	
	
	
	class HeliSIB_UH1D;
	class HeliSIB_UH1D_clear;
	
	
	
	

	
	class HeliSIB_UH1D_new1: HeliSIB_UH1D
	{
		scope=2;
		displayName="UH1D new1";
		descriptionShort="";
		
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D_new1\data\Uh-1h_bo_airforce_new1.paa","HelicopterSIB_UH1D_new1\data\Uh-1h_do_airforce_new1.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};

	
	class HeliSIB_UH1D_new1_clear: HeliSIB_UH1D_clear
	{
		scope=2;
		displayName="UH1D new1";
		descriptionShort="";
		
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D_new1\data\Uh-1h_bo_airforce_new1.paa","HelicopterSIB_UH1D_new1\data\Uh-1h_do_airforce_new1.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
};