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


// Function HUD.HUD_C.CheckHUDElementVisibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       HiddenHUDElementTags                                             (Parm, OutParm, ReferenceParm)
// struct FGameplayTag                HUDElementTagToCheck                                             (Parm, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     HUDElement                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             ()
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::CheckHUDElementVisibility(struct FGameplayTagContainer& HiddenHUDElementTags, const struct FGameplayTag& HUDElementTagToCheck, class UWidget*& HUDElement, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("HUD_C", "CheckHUDElementVisibility");

	Params::UHUD_C_CheckHUDElementVisibility_Params Parms;
	Parms.HiddenHUDElementTags = HiddenHUDElementTags;
	Parms.HUDElementTagToCheck = HUDElementTagToCheck;
	Parms.HUDElement = HUDElement;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.OnHUDElementVisibilityChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       HiddenHUDElementTags                                             (Parm, OutParm, ReferenceParm)

void UHUD_C::OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags)
{
	static auto Func = Class->GetFunction("HUD_C", "OnHUDElementVisibilityChanged");

	Params::UHUD_C_OnHUDElementVisibilityChanged_Params Parms;
	Parms.HiddenHUDElementTags = HiddenHUDElementTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.OnManagementTabSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::OnManagementTabSelected(class FName TabName, bool K2Node_SwitchName_CmpSuccess)
{
	static auto Func = Class->GetFunction("HUD_C", "OnManagementTabSelected");

	Params::UHUD_C_OnManagementTabSelected_Params Parms;
	Parms.TabName = TabName;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.PopContentWidgetInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState           State                                                            (Parm, NoDestructor)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_PopWigdet_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UHUD_C::PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWigdet_ReturnValue)
{
	static auto Func = Class->GetFunction("HUD_C", "PopContentWidgetInternal");

	Params::UHUD_C_PopContentWidgetInternal_Params Parms;
	Parms.State = State;
	Parms.CallFunc_PopWigdet_ReturnValue = CallFunc_PopWigdet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HUD.HUD_C.CreateInterestIndicatorWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInterestIndicatorWidget_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortActorCanvasSlot*        CallFunc_AddActorIndicator_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_C::CreateInterestIndicatorWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UInterestIndicatorWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue)
{
	static auto Func = Class->GetFunction("HUD_C", "CreateInterestIndicatorWidget");

	Params::UHUD_C_CreateInterestIndicatorWidget_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_AddActorIndicator_ReturnValue = CallFunc_AddActorIndicator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.HandleOnPointOfInterestRemoved
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

void UHUD_C::HandleOnPointOfInterestRemoved(class AActor* PointOfInterest, class UInterestIndicatorWidget_C* CurrentPointOfInterestWidget, bool Removed, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_RemovePointOfInterest_Removed, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UInterestIndicatorWidget_C* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("HUD_C", "HandleOnPointOfInterestRemoved");

	Params::UHUD_C_HandleOnPointOfInterestRemoved_Params Parms;
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


// Function HUD.HUD_C.HandleOnPointOfInterestAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PointOfInterest                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayText                                                      (Parm)
// class UTexture2D*                  DisplayImage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInterestIndicatorWidget_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::HandleOnPointOfInterestAdded(class AActor* PointOfInterest, class FText DisplayText, class UTexture2D* DisplayImage, class UInterestIndicatorWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("HUD_C", "HandleOnPointOfInterestAdded");

	Params::UHUD_C_HandleOnPointOfInterestAdded_Params Parms;
	Parms.PointOfInterest = PointOfInterest;
	Parms.DisplayText = DisplayText;
	Parms.DisplayImage = DisplayImage;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.ShowPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPickerMode         Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InitialOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IgnoreFirstAccept                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::ShowPicker(enum class EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("HUD_C", "ShowPicker");

	Params::UHUD_C_ShowPicker_Params Parms;
	Parms.Mode = Mode;
	Parms.InitialOption = InitialOption;
	Parms.IgnoreFirstAccept = IgnoreFirstAccept;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.OnHordeTierCompleteWidgetFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_C::OnHordeTierCompleteWidgetFinished(class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("HUD_C", "OnHordeTierCompleteWidgetFinished");

	Params::UHUD_C_OnHordeTierCompleteWidgetFinished_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.HandleHordeTierComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCompletionResult   Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHordeTierResultsWidget_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_C::HandleHordeTierComplete(enum class EFortCompletionResult Result, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHordeTierResultsWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("HUD_C", "HandleHordeTierComplete");

	Params::UHUD_C_HandleHordeTierComplete_Params Parms;
	Parms.Result = Result;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.HandleFocusChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_C::HandleFocusChat()
{
	static auto Func = Class->GetFunction("HUD_C", "HandleFocusChat");

	Params::UHUD_C_HandleFocusChat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.ToggleTopLevelMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::ToggleTopLevelMenu(bool Show)
{
	static auto Func = Class->GetFunction("HUD_C", "ToggleTopLevelMenu");

	Params::UHUD_C_ToggleTopLevelMenu_Params Parms;
	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.ToggleChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::ToggleChat(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HUD_C", "ToggleChat");

	Params::UHUD_C_ToggleChat_Params Parms;
	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.SetPersistentHUDContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::SetPersistentHUDContentVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HUD_C", "SetPersistentHUDContentVisibility");

	Params::UHUD_C_SetPersistentHUDContentVisibility_Params Parms;
	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.HandleIndicatorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InidicatorsEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HUD_C", "HandleIndicatorModeChanged");

	Params::UHUD_C_HandleIndicatorModeChanged_Params Parms;
	Parms.InidicatorsEnabled = InidicatorsEnabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.SetCursorModeContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CustomWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionName                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CursorWidget                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_C::SetCursorModeContent(class UUserWidget* CustomWidget, class FName& ActionName, class UUserWidget* CursorWidget, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("HUD_C", "SetCursorModeContent");

	Params::UHUD_C_SetCursorModeContent_Params Parms;
	Parms.CustomWidget = CustomWidget;
	Parms.ActionName = ActionName;
	Parms.CursorWidget = CursorWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.SetGameMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_C::SetGameMode()
{
	static auto Func = Class->GetFunction("HUD_C", "SetGameMode");

	Params::UHUD_C_SetGameMode_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.OnPlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTargeting                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetEquippedWeapon_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeaponRanged*           K2Node_DynamicCast_AsFort_Weapon_Ranged                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::OnPlayerTargetingChanged(bool IsTargeting, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortWeapon* CallFunc_GetEquippedWeapon_ReturnValue, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("HUD_C", "OnPlayerTargetingChanged");

	Params::UHUD_C_OnPlayerTargetingChanged_Params Parms;
	Parms.IsTargeting = IsTargeting;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetEquippedWeapon_ReturnValue = CallFunc_GetEquippedWeapon_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon_Ranged = K2Node_DynamicCast_AsFort_Weapon_Ranged;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_C::HandleKeybindsChanged()
{
	static auto Func = Class->GetFunction("HUD_C", "HandleKeybindsChanged");

	Params::UHUD_C_HandleKeybindsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.HandleZoneCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_Widget_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_C::HandleZoneCompleted(class UFortHUDContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UResults_Widget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class UFortHUDContext* CallFunc_GetContext_ReturnValue3)
{
	static auto Func = Class->GetFunction("HUD_C", "HandleZoneCompleted");

	Params::UHUD_C_HandleZoneCompleted_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.OnHandleAction
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

void UHUD_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough, bool HandleAction, bool Temp_bool_Variable, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_ShouldCloseMenuOnEscape_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HUD_C", "OnHandleAction");

	Params::UHUD_C_OnHandleAction_Params Parms;
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


// Function HUD.HUD_C.SetQuickbarSizes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::SetQuickbarSizes(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("HUD_C", "SetQuickbarSizes");

	Params::UHUD_C_SetQuickbarSizes_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.HandleQuickbarSlotFocusSlotChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          Quickbar_Index                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Slot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::HandleQuickbarSlotFocusSlotChanged(enum class EFortQuickBars Quickbar_Index, int32 Slot, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("HUD_C", "HandleQuickbarSlotFocusSlotChanged");

	Params::UHUD_C_HandleQuickbarSlotFocusSlotChanged_Params Parms;
	Parms.Quickbar_Index = Quickbar_Index;
	Parms.Slot = Slot;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CursorModeContentCustomWidget                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortInputMode          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortInputMode          Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortInputMode          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUIManager_C*                K2Node_DynamicCast_AsUIManager                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFeedback_C*                 K2Node_DynamicCast_AsFeedback                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMgmtTabsScreen_C*           K2Node_DynamicCast_AsMgmt_Tabs_Screen                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_C::HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EFortInputMode Temp_byte_Variable, enum class EFortInputMode Temp_byte_Variable2, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortInputMode K2Node_Select_Default, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, class UFeedback_C* K2Node_DynamicCast_AsFeedback, bool K2Node_DynamicCast_bSuccess2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UMgmtTabsScreen_C* K2Node_DynamicCast_AsMgmt_Tabs_Screen, bool K2Node_DynamicCast_bSuccess3, class FName CallFunc_GetActiveTab_ReturnValue, bool Temp_bool_Variable2, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class UCommonUIContext* CallFunc_GetContext_ReturnValue3, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue2)
{
	static auto Func = Class->GetFunction("HUD_C", "HandleCursorModeChanged");

	Params::UHUD_C_HandleCursorModeChanged_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentCustomWidget = CursorModeContentCustomWidget;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_DynamicCast_AsUIManager = K2Node_DynamicCast_AsUIManager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFeedback = K2Node_DynamicCast_AsFeedback;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsMgmt_Tabs_Screen = K2Node_DynamicCast_AsMgmt_Tabs_Screen;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetInputManager_ReturnValue2 = CallFunc_GetInputManager_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_C::OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A()
{
	static auto Func = Class->GetFunction("HUD_C", "OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A");

	Params::UHUD_C_OnDeclined_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_C::OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A()
{
	static auto Func = Class->GetFunction("HUD_C", "OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A");

	Params::UHUD_C_OnConfirmed_0E0300084F8A9EB1D6CB5E836DBF8C7A_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static auto Func = Class->GetFunction("HUD_C", "OnEnterState");

	Params::UHUD_C_OnEnterState_Params Parms;
	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.QuestsCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      Quests                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHUD_C::QuestsCompleted(TArray<class UFortQuestItem*>& Quests)
{
	static auto Func = Class->GetFunction("HUD_C", "QuestsCompleted");

	Params::UHUD_C_QuestsCompleted_Params Parms;
	Parms.Quests = Quests;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_C::Construct()
{
	static auto Func = Class->GetFunction("HUD_C", "Construct");

	Params::UHUD_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.LoadingScreenChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::LoadingScreenChanged(bool bVisible)
{
	static auto Func = Class->GetFunction("HUD_C", "LoadingScreenChanged");

	Params::UHUD_C_LoadingScreenChanged_Params Parms;
	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.EndOfDayRecapStarted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEndOfDayRecap              EndOfDayRecap                                                    (ConstParm, Parm, OutParm, ReferenceParm)

void UHUD_C::EndOfDayRecapStarted(struct FEndOfDayRecap& EndOfDayRecap)
{
	static auto Func = Class->GetFunction("HUD_C", "EndOfDayRecapStarted");

	Params::UHUD_C_EndOfDayRecapStarted_Params Parms;
	Parms.EndOfDayRecap = EndOfDayRecap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.EndOfDayRecapEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_C::EndOfDayRecapEnded()
{
	static auto Func = Class->GetFunction("HUD_C", "EndOfDayRecapEnded");

	Params::UHUD_C_EndOfDayRecapEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           State                                                            (Parm, NoDestructor)

void UHUD_C::PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State)
{
	static auto Func = Class->GetFunction("HUD_C", "PushContentWidgetInternal");

	Params::UHUD_C_PushContentWidgetInternal_Params Parms;
	Parms.Widget = Widget;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_C::Destruct()
{
	static auto Func = Class->GetFunction("HUD_C", "Destruct");

	Params::UHUD_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingGamepad                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_C::HandleInputMethodChanged(bool UsingGamepad)
{
	static auto Func = Class->GetFunction("HUD_C", "HandleInputMethodChanged");

	Params::UHUD_C_HandleInputMethodChanged_Params Parms;
	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature()
{
	static auto Func = Class->GetFunction("HUD_C", "BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature");

	Params::UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature()
{
	static auto Func = Class->GetFunction("HUD_C", "BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature");

	Params::UHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD.HUD_C.ExecuteUbergraph_HUD
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPickerContext*          CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuildingInfoIndicator_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// class UFortActorCanvasSlot*        CallFunc_AddActorIndicator_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortQuestItem*>      K2Node_CustomEvent_Quests                                        (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          CallFunc_GetGameStateZone_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortGameplayState      CallFunc_GetGameplayState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractionIndicator_C*     CallFunc_Create_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortActorCanvasSlot*        CallFunc_AddActorIndicator_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bVisible                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEndOfDayRecap              K2Node_CustomEvent_EndOfDayRecap                                 (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_Widget                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           K2Node_Event_State                                               (NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMgmtTabsScreen_C*           K2Node_DynamicCast_AsMgmt_Tabs_Screen                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// class UFortQuestItem*              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               K2Node_CustomEvent_UsingGamepad                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FFortDialogDescription      K2Node_MakeStruct_FortDialogDescription                          (ContainsInstancedReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_TriggerNotification*CallFunc_TriggerNotification_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate17                           (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate18                           (ZeroConstructor, NoDestructor)

void UHUD_C::ExecuteUbergraph_HUD(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class UCommonUIContext* CallFunc_GetContext_ReturnValue3, enum class EFortUIState K2Node_Event_PreviousUIState, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortPickerContext* CallFunc_GetContext_ReturnValue4, class UFortHUDContext* CallFunc_GetContext_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBuildingInfoIndicator_C* CallFunc_Create_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortHUDContext* CallFunc_GetContext_ReturnValue6, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, class UFortHUDContext* CallFunc_GetContext_ReturnValue8, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class AFortGameStateZone* CallFunc_GetGameStateZone_ReturnValue, bool CallFunc_IsValid_ReturnValue2, enum class EFortGameplayState CallFunc_GetGameplayState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue9, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UInteractionIndicator_C* CallFunc_Create_ReturnValue2, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue2, bool K2Node_CustomEvent_bVisible, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FEndOfDayRecap& K2Node_CustomEvent_EndOfDayRecap, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue10, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UMgmtTabsScreen_C* K2Node_DynamicCast_AsMgmt_Tabs_Screen, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, class UFortQuestItem* CallFunc_Array_Get_Item, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool K2Node_CustomEvent_UsingGamepad, class FText CallFunc_Format_ReturnValue, const struct FFortDialogDescription& K2Node_MakeStruct_FortDialogDescription, enum class ESlateVisibility K2Node_Select_Default, class UFortAsyncAction_TriggerNotification* CallFunc_TriggerNotification_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, class UFortHUDContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18)
{
	static auto Func = Class->GetFunction("HUD_C", "ExecuteUbergraph_HUD");

	Params::UHUD_C_ExecuteUbergraph_HUD_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.CallFunc_AddActorIndicator_ReturnValue = CallFunc_AddActorIndicator_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.K2Node_CustomEvent_Quests = K2Node_CustomEvent_Quests;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetGameStateZone_ReturnValue = CallFunc_GetGameStateZone_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetGameplayState_ReturnValue = CallFunc_GetGameplayState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_AddActorIndicator_ReturnValue2 = CallFunc_AddActorIndicator_ReturnValue2;
	Parms.K2Node_CustomEvent_bVisible = K2Node_CustomEvent_bVisible;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_EndOfDayRecap = K2Node_CustomEvent_EndOfDayRecap;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsMgmt_Tabs_Screen = K2Node_DynamicCast_AsMgmt_Tabs_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_UsingGamepad = K2Node_CustomEvent_UsingGamepad;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FortDialogDescription = K2Node_MakeStruct_FortDialogDescription;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TriggerNotification_ReturnValue = CallFunc_TriggerNotification_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue11 = CallFunc_GetContext_ReturnValue11;
	Parms.K2Node_CreateDelegate_OutputDelegate17 = K2Node_CreateDelegate_OutputDelegate17;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate18 = K2Node_CreateDelegate_OutputDelegate18;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
