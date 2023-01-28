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


// Function AthenaHUD.AthenaHUD_C.SetupCameraMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUIManager_C*                K2Node_DynamicCast_AsUIManager                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFeedback_C*                 K2Node_DynamicCast_AsFeedback                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::SetupCameraMode(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFeedback_C* K2Node_DynamicCast_AsFeedback, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "SetupCameraMode");

	Params::UAthenaHUD_C_SetupCameraMode_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIManager = K2Node_DynamicCast_AsUIManager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsFeedback = K2Node_DynamicCast_AsFeedback;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.AddTeamMemberIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      Player_State                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Team_Member_Index                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTeamMemberIndicator_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortActorCanvasSlot*        CallFunc_AddActorIndicator_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::AddTeamMemberIndicator(class AFortPlayerStateAthena* Player_State, int32 Team_Member_Index, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UAthenaTeamMemberIndicator_C* CallFunc_Create_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "AddTeamMemberIndicator");

	Params::UAthenaHUD_C_AddTeamMemberIndicator_Params Parms;
	Parms.Player_State = Player_State;
	Parms.Team_Member_Index = Team_Member_Index;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_AddActorIndicator_ReturnValue = CallFunc_AddActorIndicator_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.HandleAircraftModeChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInAircraft_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HandleAircraftModeChanged(const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInAircraft_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "HandleAircraftModeChanged");

	Params::UAthenaHUD_C_HandleAircraftModeChanged_Params Parms;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInAircraft_ReturnValue = CallFunc_IsInAircraft_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.CheckHUDElementVisibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       HiddenHUDElementTags                                             (Parm, OutParm, ReferenceParm)
// struct FGameplayTag                HUDElementTagToCheck                                             (Parm, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     HUDElement                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             ()
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::CheckHUDElementVisibility(struct FGameplayTagContainer& HiddenHUDElementTags, const struct FGameplayTag& HUDElementTagToCheck, class UWidget*& HUDElement, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "CheckHUDElementVisibility");

	Params::UAthenaHUD_C_CheckHUDElementVisibility_Params Parms;
	Parms.HiddenHUDElementTags = HiddenHUDElementTags;
	Parms.HUDElementTagToCheck = HUDElementTagToCheck;
	Parms.HUDElement = HUDElement;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.OnHUDElementVisibilityChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       HiddenHUDElementTags                                             (Parm, OutParm, ReferenceParm)

void UAthenaHUD_C::OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "OnHUDElementVisibilityChanged");

	Params::UAthenaHUD_C_OnHUDElementVisibilityChanged_Params Parms;
	Parms.HiddenHUDElementTags = HiddenHUDElementTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.PopContentWidgetInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState           State                                                            (Parm, NoDestructor)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_PopWigdet_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UAthenaHUD_C::PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWigdet_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "PopContentWidgetInternal");

	Params::UAthenaHUD_C_PopContentWidgetInternal_Params Parms;
	Parms.State = State;
	Parms.CallFunc_PopWigdet_ReturnValue = CallFunc_PopWigdet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaHUD.AthenaHUD_C.CreateInterestIndicatorWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInterestIndicatorWidget_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortActorCanvasSlot*        CallFunc_AddActorIndicator_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::CreateInterestIndicatorWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UInterestIndicatorWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "CreateInterestIndicatorWidget");

	Params::UAthenaHUD_C_CreateInterestIndicatorWidget_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_AddActorIndicator_ReturnValue = CallFunc_AddActorIndicator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.HandleOnPointOfInterestRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PointOfInterest                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInterestIndicatorWidget_C*  CurrentPointOfInterestWidget                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Removed                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemovePointOfInterest_Removed                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInterestIndicatorWidget_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::HandleOnPointOfInterestRemoved(class AActor* PointOfInterest, class UInterestIndicatorWidget_C* CurrentPointOfInterestWidget, bool Removed, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_RemovePointOfInterest_Removed, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UInterestIndicatorWidget_C* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "HandleOnPointOfInterestRemoved");

	Params::UAthenaHUD_C_HandleOnPointOfInterestRemoved_Params Parms;
	Parms.PointOfInterest = PointOfInterest;
	Parms.CurrentPointOfInterestWidget = CurrentPointOfInterestWidget;
	Parms.Removed = Removed;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RemovePointOfInterest_Removed = CallFunc_RemovePointOfInterest_Removed;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.HandleOnPointOfInterestAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PointOfInterest                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayText                                                      (Parm)
