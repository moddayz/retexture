

class SIB_fishing_doors_driver_new1 extends SIB_fishing_doors_driver {};
class fishing_boat_SIB0_new1 extends fishing_boat_base
{
	override void EEInit()
	{
		super.EEInit();
		c_startSound = "fishing_boat_Start_SoundSets";
		c_stopSound = "fishing_boat_Stop_SoundSets";
		c_idleSound = "fishing_boat_Idle_SoundSets";
		c_lowSound = "fishing_boat_Low_SoundSets";
		c_midSound = "fishing_boat_Mid_SoundSets";
		c_highSound = "fishing_boat_High_SoundSets";
		c_voda_0 = "fishing_boat_Voda_0_SoundSets";
		c_voda_20 = "fishing_boat_Voda_20_SoundSets";
		c_voda_50 = "fishing_boat_Voda_50_SoundSets";
	}

	override void creat_InInventory_Boat()
	{
		if(IsKindOf("fishing_boat_SIB0_new1"))
		{
			GetInventory().CreateInInventory( "SIB_fishing_doors_driver_new1" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "SparkPlug" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		super.creat_InInventory_Boat();
	};
};

//class fishing_boat_SIB0_clear_new1 extends fishing_boat_SIB0_clear{};
class fishing_boat_SIB0_clear_new1 extends fishing_boat_base{};
