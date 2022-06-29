class CfgPatches
{
	class HelicopterSIB_MH6_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"HelicopterSIB_MH6"};
	};
};
class CfgMods
{
	class HelicopterSIB_MH6_new1
	{
		dir="HelicopterSIB_MH6_new1";
		hideName=0;
		hidePicture=0;
		name="HelicopterSIB_MH6_new1";
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
					"helicoptersib_mh-6_new1/4_World/"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"helicoptersib_mh-6_new1/3_Game/"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"helicoptersib_mh-6_new1/5_Mission/"
				};
			};
		};
	};
};


class CfgVehicles
{	
	class HeliMH6_SIB;
	class HeliMH6_SIB_clear;
	class HeliMH6_SIB_new1: HeliMH6_SIB
	{
		scope=2;
		displayName="MH6";
		descriptionShort="MH6";
		hiddenSelections[] = {"camo0"};
		hiddenSelectionsTextures[] ={"helicoptersib_mh-6_new1\data\ah6ext_d_new1.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,30};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliMH6_SIB_new1_clear: HeliMH6_SIB_clear
	{
		scope=2;
		displayName="MH6";
		descriptionShort="MH6";
		hiddenSelections[] = {"camo0"};
		hiddenSelectionsTextures[] ={"helicoptersib_mh-6_new1\data\ah6ext_d_new1.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,30};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
};
	