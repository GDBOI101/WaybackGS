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

// 0x38 (0x278 - 0x240)
// WidgetBlueprintGeneratedClass WaveModifiersTile.WaveModifiersTile_C
class UWaveModifiersTile_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ModifierDesc;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ModifierImage;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ModifierName;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnReadyForNextModifierPresentation;                // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaveModifiersTile_C");
		return Clss;
	}

	void PlayIntro();
	void SetModifierItem(class UFortItem* ModifierItem, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue);
	void OnAnimReadyForNextModifier();
	void SetData(class UObject* InData);
	void ExecuteUbergraph_WaveModifiersTile(int32 EntryPoint, class UObject* K2Node_CustomEvent_InData, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue);
	void OnReadyForNextModifierPresentation__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
