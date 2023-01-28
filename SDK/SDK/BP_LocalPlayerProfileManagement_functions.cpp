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


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bItemUnseen                                                      (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    LocalAccountItems                                                (Edit, ZeroConstructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByType_Items                             (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByType_Items2                            (ZeroConstructor, ReferenceParm)

void UBP_LocalPlayerProfileManagement_C::Update_Bang_State(bool bItemUnseen, const TArray<class UFortAccountItem*>& LocalAccountItems, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items, bool CallFunc_Less_IntInt_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items2)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "Update Bang State");

	Params::UBP_LocalPlayerProfileManagement_C_Update_Bang_State_Params Parms;
	Parms.bItemUnseen = bItemUnseen;
	Parms.LocalAccountItems = LocalAccountItems;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAccountItemsByType_Items = CallFunc_GetAccountItemsByType_Items;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetAccountItemsByType_Items2 = CallFunc_GetAccountItemsByType_Items2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.UpdateBannerEditorButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerProfileManagement_C::UpdateBannerEditorButton(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "UpdateBannerEditorButton");

	Params::UBP_LocalPlayerProfileManagement_C_UpdateBannerEditorButton_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Get_LeavePartyButton_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FUniqueNetIdRepl>    CallFunc_GetTeamMemberIDs_TeamMemberIDs                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UBP_LocalPlayerProfileManagement_C::Get_LeavePartyButton_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_GetTeamMemberIDs_TeamMemberIDs, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "Get_LeavePartyButton_Visibility_0");

	Params::UBP_LocalPlayerProfileManagement_C_Get_LeavePartyButton_Visibility_0_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_GetTeamMemberIDs_TeamMemberIDs = CallFunc_GetTeamMemberIDs_TeamMemberIDs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Get_ViewProfileButton_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UBP_LocalPlayerProfileManagement_C::Get_ViewProfileButton_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "Get_ViewProfileButton_Visibility_0");

	Params::UBP_LocalPlayerProfileManagement_C_Get_ViewProfileButton_Visibility_0_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue2 = CallFunc_EqualEqual_StrStr_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.UpdateBannerIconAndColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InBannerIconId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        InBannerColorId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerProfileManagement_C::UpdateBannerIconAndColor(class FName InBannerIconId, class FName InBannerColorId, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "UpdateBannerIconAndColor");

	Params::UBP_LocalPlayerProfileManagement_C_UpdateBannerIconAndColor_Params Parms;
	Parms.InBannerIconId = InBannerIconId;
	Parms.InBannerColorId = InBannerColorId;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue2 = CallFunc_NotEqual_NameName_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OnWidgetDeactivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerProfileManagement_C::OnWidgetDeactivated()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "OnWidgetDeactivated");

	Params::UBP_LocalPlayerProfileManagement_C_OnWidgetDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OnWidgetActivated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// bool                               CallFunc_ArePartyFeaturesEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerProfileManagement_C::OnWidgetActivated(enum class ESlateVisibility Temp_byte_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue3, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, bool CallFunc_ArePartyFeaturesEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "OnWidgetActivated");

	Params::UBP_LocalPlayerProfileManagement_C_OnWidgetActivated_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_ArePartyFeaturesEnabled_ReturnValue = CallFunc_ArePartyFeaturesEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerProfileManagement_C::Construct()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "Construct");

	Params::UBP_LocalPlayerProfileManagement_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerProfileManagement_C::BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerProfileManagement_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerProfileManagement_C::BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerProfileManagement_C_BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_100_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerProfileManagement_C::BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_100_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_100_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerProfileManagement_C_BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_100_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerProfileManagement_C::BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerProfileManagement_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.ExecuteUbergraph_BP_LocalPlayerProfileManagement
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo            ()
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalHomebaseRating_Rating                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalHomebaseRating_ProgressFraction                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTotalHomebaseRating_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerProfileManagement_C::ExecuteUbergraph_BP_LocalPlayerProfileManagement(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "ExecuteUbergraph_BP_LocalPlayerProfileManagement");

	Params::UBP_LocalPlayerProfileManagement_C_ExecuteUbergraph_BP_LocalPlayerProfileManagement_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo = CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetTotalHomebaseRating_Rating = CallFunc_GetTotalHomebaseRating_Rating;
	Parms.CallFunc_GetTotalHomebaseRating_ProgressFraction = CallFunc_GetTotalHomebaseRating_ProgressFraction;
	Parms.CallFunc_GetTotalHomebaseRating_ReturnValue = CallFunc_GetTotalHomebaseRating_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.CloseProfileModal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerProfileManagement_C::CloseProfileModal__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "CloseProfileModal__DelegateSignature");

	Params::UBP_LocalPlayerProfileManagement_C_CloseProfileModal__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OpenBannerEditor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerProfileManagement_C::OpenBannerEditor__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerProfileManagement_C", "OpenBannerEditor__DelegateSignature");

	Params::UBP_LocalPlayerProfileManagement_C_OpenBannerEditor__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
