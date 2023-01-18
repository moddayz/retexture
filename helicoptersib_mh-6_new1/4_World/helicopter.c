


class HeliMH6_SIB_new1 extends HeliMH6_SIB
{
	override void EEInit()
	{
		super.EEInit();
		c_startSound = "HelicopterStart_SoundSets_MH6";//Heli_MH6_start_SoundShaders
		c_stopSound = "HelicopterStop_SoundSets_MH6";//Heli_MH6_stop_SoundShaders
		c_engineSound = "HelicopterEngine_SoundSets_MH6";//Heli_MH6_engine_SoundShaders
		c_rotorSound = "HelicopterRotor_SoundSets_MH6";//Heli_MH6_rotor_SoundShaders
		c_warningSound = "HelicopterWarning_SoundSets";//Heli_MH6_warning_SoundShaders
		c_crashSound = "HelicopterCrash_SoundSets";//Heli_MH6_crash_SoundShaders
	}
	
	override void creat_InInventory_heli()
	{
		if(IsKindOf("HeliMH6_SIB_new1"))
		{
			//GetInventory().CreateInInventory( "MH6_Door_1_1" );
			//GetInventory().CreateInInventory( "MH6_Door_1_2" );
			//GetInventory().CreateInInventory( "MH6_Door_2_1" );
			//GetInventory().CreateInInventory( "MH6_Door_2_2" );

			GetInventory().CreateInInventory( "SIBMH6_blade1" );
			GetInventory().CreateInInventory( "SIBMH6_blade2" );
			GetInventory().CreateInInventory( "SIBMH6_blade3" );
			GetInventory().CreateInInventory( "SIBMH6_blade4" );
			GetInventory().CreateInInventory( "SIBMH6_blade5" );
			GetInventory().CreateInInventory( "SIBMH6_bladem1" );
			GetInventory().CreateInInventory( "SIBMH6_bladem2" );

			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		super.creat_InInventory_heli();
	};
};

class HeliMH6_SIB_new1_clear extends HeliMH6_SIB_clear{};
