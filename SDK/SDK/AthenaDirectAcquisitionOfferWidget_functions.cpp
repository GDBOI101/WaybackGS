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


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateShortDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLockedByRequirement_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetShortDescription_ReturnValue                         ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_HasRequirement_RequirementText                          ()
// bool                               CallFunc_HasRequirement_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateShortDescription(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_HasRequirement_RequirementText, bool CallFunc_HasRequirement_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateShortDescription");

	Params::UAthenaDirectAcquisitionOfferWidget_C_UpdateShortDescription_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_IsLockedByRequirement_ReturnValue = CallFunc_IsLockedByRequirement_ReturnValue;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HasRequirement_RequirementText = CallFunc_HasRequirement_RequirementText;
	Parms.CallFunc_HasRequirement_ReturnValue = CallFunc_HasRequirement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetName_ReturnValue                                     ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// bool                               CallFunc_IsLockedByRequirement_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateName(class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_GetName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateName");

	Params::UAthenaDirectAcquisitionOfferWidget_C_UpdateName_Params Parms;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_IsLockedByRequirement_ReturnValue = CallFunc_IsLockedByRequirement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.LargeImageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     LoadedObject                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidget_C::LargeImageLoaded(class UObject* LoadedObject, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "LargeImageLoaded");

	Params::UAthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded_Params Parms;
	Parms.LoadedObject = LoadedObject;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupPrice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PriceIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemCount_C*                PriceWidget                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPriceItem_RequiredItemCount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetPriceItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidget_C::SetupPrice(int32 PriceIndex, class UItemCount_C* PriceWidget, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "SetupPrice");

	Params::UAthenaDirectAcquisitionOfferWidget_C_SetupPrice_Params Parms;
	Parms.PriceIndex = PriceIndex;
	Parms.PriceWidget = PriceWidget;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetPriceItem_RequiredItemCount = CallFunc_GetPriceItem_RequiredItemCount;
	Parms.CallFunc_GetPriceItem_ReturnValue = CallFunc_GetPriceItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorderSlot*                 K2Node_DynamicCast_AsBorder_Slot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBorderSlot*                 K2Node_DynamicCast_AsBorder_Slot2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin2                                        (NoDestructor)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetFirstGrantItemDefinition_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateStyle(class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot2, bool K2Node_DynamicCast_bSuccess2, const struct FMargin& K2Node_MakeStruct_Margin, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin2, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue4)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateStyle");

	Params::UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_Params Parms;
	Parms.K2Node_DynamicCast_AsBorder_Slot = K2Node_DynamicCast_AsBorder_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBorder_Slot2 = K2Node_DynamicCast_AsBorder_Slot2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.K2Node_MakeStruct_Margin2 = K2Node_MakeStruct_Margin2;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetFirstGrantItemDefinition_ReturnValue = CallFunc_GetFirstGrantItemDefinition_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue2 = CallFunc_GetDynamicMaterial_ReturnValue2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue3 = CallFunc_GetDynamicMaterial_ReturnValue3;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue2 = CallFunc_GetDynamicFontMaterial_ReturnValue2;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue4 = CallFunc_GetDynamicMaterial_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateOwnedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOfferId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOwned_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferWidget_C::UpdateOwnedState(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue, bool CallFunc_IsOwned_ReturnValue, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "UpdateOwnedState");

	Params::UAthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetOfferId_ReturnValue = CallFunc_GetOfferId_ReturnValue;
	Parms.CallFunc_IsOwned_ReturnValue = CallFunc_IsOwned_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OfferSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExclusive_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetTileImage_ReturnValue                                ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItemDefinition*  CallFunc_GetFirstGrantItemDefinition_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue                        (HasGetValueTypeHash)
// bool                               CallFunc_HasDisplayAsset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidget_C::OfferSet(class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsExclusive_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, const struct FSlateBrush& CallFunc_GetTileImage_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, bool CallFunc_HasDisplayAsset_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "OfferSet");

	Params::UAthenaDirectAcquisitionOfferWidget_C_OfferSet_Params Parms;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_IsExclusive_ReturnValue = CallFunc_IsExclusive_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOfferInfo_ReturnValue2 = CallFunc_GetOfferInfo_ReturnValue2;
	Parms.CallFunc_GetTileImage_ReturnValue = CallFunc_GetTileImage_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetFirstGrantItemDefinition_ReturnValue = CallFunc_GetFirstGrantItemDefinition_ReturnValue;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue = CallFunc_GetLargePreviewImage_ReturnValue;
	Parms.CallFunc_HasDisplayAsset_ReturnValue = CallFunc_HasDisplayAsset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidget_C::OnOfferSet()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "OnOfferSet");

	Params::UAthenaDirectAcquisitionOfferWidget_C_OnOfferSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidget_C::OnClicked()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "OnClicked");

	Params::UAthenaDirectAcquisitionOfferWidget_C_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.HandleOfferPurchaseComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidget_C::HandleOfferPurchaseComplete(bool bSuccess)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "HandleOfferPurchaseComplete");

	Params::UAthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete_Params Parms;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidget_C::OnHovered()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "OnHovered");

	Params::UAthenaDirectAcquisitionOfferWidget_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidget_C::OnUnhovered()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "OnUnhovered");

	Params::UAthenaDirectAcquisitionOfferWidget_C_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnUpdateStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferWidget_C::OnUpdateStatus()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "OnUpdateStatus");

	Params::UAthenaDirectAcquisitionOfferWidget_C_OnUpdateStatus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaDirectAcquisitionOfferDetailsWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferWidget_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UAthenaDirectAcquisitionOfferDetailsWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferWidget_C", "ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget");

	Params::UAthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
