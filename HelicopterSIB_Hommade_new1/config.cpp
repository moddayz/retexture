class CfgPatches
{
	class HelicopterModhommade_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.01;
		requiredAddons[]={"HelicopterModhommade"};
	};
};
class CfgMods
{
	class HelicopterModhommade_new1
	{
		dir="HelicopterSIB_Hommade_new1";
		hideName=0;
		hidePicture=0;
		name="HelicopterModhommade_new1";
		credits="";
		author="SIBNIC";
		authorID="";
		version="version 1";
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
					"HelicopterSIB_Hommade_new1/4_World/"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_Hommade_new1/3_Game/"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_Hommade_new1/5_Mission/"
				};
			};
		};
	};
};



class CfgVehicles
{
	class HeliSIB_hommade;
	class HeliSIB_hommade_clear;
	class HeliSIB_hommade_new1: HeliSIB_hommade
	{
		scope=2;
		displayName="hommade";
		hiddenSelections[] = {"camo1"};
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","CarBattery","CarRadiator","SIBMH6_blade1","SIBMH6_blade2","SIBMH6_blade3","SIBMH6_blade4","Reflector_1_1","Reflector_2_1"};
		
		hiddenSelectionsTextures[] ={"HelicopterSIB_Hommade_new1\data\light_helicopter_main_new1.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,10};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliSIB_hommade_new1_clear: HeliSIB_hommade_clear
	{
		scope=2;
		displayName="hommade";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_Hommade_new1\data\light_helicopter_main_new1.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,10};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
};
