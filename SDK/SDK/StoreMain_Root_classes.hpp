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

// 0x3B (0x46B - 0x430)
// WidgetBlueprintGeneratedClass StoreMain_Root.StoreMain_Root_C
class UStoreMain_Root_C : public UFortMtxStoreRootBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      NoOffersText;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            OffersHorizontalScrollBox;                         // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayInstructions;                               // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressSpinner;                                   // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherItemsProgress;                             // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VboxOffers;                                        // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         NavigatingToDetails;                               // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NavigatingToChat;                                  // 0x469(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowUpsellUI;                                      // 0x46A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreMain_Root_C");
		return Clss;
	}

	void HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void AboutToEnterChat();
	void AboutToPushDetails();
	void IsOffersScrollBoxActive(bool* Return_Value, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void SetFocus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue);
	void AddOffer(class UFortMtxStoreOfferBase* MtxOffer, const struct FMargin& K2Node_MakeStruct_Margin, class UStoreMain_MTXOffer_C* K2Node_DynamicCast_AsStore_Main_MTXOffer, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess2);
	void NoOffersAvailable();
	void OnActivated();
	void OnMtxOfferGenerated(class UFortMtxStoreOfferBase* MtxOffer);
	void OnOffersGenerated();
	void OnStartReadingOffers();
	void OnDeactivated();
	void Destruct();
	void Construct();
	void ExecuteUbergraph_StoreMain_Root(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class EFrontEndCamera Temp_byte_Variable3, enum class EFrontEndCamera Temp_byte_Variable4, enum class EFrontEndCamera K2Node_Select_Default, class UFortMtxStoreOfferBase* K2Node_Event_MtxOffer, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_AreOffersLoaded_ReturnValue, bool Temp_bool_Variable2, bool CallFunc_IsOffersScrollBoxActive_Return_Value, bool CallFunc_BooleanAND_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFrontEnd_C* K2Node_DynamicCast_AsFront_End, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortStoreContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, enum class ESlateVisibility K2Node_Select2_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
