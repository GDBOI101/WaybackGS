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


// Function PartyFinder.PartyFinder_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortPartyContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "UnbindDelegates");

	Params::UPartyFinder_C_UnbindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.UpdateDetailsEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortSocialItemType     SocialItemType                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSocialItem*             LocalPartyFinderItem                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::UpdateDetailsEmpty(enum class EFortSocialItemType SocialItemType, class UFortSocialItem* LocalPartyFinderItem)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "UpdateDetailsEmpty");

	Params::UPartyFinder_C_UpdateDetailsEmpty_Params Parms;
	Parms.SocialItemType = SocialItemType;
	Parms.LocalPartyFinderItem = LocalPartyFinderItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.HandleFriendPresenceUpdated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            FriendId                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSocialItem*             K2Node_DynamicCast_AsFort_Social_Item                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_C::HandleFriendPresenceUpdated(struct FUniqueNetIdRepl& FriendId, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "HandleFriendPresenceUpdated");

	Params::UPartyFinder_C_HandleFriendPresenceUpdated_Params Parms;
	Parms.FriendId = FriendId;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Social_Item = K2Node_DynamicCast_AsFort_Social_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.SocialTreeView_GetChildrenForCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// TArray<class UFortSocialItem*>     SocialItems                                                      (Edit, ZeroConstructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSocialItem*             K2Node_DynamicCast_AsFort_Social_Item                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortSocialItem*>     CallFunc_GetActiveFriendsList_OutActiveFriends                   (ZeroConstructor, ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortSocialItem*>     CallFunc_GetPartyInvites_OutPartyInvites                         (ZeroConstructor, ReferenceParm)

