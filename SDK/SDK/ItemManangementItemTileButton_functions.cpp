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


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.IsWritableWIFEAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               WritableWIFE                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManangementItemTileButton_C::IsWritableWIFEAvailable(bool* WritableWIFE, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "IsWritableWIFEAvailable");

	Params::UItemManangementItemTileButton_C_IsWritableWIFEAvailable_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WritableWIFE != nullptr)
		*WritableWIFE = Parms.WritableWIFE;

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleSlottedSurvivor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortCharacter*              K2Node_DynamicCast_AsFort_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseUIContext*      CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMultiSizeBrush         CallFunc_GetSquadIcon_ReturnValue                                ()

void UItemManangementItemTileButton_C::HandleSlottedSurvivor(class UFortCharacter* K2Node_DynamicCast_AsFort_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, const struct FFortMultiSizeBrush& CallFunc_GetSquadIcon_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "HandleSlottedSurvivor");

	Params::UItemManangementItemTileButton_C_HandleSlottedSurvivor_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_Character = K2Node_DynamicCast_AsFort_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSquadIcon_ReturnValue = CallFunc_GetSquadIcon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateQuantityProduced
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetData_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSchematicQuantityProduced_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UItemManangementItemTileButton_C::UpdateQuantityProduced(class UObject* CallFunc_GetData_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSchematicQuantityProduced_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "UpdateQuantityProduced");

	Params::UItemManangementItemTileButton_C_UpdateQuantityProduced_Params Parms;
	Parms.CallFunc_GetData_ReturnValue = CallFunc_GetData_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSchematicQuantityProduced_ReturnValue = CallFunc_GetSchematicQuantityProduced_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateBangState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*              K2Node_DynamicCast_AsFort_World_Item                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SeenInFrontend_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasItemBeenSeen_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManangementItemTileButton_C::UpdateBangState(class UFortWorldItem* K2Node_DynamicCast_AsFort_World_Item, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_SeenInFrontend_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanNOR_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_HasItemBeenSeen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "UpdateBangState");

	Params::UItemManangementItemTileButton_C_UpdateBangState_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_World_Item = K2Node_DynamicCast_AsFort_World_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_SeenInFrontend_ReturnValue = CallFunc_SeenInFrontend_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_HasItemBeenSeen_ReturnValue = CallFunc_HasItemBeenSeen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateInteractionWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWritableWIFEAvailable_WritableWIFE                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWritableWIFEAvailable_WritableWIFE2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetData_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_DynamicCast_AsFort_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItem*          K2Node_DynamicCast_AsFort_Schematic_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEquipAvailable_EquipAvailable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCraftFailCause     CallFunc_CanCraftSchematic_FailCause                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanCraftSchematic_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxTransferCount_Count                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManangementItemTileButton_C::UpdateInteractionWidgetVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, bool CallFunc_IsWritableWIFEAvailable_WritableWIFE, bool Temp_bool_Variable3, bool CallFunc_IsWritableWIFEAvailable_WritableWIFE2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen2, bool K2Node_DynamicCast_bSuccess2, enum class ESlateVisibility Temp_byte_Variable7, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable4, class UObject* CallFunc_GetData_ReturnValue, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess3, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_IsEquipAvailable_EquipAvailable, enum class EFortCraftFailCause CallFunc_CanCraftSchematic_FailCause, bool CallFunc_CanCraftSchematic_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue3, int32 CallFunc_GetMaxTransferCount_Count, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "UpdateInteractionWidgetVisibility");

	Params::UItemManangementItemTileButton_C_UpdateInteractionWidgetVisibility_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.CallFunc_IsWritableWIFEAvailable_WritableWIFE = CallFunc_IsWritableWIFEAvailable_WritableWIFE;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_IsWritableWIFEAvailable_WritableWIFE2 = CallFunc_IsWritableWIFEAvailable_WritableWIFE2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen2 = K2Node_DynamicCast_AsItem_Management_Screen2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_GetData_ReturnValue = CallFunc_GetData_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Item = K2Node_DynamicCast_AsFort_Item;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item = K2Node_DynamicCast_AsFort_Schematic_Item;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_IsEquipAvailable_EquipAvailable = CallFunc_IsEquipAvailable_EquipAvailable;
	Parms.CallFunc_CanCraftSchematic_FailCause = CallFunc_CanCraftSchematic_FailCause;
	Parms.CallFunc_CanCraftSchematic_ReturnValue = CallFunc_CanCraftSchematic_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_GetMaxTransferCount_Count = CallFunc_GetMaxTransferCount_Count;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.SetEquipSlotOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EquipSlot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManangementItemTileButton_C::SetEquipSlotOverlay(int32 EquipSlot, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "SetEquipSlotOverlay");

	Params::UItemManangementItemTileButton_C_SetEquipSlotOverlay_Params Parms;
	Parms.EquipSlot = EquipSlot;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManagementInventoryPanel_C*K2Node_DynamicCast_AsItem_Management_Inventory_Panel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemDragIcon_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManangementItemTileButton_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemDragIcon_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "OnDragDetected");

	Params::UItemManangementItemTileButton_C_OnDragDetected_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Management_Inventory_Panel = K2Node_DynamicCast_AsItem_Management_Inventory_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue = CallFunc_Conv_AssetToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// struct FEventReply                 CallFunc_DetectDrag_ReturnValue                                  ()
