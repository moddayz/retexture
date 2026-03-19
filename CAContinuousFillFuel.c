//razriv


modded class ActionFillFuel
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( !target || !IsTransport(target) )
			return false;

		if ( item.GetQuantity() <= 0 )
			return false;

		if ( item.GetLiquidType() != LIQUID_GASOLINE )
			return false;

		if (target.GetObject().IsDamageDestroyed())
			return false;
		
		CarScript car = CarScript.Cast(target.GetObject());
		Boat boat = Boat.Cast(target.GetObject());
		if (car)
		{
			if (car.m_typeVehicle > 0)return false;	
			if (car.GetFluidFraction( CarFluid.FUEL ) >= 0.98)
				return false;
		}
		else if (boat)
		{
			if ( boat.GetFluidFraction( BoatFluid.FUEL ) >= 0.98 )
				return false;
		}
		else 
			return false;

		array<string> selections = new array<string>;
		target.GetObject().GetActionComponentNameList(target.GetComponentIndex(), selections);

		Transport vehicle = Transport.Cast(target.GetObject());
		
		if ( vehicle )
		{
			for (int s = 0; s < selections.Count(); s++)
			{
				if ( selections[s] == vehicle.GetActionCompNameFuel() )
				{
					float dist = vector.DistanceSq( vehicle.GetRefillPointPosWS(), player.GetPosition() );

					if ( dist < vehicle.GetActionDistanceFuel() * vehicle.GetActionDistanceFuel() )
						return true;
				}
			}
		}

		return false;
	}
};

//razriv

class CAContinuousFillFuelSIB : CAContinuousBase
{
	protected float 				m_ItemQuantity;
	protected float 				m_SpentQuantity;
	protected float 				m_SpentQuantity_total;
	protected float 				m_EmptySpace; //basically free capacity
	protected float					m_TimeElpased;
	protected float 				m_QuantityUsedPerSecond;
	protected float 				m_AdjustedQuantityUsedPerSecond;
	protected float 				m_DefaultTimeStep;
	protected ref Param1<float>		m_SpentUnits;
	
	protected PlayerBase 			m_Player;
	
	void CAContinuousFillFuelSIB( float quantity_used_per_second, float time_to_progress )
	{
		m_QuantityUsedPerSecond = quantity_used_per_second;
		m_DefaultTimeStep = time_to_progress;
	}
	
	//---------------------------------------------------------------------------
	override void Setup( ActionData action_data )
	{

		m_Player = action_data.m_Player;
		m_TimeElpased = 0;
		m_SpentQuantity = 0;
		
		if ( !m_SpentUnits )
		{
			m_SpentUnits = new Param1<float>( 0 );
		}
		else
		{
			m_SpentUnits.param1 = 0;
		}
		
		HeliTest_SIB heli = HeliTest_SIB.Cast(action_data.m_Target.GetObject());
		if(heli)
		{
		float fuelCapacityHeli = heli.maxFuel;
        float currentFuelHeliX = heli.GetAnimationPhase("toplivo");	
		float currentFuelHeli = currentFuelHeliX /10;
		currentFuelHeli = currentFuelHeli * fuelCapacityHeli;
		m_EmptySpace = (fuelCapacityHeli - currentFuelHeli) * 1000;
		m_ItemQuantity = action_data.m_MainItem.GetQuantity();
		if ( m_EmptySpace <= m_ItemQuantity )m_ItemQuantity = m_EmptySpace;

		}

	}

