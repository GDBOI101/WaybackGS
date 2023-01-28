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

// 0x105 (0x9A5 - 0x8A0)
// WidgetBlueprintGeneratedClass QuestsCountIconTabButton.QuestsCountIconTabButton_C
class UQuestsCountIconTabButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(Transient, DuplicateTransient)
	class UNormalBangWrapper_C*                  BangWrapper;                                       // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CenterButtonTextWidget;                            // 0x8B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ContentHB;                                         // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftSideImage;                                     // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x8C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           IconBrush;                                         // 0x8E0(0x90)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         UseText;                                           // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SelectedIconTint;                                  // 0x974(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DeselectedIconTint;                                // 0x984(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HoveredIconTint;                                   // 0x994(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBangEnabled;                                      // 0x9A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestsCountIconTabButton_C");
		return Clss;
	}

	void Update_Bang_State(bool bBangEnabled, int32 Count, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Update_Text(int32 QuestCount, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, TArray<class UFortQuestCategory*>& CallFunc_GetCurrentQuestsCategories_Categories, bool CallFunc_IsValid_ReturnValue, class UFortQuestCategory* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable2, class UFortQuestItem* CallFunc_Array_Get_Item2, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void ShowText();
	void Set_Icon(const struct FSlateBrush& IconBrush);
	void Set_Text(class FText ButtonText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void OnSelected();
	void OnDeselected();
	void Construct();
	void OnHovered();
	void OnUnhovered();
	void Handle_Quest_Count_Updated();
	void ExecuteUbergraph_QuestsCountIconTabButton(int32 EntryPoint, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue2, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue2, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool CallFunc_EqualEqual_ClassClass_ReturnValue3, bool CallFunc_EqualEqual_ClassClass_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue5, bool CallFunc_EqualEqual_ClassClass_ReturnValue6, bool K2Node_Event_IsDesignTime, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue7, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
