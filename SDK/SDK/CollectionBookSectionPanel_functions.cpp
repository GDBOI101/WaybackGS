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


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnInspectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowItemModifications                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsTemporaryItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionPanel_C::OnInspectItem(class UFortItem* Item, bool AllowItemModifications, bool IsTemporaryItem, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnInspectItem");

	Params::UCollectionBookSectionPanel_C_OnInspectItem_Params Parms;
	Parms.Item = Item;
	Parms.AllowItemModifications = AllowItemModifications;
	Parms.IsTemporaryItem = IsTemporaryItem;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSlotItemConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToSlot                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryCommitSelectedItem_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionPanel_C::OnSlotItemConfirm(class UFortItem* ItemToSlot, bool CallFunc_TryCommitSelectedItem_ReturnValue)
{
	static auto Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnSlotItemConfirm");

	Params::UCollectionBookSectionPanel_C_OnSlotItemConfirm_Params Parms;
	Parms.ItemToSlot = ItemToSlot;
	Parms.CallFunc_TryCommitSelectedItem_ReturnValue = CallFunc_TryCommitSelectedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ShowItemDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionPanel_C::ShowItemDetail(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("CollectionBookSectionPanel_C", "ShowItemDetail");

	Params::UCollectionBookSectionPanel_C_ShowItemDetail_Params Parms;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCollectionBookSectionPanel_C::Construct()
{
	static auto Func = Class->GetFunction("CollectionBookSectionPanel_C", "Construct");

	Params::UCollectionBookSectionPanel_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookSection*  Section                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionPanel_C::OnSectionChanged(class UFortCollectionBookSection* Section)
{
	static auto Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnSectionChanged");

	Params::UCollectionBookSectionPanel_C_OnSectionChanged_Params Parms;
	Parms.Section = Section;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCollectionBookSectionPanel_C::OnActivated()
{
	static auto Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnActivated");

	Params::UCollectionBookSectionPanel_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ExecuteUbergraph_CollectionBookSectionPanel
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortCollectionBookSection*  K2Node_Event_Section                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionPanel_C::ExecuteUbergraph_CollectionBookSectionPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortCollectionBookSection* K2Node_Event_Section)
{
	static auto Func = Class->GetFunction("CollectionBookSectionPanel_C", "ExecuteUbergraph_CollectionBookSectionPanel");

	Params::UCollectionBookSectionPanel_C_ExecuteUbergraph_CollectionBookSectionPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_Event_Section = K2Node_Event_Section;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
