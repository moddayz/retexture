class CfgPatches
{
	class HelicopterSIB_EC135_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={"HelicopterModSIB_EC135"};
	};
}; 
class CfgMods
{
	class HelicopterSIB_EC135_new1
	{
		dir="HelicopterSIB_EC135_new1";
		hideName=0;
		hidePicture=0;
		name="HelicopterSIB_EC135_new1";
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
					"HelicopterSIB_EC135_new1/4_World/"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_EC135_new1/3_Game/"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_EC135_new1/5_Mission/"
				};
			};
		};
	};
};


class CfgVehicles
{
	
	class SIBEC135_Door_1_1;
	class SIBEC135_Door_1_2;
	class SIBEC135_Door_2_1;
	class SIBEC135_Door_2_2;

	
	class SIBEC135_Door_1_1_new1: sibec135_Door_1_1
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_EC135_new1\data\1_1_new1.paa"};
		hiddenSelectionsMaterials[] = {"HelicopterSIB_EC135_new1\1_1_new1.rvmat"};
	};
	class SIBEC135_Door_1_2_new1: sibec135_Door_1_2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_EC135_new1\data\1_1_new1.paa"};
		hiddenSelectionsMaterials[] = {"HelicopterSIB_EC135_new1\1_1_new1.rvmat"};
	};
	class SIBEC135_Door_2_1_new1: sibec135_Door_2_1
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_EC135_new1\data\1_1_new1.paa"};
		hiddenSelectionsMaterials[] = {"HelicopterSIB_EC135_new1\1_1_new1.rvmat"};
	};
	class SIBEC135_Door_2_2_new1: sibec135_Door_2_2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_EC135_new1\data\1_1_new1.paa"};
		hiddenSelectionsMaterials[] = {"HelicopterSIB_EC135_new1\1_1_new1.rvmat"};
	};
	
	
	
	
	
	class Heliec135_SIB;
	class Heliec135_SIB_clear;
	
	class HeliSIB_EC135_new1: Heliec135_SIB
	{
			scope=2;
			displayName="EC135 new1";
			descriptionShort="";
			attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","SIBEC135_Door_1_1","SIBEC135_Door_1_2","SIBEC135_Door_2_1","SIBEC135_Door_2_2","CarBattery","sibec135_blade1","sibec135_blade2","sibec135_blade3","sibec135_blade4","sibec135_impeller1","sibec135_impeller2","Reflector_1_1","Reflector_2_1"};
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
				attachmentSlots[] = {"SIBEC135_Door_1_1","SIBEC135_Door_1_2","SIBEC135_Door_2_1","SIBEC135_Door_2_2_","Reflector_1_1","Reflector_2_1"};
			};
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				attachmentSlots[] = {"CarBattery","sibec135_blade1","sibec135_blade2","sibec135_blade3","sibec135_blade4","sibec135_impeller1","sibec135_impeller2"};
				icon = "cat_vehicle_engine";
			};
		};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_EC135_new1\data\1_1_new1.paa"};
		hiddenSelectionsMaterials[] = {"HelicopterSIB_EC135_new1\1_1_new1.rvmat"};
	};
		
		class HeliSIB_EC135_new1_clear: Heliec135_SIB_clear
		{
			scope=2;
			displayName="EC135 new1";
			descriptionShort="";
			attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","SIBEC135_Door_1_1","SIBEC135_Door_1_2","SIBEC135_Door_2_1","SIBEC135_Door_2_2","CarBattery","sibec135_blade1","sibec135_blade2","sibec135_blade3","sibec135_blade4","sibec135_impeller1","sibec135_impeller2","Reflector_1_1","Reflector_2_1"};
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
					attachmentSlots[] = {"sibec135_Door_1_1_new1","sibec135_Door_1_2_new1","sibec135_Door_2_1_new1","sibec135_Door_2_2_new1","Reflector_1_1","Reflector_2_1"};
				};
				class Engine
				{
					name = "$STR_attachment_Engine0";
					description = "";
					attachmentSlots[] = {"CarBattery","sibec135_blade1","sibec135_blade2","sibec135_blade3","sibec135_blade4","sibec135_impeller1","sibec135_impeller2"};
					icon = "cat_vehicle_engine";
				};
			};
			hiddenSelections[] = {"camo1"};
			hiddenSelectionsTextures[] ={"HelicopterSIB_EC135_new1\data\1_1_new1.paa"};
			hiddenSelectionsMaterials[] = {"HelicopterSIB_EC135_new1\1_1_new1.rvmat"};
			class Cargo 
			{
				itemsCargoSize[] = {10,100};
				allowOwnedCargoManipulation = 1;
				openable = 0;
			};
		};
};