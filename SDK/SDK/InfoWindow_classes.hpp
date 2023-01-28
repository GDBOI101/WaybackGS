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
// WidgetBlueprintGeneratedClass InfoWindow.InfoWindow_C
class UInfoWindow_C : public UFortInfoWindow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CloseButton;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         EntryIcon;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EntryText;                                         // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_1;                                         // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InfoWindow_C");
		return Clss;
	}

	void Initialize(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void AddInfo(TArray<class UFortItemDefinition*>& Info_Items, class FText Title, const TArray<class UFortItemDefinition*>& NewLocalVar_0, class UObject* CallFunc_GetItemAt_ReturnValue, class UFortItemDefinition* K2Node_DynamicCast_AsFort_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void Destruct();
	void BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature();
	void BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature();
	void OnBeginOutro();
	void OnBeginIntro();
	void BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void Set_Info(class UFortItemDefinition* Entry_Item_Definition);
	void ExecuteUbergraph_InfoWindow(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UInfoEntry_C* K2Node_DynamicCast_AsInfo_Entry, bool K2Node_DynamicCast_bSuccess, class UFortItemDefinition* K2Node_CustomEvent_Entry_Item_Definition, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
