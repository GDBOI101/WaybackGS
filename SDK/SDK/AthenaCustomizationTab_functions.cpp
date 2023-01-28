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


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectFirstWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::SelectFirstWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "SelectFirstWidget");

	Params::UAthenaCustomizationTab_C_SelectFirstWidget_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowThrobber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    UIManager                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable2                                              (ConstParm)
// struct FSlateBrush                 CallFunc_NoResourceBrush_ReturnValue                             ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressModalWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::ShowThrobber(class UFortUIManagerWidget_NUI* UIManager, class FText Temp_text_Variable, class FText Temp_text_Variable2, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "ShowThrobber");

	Params::UAthenaCustomizationTab_C_ShowThrobber_Params Parms;
	Parms.UIManager = UIManager;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.CallFunc_NoResourceBrush_ReturnValue = CallFunc_NoResourceBrush_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RefreshInputActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationTab_C::RefreshInputActions(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "RefreshInputActions");

	Params::UAthenaCustomizationTab_C_RefreshInputActions_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectInitialWidgetForGamepad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::SelectInitialWidgetForGamepad()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "SelectInitialWidgetForGamepad");

	Params::UAthenaCustomizationTab_C_SelectInitialWidgetForGamepad_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.EndPickingCustomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RestoreFocus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::EndPickingCustomization(bool RestoreFocus, float CallFunc_GetEndTime_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "EndPickingCustomization");

	Params::UAthenaCustomizationTab_C_EndPickingCustomization_Params Parms;
	Parms.RestoreFocus = RestoreFocus;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BeginPickingCustomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCategory                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     WidgetToReturnFocusTo                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        HeaderText                                                       (Parm)
// enum class EAthenaCustomizationCategoryNewLocalVar_0                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationTab_C::BeginPickingCustomization(enum class EAthenaCustomizationCategory Category, class UWidget* WidgetToReturnFocusTo, class FText HeaderText, enum class EAthenaCustomizationCategory NewLocalVar_0)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BeginPickingCustomization");

	Params::UAthenaCustomizationTab_C_BeginPickingCustomization_Params Parms;
	Parms.Category = Category;
	Parms.WidgetToReturnFocusTo = WidgetToReturnFocusTo;
	Parms.HeaderText = HeaderText;
	Parms.NewLocalVar_0 = NewLocalVar_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterInputActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::RegisterInputActions()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "RegisterInputActions");

	Params::UAthenaCustomizationTab_C_RegisterInputActions_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterCancel
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UAthenaCustomizationTab_C::RegisterCancel(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "RegisterCancel");

	Params::UAthenaCustomizationTab_C_RegisterCancel_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleCancel
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationTab_C::HandleCancel(bool* PassThrough)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "HandleCancel");

	Params::UAthenaCustomizationTab_C_HandleCancel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "OnActivated");

	Params::UAthenaCustomizationTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationTab_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "OnInputModeChanged");

	Params::UAthenaCustomizationTab_C_OnInputModeChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "OnDeactivated");

	Params::UAthenaCustomizationTab_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "Construct");

	Params::UAthenaCustomizationTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__LoadScreenSlot_K2Node_ComponentBoundEvent_40_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BannerLabel                                                      (Parm)

void UAthenaCustomizationTab_C::BndEvt__LoadScreenSlot_K2Node_ComponentBoundEvent_40_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__LoadScreenSlot_K2Node_ComponentBoundEvent_40_OnSlotClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__LoadScreenSlot_K2Node_ComponentBoundEvent_40_OnSlotClicked__DelegateSignature_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.Button = Button;
	Parms.BannerLabel = BannerLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__HatSlot_K2Node_ComponentBoundEvent_335_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BannerLabel                                                      (Parm)

void UAthenaCustomizationTab_C::BndEvt__HatSlot_K2Node_ComponentBoundEvent_335_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__HatSlot_K2Node_ComponentBoundEvent_335_OnSlotClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__HatSlot_K2Node_ComponentBoundEvent_335_OnSlotClicked__DelegateSignature_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.Button = Button;
	Parms.BannerLabel = BannerLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__BackpackSlot_K2Node_ComponentBoundEvent_344_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BannerLabel                                                      (Parm)

void UAthenaCustomizationTab_C::BndEvt__BackpackSlot_K2Node_ComponentBoundEvent_344_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__BackpackSlot_K2Node_ComponentBoundEvent_344_OnSlotClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__BackpackSlot_K2Node_ComponentBoundEvent_344_OnSlotClicked__DelegateSignature_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.Button = Button;
	Parms.BannerLabel = BannerLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__BattleBusSlot_K2Node_ComponentBoundEvent_354_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BannerLabel                                                      (Parm)

