class CfgPatches
{
	class HelicopterSIB_Scout_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"HelicopterModSIB_Scout_mk"};
	};
};
class CfgMods
{
	class HelicopterSIB_Scout_new1
	{
		dir="HelicopterSIB_Scout_new1";
		hideName=0;
		hidePicture=0;
		name="HelicopterSIB_Scout_new1";
		credits="";
		author="SIBNIC";
		authorID="";
		version="version 5";
		extra=0;
		type="mod";
		dependencies[]=
		{
		
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_Scout_new1/4_World/"
				};
			};
		};
	};
};

class CfgVehicles
{
	class Sib_Scout_mk_Door_1_1;
	class Sib_Scout_mk_Door_1_2;
	class Sib_Scout_mk_Door_2_1;
	class Sib_Scout_mk_Door_2_2;
	
	class Sib_Scout_mk_Door_1_1_new1: Sib_Scout_mk_Door_1_1
	{
		name="XH9 1_1 Door_new1";
		hiddenSelections[] = {"camo0"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_Scout_new1\data\scout_ah_1_scheme1_c_new1.paa"};
	};
	
	
	class Sib_Scout_mk_Door_1_2_new1: Sib_Scout_mk_Door_1_2
	{
		name="XH9 1_1 Door_new1";
		hiddenSelections[] = {"camo0"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_Scout_new1\data\scout_ah_1_scheme1_c_new1.paa"};
	};
	
	
	class Sib_Scout_mk_Door_2_1_new1: Sib_Scout_mk_Door_2_1
	{
		name="XH9 1_1 Door_new1";
		hiddenSelections[] = {"camo0"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_Scout_new1\data\scout_ah_1_scheme1_c_new1.paa"};
	};
	
	
	class Sib_Scout_mk_Door_2_2_new1: Sib_Scout_mk_Door_2_2
	{
		name="XH9 1_1 Door_new1";
		hiddenSelections[] = {"camo0"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_Scout_new1\data\scout_ah_1_scheme1_c_new1.paa"};
	};
	
	class HeliScout_mk_SIB;
	class HeliScout_mk_SIB_clear;
	class HeliScout_mk_SIB_new1: HeliScout_mk_SIB
	{
		scope=2;
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","Sib_Scout_mk_Door_1_1","Sib_Scout_mk_Door_1_2","Sib_Scout_mk_Door_2_1","Sib_Scout_mk_Door_2_2","CarBattery","Sib_Scout_mk_blade1","Sib_Scout_mk_blade2","Sib_Scout_mk_blade3","Sib_Scout_mk_blade4","Sib_Scout_mk_bladem1","Sib_Scout_mk_bladem2","Reflector_1_1","Reflector_2_1"};
		displayName="Scout AH.Mk.1_new1";
		class GUIInventoryAttachmentsProps
		{
			class Chassis 
			{
				name = "$STR_attachment_Chassis0";
				description = "";
				icon = "cat_vehicle_chassis";
				attachmentSlots[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2"};
			};
			class Body
			{
				name = "$STR_attachment_Body0";
				description = "";
				icon="cat_vehicle_body";
				attachmentSlots[] = {"Sib_Scout_mk_Door_1_1","Sib_Scout_mk_Door_1_2","Sib_Scout_mk_Door_2_1","Sib_Scout_mk_Door_2_2","Reflector_1_1","Reflector_2_1"};
			};
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				attachmentSlots[] = {"CarBattery","Sib_Scout_mk_blade1","Sib_Scout_mk_blade2","Sib_Scout_mk_blade3","Sib_Scout_mk_blade4","Sib_Scout_mk_bladem1","Sib_Scout_mk_bladem2"};
				icon = "cat_vehicle_engine";
			};
		};
		
		hiddenSelections[] = {"camo0"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_Scout_new1\data\scout_ah_1_scheme1_c_new1.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,70};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};


};
	
