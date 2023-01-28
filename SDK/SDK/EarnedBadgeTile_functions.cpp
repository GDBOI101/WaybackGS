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


// Function EarnedBadgeTile.EarnedBadgeTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEarnedBadgeTile_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("EarnedBadgeTile_C", "PreConstruct");

	Params::UEarnedBadgeTile_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EarnedBadgeTile.EarnedBadgeTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEarnedBadgeTile_C::Construct()
{
	static auto Func = Class->GetFunction("EarnedBadgeTile_C", "Construct");

	Params::UEarnedBadgeTile_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EarnedBadgeTile.EarnedBadgeTile_C.ExecuteUbergraph_EarnedBadgeTile
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEarnedBadgeTile_C::ExecuteUbergraph_EarnedBadgeTile(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility Temp_byte_Variable2, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("EarnedBadgeTile_C", "ExecuteUbergraph_EarnedBadgeTile");

	Params::UEarnedBadgeTile_C_ExecuteUbergraph_EarnedBadgeTile_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
