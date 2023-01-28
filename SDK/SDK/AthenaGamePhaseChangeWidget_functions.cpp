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


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.PlayGamePhaseAlertSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhaseStep    Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaGamePhaseStep    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaGamePhaseChangeWidget_C::PlayGamePhaseAlertSound(enum class EAthenaGamePhaseStep Index, enum class EAthenaGamePhaseStep Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, class USoundBase* Temp_object_Variable5, class USoundBase* Temp_object_Variable6, class USoundBase* Temp_object_Variable7, class USoundBase* Temp_object_Variable8, class USoundBase* Temp_object_Variable9, class USoundBase* Temp_object_Variable10, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "PlayGamePhaseAlertSound");

	Params::UAthenaGamePhaseChangeWidget_C_PlayGamePhaseAlertSound_Params Parms;
	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_object_Variable10 = Temp_object_Variable10;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.UpdateMessaging
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhaseStep    Step                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        MESSAGE                                                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FText                        TimeText                                                         (ConstParm, Parm, OutParm, ReferenceParm)

void UAthenaGamePhaseChangeWidget_C::UpdateMessaging(enum class EAthenaGamePhaseStep Step, class FText& MESSAGE, class FText& TimeText)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "UpdateMessaging");

	Params::UAthenaGamePhaseChangeWidget_C_UpdateMessaging_Params Parms;
	Parms.Step = Step;
	Parms.MESSAGE = MESSAGE;
	Parms.TimeText = TimeText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGamePhaseChangeWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "OnAnimationFinished");

	Params::UAthenaGamePhaseChangeWidget_C_OnAnimationFinished_Params Parms;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.GamePhaseStepChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhaseStep    Step                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaGamePhaseChangeWidget_C::GamePhaseStepChanged(enum class EAthenaGamePhaseStep Step)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "GamePhaseStepChanged");

	Params::UAthenaGamePhaseChangeWidget_C_GamePhaseStepChanged_Params Parms;
	Parms.Step = Step;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.ExecuteUbergraph_AthenaGamePhaseChangeWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGamePhaseStep    K2Node_Event_Step2                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_Message                                             (ConstParm)
// class FText                        K2Node_Event_TimeText                                            (ConstParm)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGamePhaseStep    K2Node_Event_Step                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaGamePhaseStep    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGamePhaseChangeWidget_C::ExecuteUbergraph_AthenaGamePhaseChangeWidget(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, class UMaterialInterface* Temp_object_Variable4, class UMaterialInterface* Temp_object_Variable5, class UMaterialInterface* Temp_object_Variable6, class UMaterialInterface* Temp_object_Variable7, class UMaterialInterface* Temp_object_Variable8, class UMaterialInterface* Temp_object_Variable9, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable10, enum class EAthenaGamePhaseStep K2Node_Event_Step2, class FText K2Node_Event_Message, class FText K2Node_Event_TimeText, class UWidgetAnimation* K2Node_Event_Animation, enum class EAthenaGamePhaseStep K2Node_Event_Step, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EAthenaGamePhaseStep Temp_byte_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UWidgetAnimation* K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "ExecuteUbergraph_AthenaGamePhaseChangeWidget");

	Params::UAthenaGamePhaseChangeWidget_C_ExecuteUbergraph_AthenaGamePhaseChangeWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable10 = Temp_object_Variable10;
	Parms.K2Node_Event_Step2 = K2Node_Event_Step2;
	Parms.K2Node_Event_Message = K2Node_Event_Message;
	Parms.K2Node_Event_TimeText = K2Node_Event_TimeText;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.K2Node_Event_Step = K2Node_Event_Step;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