	//---------------------------------------------------------------------------
	override int Execute( ActionData action_data  )
	{
		Car car = Car.Cast(action_data.m_Target.GetObject());

		if ( !action_data.m_Player )
		{
			return UA_ERROR;
		}
		
		if ( m_ItemQuantity <= 0 )
		{
			return UA_FINISHED;
		}
		else
		{
			if ( m_SpentQuantity_total < m_ItemQuantity )
			{
				m_AdjustedQuantityUsedPerSecond = action_data.m_Player.GetSoftSkillsManager().SubtractSpecialtyBonus( m_QuantityUsedPerSecond, m_Action.GetSpecialtyWeight(), true);
				m_SpentQuantity += m_AdjustedQuantityUsedPerSecond * action_data.m_Player.GetDeltaT();
				m_TimeElpased += action_data.m_Player.GetDeltaT();
				
				if ( m_TimeElpased >= m_DefaultTimeStep )
				{
					CalcAndSetQuantity( action_data );
					m_TimeElpased = 0;
					//Setup(action_data);	//reset data after repeat
				}
				
				return UA_PROCESSING;
			}
			else
			{
				CalcAndSetQuantity( action_data );
				OnCompletePogress(action_data);
				return UA_FINISHED;
			}
		}
	}
	
	//---------------------------------------------------------------------------
	override int Cancel( ActionData action_data )
	{

		if ( !action_data.m_Player )
		{
			return UA_ERROR;
		}
		
		CalcAndSetQuantity( action_data );
		return UA_INTERRUPT;
	}	
	
	//---------------------------------------------------------------------------
	override float GetProgress()
	{

		if ( m_ItemQuantity <= 0 )
			return 1;

		return -(m_SpentQuantity_total / m_ItemQuantity);
	}
	
	//---------------------------------------------------------------------------
	void CalcAndSetQuantity( ActionData action_data )
	{

		m_SpentQuantity_total += m_SpentQuantity;
	
		if ( m_SpentUnits )
		{
			m_SpentUnits.param1 = m_SpentQuantity;
			SetACData(m_SpentUnits);
		}
		
		
		if ( GetGame().IsServer() )
		{
			CarScript carS = CarScript.Cast(action_data.m_Target.GetObject());
			action_data.m_MainItem.AddQuantity( -m_SpentQuantity );
			HeliTest_SIB heli = HeliTest_SIB.Cast(action_data.m_Target.GetObject());
			if(heli)
			{
			float toplivo = heli.GetAnimationPhase("toplivo");	
			heli.SetAnimationPhase("toplivo",toplivo + (m_SpentQuantity * 0.00001)); 
			}
		}	
				m_SpentQuantity = 0;
	}
};

//razriv


class ActionFillFuelSIBCB : ActionContinuousBaseCB
{
	private const float TIME_TO_REPEAT = 0.5;

	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousFillFuelSIB( UAQuantityConsumed.FUEL, TIME_TO_REPEAT );
	}
};
//razriv

class ActionFillFuelSIB: ActionContinuousBase
{
	const string FUEL_SELECTION_NAME = "refill";
	
	void ActionFillFuelSIB()
	{
		m_CallbackClass = ActionFillFuelSIBCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_EMPTY_VESSEL;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_FullBody = true;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_LockTargetOnUse = false;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "#refuel";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target || !IsTransport(target) )
			return false;

		if( item.GetQuantity() <= 0 )
			return false;

		if( item.GetLiquidType() != LIQUID_GASOLINE )
			return false;

		Car car = Car.Cast( target.GetObject() );
		if( !car )
			return false;
		
	

		array<string> selections = new array<string>;
		target.GetObject().GetActionComponentNameList(target.GetComponentIndex(), selections);

		CarScript carS = CarScript.Cast(car);
		if (carS && carS.m_typeVehicle == 0)return false;	
		HeliTest_SIB heli = HeliTest_SIB.Cast(carS);
		if (!heli)return false;	
		float toplivo = heli.GetAnimationPhase("toplivo");
		float toplivo_value = ( toplivo * 100 );	
		if( toplivo_value >= heli.maxFuel)return false;
		
		
		
		
		if( carS )
		{
			for (int s = 0; s < selections.Count(); s++)
			{
				if ( selections[s] == carS.GetActionCompNameFuel() )
				{
					float dist = vector.Distance( carS.GetRefillPointPosWS(), player.GetPosition() );

					if ( dist < carS.GetActionDistanceFuel() )
						return true;
				}
			}
		}

		return false;
	}
};


//razriv

modded class Bottle_Base
{
	override void SetActions()
	{
		AddAction(ActionFillFuelSIB);
		super.SetActions();
	}
}