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
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","SIBPolice_Door_1_1","SIBPolice_Door_1_2","SIBPolice_Door_2_1","SIBPolice_Door_2_2","Reflector_1_1","Reflector_2_1","CarBattery","SIBPolice_blade1","SIBPolice_blade2","SIBPolice_blade3","SIBPolice_blade4","SIBPolice_bladem1","SIBPolice_bladem2"};
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
				attachmentSlots[] = {"SIBPolice_Door_1_1","SIBPolice_Door_1_2","SIBPolice_Door_2_1","SIBPolice_Door_2_2","Reflector_1_1","Reflector_2_1"};
			};
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				attachmentSlots[] = {"CarBattery"};
				icon = "cat_vehicle_engine";
			};
		};
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
