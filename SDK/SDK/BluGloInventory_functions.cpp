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


// Function BluGloInventory.BluGloInventory_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortBluGloManager*          CallFunc_GetBluGloManager_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetBluGloItemDefinition_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInInventory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInInventory_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBluGloInventory_C::Update(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class AFortBluGloManager* CallFunc_GetBluGloManager_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UFortItemDefinition* CallFunc_GetBluGloItemDefinition_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BluGloInventory_C", "Update");

	Params::UBluGloInventory_C_Update_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetBluGloManager_ReturnValue = CallFunc_GetBluGloManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetBluGloItemDefinition_ReturnValue = CallFunc_GetBluGloItemDefinition_ReturnValue;
	Parms.CallFunc_GetNumInInventory_ReturnValue = CallFunc_GetNumInInventory_ReturnValue;
	Parms.CallFunc_GetNumInInventory_ReturnValue2 = CallFunc_GetNumInInventory_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloInventory.BluGloInventory_C.HandleOnWorldItemListChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>      Items_Added                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      Items_Removed                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBluGloInventory_C::HandleOnWorldItemListChanged(TArray<class UFortWorldItem*>& Items_Added, TArray<class UFortWorldItem*>& Items_Removed)
{
	static auto Func = Class->GetFunction("BluGloInventory_C", "HandleOnWorldItemListChanged");

	Params::UBluGloInventory_C_HandleOnWorldItemListChanged_Params Parms;
	Parms.Items_Added = Items_Added;
	Parms.Items_Removed = Items_Removed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloInventory.BluGloInventory_C.HandleWorldItemsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBluGloInventory_C::HandleWorldItemsChanged()
{
	static auto Func = Class->GetFunction("BluGloInventory_C", "HandleWorldItemsChanged");

	Params::UBluGloInventory_C_HandleWorldItemsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloInventory.BluGloInventory_C.HandleItemPickedUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*              New_Item                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBluGloInventory_C::HandleItemPickedUp(class UFortWorldItem* New_Item, int32 Count)
{
	static auto Func = Class->GetFunction("BluGloInventory_C", "HandleItemPickedUp");

	Params::UBluGloInventory_C_HandleItemPickedUp_Params Parms;
	Parms.New_Item = New_Item;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloInventory.BluGloInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBluGloInventory_C::Construct()
{
	static auto Func = Class->GetFunction("BluGloInventory_C", "Construct");

	Params::UBluGloInventory_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloInventory.BluGloInventory_C.ExecuteUbergraph_BluGloInventory
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInOutpostZone_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBluGloInventory_C::ExecuteUbergraph_BluGloInventory(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInOutpostZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("BluGloInventory_C", "ExecuteUbergraph_BluGloInventory");

	Params::UBluGloInventory_C_ExecuteUbergraph_BluGloInventory_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInOutpostZone_ReturnValue = CallFunc_IsInOutpostZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
