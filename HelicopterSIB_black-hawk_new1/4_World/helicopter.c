

class SIBblack_hawk_Door_1_1_new1 extends SIBblack_hawk_Door_1_1 {};
class SIBblack_hawk_Door_1_2_new1 extends SIBblack_hawk_Door_1_2 {};
class SIBblack_hawk_Door_2_1_new1 extends SIBblack_hawk_Door_2_1 {};
class SIBblack_hawk_Door_2_2_new1 extends SIBblack_hawk_Door_2_2 {};

class Heliblack_hawk_SIB_new1 extends Heliblack_hawk_SIB
{
	override void creat_InInventory_heli()
	{
		if(IsKindOf("Heliblack_hawk_SIB_new1"))
		{
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_1_1_new1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_1_2_new1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_2_1_new1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_Door_2_2_new1" );
			
			GetInventory().CreateInInventory( "SIBblack_hawk_blade1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade3" );
			GetInventory().CreateInInventory( "SIBblack_hawk_blade4" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem1" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem2" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem3" );
			GetInventory().CreateInInventory( "SIBblack_hawk_bladem4" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}		
		super.creat_InInventory_heli();
	};
};
//class Heliblack_hawk_SIB_new1_clear extends Heliblack_hawk_SIB_clear{};