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

// 0x51 (0x281 - 0x230)
// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C
class UAthenaCustomizationSlotButtonWrapper_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      BannerLabel;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftSeparator;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButton_C*      SlotButton;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  BannerDisplayName;                                 // 0x250(0x18)(Edit, BlueprintVisible)
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSlotClicked;                                     // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShowSeparatorOnLeft;                               // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationSlotButtonWrapper_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_CanShowSlotType_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default);
	void OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
