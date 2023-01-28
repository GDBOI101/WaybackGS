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


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.UpdateTypeIconOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              VerticalOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)

void USimpleSquadSlotButton_C::UpdateTypeIconOffset(float VerticalOffset, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform)
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "UpdateTypeIconOffset");

	Params::USimpleSquadSlotButton_C_UpdateTypeIconOffset_Params Parms;
	Parms.VerticalOffset = VerticalOffset;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Glow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GlowIcon                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()
// struct FSlateColor                 K2Node_Select_Default                                            ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void USimpleSquadSlotButton_C::Update_SubType_Icon_Glow(bool GlowIcon, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, const struct FSlateColor& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "Update SubType Icon Glow");

	Params::USimpleSquadSlotButton_C_Update_SubType_Icon_Glow_Params Parms;
	Parms.GlowIcon = GlowIcon;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Image
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USimpleSquadSlotButton_C::Update_SubType_Icon_Image()
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "Update SubType Icon Image");

	Params::USimpleSquadSlotButton_C_Update_SubType_Icon_Image_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.IsSlotEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEmpty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInSquadSlotBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USimpleSquadSlotButton_C::IsSlotEmpty(bool* IsEmpty, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "IsSlotEmpty");

	Params::USimpleSquadSlotButton_C_IsSlotEmpty_Params Parms;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_GetItemInSquadSlotBP_ReturnValue = CallFunc_GetItemInSquadSlotBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Mark Squad Slot Seen State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseNodeItem*       CallFunc_GetHomebaseNodeItemForSquadSlot_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USimpleSquadSlotButton_C::Mark_Squad_Slot_Seen_State(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, class UFortHomebaseNodeItem* CallFunc_GetHomebaseNodeItemForSquadSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "Mark Squad Slot Seen State");

	Params::USimpleSquadSlotButton_C_Mark_Squad_Slot_Seen_State_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex;
	Parms.CallFunc_GetHomebaseNodeItemForSquadSlot_ReturnValue = CallFunc_GetHomebaseNodeItemForSquadSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSquadSlotUnseen_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void USimpleSquadSlotButton_C::Update_Bang_State(class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSquadSlotUnseen_ReturnValue)
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "Update Bang State");

	Params::USimpleSquadSlotButton_C_Update_Bang_State_Params Parms;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSquadSlotUnseen_ReturnValue = CallFunc_IsSquadSlotUnseen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.GetSimpleSquadButtonTooltipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* USimpleSquadSlotButton_C::GetSimpleSquadButtonTooltipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "GetSimpleSquadButtonTooltipWidget");

	Params::USimpleSquadSlotButton_C_GetSimpleSquadButtonTooltipWidget_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USimpleSquadSlotButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "PreConstruct");

	Params::USimpleSquadSlotButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USimpleSquadSlotButton_C::Construct()
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "Construct");

	Params::USimpleSquadSlotButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void USimpleSquadSlotButton_C::HandlePostDifferentSquadSlotSetBP()
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "HandlePostDifferentSquadSlotSetBP");

	Params::USimpleSquadSlotButton_C_HandlePostDifferentSquadSlotSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.SquadSlotWidgetUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void USimpleSquadSlotButton_C::SquadSlotWidgetUpdated()
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "SquadSlotWidgetUpdated");

	Params::USimpleSquadSlotButton_C_SquadSlotWidgetUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void USimpleSquadSlotButton_C::OnSelected()
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "OnSelected");

	Params::USimpleSquadSlotButton_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.ExecuteUbergraph_SimpleSquadSlotButton
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActiveCombatSquadId_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleSquadSlotButton_C::ExecuteUbergraph_SimpleSquadSlotButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, enum class EFortItemCardSize Temp_byte_Variable3, class FName CallFunc_GetActiveCombatSquadId_ReturnValue, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, class UClass* Temp_class_Variable5, class UClass* Temp_class_Variable6, class UClass* Temp_class_Variable7, bool K2Node_Event_IsDesignTime, class FName CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId, int32 CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UClass* K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("SimpleSquadSlotButton_C", "ExecuteUbergraph_SimpleSquadSlotButton");

	Params::USimpleSquadSlotButton_C_ExecuteUbergraph_SimpleSquadSlotButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetActiveCombatSquadId_ReturnValue = CallFunc_GetActiveCombatSquadId_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.Temp_class_Variable4 = Temp_class_Variable4;
	Parms.Temp_class_Variable5 = Temp_class_Variable5;
	Parms.Temp_class_Variable6 = Temp_class_Variable6;
	Parms.Temp_class_Variable7 = Temp_class_Variable7;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadId;
	Parms.CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex = CallFunc_GetIdOfSquadSlotToManageBP_OutSquadSlotIndex;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
