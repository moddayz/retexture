

class SIB_luxury_doors_driver_new1 extends SIB_luxury_doors_driver {};




class luxury_boat_SIB0_new1 extends luxury_boat_base
{
	override void EEInit()
	{
		super.EEInit();
		c_startSound = "Boat_luxury_Start_SoundSets";
		c_stopSound = "Boat_luxury_Stop_SoundSets";
		c_idleSound = "Boat_luxury_Idle_SoundSets";
		c_lowSound = "Boat_luxury_Low_SoundSets";
		c_midSound = "Boat_luxury_Mid_SoundSets";
		c_highSound = "Boat_luxury_High_SoundSets";
		c_voda_0 = "Boat_luxury_Voda_0_SoundSets";
		c_voda_20 = "Boat_luxury_Voda_20_SoundSets";
		c_voda_50 = "Boat_luxury_Voda_50_SoundSets";
	}
	override void creat_InInventory_Boat()
	{
		if(IsKindOf("luxury_boat_SIB0_new1"))
		{
			GetInventory().CreateInInventory( "SIB_luxury_doors_driver_new1" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "SparkPlug" );
			return;
		}
		super.creat_InInventory_Boat();
	};
	

	
	
	
};

class luxury_boat_SIB0_clear_new1 extends luxury_boat_SIB0_clear{};
