

class SIBEC135_Door_1_1_new1 extends SIBec135_Door_1_1 {};
class SIBEC135_Door_1_2_new1 extends SIBec135_Door_1_2 {};
class SIBEC135_Door_2_1_new1 extends SIBec135_Door_2_1 {};
class SIBEC135_Door_2_2_new1 extends SIBec135_Door_2_2 {};


class HeliSIB_EC135_new1 extends Heliec135_SIB
{
	//override void EEInit()
	//{
	//	super.EEInit();
	//	c_startSound = "Helicopter_EC135_Start_SoundSets";//Heli_EC135_start_SoundShaders
	//	c_stopSound = "Helicopter_EC135_Stop_SoundSets";//Heli_EC135_stop_SoundShaders
	//	c_rotorSound = "Helicopter_EC135_Rotor_SoundSets";//Heli_EC135_rotor_SoundShaders
	//	c_engineSound = "Helicopter_EC135_Engine_SoundSets";//Heli_EC135_engine_SoundShaders1
	//	c_warningSound = "Helicopter_EC135_Warning_SoundSets";//Heli_EC135_warning_SoundShaders
	//	c_crashSound = "Helicopter_EC135_Crash_SoundSets";//Heli_EC135_crash_SoundShaders
	//}
	override void creat_InInventory_heli()
	{
		if(IsKindOf("HeliSIB_EC135_new1"))
		{
			GetInventory().CreateInInventory( "SIBEC135_Door_1_1_new1" );
			GetInventory().CreateInInventory( "SIBEC135_Door_1_2_new1" );
			GetInventory().CreateInInventory( "SIBEC135_Door_2_1_new1" );
			GetInventory().CreateInInventory( "SIBEC135_Door_2_2_new1" );
			
			GetInventory().CreateInInventory( "SIBEC135_blade1" );
			GetInventory().CreateInInventory( "SIBEC135_blade2" );
			GetInventory().CreateInInventory( "sibec135_blade3" );
			GetInventory().CreateInInventory( "sibec135_blade4" );
			GetInventory().CreateInInventory( "sibec135_impeller1" );
			GetInventory().CreateInInventory( "sibec135_impeller2" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		super.creat_InInventory_heli();
	};
};
class HeliSIB_EC135_new1_clear extends Heliec135_SIB_clear {};

