class CfgPatches
{
	class Boat_SIB_fishing_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"fishing_boat_SIB"
		};
	};
};
class CfgMods
{
	class Boat_SIB_fishing_new1
	{
		dir="Boat_SIB_fishing_new1";
		hideName=0;
		hidePicture=0;
		name="Boat";
		credits="";
		author="SIBNIC";
		authorID="";
		version="version 1.0";
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
					"Boat_SIB_fishing_new1/4_World/"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Boat_SIB_fishing_new1/3_Game/"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Boat_SIB_fishing_new1/5_Mission/"
				};
			};
		};
	};
};

class CfgVehicles
{	
	class fishing_boat_SIB0_clear;
	class SIB_fishing_doors_driver;
	class SIB_fishing_doors_driver_new1: SIB_fishing_doors_driver
	{
		scope = 2;
		displayName = "SIB_fishing_doors_driver new1";
		descriptionShort = "";
		hiddenSelections[] = {"camo1_door"};
		hiddenSelectionsTextures[] ={"Boat_SIB_fishing_new1\data\main_new1.paa"};
	};
	class fishing_boat_base;
	class fishing_boat_SIB0_new1: fishing_boat_base
	{
		displayName="fishing Boat new1";
		descriptionShort="";
		scope=2;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] ={"Boat_SIB_fishing_new1\data\main_new1.paa","Boat_SIB_fishing_new1\data\boat__3_new1.paa","Boat_SIB_fishing_new1\data\Boat__2_new1.paa","Boat_SIB_fishing_new1\data\Boat__1_new1.paa"};
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","Reflector_1_1","CarBattery","SparkPlug","SIB_fishing_doors_driver"};
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
				attachmentSlots[] = {"Reflector_1_1","SIB_fishing_doors_driver"};
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

	class fishing_boat_SIB0_clear_new1: fishing_boat_SIB0_clear
	{
		scope=2;
		displayName="fishing Boat new1";
		descriptionShort="";
	};
};
