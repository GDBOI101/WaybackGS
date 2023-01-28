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


// Function CompendiumPage.CompendiumPage_C.CreateDisabledQuestWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*    QuestDefinition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDisabledQuestWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumPage_C::CreateDisabledQuestWidget(class UFortQuestItemDefinition* QuestDefinition, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDisabledQuestWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("CompendiumPage_C", "CreateDisabledQuestWidget");

	Params::UCompendiumPage_C_CreateDisabledQuestWidget_Params Parms;
	Parms.QuestDefinition = QuestDefinition;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumPage.CompendiumPage_C.CreateQuestWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDailyQuestWidget_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumPage_C::CreateQuestWidget(class UFortQuestItem* Quest, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDailyQuestWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("CompendiumPage_C", "CreateQuestWidget");

	Params::UCompendiumPage_C_CreateQuestWidget_Params Parms;
	Parms.Quest = Quest;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumPage.CompendiumPage_C.RegisterEventListeners
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumPage_C::RegisterEventListeners(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue)
{
	static auto Func = Class->GetFunction("CompendiumPage_C", "RegisterEventListeners");

	Params::UCompendiumPage_C_RegisterEventListeners_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumPage.CompendiumPage_C.ClaimNextQuestReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCompendiumPage_C::ClaimNextQuestReward()
{
	static auto Func = Class->GetFunction("CompendiumPage_C", "ClaimNextQuestReward");

	Params::UCompendiumPage_C_ClaimNextQuestReward_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumPage.CompendiumPage_C.UpdateQuests
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHasQuestsToClaim                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAchievedCount_OutTotalAchievedCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAchievedCount_OutTotalRequiredCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCompendiumItemDefinition*CallFunc_GetCompendiumDefinitionBP_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortQuestItem*>      CallFunc_GetQuests_OwnedQuests                                   (ZeroConstructor, ReferenceParm)
// TArray<class UFortQuestItemDefinition*>CallFunc_GetQuests_UnownedQuests                                 (ZeroConstructor, ReferenceParm)
// class UFortQuestItemDefinition*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuestType          CallFunc_GetQuestType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuestType          CallFunc_GetQuestType_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCompendiumPage_C::UpdateQuests(bool bHasQuestsToClaim, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable2, class UFortCompendiumItemDefinition* CallFunc_GetCompendiumDefinitionBP_ReturnValue, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, TArray<class UFortQuestItem*>& CallFunc_GetQuests_OwnedQuests, TArray<class UFortQuestItemDefinition*>& CallFunc_GetQuests_UnownedQuests, class UFortQuestItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortQuestItem* CallFunc_Array_Get_Item2, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("CompendiumPage_C", "UpdateQuests");

	Params::UCompendiumPage_C_UpdateQuests_Params Parms;
	Parms.bHasQuestsToClaim = bHasQuestsToClaim;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetAchievedCount_OutTotalAchievedCount = CallFunc_GetAchievedCount_OutTotalAchievedCount;
	Parms.CallFunc_GetAchievedCount_OutTotalRequiredCount = CallFunc_GetAchievedCount_OutTotalRequiredCount;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetCompendiumDefinitionBP_ReturnValue = CallFunc_GetCompendiumDefinitionBP_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetQuests_OwnedQuests = CallFunc_GetQuests_OwnedQuests;
	Parms.CallFunc_GetQuests_UnownedQuests = CallFunc_GetQuests_UnownedQuests;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetQuestType_ReturnValue = CallFunc_GetQuestType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetQuestType_ReturnValue2 = CallFunc_GetQuestType_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumPage.CompendiumPage_C.SetCompendium
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortCompendiumItem*         Compendium                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UCompendiumPage_C::SetCompendium(class UFortCompendiumItem* Compendium, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("CompendiumPage_C", "SetCompendium");

	Params::UCompendiumPage_C_SetCompendium_Params Parms;
	Parms.Compendium = Compendium;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumPage.CompendiumPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCompendiumPage_C::Construct()
{
	static auto Func = Class->GetFunction("CompendiumPage_C", "Construct");

	Params::UCompendiumPage_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompendiumPage.CompendiumPage_C.ExecuteUbergraph_CompendiumPage
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumPage_C::ExecuteUbergraph_CompendiumPage(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("CompendiumPage_C", "ExecuteUbergraph_CompendiumPage");

	Params::UCompendiumPage_C_ExecuteUbergraph_CompendiumPage_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
