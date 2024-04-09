class CfgPatches
{
	class HelicopterModScriptsSIB
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Wheeled","DZ_Scripts","DZ_Data"};
	};
};
class CfgMods
{ 
	class HelicopterModScriptsSIB
	{
		dir = "HelicopterModScripts";
		hideName = 0;
		hidePicture = 0;
		name = "Helicopter";
		credits = "";
		author = "SIBNIC";
		inputs = "HelicopterModScripts/modded_Inputs.xml";
		authorID = "";
		version = "version 3";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class imageSets
			{
				files[] = {"HelicopterModScripts/GUI/Textures.imageset"};
			};
			class worldScriptModule
			{ 
				value = "";
				files[] = {"HelicopterModScripts/4_World/"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"HelicopterModScripts/3_Game/"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"HelicopterModScripts/5_Mission/"};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class RGD5Grenade;
	class CarDoor;
	class SIB_blade: Inventory_Base
	{
		scope = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_destruct.rvmat"}}};
				};
			};
		};
		
	};
	class Sib_heliDoor: CarDoor
	{
		scope = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1500;
					healthLevels[] = {{1.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_destruct.rvmat"}}};
				};
			};
		};
	};
	class RGD5Grenade_sib: RGD5Grenade
	{
		
	};
	class CarScript;
	class Heli_sib_cript: CarScript
	{
		scope = 1;
		rotationFlags = 64;
		storageCategory = 4;
		insideSoundCoef = 0.9;
		fuelCapacity = 50;
		brakeFluidCapacity = 1;
		oilCapacity = 4;
		coolantCapacity = 6;
		brakeFluidLeakDebit[] = {0.0,0.0};
		oilLeakDebit[] = {0.0,0.0};
		coolantLeakDebit[] = {0.0,0.0};
		brakeFluidForceCoef[] = {0.0,1.0,1.0,1.0};
		damageFromOil[] = {0.0,0.0,1.0,0.0};
		damageFromCoolant[] = {0.0,0.0,1.0,0.0};
		engineBeltSlot = "EngineBelt";
		batterySlot = "CarBattery";
		electricPowerResName = "power";
		electricConsumptionIgnition = 3001;
		electricConsumptionEngine = 0.0;
		electricConsumptionLights = 0.0;
		electricOutputEngine = 5.0;
		selectionDashboard = "light_dashboard";
		selectionLightFrontL = "light_left";
		selectionLightFrontR = "light_right";
		selectionBrakeLights = "light_break";
		class Crew
		{
			class Driver
			{
				actionSel = "seat_driver";
				proxyPos = "crewDriver";
				getInPos = "pos_driver";
				getInDir = "pos_driver_dir";
				isDriver = 1;
			};
			class CoDriver
			{
				actionSel = "seat_coDriver";
				proxyPos = "crewCoDriver";
				getInPos = "pos_coDriver";
				getInDir = "pos_coDriver_dir";
			};
		};
		class SimulationModule
		{
			class Axles
			{
				class Front
				{
					class Wheels
					{
						class Left
						{
							inventorySlot = "";
							animTurn = "turnfrontleft";
							animRotation = "wheelfrontleft";
							animDamper = "damperfrontleft";
							wheelHub = "wheel_1_1_damper_land";
						};
						class Right
						{
							inventorySlot = "";
							animTurn = "turnfrontright";
							animRotation = "wheelfrontright";
							animDamper = "damperfrontright";
							wheelHub = "wheel_2_1_damper_land";
						};
					};
				};
				class Rear
				{
					class Wheels
					{
						class Left
						{
							inventorySlot = "";
							animTurn = "turnbackleft";
							animRotation = "wheelbackleft";
							animDamper = "damperbackleft";
							wheelHub = "wheel_1_2_damper_land";
						};
						class Right
						{
							inventorySlot = "";
							animTurn = "turnbackright";
							animRotation = "wheelbackright";
							animDamper = "damperbackright";
							wheelHub = "wheel_2_2_damper_land";
						};
					};
				};
			};
		};
		attachments[] = {""};
		class AnimationSources
		{
			class DoorsDriver
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class DoorsCoDriver: DoorsDriver{};
			class DoorsHood: DoorsDriver{};
			class DoorsTrunk: DoorsDriver{};
			class HideDestroyed_1_1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class HideDestroyed_1_2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class HideDestroyed_2_1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class HideDestroyed_2_2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.001;
			};
			class AnimHitWheel_1_1
			{
				source = "Hit";
				hitpoint = "HitWheel_1_1";
				raw = 1;
			};
			class AnimHitWheel_1_2: AnimHitWheel_1_1
			{
				hitpoint = "HitWheel_1_2";
			};
			class AnimHitWheel_2_1: AnimHitWheel_1_1
			{
				hitpoint = "HitWheel_2_1";
			};
			class AnimHitWheel_2_2: AnimHitWheel_1_1
			{
				hitpoint = "HitWheel_2_2";
			};
			class HitDoorsHood: AnimHitWheel_1_1
			{
				hitpoint = "HitDoorsHood";
			};
			class HitDoorsTrunk: AnimHitWheel_1_1
			{
				hitpoint = "HitDoorsTrunk";
			};
			class HitDoorsDrivers: AnimHitWheel_1_1
			{
				hitpoint = "HitDoorsDriver";
			};
			class HitDoorsCoDrivers: AnimHitWheel_1_1
			{
				hitpoint = "HitDoorsCoDriver";
			};
			class HitDoorsCargo: AnimHitWheel_1_1
			{
				hitpoint = "HitDoorsCargo";
			};
		};
	};
	class HeliTest_SIB: Heli_sib_cript
	{
		scope = 1;
		fuelCapacity = 42;
		fuelConsumption = 11;
		class Crew: Crew
		{
			class Driver: Driver
			{
				isDriver = 0;
			};
			class CoDriver: CoDriver{};
			class Cargo1
			{
				actionSel = "seat_cargo1";
				proxyPos = "crewCargo1";
				getInPos = "pos_cargo1";
				getInDir = "pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel = "seat_cargo2";
				proxyPos = "crewCargo2";
				getInPos = "pos_cargo2";
				getInDir = "pos_cargo2_dir";
			};
		};
		class SimulationModule: SimulationModule
		{
			drive = "DRIVE_AWD";
			airDragCoefficient = 0.995;
			class Steering
			{
				increaseSpeed[] = {0,45,60,23,100,12};
				decreaseSpeed[] = {0,80,60,40,90,20};
				centeringSpeed[] = {0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime = 1.0;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 4.0;
				gentleCoef = 0.75;
			};
			braking[] = {0.0,0.1,1.0,0.8,2.5,0.9,3.0,1.0};
			class Engine
			{
				inertia = 0.15;
				torqueMax = 114;
				torqueRpm = 3400;
				powerMax = 53.7;
				powerRpm = 5400;
				rpmIdle = 850;
				rpmMin = 900;
				rpmClutch = 1350;
				rpmRedline = 6000;
				rpmMax = 8000;
			};
			class Gearbox
			{
				reverse = 3.526;
				ratios[] = {3.667,2.1,1.361,1.0};
				timeToUncoupleClutch = 0.3;
				timeToCoupleClutch = 0.45;
				maxClutchTorque = 260;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxSteeringAngle = 30;
					finalRatio = 4.1;
					brakeBias = 0.6;
					brakeForce = 4000;
					wheelHubMass = 5;
					wheelHubRadius = 0.15;
					class Suspension
					{
						swayBar = 1700;
						stiffness = 40000;
						compression = 2100;
						damping = 7500;
						travelMaxUp = 0.0882;
						travelMaxDown = 0.0833;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper = "damper_1_1";
							inventorySlot = "NivaWheel_1_1";
						};
						class Right: Right
						{
							animDamper = "damper_2_1";
							inventorySlot = "NivaWheel_2_1";
						};
					};
				};
				class Rear: Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 4.1;
					brakeBias = 0.4;
					brakeForce = 3800;
					wheelHubMass = 5;
					wheelHubRadius = 0.15;
					class Suspension
					{
						swayBar = 1800;
						stiffness = 40000;
						compression = 2200;
						damping = 7600;
						travelMaxUp = 0.1587;
						travelMaxDown = 0.1059;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper = "damper_1_2";
							inventorySlot = "NivaWheel_1_2";
						};
						class Right: Right
						{
							animDamper = "damper_2_2";
							inventorySlot = "NivaWheel_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class AnimationSources: AnimationSources
		{
			class DoorsCargo1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class DoorsCargo2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class damper_1_1
			{
				source = "user";
				initPhase = 0.4857;
				animPeriod = 1;
			};
			class damper_2_1: damper_1_1{};
			class damper_1_2
			{
				source = "user";
				initPhase = 0.4002;
				animPeriod = 1;
			};
			class damper_2_2: damper_1_2{};
			class hide_rotor
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class hide_start
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class toplivo
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class rezerv1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class rezerv2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class rezerv3
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class rot_h_start
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.5;
			};
			class rot2_h_start
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.5;
			};
			class rot_h_blur_end
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class rot2_h_blur_end
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class HorizonBankdetect
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.1;
			};
			class HorizonDivedetect
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.1;
			};
			class compassdetect
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.1;
			};
			class rpmdetect
			{
				source = "user";
				initPhase = 0;
				animPeriod = 3;
			};
			class toplivodetect
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
			};
			class visotadetect
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.1;
			};
			class visota_num_detect
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.1;
			};
			class visota_num_detect2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.1;
			};
			class speed
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
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
						hitpoints = 6000;
						transferToGlobalCoef = 0.001;
					};
					transferToZonesNames[] = {};
					inventorySlots[] = {};
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
				class Chassis
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_chassis"};
					componentNames[] = {"dmgzone_chassis"};
					class Health
					{
						hitpoints = 3000;
						transferToGlobalCoef = 0;
					};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
				class Engine
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_engine"};
					componentNames[] = {"dmgzone_engine"};
					class Health
					{
						hitpoints = 3000;
						transferToGlobalCoef = 0;
					};
					transferToZonesNames[] = {};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
				class Fuel
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgzone_fuel"};
					memoryPoints[] = {"dmgzone_fuel"};
					class Health
					{
						hitpoints = 700;
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
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					transferToZonesNames[] = {};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
				class Rotor2
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_rotor2"};
					componentNames[] = {"dmgzone_rotor2"};
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					transferToZonesNames[] = {};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
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
					inventorySlotsCoefs[] = {};
					inventorySlots[] = {"Reflector_1_1","Reflector_2_1"};
				};
			};
		};
		class ObstacleGenerator
		{
			carve = 1;
			timeToStationary = 5.0;
			moveThreshold = 0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,0.7};
					};
					class Cyl3
					{
						radius = 1.0;
						height = 1.5;
						center[] = {0,0,-0.7};
					};
				};
			};
		};
	};
	class HeliSIB_big: HeliTest_SIB
	{
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliSIB_middle: HeliTest_SIB
	{
		class Cargo
		{
			itemsCargoSize[] = {10,80};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliSIB_little: HeliTest_SIB
	{
		class Cargo
		{
			itemsCargoSize[] = {10,50};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliSIB_minimal: HeliTest_SIB
	{
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliSIB_none: HeliTest_SIB
	{
		class Cargo
		{
			itemsCargoSize[] = {0,0};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
};
