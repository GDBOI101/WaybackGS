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

// 0x69 (0x489 - 0x420)
// WidgetBlueprintGeneratedClass ErrorWindow.ErrorWindow_C
class UErrorWindow_C : public UFortErrorWindow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CloseButton;                                       // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ErrorRed;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LogoutButton;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MessageList;                                       // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UErrorEntry_C*>                 ShownErrorEntries;                                 // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bShouldLogout;                                     // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3956[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortErrorInfo>                ShownErrorInfos;                                   // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bIntroOutroEnabled;                                // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ErrorWindow_C");
		return Clss;
	}

	void CloseErrorWindow(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void GetShouldLogout(bool* Return_Value);
	void Initialize(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetInputPriority_ReturnValue);
	void AddError(struct FFortErrorInfo& ErrorInfo, bool First_Error, class UErrorEntry_C* ErrorEntry, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Center_on_Widget_Did_Center, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, class UCommonUserWidget* CallFunc_GetErrorEntry_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UErrorEntry_C* K2Node_DynamicCast_AsError_Entry, bool K2Node_DynamicCast_bSuccess);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void Destruct();
	void OnBeginOutro();
	void OnBeginIntro();
	void IntroEnded();
	void OutroEnded();
	void ExecuteUbergraph_ErrorWindow(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
