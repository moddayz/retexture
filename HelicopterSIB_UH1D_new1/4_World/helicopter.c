
class SIBUH1D_Door_1_1_new1 extends SIBUH1D_Door_1_1 {};
class SIBUH1D_Door_1_2_new1 extends SIBUH1D_Door_1_2 {};
class SIBUH1D_Door_2_1_new1 extends SIBUH1D_Door_2_1 {};
class SIBUH1D_Door_2_2_new1 extends SIBUH1D_Door_2_2 {};


class HeliSIB_UH1D_new1 extends HeliSIB_UH1D
{
	override void creat_InInventory_heli()
	{
		if(IsKindOf("HeliSIB_UH1D_new1"))
		{
			GetInventory().CreateInInventory( "SIBUH1D_Door_1_1_new1" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_1_2_new1" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_2_1_new1" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_2_2_new1" );

			GetInventory().CreateInInventory( "SIBUH1D_blade1" );
			GetInventory().CreateInInventory( "SIBUH1D_blade2" );
			GetInventory().CreateInInventory( "SIBUH1D_bladem1" );
			GetInventory().CreateInInventory( "SIBUH1D_bladem2" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		super.creat_InInventory_heli();
	};
};
//class HeliSIB_UH1D_new1_clear extends HeliSIB_UH1D_clear {};

