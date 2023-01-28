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


// Function QuestMiniTile.QuestMiniTile_C.SetStateAndFindIncompleteQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               QuestFound                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestMiniTile_C::SetStateAndFindIncompleteQuest(bool* QuestFound, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestMiniTile_C", "SetStateAndFindIncompleteQuest");

	Params::UQuestMiniTile_C_SetStateAndFindIncompleteQuest_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestFound != nullptr)
		*QuestFound = Parms.QuestFound;

}


// Function QuestMiniTile.QuestMiniTile_C.PlayTileAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestMiniTile_C::PlayTileAnimation()
{
	static auto Func = Class->GetFunction("QuestMiniTile_C", "PlayTileAnimation");

	Params::UQuestMiniTile_C_PlayTileAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestMiniTile.QuestMiniTile_C.ToggleCurrentQuestTileTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UQuestMiniTile_C::ToggleCurrentQuestTileTimer(bool IsEnabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestMiniTile_C", "ToggleCurrentQuestTileTimer");

	Params::UQuestMiniTile_C_ToggleCurrentQuestTileTimer_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestMiniTile.QuestMiniTile_C.SetState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              InCurrentQuest                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               QuestFound                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestMiniTile_C::SetState(class UFortQuestItem* InCurrentQuest, bool* QuestFound, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("QuestMiniTile_C", "SetState");

	Params::UQuestMiniTile_C_SetState_Params Parms;
	Parms.InCurrentQuest = InCurrentQuest;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestFound != nullptr)
		*QuestFound = Parms.QuestFound;

}


// Function QuestMiniTile.QuestMiniTile_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue                        (HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestMiniTile_C::Init(TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("QuestMiniTile_C", "Init");

	Params::UQuestMiniTile_C_Init_Params Parms;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue = CallFunc_GetLargePreviewImage_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue = CallFunc_Conv_AssetToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestMiniTile.QuestMiniTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestMiniTile_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("QuestMiniTile_C", "PreConstruct");

	Params::UQuestMiniTile_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestMiniTile.QuestMiniTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestMiniTile_C::Construct()
{
	static auto Func = Class->GetFunction("QuestMiniTile_C", "Construct");

	Params::UQuestMiniTile_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestMiniTile.QuestMiniTile_C.ExecuteUbergraph_QuestMiniTile
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestMiniTile_C::ExecuteUbergraph_QuestMiniTile(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestMiniTile_C", "ExecuteUbergraph_QuestMiniTile");

	Params::UQuestMiniTile_C_ExecuteUbergraph_QuestMiniTile_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
