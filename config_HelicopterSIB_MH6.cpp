class CfgPatches
{
	class HelicopterSIB_MH6
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"HelicopterModScriptsSIB"};
	};
};
class CfgMods
{
	class HelicopterSIB_MH6
	{
		dir="HelicopterSIB_MH6";
		hideName=0;
		hidePicture=0;
		name="HelicopterSIB_MH6";
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
					"HelicopterSIB_MH-6/4_World/"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_MH-6/3_Game/"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_MH-6/5_Mission/"
				};
			};
		};
	};
};

class CfgSoundShaders
{
	class Heli_MH6_crash_SoundShaders
	{
		samples[] = {{"HelicopterSIB_MH-6\Sound\crash",1}};
		range = 250;
		volume = 1.0;
	};
	class Heli_MH6_warning_SoundShaders
	{
		samples[] = {{"HelicopterSIB_MH-6\Sound\warning",1}};
		range = 250;
		volume = 1.0;
	};
	class Heli_MH6_engine_SoundShaders
	{
		samples[] = {{"HelicopterSIB_MH-6\Sound\engine",1}};
		range = 700;
		volume = 1.5;
	};
	class Heli_MH6_rotor_SoundShaders
	{
		samples[] = {{"HelicopterSIB_MH-6\Sound\rotor",1}};
		range = 700;
		volume = 1.5;
	};
	class Heli_MH6_start_SoundShaders
	{
		samples[] = {{"HelicopterSIB_MH-6\Sound\start",1}};
		range = 500;
		volume = 1.5;
	};
	class Heli_MH6_stop_SoundShaders
	{
		samples[] = {{"HelicopterSIB_MH-6\Sound\stop",1}};
		range = 500;
		volume = 1.5;
	};
};
class CfgSoundSets
{
	class Heli_base_SoundSet
	{
		sound3DProcessingType = "character3DProcessingType";
		volumeCurve = "characterAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class HelicopterCrash_SoundSets_MH6: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_MH6_crash_SoundShaders"};
	};
	class HelicopterWarning_SoundSets_MH6: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_MH6_warning_SoundShaders"};
	};
	class HelicopterStart_SoundSets_MH6: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_MH6_start_SoundShaders"};
	};
	class HelicopterStop_SoundSets_MH6: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_MH6_stop_SoundShaders"};
	};
	class HelicopterEngine_SoundSets_MH6: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_MH6_engine_SoundShaders"};
		loop = 1;
	};
	class HelicopterRotor_SoundSets_MH6: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_MH6_rotor_SoundShaders"};
		loop = 1;
	};
};

class CfgVehicles
{
	
	
	class Crew;
	class SIB_blade;  
	class AnimationSources;
	class Sib_heliDoor;
	

	
	class SIBMH6_blade1:  SIB_blade
	{
		scope = 2;
		displayName = "Helicopter MH6 blade 1";
		descriptionShort = "MH6 blade 1";
		model = "\helicoptersib_mh-6\SIBMH6_blade1.p3d";
		inventorySlot[] = {"SIBMH6_blade1"};
		//rotationFlags = 8;
		physLayer="item_large";
		slopeTolerance = 0.4;
		yawPitchRollLimit[] = {45,45,45};
		weight = 10000;
		itemSize[] = {10,5};
		itemBehaviour = 0;
		carveNavmesh = 1;
		canBeDigged = 1;
		
