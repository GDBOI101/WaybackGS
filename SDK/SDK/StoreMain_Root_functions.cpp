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


// Function StoreMain_Root.StoreMain_Root_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_Root_C::HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "HandleBack");

	Params::UStoreMain_Root_C_HandleBack_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function StoreMain_Root.StoreMain_Root_C.AboutToEnterChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::AboutToEnterChat()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "AboutToEnterChat");

	Params::UStoreMain_Root_C_AboutToEnterChat_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.AboutToPushDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::AboutToPushDetails()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "AboutToPushDetails");

	Params::UStoreMain_Root_C_AboutToPushDetails_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.IsOffersScrollBoxActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_Root_C::IsOffersScrollBoxActive(bool* Return_Value, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "IsOffersScrollBoxActive");

	Params::UStoreMain_Root_C_IsOffersScrollBoxActive_Params Parms;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function StoreMain_Root.StoreMain_Root_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_Root_C::SetFocus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "SetFocus");

	Params::UStoreMain_Root_C_SetFocus_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.AddOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMtxStoreOfferBase*      MtxOffer                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class UStoreMain_MTXOffer_C*       K2Node_DynamicCast_AsStore_Main_MTXOffer                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              K2Node_DynamicCast_AsScroll_Box_Slot                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_Root_C::AddOffer(class UFortMtxStoreOfferBase* MtxOffer, const struct FMargin& K2Node_MakeStruct_Margin, class UStoreMain_MTXOffer_C* K2Node_DynamicCast_AsStore_Main_MTXOffer, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "AddOffer");

	Params::UStoreMain_Root_C_AddOffer_Params Parms;
	Parms.MtxOffer = MtxOffer;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_DynamicCast_AsStore_Main_MTXOffer = K2Node_DynamicCast_AsStore_Main_MTXOffer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsScroll_Box_Slot = K2Node_DynamicCast_AsScroll_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::NoOffersAvailable()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "NoOffersAvailable");

	Params::UStoreMain_Root_C_NoOffersAvailable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::OnActivated()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnActivated");

	Params::UStoreMain_Root_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnMtxOfferGenerated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortMtxStoreOfferBase*      MtxOffer                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_Root_C::OnMtxOfferGenerated(class UFortMtxStoreOfferBase* MtxOffer)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnMtxOfferGenerated");

	Params::UStoreMain_Root_C_OnMtxOfferGenerated_Params Parms;
	Parms.MtxOffer = MtxOffer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::OnOffersGenerated()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnOffersGenerated");

	Params::UStoreMain_Root_C_OnOffersGenerated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::OnStartReadingOffers()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnStartReadingOffers");

	Params::UStoreMain_Root_C_OnStartReadingOffers_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnDeactivated");

	Params::UStoreMain_Root_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::Destruct()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "Destruct");

	Params::UStoreMain_Root_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::Construct()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "Construct");

	Params::UStoreMain_Root_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFrontEndCamera         Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFrontEndCamera         Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFrontEndCamera         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMtxStoreOfferBase*      K2Node_Event_MtxOffer                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreOffersLoaded_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOffersScrollBoxActive_Return_Value                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUIStateWidget_NUI*      CallFunc_GetCurrentUIStateWidget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class UFrontEnd_C*                 K2Node_DynamicCast_AsFront_End                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_Root_C::ExecuteUbergraph_StoreMain_Root(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class EFrontEndCamera Temp_byte_Variable3, enum class EFrontEndCamera Temp_byte_Variable4, enum class EFrontEndCamera K2Node_Select_Default, class UFortMtxStoreOfferBase* K2Node_Event_MtxOffer, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_AreOffersLoaded_ReturnValue, bool Temp_bool_Variable2, bool CallFunc_IsOffersScrollBoxActive_Return_Value, bool CallFunc_BooleanAND_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFrontEnd_C* K2Node_DynamicCast_AsFront_End, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortStoreContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "ExecuteUbergraph_StoreMain_Root");

	Params::UStoreMain_Root_C_ExecuteUbergraph_StoreMain_Root_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_MtxOffer = K2Node_Event_MtxOffer;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_AreOffersLoaded_ReturnValue = CallFunc_AreOffersLoaded_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_IsOffersScrollBoxActive_Return_Value = CallFunc_IsOffersScrollBoxActive_Return_Value;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCurrentUIStateWidget_ReturnValue = CallFunc_GetCurrentUIStateWidget_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_DynamicCast_AsFront_End = K2Node_DynamicCast_AsFront_End;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
