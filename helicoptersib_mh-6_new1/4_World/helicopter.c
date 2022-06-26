


class HeliMH6_SIB_new1 extends HeliMH6_SIB
{
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
