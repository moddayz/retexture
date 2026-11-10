
class SIBXH9_Door_1_1_new1 extends SIBXH9_Door_1_1 {};
class SIBXH9_Door_2_1_new1 extends SIBXH9_Door_2_1 {};

class HeliXH9_SIB_new1 extends HeliXH9_SIB
{
	override void EEInit()
	{
		super.EEInit();
		c_startSound = "HelicopterSIBXH9_Start_SoundSets";
		c_stopSound = "HelicopterSIBXH9_Stop_SoundSets";
		c_engineSound = "HelicopterSIBXH9_Engine_SoundSets";
		c_rotorSound = "HelicopterSIBXH9_Rotor_SoundSets";
	}

	override void creat_InInventory_heli()
	{
		if(IsKindOf("HeliXH9_SIB_new1"))
		{
			GetInventory().CreateInInventory( "SIBXH9_Door_1_1_new1" );
			GetInventory().CreateInInventory( "SIBXH9_Door_2_1_new1" );
			GetInventory().CreateInInventory( "SIBXH9_blade1" );
			GetInventory().CreateInInventory( "SIBXH9_blade2" );
			GetInventory().CreateInInventory( "SIBXH9_bladem1" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}		
		super.creat_InInventory_heli();
	};
};
class HeliXH9_SIB_clear_new1 extends HeliXH9_SIB_clear{};