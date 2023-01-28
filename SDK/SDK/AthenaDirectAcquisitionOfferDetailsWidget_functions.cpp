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


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Update Locked Information
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_HasRequirement_RequirementText                          ()
// bool                               CallFunc_HasRequirement_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLockedByRequirement_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::Update_Locked_Information(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_HasRequirement_RequirementText, bool CallFunc_HasRequirement_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "Update Locked Information");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_Update_Locked_Information_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasRequirement_RequirementText = CallFunc_HasRequirement_RequirementText;
	Parms.CallFunc_HasRequirement_ReturnValue = CallFunc_HasRequirement_ReturnValue;
	Parms.CallFunc_IsLockedByRequirement_ReturnValue = CallFunc_IsLockedByRequirement_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.AttemptPurchase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PriceIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOfferId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOfferPurchaseError     CallFunc_CanPurchaseOffer_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOfferId_ReturnValue2                                 (ZeroConstructor, HasGetValueTypeHash)
// enum class EOfferPurchaseError     CallFunc_PurchaseOffer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::AttemptPurchase(int32 PriceIndex, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, const class FString& CallFunc_GetOfferId_ReturnValue2, enum class EOfferPurchaseError CallFunc_PurchaseOffer_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "AttemptPurchase");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_AttemptPurchase_Params Parms;
	Parms.PriceIndex = PriceIndex;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetOfferId_ReturnValue = CallFunc_GetOfferId_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_CanPurchaseOffer_ReturnValue = CallFunc_CanPurchaseOffer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue2 = CallFunc_GetOfferInfo_ReturnValue2;
	Parms.CallFunc_GetOfferId_ReturnValue2 = CallFunc_GetOfferId_ReturnValue2;
	Parms.CallFunc_PurchaseOffer_ReturnValue = CallFunc_PurchaseOffer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandlePurchaseOfferComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaDirectAcquisitionOfferPurchasedWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::HandlePurchaseOfferComplete(bool Success, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaDirectAcquisitionOfferPurchasedWidget_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "HandlePurchaseOfferComplete");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_HandlePurchaseOfferComplete_Params Parms;
	Parms.Success = Success;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPrice
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PriceIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           PurchaseButton                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     PriceContainer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  NormalPriceText                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     SalePriceContainer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  SalePriceText                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CurrencyImage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLockedByRequirement_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPriceInMTX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetOfferId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSalePrice_SalePrice                                  ()
// bool                               CallFunc_GetSalePrice_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetNormalPrice_ReturnValue                              ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPriceItem_RequiredItemCount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetPriceItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetSmallPreviewImageBrush_ReturnValue                   ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// enum class EOfferPurchaseError     CallFunc_CanPurchaseOffer_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable2                                              ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select2_Default                                           ()

