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

// 0x99 (0x941 - 0x8A8)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C
class UAthenaDirectAcquisitionOfferWidget_C : public UFortDirectAcquisitionOfferWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A8(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x8B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderRarityColored;                               // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BottomBorder;                                      // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Check;                                             // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ExclusiveBorder;                                   // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HighlightGlow;                                     // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockImage;                                         // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MainImage;                                         // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      MainImageLoadGuard;                                // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NameText;                                          // 0x8F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OwnedSwitcher;                                     // 0x900(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OwnedText;                                         // 0x908(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCount_C*                          Price1;                                            // 0x910(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SBPriceBox;                                        // 0x918(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SBScaleDownArt;                                    // 0x920(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SBTileSize;                                        // 0x928(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ShortDescriptionText;                              // 0x930(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBHeaderAndDescription;                            // 0x938(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         LargeTile;                                         // 0x940(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaDirectAcquisitionOfferWidget_C");
		return Clss;
	}

	void UpdateShortDescription(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_HasRequirement_RequirementText, bool CallFunc_HasRequirement_ReturnValue);
	void UpdateName(class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_GetName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue);
	void LargeImageLoaded(class UObject* LoadedObject, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
	void SetupPrice(int32 PriceIndex, class UItemCount_C* PriceWidget, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateStyle(class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot2, bool K2Node_DynamicCast_bSuccess2, const struct FMargin& K2Node_MakeStruct_Margin, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin2, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue4);
	void UpdateOwnedState(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue, bool CallFunc_IsOwned_ReturnValue, int32 K2Node_Select_Default);
	void OfferSet(class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsExclusive_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, const struct FSlateBrush& CallFunc_GetTileImage_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, bool CallFunc_HasDisplayAsset_ReturnValue);
	void OnOfferSet();
	void OnClicked();
	void HandleOfferPurchaseComplete(bool bSuccess);
	void OnHovered();
	void OnUnhovered();
	void OnUpdateStatus();
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UAthenaDirectAcquisitionOfferDetailsWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
