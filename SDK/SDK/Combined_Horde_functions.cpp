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


// Function Combined_Horde.Combined_Horde_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombined_Horde_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Combined_Horde_C", "PreConstruct");

	Params::UCombined_Horde_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Combined_Horde.Combined_Horde_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCombined_Horde_C::Construct()
{
	static auto Func = Class->GetFunction("Combined_Horde_C", "Construct");

	Params::UCombined_Horde_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Combined_Horde.Combined_Horde_C.ExecuteUbergraph_Combined_Horde
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCombined_Horde_C::ExecuteUbergraph_Combined_Horde(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("Combined_Horde_C", "ExecuteUbergraph_Combined_Horde");

	Params::UCombined_Horde_C_ExecuteUbergraph_Combined_Horde_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
