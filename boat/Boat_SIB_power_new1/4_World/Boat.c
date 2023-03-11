
class powerboat_boat_SIB0_new1 extends powerboat_boat_base
{
	override void EEInit()
	{
		super.EEInit();
		c_startSound = "powerboat_Start_SoundSets";
		c_stopSound = "powerboat_Stop_SoundSets";
		c_idleSound = "powerboat_Idle_SoundSets";
		c_lowSound = "powerboat_Low_SoundSets";
		c_midSound = "powerboat_Mid_SoundSets";
		c_highSound = "powerboat_High_SoundSets";
		c_voda_0 = "powerboat_Voda_0_SoundSets";
		c_voda_20 = "powerboat_Voda_20_SoundSets";
		c_voda_50 = "powerboat_Voda_50_SoundSets";
	}

	override void creat_InInventory_Boat()
	{
		if(IsKindOf("powerboat_boat_SIB0_new1"))
		{
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "SparkPlug" );
			return;
		}
		super.creat_InInventory_Boat();
	};
};

class powerboat_boat_SIB0_clear_new1 extends powerboat_boat_SIB0_clear{};
