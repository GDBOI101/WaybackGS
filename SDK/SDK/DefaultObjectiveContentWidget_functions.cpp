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


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetHeightEstimate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HeightEstimate                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHeightEstimate_Height                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionRichText_C*          CallFunc_GetRichTextBlock_MissionRichTextBlock                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultObjectiveContentWidget_C::GetHeightEstimate(float* Height, float HeightEstimate, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHeightEstimate_Height, float CallFunc_Add_FloatFloat_ReturnValue, class UMissionRichText_C* CallFunc_GetRichTextBlock_MissionRichTextBlock, bool CallFunc_IsValid_ReturnValue2, float CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("DefaultObjectiveContentWidget_C", "GetHeightEstimate");

	Params::UDefaultObjectiveContentWidget_C_GetHeightEstimate_Params Parms;
	Parms.HeightEstimate = HeightEstimate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHeightEstimate_Height = CallFunc_GetHeightEstimate_Height;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRichTextBlock_MissionRichTextBlock = CallFunc_GetRichTextBlock_MissionRichTextBlock;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue = CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleTimerComponentUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMissionTimerComponent*  InTimerComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultObjectiveContentWidget_C::HandleTimerComponentUpdated(class UFortMissionTimerComponent* InTimerComponent)
{
	static auto Func = Class->GetFunction("DefaultObjectiveContentWidget_C", "HandleTimerComponentUpdated");

	Params::UDefaultObjectiveContentWidget_C_HandleTimerComponentUpdated_Params Parms;
	Parms.InTimerComponent = InTimerComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.CreateRichTextBlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Parm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionRichText_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultObjectiveContentWidget_C::CreateRichTextBlock(class FText Text, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMissionRichText_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("DefaultObjectiveContentWidget_C", "CreateRichTextBlock");

	Params::UDefaultObjectiveContentWidget_C_CreateRichTextBlock_Params Parms;
	Parms.Text = Text;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetRichTextBlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionRichText_C*          MissionRichTextBlock                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionRichText_C*          FoundTextBlock                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMissionRichText_C*          K2Node_DynamicCast_AsMission_Rich_Text                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultObjectiveContentWidget_C::GetRichTextBlock(class UMissionRichText_C** MissionRichTextBlock, class UMissionRichText_C* FoundTextBlock, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UMissionRichText_C* K2Node_DynamicCast_AsMission_Rich_Text, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("DefaultObjectiveContentWidget_C", "GetRichTextBlock");

	Params::UDefaultObjectiveContentWidget_C_GetRichTextBlock_Params Parms;
	Parms.FoundTextBlock = FoundTextBlock;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.K2Node_DynamicCast_AsMission_Rich_Text = K2Node_DynamicCast_AsMission_Rich_Text;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (MissionRichTextBlock != nullptr)
		*MissionRichTextBlock = Parms.MissionRichTextBlock;

}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TimerText                                                        (Edit)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// class UFortMissionTimerComponent*  CallFunc_GetTimerComponent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionRichText_C*          CallFunc_GetRichTextBlock_MissionRichTextBlock                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTimeText_ReturnValue                                 ()
// bool                               CallFunc_IsTimerVisible_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// float                              CallFunc_GetMissionTimerTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetObjectiveDisplayString_ReturnValue                   ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue2                                     ()

void UDefaultObjectiveContentWidget_C::Update(class FText TimerText, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetEmptyText_ReturnValue, class UFortMissionTimerComponent* CallFunc_GetTimerComponent_ReturnValue, class UMissionRichText_C* CallFunc_GetRichTextBlock_MissionRichTextBlock, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class FText CallFunc_GetTimeText_ReturnValue, bool CallFunc_IsTimerVisible_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, float CallFunc_GetMissionTimerTimeRemaining_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetObjectiveDisplayString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2)
{
	static auto Func = Class->GetFunction("DefaultObjectiveContentWidget_C", "Update");

	Params::UDefaultObjectiveContentWidget_C_Update_Params Parms;
	Parms.TimerText = TimerText;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_GetTimerComponent_ReturnValue = CallFunc_GetTimerComponent_ReturnValue;
	Parms.CallFunc_GetRichTextBlock_MissionRichTextBlock = CallFunc_GetRichTextBlock_MissionRichTextBlock;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetTimeText_ReturnValue = CallFunc_GetTimeText_ReturnValue;
	Parms.CallFunc_IsTimerVisible_ReturnValue = CallFunc_IsTimerVisible_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_GetMissionTimerTimeRemaining_ReturnValue = CallFunc_GetMissionTimerTimeRemaining_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetObjectiveDisplayString_ReturnValue = CallFunc_GetObjectiveDisplayString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInConfigureAsHUD                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultObjectiveContentWidget_C::Setup(class AFortObjectiveBase* Objective, bool bInConfigureAsHUD)
{
	static auto Func = Class->GetFunction("DefaultObjectiveContentWidget_C", "Setup");

	Params::UDefaultObjectiveContentWidget_C_Setup_Params Parms;
	Parms.Objective = Objective;
	Parms.bInConfigureAsHUD = bInConfigureAsHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveStatusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortObjectiveStatus    NewStatus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultObjectiveContentWidget_C::HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, enum class EFortObjectiveStatus NewStatus)
{
	static auto Func = Class->GetFunction("DefaultObjectiveContentWidget_C", "HandleObjectiveStatusChanged");

	Params::UDefaultObjectiveContentWidget_C_HandleObjectiveStatusChanged_Params Parms;
	Parms.Objective = Objective;
	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*          Objective                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bNewVisibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultObjectiveContentWidget_C::HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool bNewVisibility)
{
	static auto Func = Class->GetFunction("DefaultObjectiveContentWidget_C", "HandleObjectiveVisibilityChanged");

	Params::UDefaultObjectiveContentWidget_C_HandleObjectiveVisibilityChanged_Params Parms;
	Parms.Objective = Objective;
	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*           MissionState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultObjectiveContentWidget_C::HandleUpdate(class AFortMissionState* MissionState)
{
	static auto Func = Class->GetFunction("DefaultObjectiveContentWidget_C", "HandleUpdate");

	Params::UDefaultObjectiveContentWidget_C_HandleUpdate_Params Parms;
	Parms.MissionState = MissionState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.ExecuteUbergraph_DefaultObjectiveContentWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortObjectiveBase*          K2Node_Event_Objective                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInConfigureAsHUD                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class AFortObjectiveBase*          K2Node_CustomEvent_Objective2                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortObjectiveStatus    K2Node_CustomEvent_NewStatus                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortObjectiveBase*          K2Node_CustomEvent_Objective                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNewVisibility                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMissionState*           K2Node_CustomEvent_MissionState                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMissionTimerComponent*  CallFunc_GetTimerComponent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)

void UDefaultObjectiveContentWidget_C::ExecuteUbergraph_DefaultObjectiveContentWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortObjectiveBase* K2Node_Event_Objective, bool K2Node_Event_bInConfigureAsHUD, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AFortObjectiveBase* K2Node_CustomEvent_Objective2, enum class EFortObjectiveStatus K2Node_CustomEvent_NewStatus, class AFortObjectiveBase* K2Node_CustomEvent_Objective, bool K2Node_CustomEvent_bNewVisibility, class AFortMissionState* K2Node_CustomEvent_MissionState, class UFortMissionTimerComponent* CallFunc_GetTimerComponent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4)
{
	static auto Func = Class->GetFunction("DefaultObjectiveContentWidget_C", "ExecuteUbergraph_DefaultObjectiveContentWidget");

	Params::UDefaultObjectiveContentWidget_C_ExecuteUbergraph_DefaultObjectiveContentWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Objective = K2Node_Event_Objective;
	Parms.K2Node_Event_bInConfigureAsHUD = K2Node_Event_bInConfigureAsHUD;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_Objective2 = K2Node_CustomEvent_Objective2;
	Parms.K2Node_CustomEvent_NewStatus = K2Node_CustomEvent_NewStatus;
	Parms.K2Node_CustomEvent_Objective = K2Node_CustomEvent_Objective;
	Parms.K2Node_CustomEvent_bNewVisibility = K2Node_CustomEvent_bNewVisibility;
	Parms.K2Node_CustomEvent_MissionState = K2Node_CustomEvent_MissionState;
	Parms.CallFunc_GetTimerComponent_ReturnValue = CallFunc_GetTimerComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
