class CfgPatches
{
	class HelicopterSIB_XH9_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"HelicopterModSIB_XH9"};
	};
};
class CfgMods
{
	class HelicopterSIB_XH9_new1
	{
		dir="HelicopterSIB_XH9_new1";
		hideName=0;
		hidePicture=0;
		name="HelicopterSIB_XH9_new1";
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
					"HelicopterSIB_XH9_new1/4_World/"
				};
			};
		};
	};
};

class CfgVehicles
{
	
	
	class SIBXH9_Door_1_1;
	class SIBXH9_Door_2_1;
	
	class SIBXH9_Door_1_1_new1: SIBXH9_Door_1_1
	{
		name="XH9 1_1 Door_new1";
		hiddenSelections[] = {"camo0"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_XH9_new1\data\xh9_warbird_main_col_new1.paa"};
	};
	class SIBXH9_Door_2_1_new1: SIBXH9_Door_2_1
	{
		name="XH9 2_1 Door_new1";
		hiddenSelections[] = {"camo0"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_XH9_new1\data\xh9_warbird_main_col_new1.paa"};
	};
	
	class HeliXH9_SIB;
	class HeliXH9_SIB_clear;
	class HeliXH9_SIB_new1: HeliXH9_SIB
	{
		scope=2;
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","SIBXH9_Door_1_1","SIBXH9_Door_2_1","CarBattery","SIBXH9_blade1","SIBXH9_blade2","SIBXH9_bladem1","Reflector_1_1","Reflector_2_1"};
		displayName="XH9_new1";
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
				attachmentSlots[] = {"SIBXH9_Door_1_1","SIBXH9_Door_2_1","Reflector_1_1","Reflector_2_1"};
			};
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				attachmentSlots[] = {"CarBattery","SIBXH9_blade1","SIBXH9_blade2","SIBXH9_bladem1"};
				icon = "cat_vehicle_engine";
			};
		};
		
		hiddenSelections[] = {"camo0","camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_XH9_new1\data\xh9_warbird_main_col_new1.paa","HelicopterSIB_XH9_new1\data\xh9_warbird_main_02_new1_col.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,70};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};


};
	
