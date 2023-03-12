class CfgPatches
{
	class Boat_SIB_luxury_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"luxury_boat_SIB"
		};
	};
};
class CfgMods
{
	class Boat_SIB_luxury_new1
	{
		dir="Boat_SIB_luxury_new1";
		hideName=0;
		hidePicture=0;
		name="luxury_boat_SIB";
		credits="";
		author="SIBNIC";
		authorID="";
		version="version 1.0";
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
					"Boat_SIB_luxury_new1/4_World/"
				};
			};
		};
	};
};

class CfgVehicles
{
	class luxury_boat_SIB0_clear;
	class luxury_boat_base;
	class SIB_luxury_doors_driver;
	class SIB_luxury_doors_driver_new1: SIB_luxury_doors_driver
	{
		scope = 2;
		displayName = "SIB_luxury_doors_driver new1";
		descriptionShort = "";
		hiddenSelections[] = {"camo1_door"};
		hiddenSelectionsTextures[] ={"Boat_SIB_luxury_new1\data\yacht_yacht_albedo_new1.paa"};
	};

	class luxury_boat_SIB0_new1: luxury_boat_base
	{
		scope=2;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"Boat_SIB_luxury_new1\data\yacht_yacht_albedo_new1.paa"};
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","Reflector_1_1","Reflector_2_1","CarBattery","SparkPlug","SIB_luxury_doors_driver"};
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
				attachmentSlots[] = {"Reflector_1_1","Reflector_2_1","SIB_luxury_doors_driver"};
			};
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				attachmentSlots[] = {"CarBattery","SparkPlug"};
				icon = "cat_vehicle_engine";
			};
		};
	
	};
	class luxury_boat_SIB0_clear_new1: luxury_boat_SIB0_clear
	{
		scope=2;
		displayName="luxury Boat new1";
		descriptionShort="";
	};
};