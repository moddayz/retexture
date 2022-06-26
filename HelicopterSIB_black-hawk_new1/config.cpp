class CfgPatches
{
	class HelicopterModSIB_black_hawk_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"HelicopterModSIB_black_hawk"};
	};
};
class CfgMods
{
	class HelicopterModSIB_black_hawk_new1
	{
		dir="HelicopterSIB_black-hawk_new1";
		hideName=0;
		hidePicture=0;
		name="HelicopterModSIB_black_hawk_new1";
		credits="";
		author="SIBNIC";
		authorID="";
		version="version 5";
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
					"HelicopterSIB_black-hawk_new1/4_World/"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_black-hawk_new1/3_Game/"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_black-hawk_new1/5_Mission/"
				};
			};
		};
	};
};


class CfgVehicles
{
	
	
	class SIBblack_hawk_Door_1_1;
	class SIBblack_hawk_Door_1_2;
	class SIBblack_hawk_Door_2_1;
	class SIBblack_hawk_Door_2_2;
	
	class SIBblack_hawk_Door_1_1_new1: SIBblack_hawk_Door_1_1
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk_new1\data\11_new1.paa"};
	};
	class SIBblack_hawk_Door_1_2_new1: SIBblack_hawk_Door_1_2
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk_new1\data\11_new1.paa"};
	};
	class SIBblack_hawk_Door_2_1_new1: SIBblack_hawk_Door_2_1
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk_new1\data\11_new1.paa"};
	};
	class SIBblack_hawk_Door_2_2_new1: SIBblack_hawk_Door_2_2
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk_new1\data\11_new1.paa"};
	};

	class Heliblack_hawk_SIB;
	class Heliblack_hawk_SIB_clear;
	class Heliblack_hawk_SIB_new1: Heliblack_hawk_SIB
	{
		scope=2;
		displayName="black hawk";
		hiddenSelections[] = {"camo0","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk_new1\data\hawk_new1.paa","HelicopterSIB_black-hawk_new1\data\8_new1.paa","HelicopterSIB_black-hawk_new1\data\11_new1.paa","HelicopterSIB_black-hawk_new1\data\28_new1.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,70};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class Heliblack_hawk_SIB_new1_clear: Heliblack_hawk_SIB_clear
	{
		scope=2;
		displayName="black hawk";
		hiddenSelections[] = {"camo0","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_black-hawk_new1\data\hawk_new1.paa","HelicopterSIB_black-hawk_new1\data\8_new1.paa","HelicopterSIB_black-hawk_new1\data\11_new1.paa","HelicopterSIB_black-hawk_new1\data\28_new1.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,70};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
};
	