// bool                               CallFunc_IsSchematic_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue2                                  ()

struct FEventReply UItemManangementItemTileButton_C::On_ItemWidgetHolder_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_DetectDrag_ReturnValue, bool CallFunc_IsSchematic_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanNOR_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue2)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "On_ItemWidgetHolder_MouseButtonDown");

	Params::UItemManangementItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_DetectDrag_ReturnValue = CallFunc_DetectDrag_ReturnValue;
	Parms.CallFunc_IsSchematic_ReturnValue = CallFunc_IsSchematic_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue2 = CallFunc_Unhandled_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManangementItemTileButton_C::UpdateStyle(class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, bool Temp_bool_Variable, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, bool Temp_bool_Variable2, class UClass* K2Node_Select_Default, class UClass* K2Node_Select2_Default, enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "UpdateStyle");

	Params::UItemManangementItemTileButton_C_UpdateStyle_Params Parms;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.Temp_class_Variable4 = Temp_class_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetItemManagementMode_ReturnValue = CallFunc_GetItemManagementMode_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.UpdateMulchStateBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CanItemBeMulched_OutRestrictionReason                   ()
// bool                               CallFunc_CanItemBeMulched_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManangementItemTileButton_C::UpdateMulchStateBox(const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_CanItemBeMulched_OutRestrictionReason, bool CallFunc_CanItemBeMulched_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "UpdateMulchStateBox");

	Params::UItemManangementItemTileButton_C_UpdateMulchStateBox_Params Parms;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_CanItemBeMulched_OutRestrictionReason = CallFunc_CanItemBeMulched_OutRestrictionReason;
	Parms.CallFunc_CanItemBeMulched_ReturnValue = CallFunc_CanItemBeMulched_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetItemManagementMode_ReturnValue = CallFunc_GetItemManagementMode_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetItemManagementMode_ReturnValue2 = CallFunc_GetItemManagementMode_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleDifferentItemManagementModeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManangementItemTileButton_C::HandleDifferentItemManagementModeSetBP()
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "HandleDifferentItemManagementModeSetBP");

	Params::UItemManangementItemTileButton_C_HandleDifferentItemManagementModeSetBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManangementItemTileButton_C::OnHovered()
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "OnHovered");

	Params::UItemManangementItemTileButton_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManangementItemTileButton_C::OnUnhovered()
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "OnUnhovered");

	Params::UItemManangementItemTileButton_C_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToDetailChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManangementItemTileButton_C::HandleHasItemToDetailChanged()
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "HandleHasItemToDetailChanged");

	Params::UItemManangementItemTileButton_C_HandleHasItemToDetailChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleHasItemToCompareDetailsWithChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManangementItemTileButton_C::HandleHasItemToCompareDetailsWithChanged()
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "HandleHasItemToCompareDetailsWithChanged");

	Params::UItemManangementItemTileButton_C_HandleHasItemToCompareDetailsWithChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleItemMulchStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManangementItemTileButton_C::HandleItemMulchStateChanged()
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "HandleItemMulchStateChanged");

	Params::UItemManangementItemTileButton_C_HandleItemMulchStateChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleEquipSlotChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              EquipSlot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManangementItemTileButton_C::HandleEquipSlotChanged(int32 EquipSlot)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "HandleEquipSlotChanged");

	Params::UItemManangementItemTileButton_C_HandleEquipSlotChanged_Params Parms;
	Parms.EquipSlot = EquipSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManangementItemTileButton_C::OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "OnDragCancelled");

	Params::UItemManangementItemTileButton_C_OnDragCancelled_Params Parms;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManangementItemTileButton_C::OnSelected()
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "OnSelected");

	Params::UItemManangementItemTileButton_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemManangementItemTileButton_C::Construct()
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "Construct");

	Params::UItemManangementItemTileButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.HandleItemChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManangementItemTileButton_C::HandleItemChangedBP()
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "HandleItemChangedBP");

	Params::UItemManangementItemTileButton_C_HandleItemChangedBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManangementItemTileButton.ItemManangementItemTileButton_C.ExecuteUbergraph_ItemManangementItemTileButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWritableWIFEAvailable_WritableWIFE                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_EquipSlot                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanItemBeMulched_OutRestrictionReason                   ()
