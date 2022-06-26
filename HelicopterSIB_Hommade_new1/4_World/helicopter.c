class HeliSIB_hommade_new1 extends HeliSIB_hommade
{
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