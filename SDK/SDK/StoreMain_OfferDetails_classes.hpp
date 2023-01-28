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

// 0xC0 (0x570 - 0x4B0)
// WidgetBlueprintGeneratedClass StoreMain_OfferDetails.StoreMain_OfferDetails_C
class UStoreMain_OfferDetails_C : public UFortMtxOfferDetailsBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(Transient, DuplicateTransient)
	class UImage*                                BaseColor;                                         // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BaseColorDetails;                                  // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              BonusCurrencySB;                                   // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderDisclaimer;                                  // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BaseQuantity;                           // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BonusQuantity;                          // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FounderPackLabelText;                              // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      KeyArt;                                            // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OverlayGradient;                                   // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OverlayGradientDetails;                            // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlaySalePrice;                                  // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PurchaseButton;                                    // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBoxDetails;                                  // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    StoreMain_OfferDetailsAttribute;                   // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    StoreMain_OfferDetailsAttribute_C_0;               // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextDescription;                                   // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextName;                                          // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferDisplayPrice;                             // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOriginalPrice;                                 // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxOfferInfo;                                     // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VBuckHighlight;                                    // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreMain_OfferDetails_C");
		return Clss;
	}

	void PopDetails(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Init(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class EFortMtxStoreOfferType Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class ESlateVisibility Temp_byte_Variable11, int32 CallFunc_Add_IntInt_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 CallFunc_GetBonusQuantity_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, int32 CallFunc_GetBonusQuantity_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetBaseQuantity_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_OfferDetailsAttribute_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable5, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TArray<struct FFortMtxDetailsAttribute>& CallFunc_GetDetailsAttributes_ReturnValue, const struct FFortMtxDetailsAttribute& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable13, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default, class FText CallFunc_GetNormalPrice_ReturnValue, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, enum class ESlateVisibility K2Node_Select5_Default, class FText CallFunc_GetName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable14, const struct FFortMtxGradient& CallFunc_GetGradient_ReturnValue, enum class ESlateVisibility K2Node_Select6_Default, const struct FLinearColor& CallFunc_GetBackground_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, const struct FSlateBrush& CallFunc_GetDetailsImage_ReturnValue);
	void HandleBack(bool* PassThrough);
	void OnActivated();
	void OnDeactivated();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandlePurchaseComplete(bool bSuccess);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_StoreMain_OfferDetails(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, const class FString& CallFunc_GetOfferId_ReturnValue, bool K2Node_CustomEvent_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortStoreContext* CallFunc_GetContext_ReturnValue3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