// class UTexture2D*                  DisplayImage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInterestIndicatorWidget_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HandleOnPointOfInterestAdded(class AActor* PointOfInterest, class FText DisplayText, class UTexture2D* DisplayImage, class UInterestIndicatorWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "HandleOnPointOfInterestAdded");

	Params::UAthenaHUD_C_HandleOnPointOfInterestAdded_Params Parms;
	Parms.PointOfInterest = PointOfInterest;
	Parms.DisplayText = DisplayText;
	Parms.DisplayImage = DisplayImage;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.ShowPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPickerMode         Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InitialOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IgnoreFirstAccept                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::ShowPicker(enum class EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "ShowPicker");

	Params::UAthenaHUD_C_ShowPicker_Params Parms;
	Parms.Mode = Mode;
	Parms.InitialOption = InitialOption;
	Parms.IgnoreFirstAccept = IgnoreFirstAccept;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.HandleFocusChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::HandleFocusChat()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "HandleFocusChat");

	Params::UAthenaHUD_C_HandleFocusChat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.ToggleTopLevelMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::ToggleTopLevelMenu(bool Show)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "ToggleTopLevelMenu");

	Params::UAthenaHUD_C_ToggleTopLevelMenu_Params Parms;
	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.ToggleChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::ToggleChat(bool Show)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "ToggleChat");

	Params::UAthenaHUD_C_ToggleChat_Params Parms;
	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.SetPersistentHUDContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::SetPersistentHUDContentVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "SetPersistentHUDContentVisibility");

	Params::UAthenaHUD_C_SetPersistentHUDContentVisibility_Params Parms;
	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.HandleIndicatorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InidicatorsEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "HandleIndicatorModeChanged");

	Params::UAthenaHUD_C_HandleIndicatorModeChanged_Params Parms;
	Parms.InidicatorsEnabled = InidicatorsEnabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.SetCursorModeContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CustomWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionName                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CursorWidget                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUD_C::SetCursorModeContent(class UUserWidget* CustomWidget, class FName& ActionName, class UUserWidget* CursorWidget, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "SetCursorModeContent");

	Params::UAthenaHUD_C_SetCursorModeContent_Params Parms;
	Parms.CustomWidget = CustomWidget;
	Parms.ActionName = ActionName;
	Parms.CursorWidget = CursorWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.OnPlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTargeting                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetEquippedWeapon_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeaponRanged*           K2Node_DynamicCast_AsFort_Weapon_Ranged                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::OnPlayerTargetingChanged(bool IsTargeting, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortWeapon* CallFunc_GetEquippedWeapon_ReturnValue, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "OnPlayerTargetingChanged");

	Params::UAthenaHUD_C_OnPlayerTargetingChanged_Params Parms;
	Parms.IsTargeting = IsTargeting;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetEquippedWeapon_ReturnValue = CallFunc_GetEquippedWeapon_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Ranged = K2Node_DynamicCast_AsFort_Weapon_Ranged;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::HandleKeybindsChanged()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "HandleKeybindsChanged");

	Params::UAthenaHUD_C_HandleKeybindsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.OnHandleAction
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 Result                                                           (Parm, OutParm)
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HandleAction                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldCloseMenuOnEscape_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 K2Node_Select_Default                                            ()

