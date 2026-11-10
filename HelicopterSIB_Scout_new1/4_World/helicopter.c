
class Sib_Scout_mk_Door_1_1_new1 extends Sib_Scout_mk_Door_1_1 {};
class Sib_Scout_mk_Door_1_2_new1 extends Sib_Scout_mk_Door_1_2 {};
class Sib_Scout_mk_Door_2_1_new1 extends Sib_Scout_mk_Door_2_1 {};
class Sib_Scout_mk_Door_2_2_new1 extends Sib_Scout_mk_Door_2_2 {};

class HeliScout_mk_SIB_new1 extends HeliScout_mk_SIB
{
	override void EEInit()
	{
		super.EEInit();
		c_startSound = "HelicopterStart_SoundSets_Sib_Scout_mk";
		c_stopSound = "HelicopterStop_SoundSets_Sib_Scout_mk";
		c_engineSound = "HelicopterEngine_SoundSets_Sib_Scout_mk";
		c_rotorSound = "HelicopterRotor_SoundSets_Sib_Scout_mk";
		c_fuelDistance = 7;
	}

	override void creat_InInventory_heli()
	{
		if(IsKindOf("HeliScout_mk_SIB_new1"))
		{
			GetInventory().CreateInInventory( "Sib_Scout_mk_Door_1_1_new1" );
			GetInventory().CreateInInventory( "Sib_Scout_mk_Door_1_2_new1" );
			GetInventory().CreateInInventory( "Sib_Scout_mk_Door_2_1_new1" );
			GetInventory().CreateInInventory( "Sib_Scout_mk_Door_2_2_new1" );
			GetInventory().CreateInInventory( "Sib_Scout_mk_blade1" );
			GetInventory().CreateInInventory( "Sib_Scout_mk_blade2" );
			GetInventory().CreateInInventory( "Sib_Scout_mk_blade3" );
			GetInventory().CreateInInventory( "Sib_Scout_mk_blade4" );
			GetInventory().CreateInInventory( "Sib_Scout_mk_bladem1" );
			GetInventory().CreateInInventory( "Sib_Scout_mk_bladem2" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}	
		super.creat_InInventory_heli();
	};
};
class HeliScout_mk_SIB_clear_new1 extends HeliScout_mk_SIB_clear{};