void UAthenaCustomizationTab_C::BndEvt__BattleBusSlot_K2Node_ComponentBoundEvent_354_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__BattleBusSlot_K2Node_ComponentBoundEvent_354_OnSlotClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__BattleBusSlot_K2Node_ComponentBoundEvent_354_OnSlotClicked__DelegateSignature_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.Button = Button;
	Parms.BannerLabel = BannerLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__DanceSlot_K2Node_ComponentBoundEvent_365_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BannerLabel                                                      (Parm)

void UAthenaCustomizationTab_C::BndEvt__DanceSlot_K2Node_ComponentBoundEvent_365_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__DanceSlot_K2Node_ComponentBoundEvent_365_OnSlotClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__DanceSlot_K2Node_ComponentBoundEvent_365_OnSlotClicked__DelegateSignature_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.Button = Button;
	Parms.BannerLabel = BannerLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__TauntSlot_K2Node_ComponentBoundEvent_377_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BannerLabel                                                      (Parm)

void UAthenaCustomizationTab_C::BndEvt__TauntSlot_K2Node_ComponentBoundEvent_377_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__TauntSlot_K2Node_ComponentBoundEvent_377_OnSlotClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__TauntSlot_K2Node_ComponentBoundEvent_377_OnSlotClicked__DelegateSignature_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.Button = Button;
	Parms.BannerLabel = BannerLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__VictoryPoseSlot_K2Node_ComponentBoundEvent_390_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BannerLabel                                                      (Parm)

void UAthenaCustomizationTab_C::BndEvt__VictoryPoseSlot_K2Node_ComponentBoundEvent_390_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__VictoryPoseSlot_K2Node_ComponentBoundEvent_390_OnSlotClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__VictoryPoseSlot_K2Node_ComponentBoundEvent_390_OnSlotClicked__DelegateSignature_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.Button = Button;
	Parms.BannerLabel = BannerLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__GliderSlot_K2Node_ComponentBoundEvent_540_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BannerLabel                                                      (Parm)

void UAthenaCustomizationTab_C::BndEvt__GliderSlot_K2Node_ComponentBoundEvent_540_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__GliderSlot_K2Node_ComponentBoundEvent_540_OnSlotClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__GliderSlot_K2Node_ComponentBoundEvent_540_OnSlotClicked__DelegateSignature_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.Button = Button;
	Parms.BannerLabel = BannerLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_785_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BannerLabel                                                      (Parm)

void UAthenaCustomizationTab_C::BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_785_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_785_OnSlotClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_785_OnSlotClicked__DelegateSignature_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.Button = Button;
	Parms.BannerLabel = BannerLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__HarvestToolSlot_K2Node_ComponentBoundEvent_800_OnSlotClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        BannerLabel                                                      (Parm)

void UAthenaCustomizationTab_C::BndEvt__HarvestToolSlot_K2Node_ComponentBoundEvent_800_OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__HarvestToolSlot_K2Node_ComponentBoundEvent_800_OnSlotClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__HarvestToolSlot_K2Node_ComponentBoundEvent_800_OnSlotClicked__DelegateSignature_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.Button = Button;
	Parms.BannerLabel = BannerLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ExecuteUbergraph_AthenaCustomizationTab
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaCustomizationCategoryK2Node_ComponentBoundEvent_CustomizationType                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_BannerLabel                           ()
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaBannerSelectModal_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaCustomizationCategoryK2Node_ComponentBoundEvent_CustomizationType10                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_BannerLabel10                         ()
// enum class EAthenaCustomizationCategoryK2Node_ComponentBoundEvent_CustomizationType9                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_BannerLabel9                          ()
// enum class EAthenaCustomizationCategoryK2Node_ComponentBoundEvent_CustomizationType8                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_BannerLabel8                          ()
// enum class EAthenaCustomizationCategoryK2Node_ComponentBoundEvent_CustomizationType7                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_BannerLabel7                          ()
// enum class EAthenaCustomizationCategoryK2Node_ComponentBoundEvent_CustomizationType6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_BannerLabel6                          ()
// enum class EAthenaCustomizationCategoryK2Node_ComponentBoundEvent_CustomizationType5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_BannerLabel5                          ()
// enum class EAthenaCustomizationCategoryK2Node_ComponentBoundEvent_CustomizationType4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_BannerLabel4                          ()
// enum class EAthenaCustomizationCategoryK2Node_ComponentBoundEvent_CustomizationType3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_BannerLabel3                          ()
// enum class EAthenaCustomizationCategoryK2Node_ComponentBoundEvent_CustomizationType2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_BannerLabel2                          ()