		class AnimationSources
		{
			class box
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0;
			};
			class blade
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0;
			};
		};
	};
	class SIBMH6_blade2:  SIBMH6_blade1
	{
		scope = 2;
		displayName = "Helicopter MH6 blade 2";
		descriptionShort = "MH6 blade 2";
		model = "\helicoptersib_mh-6\SIBMH6_blade2.p3d";
		inventorySlot[] = {"SIBMH6_blade2"};
	};
	class SIBMH6_blade3:  SIBMH6_blade1
	{
		scope = 2;
		displayName = "Helicopter MH6 blade 3";
		descriptionShort = "MH6 blade 3";
		model = "\helicoptersib_mh-6\SIBMH6_blade3.p3d";
		inventorySlot[] = {"SIBMH6_blade3"};
	};
	class SIBMH6_blade4:  SIBMH6_blade1
	{
		scope = 2;
		displayName = "Helicopter MH6 blade 4";
		descriptionShort = "MH6 blade 4";
		model = "\helicoptersib_mh-6\SIBMH6_blade4.p3d";
		inventorySlot[] = {"SIBMH6_blade4"};
	};
	class SIBMH6_blade5:  SIBMH6_blade1
	{
		scope = 2;
		displayName = "Helicopter MH6 blade 5";
		descriptionShort = "MH6 blade 5";
		model = "\helicoptersib_mh-6\SIBMH6_blade5.p3d";
		inventorySlot[] = {"SIBMH6_blade5"};
	};
	class SIBMH6_bladem1:  SIBMH6_blade1
	{
		scope = 2;
		displayName = "Helicopter MH6 tail blade 1";
		descriptionShort = "MH6 tail blade 1";
		model = "\helicoptersib_mh-6\SIBMH6_bladem1.p3d";
		inventorySlot[] = {"SIBMH6_bladem1"};
	};
	class SIBMH6_bladem2:  SIBMH6_blade1
	{
		scope = 2;
		displayName = "Helicopter MH6 tail blade 2";
		descriptionShort = "MH6 tail blade 2";
		model = "\helicoptersib_mh-6\SIBMH6_bladem2.p3d";
		inventorySlot[] = {"SIBMH6_bladem2"};
	};
	
	
	
	
	class HeliSIB_little;
	class HeliSIB_MH6_base: HeliSIB_little
	{
		scope=1;
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","Reflector_1_1","Reflector_2_1","CarBattery","SIBMH6_blade1","SIBMH6_blade2","SIBMH6_blade3","SIBMH6_blade4","SIBMH6_blade5","SIBMH6_bladem1","SIBMH6_bladem2"};
		model="\helicoptersib_mh-6\MH6.p3d";
		class GUIInventoryAttachmentsProps
		{
			class Chassis
			{
				name = "$STR_attachment_Chassis0";
				description = "";
				icon = "set:dayz_inventory image:cat_vehicle_chassis";
				attachmentSlots[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2"};
			};
			class Body
			{
				name = "$STR_attachment_Body0";
				description = "";
				icon = "set:dayz_inventory image:cat_vehicle_body";
				attachmentSlots[] = {"Reflector_1_1","Reflector_2_1"};
			};
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				attachmentSlots[] = {"CarBattery","SIBMH6_blade1","SIBMH6_blade2","SIBMH6_blade3","SIBMH6_blade4","SIBMH6_blade5","SIBMH6_bladem1","SIBMH6_bladem2"};
				icon = "set:dayz_inventory image:cat_vehicle_engine";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3000;
					healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Body
				{
					fatalInjuryCoef = 0.001;
					memoryPoints[] = {"dmgzone_body"};
					componentNames[] = {"dmgzone_body"};
					class Health
					{
						hitpoints = 3000;
						transferToGlobalCoef = 1;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_destruct.rvmat"}}};
					};
					transferToZonesNames[] = {};
					inventorySlots[] = {};
				};
				class Chassis
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_chassis"};
					componentNames[] = {"dmgzone_chassis"};
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_destruct.rvmat"}}};
					};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class Engine
				{
					fatalInjuryCoef = 0.001;
					memoryPoints[] = {"dmgzone_engine"};
					componentNames[] = {"dmgzone_engine"};
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0.1;
						healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_destruct.rvmat"}}};
					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"SIBMH6_blade1","SIBMH6_blade2","SIBMH6_blade3","SIBMH6_blade4","SIBMH6_blade5"};
					inventorySlotsCoefs[] = {1,1,1,1,1};
				};
				class Fuel
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgzone_fuel"};
					memoryPoints[] = {"dmgzone_fuel"};
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlotsCoefs[] = {};
					inventorySlots[] = {};
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
				class Rotor1
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_rotor1"};
					componentNames[] = {"dmgzone_rotor1"};
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;
					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"SIBMH6_blade1","SIBMH6_blade2","SIBMH6_blade3","SIBMH6_blade4","SIBMH6_blade5"};
					inventorySlotsCoefs[] = {1,1,1,1,1};
				};
				class Rotor2
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_rotor2"};
					componentNames[] = {"dmgzone_rotor2"};
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"SIBMH6_bladem1","SIBMH6_bladem2"};
					inventorySlotsCoefs[] = {1,1};
				};
				class Proj
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgzone_proj"};
					memoryPoints[] = {"dmgzone_proj"};
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0;
					};
					transferToZonesNames[] = {};
					inventorySlotsCoefs[] = {0.1,0.1};
					inventorySlots[] = {"Reflector_1_1","Reflector_2_1"};
				};
			};
		};

		class Crew: Crew
		{
			class Driver
			{
				actionSel = "seat_driver";
				proxyPos = "crewDriver";
				getInPos = "pos_driver";
				getInDir = "pos_driver_dir";
				isDriver = 0;	
			};
			class CoDriver
			{
				actionSel = "seat_coDriver";
				proxyPos = "crewCoDriver";
				getInPos = "pos_coDriver";
				getInDir = "pos_coDriver_dir";
				isDriver = 0;	
			};
			class Cargo1
			{
				actionSel = "seat_cargo1";
				proxyPos = "crewcargo1";
				getInPos = "pos_cargo1";
				getInDir = "pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel = "seat_cargo2";
				proxyPos = "crewcargo2";
				getInPos = "pos_cargo2";
				getInDir = "pos_cargo2_dir";
			};
			
			
		};

	
	};
	class HeliMH6_SIB: HeliSIB_MH6_base
	{
		scope=2;
		displayName="MH6";
		descriptionShort="MH6";
	};
	class HeliMH6_SIB_clear: HeliSIB_MH6_base
	{
		scope=2;
		displayName="MH6";
		descriptionShort="MH6";
	};
	class HeliMH6_SIB_d: HeliMH6_SIB
	{
		scope=2;
		displayName="MH6D";
		descriptionShort="MH6D";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"helicoptersib_mh-6\data\ah6ext_d.paa"};
	};
	class HeliMH6_SIB_d_clear: HeliMH6_SIB_clear
	{
		scope=2;
		displayName="MH6D";
		descriptionShort="MH6D";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"helicoptersib_mh-6\data\ah6ext_d.paa"};
	};
};
	
