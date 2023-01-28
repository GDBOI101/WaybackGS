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

// 0x40 (0x448 - 0x408)
// WidgetBlueprintGeneratedClass CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C
class UCustomMatchmakingKeyModal_C : public UFortActivatablePanel
{
public:
	uint8                                        Pad_27E3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     AcceptButton;                                      // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CloseButton;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MainIcon;                                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         MatchmakingKey;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CustomMatchmakingKeyModal_C");
		return Clss;
	}

	void OnActivated();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_CustomMatchmakingKeyModal(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue2, const class FString& CallFunc_GetCustomMatchmakingKey_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
