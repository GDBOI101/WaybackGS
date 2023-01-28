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

// 0x38 (0x448 - 0x410)
// WidgetBlueprintGeneratedClass MessageCenterWidget.MessageCenterWidget_C
class UMessageCenterWidget_C : public UFortUIMessagesPageBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ClearButton;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CloseButton;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DescriptionText;                                   // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     OpenButton;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_2;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MessageCenterWidget_C");
		return Clss;
	}

	void HandleMessageSelected(class UObject* Item, bool Selected, class UFortUINotification* MESSAGE, bool Temp_bool_Variable, class UFortUINotification* K2Node_DynamicCast_AsFort_UINotification, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void OnBeginIntro();
	void OnBeginOutro();
	void HandleIntroEnded();
	void HandleOutroEnded();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MessagesList_K2Node_ComponentBoundEvent_303_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ClearButton_K2Node_ComponentBoundEvent_62_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_MessageCenterWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UObject* CallFunc_GetSelectedItem_ReturnValue2, class UFortUINotification* K2Node_DynamicCast_AsFort_UINotification, bool K2Node_DynamicCast_bSuccess, class UFortUINotification* K2Node_DynamicCast_AsFort_UINotification2, bool K2Node_DynamicCast_bSuccess2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
