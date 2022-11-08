class HeliSIB_hommade_new1 extends HeliSIB_hommade
{
	override void EEInit()
	{
		super.EEInit();
		c_startSound = "Helicopter_hommade_Start_SoundSets";
		c_stopSound = "Helicopter_hommade_Stop_SoundSets";
		c_rotorSound = "Helicopter_hommade_Rotor_SoundSets";
		c_engineSound = "Helicopter_hommade_Engine_SoundSets";
		c_warningSound = "Helicopter_hommade_Warning_SoundSets";
		c_crashSound = "Helicopter_hommade_Crash_SoundSets";
	}
	override void creat_InInventory_heli()
	{
		if(IsKindOf("HeliSIB_hommade_new1"))
		{
			GetInventory().CreateInInventory( "hommade_blade1" );
			GetInventory().CreateInInventory( "hommade_blade2" );
			GetInventory().CreateInInventory( "hommade_bladem1" );
			GetInventory().CreateInInventory( "hommade_bladem2" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "CarRadiator" );
			return;
		}
		super.creat_InInventory_heli();
	};
};
//class HeliSIB_hommade_new1_clear extends HeliSIB_hommade_clear{};