class CfgSlots
{
	
	class Slot_SIBMH6_blade1
	{
		name="SIBMH6_blade1";
		displayName="MH6 blade 1";
		ghostIcon="doorrear";
	};
	class Slot_SIBMH6_blade2
	{
		name="SIBMH6_blade2";
		displayName="MH6 blade 2";
		ghostIcon="doorrear";
	};
	class Slot_SIBMH6_blade3
	{
		name="SIBMH6_blade3";
		displayName="MH6 blade 3";
		ghostIcon="doorrear";
	};
	class Slot_SIBMH6_blade4
	{
		name="SIBMH6_blade4";
		displayName="MH6 blade 4";
		ghostIcon="doorrear";
	};
	class Slot_SIBMH6_blade5
	{
		name="SIBMH6_blade5";
		displayName="MH6 blade 5";
		ghostIcon="doorrear";
	};
	class Slot_SIBMH6_bladem1
	{
		name="SIBMH6_bladem1";
		displayName="MH6 tail blade 1";
		ghostIcon="doorrear";
	};
	class Slot_SIBMH6_bladem2
	{
		name="SIBMH6_bladem2";
		displayName="MH6 tail blade 2";
		ghostIcon="doorrear";
	};
};

class CfgNonAIVehicles
{
	class ProxyVehiclePart;
	
	class ProxySIBMH6_blade1: ProxyVehiclePart
	{
		model = "\helicoptersib_mh-6\SIBMH6_blade1.p3d";
		inventorySlot = "SIBMH6_blade1";
	};
	class ProxySIBMH6_blade2: ProxyVehiclePart
	{
		model = "\helicoptersib_mh-6\SIBMH6_blade2.p3d";
		inventorySlot = "SIBMH6_blade2";
	};
	class ProxySIBMH6_blade3: ProxyVehiclePart
	{
		model = "\helicoptersib_mh-6\SIBMH6_blade3.p3d";
		inventorySlot = "SIBMH6_blade3";
	};
	class ProxySIBMH6_blade4: ProxyVehiclePart
	{
		model = "\helicoptersib_mh-6\SIBMH6_blade4.p3d";
		inventorySlot = "SIBMH6_blade4";
	};

	class ProxySIBMH6_blade5: ProxyVehiclePart
	{
		model = "\helicoptersib_mh-6\SIBMH6_blade5.p3d";
		inventorySlot = "SIBMH6_blade5";
	};

	class ProxySIBMH6_bladem1: ProxyVehiclePart
	{
		model = "\helicoptersib_mh-6\SIBMH6_bladem1.p3d";
		inventorySlot = "SIBMH6_bladem1";
	};
	class ProxySIBMH6_bladem2: ProxyVehiclePart
	{
		model = "\helicoptersib_mh-6\SIBMH6_bladem2.p3d";
		inventorySlot = "SIBMH6_bladem2";
	};
};