// bool                               CallFunc_CanItemBeMulched_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_PointerEvent                                        (ConstParm)
// class UDragDropOperation*          K2Node_Event_Operation                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementInventoryPanel_C*K2Node_DynamicCast_AsItem_Management_Inventory_Panel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInventoryOverflowItem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManangementItemTileButton_C::ExecuteUbergraph_ItemManangementItemTileButton(int32 EntryPoint, bool CallFunc_IsWritableWIFEAvailable_WritableWIFE, float Temp_float_Variable, float Temp_float_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsHovered_ReturnValue, int32 K2Node_Event_EquipSlot, float K2Node_Select2_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class FText CallFunc_CanItemBeMulched_OutRestrictionReason, bool CallFunc_CanItemBeMulched_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, class UItemManagementInventoryPanel_C* K2Node_DynamicCast_AsItem_Management_Inventory_Panel, bool K2Node_DynamicCast_bSuccess, enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue3, bool K2Node_SwitchEnum2_CmpSuccess, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess2, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen2, bool K2Node_DynamicCast_bSuccess3, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select3_Default, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_IsInventoryOverflowItem_ReturnValue, enum class ESlateVisibility K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("ItemManangementItemTileButton_C", "ExecuteUbergraph_ItemManangementItemTileButton");

	Params::UItemManangementItemTileButton_C_ExecuteUbergraph_ItemManangementItemTileButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsWritableWIFEAvailable_WritableWIFE = CallFunc_IsWritableWIFEAvailable_WritableWIFE;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetItemManagementMode_ReturnValue = CallFunc_GetItemManagementMode_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemManagementMode_ReturnValue2 = CallFunc_GetItemManagementMode_ReturnValue2;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_Event_EquipSlot = K2Node_Event_EquipSlot;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_CanItemBeMulched_OutRestrictionReason = CallFunc_CanItemBeMulched_OutRestrictionReason;
	Parms.CallFunc_CanItemBeMulched_ReturnValue = CallFunc_CanItemBeMulched_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.K2Node_Event_PointerEvent = K2Node_Event_PointerEvent;
	Parms.K2Node_Event_Operation = K2Node_Event_Operation;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.K2Node_DynamicCast_AsItem_Management_Inventory_Panel = K2Node_DynamicCast_AsItem_Management_Inventory_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemManagementMode_ReturnValue3 = CallFunc_GetItemManagementMode_ReturnValue3;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen2 = K2Node_DynamicCast_AsItem_Management_Screen2;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_IsInventoryOverflowItem_ReturnValue = CallFunc_IsInventoryOverflowItem_ReturnValue;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
