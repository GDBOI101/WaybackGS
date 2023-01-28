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


// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.AlertPlayer
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// enum class EAthenaPlayerActionAlertAlert                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        DetailText                                                       (ConstParm, Parm, OutParm, ReferenceParm)

void UAthenaPlayerActionAlert_C::AlertPlayer(enum class EAthenaPlayerActionAlert Alert, class FText& DetailText)
{
	static auto Func = Class->GetFunction("AthenaPlayerActionAlert_C", "AlertPlayer");

	Params::UAthenaPlayerActionAlert_C_AlertPlayer_Params Parms;
	Parms.Alert = Alert;
	Parms.DetailText = DetailText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerActionAlert_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("AthenaPlayerActionAlert_C", "OnAnimationFinished");

	Params::UAthenaPlayerActionAlert_C_OnAnimationFinished_Params Parms;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.ExecuteUbergraph_AthenaPlayerActionAlert
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaPlayerActionAlertK2Node_Event_Alert                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_DetailText                                          (ConstParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaPlayerActionAlertTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerActionAlert_C::ExecuteUbergraph_AthenaPlayerActionAlert(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable2, enum class EAthenaPlayerActionAlert K2Node_Event_Alert, class FText K2Node_Event_DetailText, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable3, class UWidgetAnimation* K2Node_Event_Animation, enum class EAthenaPlayerActionAlert Temp_byte_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaPlayerActionAlert_C", "ExecuteUbergraph_AthenaPlayerActionAlert");

	Params::UAthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Event_Alert = K2Node_Event_Alert;
	Parms.K2Node_Event_DetailText = K2Node_Event_DetailText;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