void UAthenaHUD_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough, bool HandleAction, bool Temp_bool_Variable, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_ShouldCloseMenuOnEscape_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "OnHandleAction");

	Params::UAthenaHUD_C_OnHandleAction_Params Parms;
	Parms.HandleAction = HandleAction;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_ShouldCloseMenuOnEscape_ReturnValue = CallFunc_ShouldCloseMenuOnEscape_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaHUD.AthenaHUD_C.SetQuickbarSizes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::SetQuickbarSizes(bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "SetQuickbarSizes");

	Params::UAthenaHUD_C_SetQuickbarSizes_Params Parms;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.HandleQuickbarSlotFocusSlotChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          Quickbar_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Slot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HandleQuickbarSlotFocusSlotChanged(enum class EFortQuickBars Quickbar_Index, int32 Slot, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "HandleQuickbarSlotFocusSlotChanged");

	Params::UAthenaHUD_C_HandleQuickbarSlotFocusSlotChanged_Params Parms;
	Parms.Quickbar_Index = Quickbar_Index;
	Parms.Slot = Slot;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CursorModeContentCustomWidget                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortInputMode          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortInputMode          Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortInputMode          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_SwitchName_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class EFortInputMode Temp_byte_Variable2, enum class EFortInputMode Temp_byte_Variable3, enum class EFortInputMode K2Node_Select_Default, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "HandleCursorModeChanged");

	Params::UAthenaHUD_C_HandleCursorModeChanged_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentCustomWidget = CursorModeContentCustomWidget;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED");

	Params::UAthenaHUD_C_OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED");

	Params::UAthenaHUD_C_OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "Construct");

	Params::UAthenaHUD_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "OnEnterState");

	Params::UAthenaHUD_C_OnEnterState_Params Parms;
	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.QuestsCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      Quests                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaHUD_C::QuestsCompleted(TArray<class UFortQuestItem*>& Quests)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "QuestsCompleted");

	Params::UAthenaHUD_C_QuestsCompleted_Params Parms;
	Parms.Quests = Quests;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           State                                                            (Parm, NoDestructor)

void UAthenaHUD_C::PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "PushContentWidgetInternal");

	Params::UAthenaHUD_C_PushContentWidgetInternal_Params Parms;
	Parms.Widget = Widget;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "Destruct");

	Params::UAthenaHUD_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingGamepad                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::HandleInputMethodChanged(bool UsingGamepad)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "HandleInputMethodChanged");

	Params::UAthenaHUD_C_HandleInputMethodChanged_Params Parms;
	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature");

	Params::UAthenaHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature");

	Params::UAthenaHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.Prepare Game Over
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::Prepare_Game_Over()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "Prepare Game Over");

	Params::UAthenaHUD_C_Prepare_Game_Over_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.On Player Died
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport      DeathReport                                                      (ConstParm, Parm, OutParm, ReferenceParm)

void UAthenaHUD_C::On_Player_Died(struct FFortPlayerDeathReport& DeathReport)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "On Player Died");

	Params::UAthenaHUD_C_On_Player_Died_Params Parms;
	Parms.DeathReport = DeathReport;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.PrepareToShowEndGameUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::PrepareToShowEndGameUI()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "PrepareToShowEndGameUI");

	Params::UAthenaHUD_C_PrepareToShowEndGameUI_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.On Player Won
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::On_Player_Won()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "On Player Won");

	Params::UAthenaHUD_C_On_Player_Won_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.OnRevived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::OnRevived()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "OnRevived");

	Params::UAthenaHUD_C_OnRevived_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.HandleRevived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::HandleRevived()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "HandleRevived");

	Params::UAthenaHUD_C_HandleRevived_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.OnUnableToPerformAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       FailedReason                                                     (Parm)
// class FText                        FailureText                                                      (Parm)