void UAthenaDirectAcquisitionOfferDetailsWidget_C::SetupPrice(int32 PriceIndex, class UIconTextButton_C* PurchaseButton, class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, bool CallFunc_IsPriceInMTX_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class FText Temp_text_Variable, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class FText Temp_text_Variable2, bool Temp_bool_Variable2, class FText K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "SetupPrice");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_SetupPrice_Params Parms;
	Parms.PriceIndex = PriceIndex;
	Parms.PurchaseButton = PurchaseButton;
	Parms.PriceContainer = PriceContainer;
	Parms.NormalPriceText = NormalPriceText;
	Parms.SalePriceContainer = SalePriceContainer;
	Parms.SalePriceText = SalePriceText;
	Parms.CurrencyImage = CurrencyImage;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_IsLockedByRequirement_ReturnValue = CallFunc_IsLockedByRequirement_ReturnValue;
	Parms.CallFunc_IsPriceInMTX_ReturnValue = CallFunc_IsPriceInMTX_ReturnValue;
	Parms.CallFunc_GetOfferId_ReturnValue = CallFunc_GetOfferId_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOfferInfo_ReturnValue2 = CallFunc_GetOfferInfo_ReturnValue2;
	Parms.CallFunc_GetSalePrice_SalePrice = CallFunc_GetSalePrice_SalePrice;
	Parms.CallFunc_GetSalePrice_ReturnValue = CallFunc_GetSalePrice_ReturnValue;
	Parms.CallFunc_GetNormalPrice_ReturnValue = CallFunc_GetNormalPrice_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPriceItem_RequiredItemCount = CallFunc_GetPriceItem_RequiredItemCount;
	Parms.CallFunc_GetPriceItem_ReturnValue = CallFunc_GetPriceItem_ReturnValue;
	Parms.CallFunc_GetSmallPreviewImageBrush_ReturnValue = CallFunc_GetSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_CanPurchaseOffer_ReturnValue = CallFunc_CanPurchaseOffer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PopDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::PopDetails(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "PopDetails");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_PopDetails_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::HandleBack(bool* PassThrough)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "HandleBack");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_HandleBack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateFromOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetFirstGrantItemDefinition_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaGliderItemDefinition* K2Node_DynamicCast_AsAthena_Glider_Item_Definition               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExclusive_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetOfferId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOwned_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShortDescription_ReturnValue                         ()
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// class FText                        CallFunc_GetName_ReturnValue                                     ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetFirstGrantItemDefinition_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasDisplayAsset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortMtxDetailsAttribute>CallFunc_GetDetailsAttributes_ReturnValue                        (ZeroConstructor, ReferenceParm)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMtxDetailsAttribute    CallFunc_Array_Get_Item                                          ()
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStoreMain_OfferDetailsAttribute_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::UpdateFromOffer(class FName CallFunc_MakeLiteralName_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue2, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, class UAthenaGliderItemDefinition* K2Node_DynamicCast_AsAthena_Glider_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, bool CallFunc_IsExclusive_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 CallFunc_MakeLiteralInt_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue3, bool Temp_bool_Variable, const class FString& CallFunc_GetOfferId_ReturnValue, bool CallFunc_IsOwned_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, int32 K2Node_Select_Default, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue4, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_GetShortDescription_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue5, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue2, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue6, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, bool CallFunc_HasDisplayAsset_ReturnValue, TArray<struct FFortMtxDetailsAttribute>& CallFunc_GetDetailsAttributes_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortMtxDetailsAttribute& CallFunc_Array_Get_Item, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable2, class UStoreMain_OfferDetailsAttribute_C* CallFunc_Create_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "UpdateFromOffer");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateFromOffer_Params Parms;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue2 = CallFunc_MakeLiteralName_ReturnValue2;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue2 = CallFunc_GetDynamicMaterial_ReturnValue2;
	Parms.CallFunc_GetFirstGrantItemDefinition_ReturnValue = CallFunc_GetFirstGrantItemDefinition_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Glider_Item_Definition = K2Node_DynamicCast_AsAthena_Glider_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue2 = CallFunc_GetOfferInfo_ReturnValue2;
	Parms.CallFunc_IsExclusive_ReturnValue = CallFunc_IsExclusive_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue3 = CallFunc_GetOfferInfo_ReturnValue3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOfferId_ReturnValue = CallFunc_GetOfferId_ReturnValue;
	Parms.CallFunc_IsOwned_ReturnValue = CallFunc_IsOwned_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOfferInfo_ReturnValue4 = CallFunc_GetOfferInfo_ReturnValue4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetOfferInfo_ReturnValue5 = CallFunc_GetOfferInfo_ReturnValue5;
	Parms.CallFunc_GetFirstGrantItemDefinition_ReturnValue2 = CallFunc_GetFirstGrantItemDefinition_ReturnValue2;
	Parms.CallFunc_GetOfferInfo_ReturnValue6 = CallFunc_GetOfferInfo_ReturnValue6;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_HasDisplayAsset_ReturnValue = CallFunc_HasDisplayAsset_ReturnValue;
	Parms.CallFunc_GetDetailsAttributes_ReturnValue = CallFunc_GetDetailsAttributes_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnOfferSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferDetailsWidget_C::OnOfferSet()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "OnOfferSet");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_OnOfferSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferDetailsWidget_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "OnActivated");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferDetailsWidget_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "Construct");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnUpdateStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferDetailsWidget_C::OnUpdateStatus()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "OnUpdateStatus");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_OnUpdateStatus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetFirstGrantItemDefinition_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferDetailsWidget_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferDetailsWidget_C", "ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget");

	Params::UAthenaDirectAcquisitionOfferDetailsWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetFirstGrantItemDefinition_ReturnValue = CallFunc_GetFirstGrantItemDefinition_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
