#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCA (0x4DA - 0x410)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C
class UAthenaDirectAcquisitionOfferDetailsWidget_C : public UFortDirectAcquisitionOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderDarkRarity;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderRarityColored;                               // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Check;                                             // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Currency1ItemImage2;                               // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Currency1VB;                                       // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ExclusiveBorder;                                   // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExclusiveDescriptionText;                          // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCard;                                          // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LockedHB;                                          // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LockedText;                                        // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockImage;                                         // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NotUmbrellaIcon;                                   // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlaySalePrice1;                                 // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OwnedSwitcher;                                     // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PurchaseButton1;                                   // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBoxDetails;                                  // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ShortDescription;                                  // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    StoreMain_OfferDetailsAttribute;                   // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    StoreMain_OfferDetailsAttribute_C_0;               // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextDescription;                                   // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextName;                                          // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferDisplayPrice1;                            // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOriginalPrice1;                                // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxOfferInfo;                                     // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CanPurchase;                                       // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPurchasing;                                      // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaDirectAcquisitionOfferDetailsWidget_C");
		return Clss;
	}

	void Update_Locked_Information(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_HasRequirement_RequirementText, bool CallFunc_HasRequirement_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void AttemptPurchase(int32 PriceIndex, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, const class FString& CallFunc_GetOfferId_ReturnValue2, enum class EOfferPurchaseError CallFunc_PurchaseOffer_ReturnValue);
	void HandlePurchaseOfferComplete(bool Success, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaDirectAcquisitionOfferPurchasedWidget_C* CallFunc_Create_ReturnValue);
	void SetupPrice(int32 PriceIndex, class UIconTextButton_C* PurchaseButton, class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, bool CallFunc_IsPriceInMTX_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class FText Temp_text_Variable, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class FText Temp_text_Variable2, bool Temp_bool_Variable2, class FText K2Node_Select2_Default);
	void PopDetails(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void HandleBack(bool* PassThrough);
	void UpdateFromOffer(class FName CallFunc_MakeLiteralName_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue2, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, class UAthenaGliderItemDefinition* K2Node_DynamicCast_AsAthena_Glider_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, bool CallFunc_IsExclusive_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable2, int32 CallFunc_MakeLiteralInt_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue3, bool Temp_bool_Variable, const class FString& CallFunc_GetOfferId_ReturnValue, bool CallFunc_IsOwned_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, int32 K2Node_Select_Default, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue4, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_GetShortDescription_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue5, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue2, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue6, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, bool CallFunc_HasDisplayAsset_ReturnValue, TArray<struct FFortMtxDetailsAttribute>& CallFunc_GetDetailsAttributes_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortMtxDetailsAttribute& CallFunc_Array_Get_Item, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable2, class UStoreMain_OfferDetailsAttribute_C* CallFunc_Create_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void OnOfferSet();
	void OnActivated();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnUpdateStatus();
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