void UAthenaHUD_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, class FText FailureText)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "OnUnableToPerformAction");

	Params::UAthenaHUD_C_OnUnableToPerformAction_Params Parms;
	Parms.FailedReason = FailedReason;
	Parms.FailureText = FailureText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.On Team Won
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::On_Team_Won()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "On Team Won");

	Params::UAthenaHUD_C_On_Team_Won_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.TeamMembersChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::TeamMembersChanged()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "TeamMembersChanged");

	Params::UAthenaHUD_C_TeamMembersChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.ShowGameOverLayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUD_C::ShowGameOverLayer()
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "ShowGameOverLayer");

	Params::UAthenaHUD_C_ShowGameOverLayer_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUD.AthenaHUD_C.ExecuteUbergraph_AthenaHUD
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuildingInfoIndicator_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortActorCanvasSlot*        CallFunc_AddActorIndicator_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortQuestItem*>      K2Node_CustomEvent_Quests                                        (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractionIndicator_C*     CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortActorCanvasSlot*        CallFunc_AddActorIndicator_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// class UFortPickerContext*          CallFunc_GetContext_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// class UWidget*                     K2Node_Event_Widget                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           K2Node_Event_State                                               (NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UsingGamepad                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FFortDialogDescription      K2Node_MakeStruct_FortDialogDescription                          (ContainsInstancedReference)
// class UFortAsyncAction_TriggerNotification*CallFunc_TriggerNotification_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPlayerDeathReport      K2Node_CustomEvent_DeathReport                                   (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       K2Node_CustomEvent_FailedReason                                  ()
// class FText                        K2Node_CustomEvent_FailureText                                   ()
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate17                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate18                           (ZeroConstructor, NoDestructor)
// class UAthenaTeamMemberIndicator_C*CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaHUD_C::ExecuteUbergraph_AthenaHUD(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortHUDContext* CallFunc_GetContext_ReturnValue4, class UFortHUDContext* CallFunc_GetContext_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 Temp_int_Array_Index_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue6, class UFortHUDContext* CallFunc_GetContext_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, enum class EFortUIState K2Node_Event_PreviousUIState, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, int32 Temp_int_Loop_Counter_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue8, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue9, class UBuildingInfoIndicator_C* CallFunc_Create_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, enum class ESlateVisibility Temp_byte_Variable2, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue10, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UInteractionIndicator_C* CallFunc_Create_ReturnValue2, bool Temp_bool_Variable, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue2, int32 Temp_int_Array_Index_Variable2, class UFortHUDContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class UFortPickerContext* CallFunc_GetContext_ReturnValue13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, int32 Temp_int_Loop_Counter_Variable3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue14, int32 CallFunc_Add_IntInt_ReturnValue3, bool K2Node_CustomEvent_UsingGamepad, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Array_Index_Variable3, class UFortQuestItem* CallFunc_Array_Get_Item, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFortDialogDescription& K2Node_MakeStruct_FortDialogDescription, class UFortAsyncAction_TriggerNotification* CallFunc_TriggerNotification_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue4, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena2, bool K2Node_DynamicCast_bSuccess2, const struct FGameplayTagContainer& K2Node_CustomEvent_FailedReason, class FText K2Node_CustomEvent_FailureText, bool CallFunc_HasTag_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class UAthenaTeamMemberIndicator_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, class UFortHUDContext* CallFunc_GetContext_ReturnValue15, bool CallFunc_Less_IntInt_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue6, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena3, bool K2Node_DynamicCast_bSuccess3, class AFortPlayerStateAthena* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue3, bool CallFunc_RemoveChild_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaHUD_C", "ExecuteUbergraph_AthenaHUD");

	Params::UAthenaHUD_C_ExecuteUbergraph_AthenaHUD_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_AddActorIndicator_ReturnValue = CallFunc_AddActorIndicator_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_CustomEvent_Quests = K2Node_CustomEvent_Quests;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue11 = CallFunc_GetContext_ReturnValue11;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_AddActorIndicator_ReturnValue2 = CallFunc_AddActorIndicator_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.CallFunc_GetContext_ReturnValue13 = CallFunc_GetContext_ReturnValue13;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_GetContext_ReturnValue14 = CallFunc_GetContext_ReturnValue14;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.K2Node_CustomEvent_UsingGamepad = K2Node_CustomEvent_UsingGamepad;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FortDialogDescription = K2Node_MakeStruct_FortDialogDescription;
	Parms.CallFunc_TriggerNotification_ReturnValue = CallFunc_TriggerNotification_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_DeathReport = K2Node_CustomEvent_DeathReport;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.CallFunc_GetOwningPlayer_ReturnValue3 = CallFunc_GetOwningPlayer_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue4 = CallFunc_GetOwningPlayer_ReturnValue4;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena2 = K2Node_DynamicCast_AsFort_Player_Controller_Athena2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CustomEvent_FailedReason = K2Node_CustomEvent_FailedReason;
	Parms.K2Node_CustomEvent_FailureText = K2Node_CustomEvent_FailureText;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate17 = K2Node_CreateDelegate_OutputDelegate17;
	Parms.K2Node_CreateDelegate_OutputDelegate18 = K2Node_CreateDelegate_OutputDelegate18;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue15 = CallFunc_GetContext_ReturnValue15;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue5 = CallFunc_GetOwningPlayer_ReturnValue5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue6 = CallFunc_GetOwningPlayer_ReturnValue6;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena3 = K2Node_DynamicCast_AsFort_Player_Controller_Athena3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
