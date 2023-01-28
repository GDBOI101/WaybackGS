#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function T4_Horde.T4_Horde_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UT4_Horde_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("T4_Horde_C", "PreConstruct");

	Params::UT4_Horde_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function T4_Horde.T4_Horde_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UT4_Horde_C::Construct()
{
	static auto Func = Class->GetFunction("T4_Horde_C", "Construct");

	Params::UT4_Horde_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function T4_Horde.T4_Horde_C.ExecuteUbergraph_T4_Horde
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UT4_Horde_C::ExecuteUbergraph_T4_Horde(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("T4_Horde_C", "ExecuteUbergraph_T4_Horde");

	Params::UT4_Horde_C_ExecuteUbergraph_T4_Horde_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
