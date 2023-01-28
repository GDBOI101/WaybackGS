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

// 0x40 (0x420 - 0x3E0)
// WidgetBlueprintGeneratedClass ShowFriendCodesSelection.ShowFriendCodesSelection_C
class UShowFriendCodesSelection_C : public UFriendCodeListBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        ButtonBox;                                         // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            CodesListScrollBox;                                // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFriendCodePC_C*                       FriendCodePC;                                      // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFriendCodePC_C*                       FriendCodePC_0;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     IconTextButton;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox_NUI;                                      // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShowFriendCodesSelection_C");
		return Clss;
	}

	void SetFocus(int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void ExecuteUbergraph_ShowFriendCodesSelection(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsDesktopPlatform_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FFriendCode& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFriendCodePC_C* CallFunc_Create_ReturnValue, class UFriendCodeConsole_C* CallFunc_Create_ReturnValue2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue2, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot2, bool K2Node_DynamicCast_bSuccess2, const struct FMargin& K2Node_MakeStruct_Margin2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
