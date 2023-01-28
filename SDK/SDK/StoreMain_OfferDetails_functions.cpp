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


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::PopDetails(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "PopDetails");

	Params::UStoreMain_OfferDetails_C_PopDetails_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortMtxStoreOfferType  Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMtxStoreOfferType  CallFunc_GetStoreOfferType_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortMtxStoreOfferType  CallFunc_GetStoreOfferType_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBonusQuantity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMtxStoreOfferType  CallFunc_GetStoreOfferType_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetBonusQuantity_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// int32                              CallFunc_GetBaseQuantity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue2                             ()
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStoreMain_OfferDetailsAttribute_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortMtxDetailsAttribute>CallFunc_GetDetailsAttributes_ReturnValue                        (ZeroConstructor, ReferenceParm)
// struct FFortMtxDetailsAttribute    CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortMtxStoreOfferType  CallFunc_GetStoreOfferType_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetNormalPrice_ReturnValue                              ()
// class FText                        CallFunc_GetSalePrice_SalePrice                                  ()
// bool                               CallFunc_GetSalePrice_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetName_ReturnValue                                     ()
// enum class ESlateVisibility        Temp_byte_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMtxGradient            CallFunc_GetGradient_ReturnValue                                 (NoDestructor)
// enum class ESlateVisibility        K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetBackground_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetDetailsImage_ReturnValue                             ()

void UStoreMain_OfferDetails_C::Init(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class EFortMtxStoreOfferType Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class ESlateVisibility Temp_byte_Variable11, int32 CallFunc_Add_IntInt_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 CallFunc_GetBonusQuantity_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, int32 CallFunc_GetBonusQuantity_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetBaseQuantity_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_OfferDetailsAttribute_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable5, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TArray<struct FFortMtxDetailsAttribute>& CallFunc_GetDetailsAttributes_ReturnValue, const struct FFortMtxDetailsAttribute& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable13, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default, class FText CallFunc_GetNormalPrice_ReturnValue, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, enum class ESlateVisibility K2Node_Select5_Default, class FText CallFunc_GetName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable14, const struct FFortMtxGradient& CallFunc_GetGradient_ReturnValue, enum class ESlateVisibility K2Node_Select6_Default, const struct FLinearColor& CallFunc_GetBackground_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, const struct FSlateBrush& CallFunc_GetDetailsImage_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "Init");

	Params::UStoreMain_OfferDetails_C_Init_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable9 = Temp_byte_Variable9;
	Parms.Temp_byte_Variable10 = Temp_byte_Variable10;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_byte_Variable11 = Temp_byte_Variable11;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetStoreOfferType_ReturnValue = CallFunc_GetStoreOfferType_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.CallFunc_GetStoreOfferType_ReturnValue2 = CallFunc_GetStoreOfferType_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetBonusQuantity_ReturnValue = CallFunc_GetBonusQuantity_ReturnValue;
	Parms.CallFunc_GetStoreOfferType_ReturnValue3 = CallFunc_GetStoreOfferType_ReturnValue3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetBonusQuantity_ReturnValue2 = CallFunc_GetBonusQuantity_ReturnValue2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetBaseQuantity_ReturnValue = CallFunc_GetBaseQuantity_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue2 = CallFunc_Conv_IntToText_ReturnValue2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetDetailsAttributes_ReturnValue = CallFunc_GetDetailsAttributes_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetStoreOfferType_ReturnValue4 = CallFunc_GetStoreOfferType_ReturnValue4;
	Parms.Temp_byte_Variable13 = Temp_byte_Variable13;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_GetNormalPrice_ReturnValue = CallFunc_GetNormalPrice_ReturnValue;
	Parms.CallFunc_GetSalePrice_SalePrice = CallFunc_GetSalePrice_SalePrice;
	Parms.CallFunc_GetSalePrice_ReturnValue = CallFunc_GetSalePrice_ReturnValue;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.Temp_byte_Variable14 = Temp_byte_Variable14;
	Parms.CallFunc_GetGradient_ReturnValue = CallFunc_GetGradient_ReturnValue;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.CallFunc_GetBackground_ReturnValue = CallFunc_GetBackground_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue2 = CallFunc_GetDynamicMaterial_ReturnValue2;
	Parms.CallFunc_GetDetailsImage_ReturnValue = CallFunc_GetDetailsImage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_OfferDetails_C::HandleBack(bool* PassThrough)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "HandleBack");

	Params::UStoreMain_OfferDetails_C_HandleBack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::OnActivated()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "OnActivated");

	Params::UStoreMain_OfferDetails_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "OnDeactivated");

	Params::UStoreMain_OfferDetails_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");

	Params::UStoreMain_OfferDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandlePurchaseComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_OfferDetails_C::HandlePurchaseComplete(bool bSuccess)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "HandlePurchaseComplete");

	Params::UStoreMain_OfferDetails_C_HandlePurchaseComplete_Params Parms;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::Construct()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "Construct");

	Params::UStoreMain_OfferDetails_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_OfferDetails_C::Destruct()
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "Destruct");

	Params::UStoreMain_OfferDetails_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOfferId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::ExecuteUbergraph_StoreMain_OfferDetails(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, const class FString& CallFunc_GetOfferId_ReturnValue, bool K2Node_CustomEvent_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortStoreContext* CallFunc_GetContext_ReturnValue3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_OfferDetails_C", "ExecuteUbergraph_StoreMain_OfferDetails");

	Params::UStoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetOfferId_ReturnValue = CallFunc_GetOfferId_ReturnValue;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
