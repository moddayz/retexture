class CfgPatches
{
	class Boat_SIB_power_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"powerboat_boat_SIB"
		};
	};
};
class CfgMods
{
	class Boat_SIB_power_new1
	{
		dir="Boat_SIB_power_new1";
		hideName=0;
		hidePicture=0;
		name="powerboat_boat_SIB";
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
					"Boat_SIB_power_new1/4_World/"
				};
			};
		};
	};
};


class CfgVehicles
{
	class powerboat_boat_SIB0_clear;
	class powerboat_boat_base;
	class powerboat_boat_SIB0_new1: powerboat_boat_base
	{
		scope=2;
		displayName="powerboat Boat new1";
		descriptionShort="";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] ={"Boat_SIB_power_new1\data\Boat__1_new1.paa","Boat_SIB_power_new1\data\Boat__2_new1.paa"};
		
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","Reflector_1_1","Reflector_2_1","CarBattery","SparkPlug"};
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
				attachmentSlots[] = {"Reflector_1_1","Reflector_2_1"};
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
	class powerboat_boat_SIB0_clear_new1: powerboat_boat_SIB0_clear
	{
		scope=2;
		displayName="powerboat Boat";
		descriptionShort="";
	};
};
