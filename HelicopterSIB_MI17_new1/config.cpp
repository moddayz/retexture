class CfgPatches
{
	class HelicopterSIB_MI17_new1
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={"HelicopterModSIB_MI17"};
	};
}; 
class CfgMods
{
	class HelicopterSIB_MI17_new1
	{
		dir="HelicopterSIB_MI17_new1";
		hideName=0;
		hidePicture=0;
		name="HelicopterSIB_MI17_new1";
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
					"HelicopterSIB_MI17_new1/4_World/"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_MI17_new1/3_Game/"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_MI17_new1/5_Mission/"
				};
			};
		};
	};
};


class CfgVehicles
{
	class MI17_Door_1_1;
	class MI17_doors_cargo1;
	class MI17_doors_cargo2;
	class MI17_doors_cargo1_new1: MI17_doors_cargo1
	{
		hiddenSelections[] = {"camo1_door","camo2_door","camo3_door"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_MI17_new1\data\fuselage_1_tra_co_new1.paa","HelicopterSIB_MI17_new1\data\fuselage_2_tra_co_new1.paa","HelicopterSIB_MI17_new1\data\landing_tra_co_new1.paa"};
	};
	class MI17_doors_cargo2_new1: MI17_doors_cargo2
	{
		hiddenSelections[] = {"camo1_door","camo2_door","camo3_door"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_MI17_new1\data\fuselage_1_tra_co_new1.paa","HelicopterSIB_MI17_new1\data\fuselage_2_tra_co_new1.paa","HelicopterSIB_MI17_new1\data\landing_tra_co_new1.paa"};
	};
	class MI17_Door_1_1_new1: MI17_Door_1_1
	{
		hiddenSelections[] = {"camo1_door","camo2_door","camo3_door"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_MI17_new1\data\fuselage_1_tra_co_new1.paa","HelicopterSIB_MI17_new1\data\fuselage_2_tra_co_new1.paa","HelicopterSIB_MI17_new1\data\landing_tra_co_new1.paa"};
	};
	class HeliMI17_SIB;
	class HeliMI17_SIB_clear;
	class HeliMI17_SIB_new1: HeliMI17_SIB
	{
		scope=2;
		displayName="MI17 new1";
		descriptionShort="";
		
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_MI17_new1\data\fuselage_1_tra_co_new1.paa","HelicopterSIB_MI17_new1\data\fuselage_2_tra_co_new1.paa","HelicopterSIB_MI17_new1\data\landing_tra_co_new1.paa","HelicopterSIB_MI17_new1\data\Interior_1_Tra_co_new1.paa","HelicopterSIB_MI17_new1\data\Interior_2_Tra_co_new1.paa"};
		
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","MI17_Door_1_1","MI17_doors_cargo1","MI17_doors_cargo2","Reflector_1_1","Reflector_2_1","CarBattery","MI17_blade1","MI17_blade2","MI17_blade3","MI17_blade4","MI17_blade5","MI17_bladem1","MI17_bladem2","MI17_bladem3","MI17_lesnica"};
		class GUIInventoryAttachmentsProps
		{
			class Chassis
			{
				name = "$STR_attachment_Chassis0";
				description = "";
				icon = "set:dayz_inventory image:cat_vehicle_chassis";
				attachmentSlots[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","MI17_lesnica"};
			};
			class Body 
			{
				name = "$STR_attachment_Body0";
				description = "";
				icon = "set:dayz_inventory image:cat_vehicle_body";
				attachmentSlots[] = {"MI17_Door_1_1","Reflector_1_1","Reflector_2_1"};
			};
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				attachmentSlots[] = {"CarBattery","MI17_blade1","MI17_blade2","MI17_blade3","MI17_blade4","MI17_blade5","MI17_bladem1","MI17_bladem2","MI17_bladem3"};
				icon = "set:dayz_inventory image:cat_vehicle_engine";
			};
			class Cargo 
			{
				itemsCargoSize[] = {10,100};
				allowOwnedCargoManipulation = 1;
				openable = 0;
			};
		};
	};
		class HeliMI17_SIB_new1_clear: HeliMI17_SIB_clear
		{
			scope=2;
			displayName="MI17 new1";
			descriptionShort="";
			
			hiddenSelections[] = {"camo1","camo2","camo3"};
			hiddenSelectionsTextures[] ={"HelicopterSIB_MI17_new1\data\fuselage_1_tra_co_new1.paa","HelicopterSIB_MI17_new1\data\fuselage_2_tra_co_new1.paa","HelicopterSIB_MI17_new1\data\landing_tra_co_new1.paa"};
		
			attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","MI17_Door_1_1","MI17_doors_cargo1","MI17_doors_cargo2","Reflector_1_1","Reflector_2_1","CarBattery","MI17_blade1","MI17_blade2","MI17_blade3","MI17_blade4","MI17_blade5","MI17_bladem1","MI17_bladem2","MI17_bladem3","MI17_lesnica"};
			class GUIInventoryAttachmentsProps
			{
				class Chassis
				{
					name = "$STR_attachment_Chassis0";
					description = "";
					icon = "set:dayz_inventory image:cat_vehicle_chassis";
					attachmentSlots[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","MI17_lesnica"};
				};
				class Body 
				{
					name = "$STR_attachment_Body0";
					description = "";
					icon = "set:dayz_inventory image:cat_vehicle_body";
					attachmentSlots[] = {"MI17_Door_1_1","Reflector_1_1","Reflector_2_1"};
				};
				class Engine
				{
					name = "$STR_attachment_Engine0";
					description = "";
					attachmentSlots[] = {"CarBattery","MI17_blade1","MI17_blade2","MI17_blade3","MI17_blade4","MI17_blade5","MI17_bladem1","MI17_bladem2","MI17_bladem3"};
					icon = "set:dayz_inventory image:cat_vehicle_engine";
				};
				class Cargo 
				{
					itemsCargoSize[] = {10,100};
					allowOwnedCargoManipulation = 1;
					openable = 0;
				};
			};
		};
};