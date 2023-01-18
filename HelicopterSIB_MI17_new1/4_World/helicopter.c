
class MI17_Door_1_1_new1 extends Sib_heliDoor {};


class HeliMI17_SIB_new1 extends HeliMI17_SIB
{
	override void creat_InInventory_heli()
	{
		if(IsKindOf("HeliMI17_SIB_new1"))
		{			
			GetInventory().CreateInInventory( "MI17_doors_cargo1" );
			GetInventory().CreateInInventory( "MI17_doors_cargo2" );
			GetInventory().CreateInInventory( "MI17_Door_1_1_new1" );
			GetInventory().CreateInInventory( "MI17_lesnica" );

			GetInventory().CreateInInventory( "MI17_blade1" );
			GetInventory().CreateInInventory( "MI17_blade2" );
			GetInventory().CreateInInventory( "MI17_blade3" );
			GetInventory().CreateInInventory( "MI17_blade4" );
			GetInventory().CreateInInventory( "MI17_blade5" );
			GetInventory().CreateInInventory( "MI17_bladem1" );
			GetInventory().CreateInInventory( "MI17_bladem2" );
			GetInventory().CreateInInventory( "MI17_bladem3" );

			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		super.creat_InInventory_heli();
	};
};
class HeliMI17_SIB_new1_clear extends HeliMI17_SIB_clear {};