TArray<class UObject*> UPartyFinder_C::SocialTreeView_GetChildrenForCategory(class UObject* Item, const TArray<class UFortSocialItem*>& SocialItems, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, TArray<class UFortSocialItem*>& CallFunc_GetActiveFriendsList_OutActiveFriends, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, TArray<class UFortSocialItem*>& CallFunc_GetPartyInvites_OutPartyInvites)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "SocialTreeView_GetChildrenForCategory");

	Params::UPartyFinder_C_SocialTreeView_GetChildrenForCategory_Params Parms;
	Parms.Item = Item;
	Parms.SocialItems = SocialItems;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Social_Item = K2Node_DynamicCast_AsFort_Social_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveFriendsList_OutActiveFriends = CallFunc_GetActiveFriendsList_OutActiveFriends;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetPartyInvites_OutPartyInvites = CallFunc_GetPartyInvites_OutPartyInvites;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyFinder.PartyFinder_C.IgnoreInvite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSocialItem*             K2Node_DynamicCast_AsFort_Social_Item                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_C::IgnoreInvite(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "IgnoreInvite");

	Params::UPartyFinder_C_IgnoreInvite_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Social_Item = K2Node_DynamicCast_AsFort_Social_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.SendInvite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSocialItem*             K2Node_DynamicCast_AsFort_Social_Item                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_C::SendInvite(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "SendInvite");

	Params::UPartyFinder_C_SendInvite_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Social_Item = K2Node_DynamicCast_AsFort_Social_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.GetFinderItemVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortSocialItem*             PartyFinderItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UPartyFinder_C::GetFinderItemVisibility(class UFortSocialItem* PartyFinderItem, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "GetFinderItemVisibility");

	Params::UPartyFinder_C_GetFinderItemVisibility_Params Parms;
	Parms.PartyFinderItem = PartyFinderItem;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PartyFinder.PartyFinder_C.UpdateDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSocialItem*             PartyFinderItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortSocialItemType     SocialItemType                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSocialItem*             LocalPartyFinderItem                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortSocialItemType     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortSocialItemType     Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetFinderItemVisibility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetFinderItemVisibility_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortPartyRestriction   CallFunc_CanBeJoined_FailReason                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeJoined_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyRestriction   CallFunc_CanBeInvited_FailReason                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeInvited_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_C::UpdateDetails(class UFortSocialItem* PartyFinderItem, enum class EFortSocialItemType SocialItemType, class UFortSocialItem* LocalPartyFinderItem, enum class EFortSocialItemType Temp_byte_Variable, class UWidget* Temp_object_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortSocialItemType Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility CallFunc_GetFinderItemVisibility_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility CallFunc_GetFinderItemVisibility_ReturnValue2, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason, bool CallFunc_CanBeJoined_ReturnValue, class UWidget* K2Node_Select_Default, enum class EFortPartyRestriction CallFunc_CanBeInvited_FailReason, bool CallFunc_CanBeInvited_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "UpdateDetails");

	Params::UPartyFinder_C_UpdateDetails_Params Parms;
	Parms.PartyFinderItem = PartyFinderItem;
	Parms.SocialItemType = SocialItemType;
	Parms.LocalPartyFinderItem = LocalPartyFinderItem;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.CallFunc_GetFinderItemVisibility_ReturnValue = CallFunc_GetFinderItemVisibility_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetFinderItemVisibility_ReturnValue2 = CallFunc_GetFinderItemVisibility_ReturnValue2;
	Parms.CallFunc_CanBeJoined_FailReason = CallFunc_CanBeJoined_FailReason;
	Parms.CallFunc_CanBeJoined_ReturnValue = CallFunc_CanBeJoined_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CanBeInvited_FailReason = CallFunc_CanBeInvited_FailReason;
	Parms.CallFunc_CanBeInvited_ReturnValue = CallFunc_CanBeInvited_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.HandleSocialListChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSocialItem*>     SocialItems                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               bExpandAll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSocialItem*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSocialItem*             CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_C::HandleSocialListChanged(TArray<class UFortSocialItem*>& SocialItems, bool bExpandAll, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortSocialItem* CallFunc_Array_Get_Item, class UFortSocialItem* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "HandleSocialListChanged");

	Params::UPartyFinder_C_HandleSocialListChanged_Params Parms;
	Parms.SocialItems = SocialItems;
	Parms.bExpandAll = bExpandAll;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.HandlePartyTransitionStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPartyTransition    Transition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_C::HandlePartyTransitionStarted(enum class EFortPartyTransition Transition, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "HandlePartyTransitionStarted");

	Params::UPartyFinder_C_HandlePartyTransitionStarted_Params Parms;
	Parms.Transition = Transition;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortPartyContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "BindDelegates");

	Params::UPartyFinder_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.DialogResult_9763B6F5495998E5B2E944A5F646709C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResultName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::DialogResult_9763B6F5495998E5B2E944A5F646709C(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "DialogResult_9763B6F5495998E5B2E944A5F646709C");

	Params::UPartyFinder_C_DialogResult_9763B6F5495998E5B2E944A5F646709C_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPartyFinder_C::Construct()
{
	static auto Func = Class->GetFunction("PartyFinder_C", "Construct");

	Params::UPartyFinder_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature");

	Params::UPartyFinder_C_BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.HandlePartyDataChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPartyState                 PartyData                                                        (ConstParm, Parm, OutParm, ReferenceParm)

void UPartyFinder_C::HandlePartyDataChanged(struct FPartyState& PartyData)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "HandlePartyDataChanged");

	Params::UPartyFinder_C_HandlePartyDataChanged_Params Parms;
	Parms.PartyData = PartyData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	Params::UPartyFinder_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature");

	Params::UPartyFinder_C_BndEvt__IgnoreButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature");

	Params::UPartyFinder_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_99_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature");

	Params::UPartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.OnSocialListChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSocialItem*>     SocialItems                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPartyFinder_C::OnSocialListChanged(TArray<class UFortSocialItem*>& SocialItems)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "OnSocialListChanged");

	Params::UPartyFinder_C_OnSocialListChanged_Params Parms;
	Parms.SocialItems = SocialItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UPartyFinder_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPartyFinder_C::OnActivated()
{
	static auto Func = Class->GetFunction("PartyFinder_C", "OnActivated");

	Params::UPartyFinder_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_C::BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UPartyFinder_C_BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPartyFinder_C::Destruct()
{
	static auto Func = Class->GetFunction("PartyFinder_C", "Destruct");

	Params::UPartyFinder_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.EnableInviteButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyFinder_C::EnableInviteButton()
{
	static auto Func = Class->GetFunction("PartyFinder_C", "EnableInviteButton");

	Params::UPartyFinder_C_EnableInviteButton_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder.PartyFinder_C.ExecuteUbergraph_PartyFinder
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPartyState                 K2Node_CustomEvent_PartyData                                     (ConstParm)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortSocialItem*>     CallFunc_GetSocialItemCategories_OutSocialCategoryItems          (ZeroConstructor, ReferenceParm)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSocialItem*             K2Node_DynamicCast_AsFort_Social_Item                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSocialItem*             K2Node_DynamicCast_AsFort_Social_Item2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSocialItem*             K2Node_DynamicCast_AsFort_Social_Item3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortSocialItem*>     K2Node_CustomEvent_SocialItems                                   (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSocialItem*             K2Node_DynamicCast_AsFort_Social_Item4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniquePlayerId_ReturnValue                           (HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumPlayersInLocalParty_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_C::ExecuteUbergraph_PartyFinder(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button5, const struct FPartyState& K2Node_CustomEvent_PartyData, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UFortPartyContext* CallFunc_GetContext_ReturnValue3, enum class EFortDialogResult Temp_byte_Variable, class FName Temp_name_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue4, TArray<class UFortSocialItem*>& CallFunc_GetSocialItemCategories_OutSocialCategoryItems, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item, bool K2Node_DynamicCast_bSuccess, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item2, bool K2Node_DynamicCast_bSuccess2, class UObject* CallFunc_GetSelectedItem_ReturnValue2, class UObject* CallFunc_GetSelectedItem_ReturnValue3, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, TArray<class UFortSocialItem*>& K2Node_CustomEvent_SocialItems, bool CallFunc_BooleanOR_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UObject* CallFunc_GetSelectedItem_ReturnValue4, class UFortSocialItem* K2Node_DynamicCast_AsFort_Social_Item4, bool K2Node_DynamicCast_bSuccess4, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UFortPartyContext* CallFunc_GetContext_ReturnValue5, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PartyFinder_C", "ExecuteUbergraph_PartyFinder");

	Params::UPartyFinder_C_ExecuteUbergraph_PartyFinder_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.K2Node_CustomEvent_PartyData = K2Node_CustomEvent_PartyData;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_GetSocialItemCategories_OutSocialCategoryItems = CallFunc_GetSocialItemCategories_OutSocialCategoryItems;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Social_Item = K2Node_DynamicCast_AsFort_Social_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Social_Item2 = K2Node_DynamicCast_AsFort_Social_Item2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetSelectedItem_ReturnValue2 = CallFunc_GetSelectedItem_ReturnValue2;
	Parms.CallFunc_GetSelectedItem_ReturnValue3 = CallFunc_GetSelectedItem_ReturnValue3;
	Parms.K2Node_DynamicCast_AsFort_Social_Item3 = K2Node_DynamicCast_AsFort_Social_Item3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.K2Node_CustomEvent_SocialItems = K2Node_CustomEvent_SocialItems;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetSelectedItem_ReturnValue4 = CallFunc_GetSelectedItem_ReturnValue4;
	Parms.K2Node_DynamicCast_AsFort_Social_Item4 = K2Node_DynamicCast_AsFort_Social_Item4;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetUniquePlayerId_ReturnValue = CallFunc_GetUniquePlayerId_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetNumPlayersInLocalParty_ReturnValue = CallFunc_GetNumPlayersInLocalParty_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
