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


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.FillChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDirection                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingWidget_C::FillChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingWidget_C", "FillChange");

	Params::UAthenaMatchmakingWidget_C_FillChange_Params Parms;
	Parms.bDirection = bDirection;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.PlaylistChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDirection                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingWidget_C::PlaylistChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingWidget_C", "PlaylistChange");

	Params::UAthenaMatchmakingWidget_C_PlaylistChange_Params Parms;
	Parms.bDirection = bDirection;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetAutoFillOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UAthenaMatchmakingWidget_C::SetAutoFillOptions(TArray<class FText>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingWidget_C", "SetAutoFillOptions");

	Params::UAthenaMatchmakingWidget_C_SetAutoFillOptions_Params Parms;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingWidget_C::BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingWidget_C", "BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingWidget_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingWidget_C::BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingWidget_C", "BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingWidget_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetPlayButtonState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanMatchmake                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingWidget_C::SetPlayButtonState(bool bCanMatchmake)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingWidget_C", "SetPlayButtonState");

	Params::UAthenaMatchmakingWidget_C_SetPlayButtonState_Params Parms;
	Parms.bCanMatchmake = bCanMatchmake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingWidget_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingWidget_C", "Construct");

	Params::UAthenaMatchmakingWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetCancelButtonState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsMatchmaking                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingWidget_C::SetCancelButtonState(bool bIsMatchmaking)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingWidget_C", "SetCancelButtonState");

	Params::UAthenaMatchmakingWidget_C_SetCancelButtonState_Params Parms;
	Parms.bIsMatchmaking = bIsMatchmaking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingWidget_C::BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingWidget_C", "BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature");

	Params::UAthenaMatchmakingWidget_C_BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingWidget_C::BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingWidget_C", "BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature");

	Params::UAthenaMatchmakingWidget_C_BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.ExecuteUbergraph_AthenaMatchmakingWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// enum class EFortAthenaPlaylist     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// enum class EFortAthenaPlaylist     Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable6                                              ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// class FText                        Temp_text_Variable9                                              ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable10                                             ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCanMatchmake                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsMatchmaking                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        K2Node_Select2_Default                                           ()
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Value2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select3_Default                                           ()
// class FText                        K2Node_Select4_Default                                           ()

void UAthenaMatchmakingWidget_C::ExecuteUbergraph_AthenaMatchmakingWidget(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Value, bool Temp_bool_Variable, bool CallFunc_Conv_IntToBool_ReturnValue, class FText Temp_text_Variable, enum class EFortAthenaPlaylist Temp_byte_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, enum class EFortAthenaPlaylist Temp_byte_Variable2, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, bool Temp_bool_Variable2, class FText Temp_text_Variable10, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bCanMatchmake, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsMatchmaking, class FText K2Node_Select_Default, class FText K2Node_Select2_Default, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button2, bool K2Node_DynamicCast_bSuccess2, int32 K2Node_ComponentBoundEvent_Value2, class FText K2Node_Select3_Default, class FText K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingWidget_C", "ExecuteUbergraph_AthenaMatchmakingWidget");

	Params::UAthenaMatchmakingWidget_C_ExecuteUbergraph_AthenaMatchmakingWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_bCanMatchmake = K2Node_Event_bCanMatchmake;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bIsMatchmaking = K2Node_Event_bIsMatchmaking;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button2 = K2Node_DynamicCast_AsIcon_Text_Button2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_ComponentBoundEvent_Value2 = K2Node_ComponentBoundEvent_Value2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