void UAthenaCustomizationTab_C::ExecuteUbergraph_AthenaCustomizationTab(int32 EntryPoint, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText K2Node_ComponentBoundEvent_BannerLabel, bool K2Node_Event_bUsingGamepad, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaBannerSelectModal_C* CallFunc_Create_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button11, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType10, class UCommonButton* K2Node_ComponentBoundEvent_Button10, class FText K2Node_ComponentBoundEvent_BannerLabel10, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType9, class UCommonButton* K2Node_ComponentBoundEvent_Button9, class FText K2Node_ComponentBoundEvent_BannerLabel9, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType8, class UCommonButton* K2Node_ComponentBoundEvent_Button8, class FText K2Node_ComponentBoundEvent_BannerLabel8, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType7, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class FText K2Node_ComponentBoundEvent_BannerLabel7, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType6, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class FText K2Node_ComponentBoundEvent_BannerLabel6, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType5, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class FText K2Node_ComponentBoundEvent_BannerLabel5, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType4, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class FText K2Node_ComponentBoundEvent_BannerLabel4, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType3, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class FText K2Node_ComponentBoundEvent_BannerLabel3, enum class EAthenaCustomizationCategory K2Node_ComponentBoundEvent_CustomizationType2, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class FText K2Node_ComponentBoundEvent_BannerLabel2)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "ExecuteUbergraph_AthenaCustomizationTab");

	Params::UAthenaCustomizationTab_C_ExecuteUbergraph_AthenaCustomizationTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_CustomizationType = K2Node_ComponentBoundEvent_CustomizationType;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_BannerLabel = K2Node_ComponentBoundEvent_BannerLabel;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button11 = K2Node_ComponentBoundEvent_Button11;
	Parms.K2Node_ComponentBoundEvent_CustomizationType10 = K2Node_ComponentBoundEvent_CustomizationType10;
	Parms.K2Node_ComponentBoundEvent_Button10 = K2Node_ComponentBoundEvent_Button10;
	Parms.K2Node_ComponentBoundEvent_BannerLabel10 = K2Node_ComponentBoundEvent_BannerLabel10;
	Parms.K2Node_ComponentBoundEvent_CustomizationType9 = K2Node_ComponentBoundEvent_CustomizationType9;
	Parms.K2Node_ComponentBoundEvent_Button9 = K2Node_ComponentBoundEvent_Button9;
	Parms.K2Node_ComponentBoundEvent_BannerLabel9 = K2Node_ComponentBoundEvent_BannerLabel9;
	Parms.K2Node_ComponentBoundEvent_CustomizationType8 = K2Node_ComponentBoundEvent_CustomizationType8;
	Parms.K2Node_ComponentBoundEvent_Button8 = K2Node_ComponentBoundEvent_Button8;
	Parms.K2Node_ComponentBoundEvent_BannerLabel8 = K2Node_ComponentBoundEvent_BannerLabel8;
	Parms.K2Node_ComponentBoundEvent_CustomizationType7 = K2Node_ComponentBoundEvent_CustomizationType7;
	Parms.K2Node_ComponentBoundEvent_Button7 = K2Node_ComponentBoundEvent_Button7;
	Parms.K2Node_ComponentBoundEvent_BannerLabel7 = K2Node_ComponentBoundEvent_BannerLabel7;
	Parms.K2Node_ComponentBoundEvent_CustomizationType6 = K2Node_ComponentBoundEvent_CustomizationType6;
	Parms.K2Node_ComponentBoundEvent_Button6 = K2Node_ComponentBoundEvent_Button6;
	Parms.K2Node_ComponentBoundEvent_BannerLabel6 = K2Node_ComponentBoundEvent_BannerLabel6;
	Parms.K2Node_ComponentBoundEvent_CustomizationType5 = K2Node_ComponentBoundEvent_CustomizationType5;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.K2Node_ComponentBoundEvent_BannerLabel5 = K2Node_ComponentBoundEvent_BannerLabel5;
	Parms.K2Node_ComponentBoundEvent_CustomizationType4 = K2Node_ComponentBoundEvent_CustomizationType4;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_BannerLabel4 = K2Node_ComponentBoundEvent_BannerLabel4;
	Parms.K2Node_ComponentBoundEvent_CustomizationType3 = K2Node_ComponentBoundEvent_CustomizationType3;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_BannerLabel3 = K2Node_ComponentBoundEvent_BannerLabel3;
	Parms.K2Node_ComponentBoundEvent_CustomizationType2 = K2Node_ComponentBoundEvent_CustomizationType2;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_BannerLabel2 = K2Node_ComponentBoundEvent_BannerLabel2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
