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

// 0x18 (0x248 - 0x230)
// WidgetBlueprintGeneratedClass CompendiumBundleUpsellPage.CompendiumBundleUpsellPage_C
class UCompendiumBundleUpsellPage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     PurchaseButton;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCompendiumBundleDefinition*       CompendiumBundleDefinition;                        // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CompendiumBundleUpsellPage_C");
		return Clss;
	}

	void SetCompendiumBundleInfo(class UFortCompendiumBundleDefinition* CompendiumBundleInfo, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_CompendiumBundleUpsellPage(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UStoreMain_Root_C* CallFunc_Create_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, TArray<class FString>& K2Node_MakeArray_Array);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
