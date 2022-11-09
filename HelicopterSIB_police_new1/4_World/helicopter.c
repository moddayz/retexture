
class SIBPolice_Door_1_1_new1 extends SIBPolice_Door_1_1 {};
class SIBPolice_Door_1_2_new1 extends SIBPolice_Door_1_2 {};
class SIBPolice_Door_2_1_new1 extends SIBPolice_Door_2_1 {};
class SIBPolice_Door_2_2_new1 extends SIBPolice_Door_2_2 {};


class Helipolice_SIB4_new1 extends Helipolice_SIB4
{
	override void EEInit()
	{
		super.EEInit();
		c_startSound = "HelicopterStart_SoundSets_police";//Heli_police_start_SoundShaders
		c_stopSound = "HelicopterStop_SoundSets_police";//Heli_police_stop_SoundShaders
		c_engineSound = "HelicopterEngine_SoundSets_polices";//Heli_police_engine_SoundShaders
		c_rotorSound = "HelicopterRotor_SoundSets_police";//Heli_police_rotor_SoundShaders
		c_warningSound = "HelicopterWarning_SoundSets";//Heli_police_warning_SoundShaders
		c_crashSound = "HelicopterCrash_SoundSets";//Heli_police_police_crash_SoundShaders
	}
	override void creat_InInventory_heli()
	{
		if(IsKindOf("Helipolice_SIB4_new1"))
		{
			GetInventory().CreateInInventory( "SIBPolice_Door_1_1_new1" );
			GetInventory().CreateInInventory( "SIBPolice_Door_1_2_new1" );
			GetInventory().CreateInInventory( "SIBPolice_Door_2_1_new1" );
			GetInventory().CreateInInventory( "SIBPolice_Door_2_2_new1" );

			GetInventory().CreateInInventory( "SIBPolice_blade1" );
			GetInventory().CreateInInventory( "SIBPolice_blade2" );
			GetInventory().CreateInInventory( "SIBPolice_blade3" );
			GetInventory().CreateInInventory( "SIBPolice_blade4" );
			GetInventory().CreateInInventory( "SIBPolice_bladem1" );
			GetInventory().CreateInInventory( "SIBPolice_bladem2" );

			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		super.creat_InInventory_heli();
	};
};

//class Helipolice_SIB4_new1_clear extends Helipolice_SIB4_clear{};
