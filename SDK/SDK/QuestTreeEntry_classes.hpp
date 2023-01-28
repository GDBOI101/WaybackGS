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

// 0xB0 (0x960 - 0x8B0)
// WidgetBlueprintGeneratedClass QuestTreeEntry.QuestTreeEntry_C
class UQuestTreeEntry_C : public UFortQuestTreeItemWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B0(0x8)(Transient, DuplicateTransient)
	class UBP_QuestExpiresWidget_C*              BP_QuestExpiresWidget;                             // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ExpansionIndicator;                                // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageComplete;                                     // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MainOrSubCategory;                                 // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Name;                                              // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PercentageComplete;                                // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         PercentageCompleteIndicator;                       // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PinnedEmptyBox;                                    // 0x8F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PinnedImage;                                       // 0x900(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PinnedSwitcher;                                    // 0x908(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              QuestIconOverlay;                                  // 0x910(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                QuestTreeIcon;                                     // 0x918(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherProgress;                            // 0x920(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                        CurrentQuest;                                      // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPinned_;                                         // 0x930(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1757[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestCategory*                    CurrentQuestCategory;                              // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TwitchIconColor;                                   // 0x940(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefaultIconColor;                                  // 0x950(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestTreeEntry_C");
		return Clss;
	}

	void Get_Streaming_Attached_Quest_Name(class FText* ModifiedName, enum class EFortQuestType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, class FText K2Node_Select_Default);
	void Is_Streaming_Quest(bool* bStreamingQuest, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2);
	void Set_Quest_Category_Display_Name();
	void Set_Quest_Display_Name(class FText LocalQuestName, bool Temp_bool_Variable, class FText CallFunc_Get_Streaming_Attached_Quest_Name_ModifiedName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Is_Streaming_Quest_bStreamingQuest, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_GetDisplayName_ReturnValue);
	void Get_Quest_Item_Def(class UFortQuestItemDefinition** AsFort_Quest_Item_Definition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortQuestItemDefinition* K2Node_DynamicCast_AsFort_Quest_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void Quest_Category_Have_Unseen_Quests(bool* HasUnseen, bool LocalHasUnseen, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortQuestItem* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue2);
	void Update_Quest_Category_Bang_State(bool CallFunc_Quest_Category_Have_Unseen_Quests_HasUnseen, bool CallFunc_IsValid_ReturnValue);
	void Update_Quest_Item_Seen(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Update_Quest_Item_Bang_State(bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue);
	void SetCompletionPercentage(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetPercentageComplete_ReturnValue, int32 CallFunc_FFloor_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Unpin();
	void SetPinnedState(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_IsQuestPinned_ReturnValue);
	void SetupAsCategory(class UFortQuestCategory* Category);
	void SetupAsQuest(class UFortQuestItem* Category);
	void ExpansionChanged(bool bExpanded);
	void OnSelected();
	void OnQuestsUpdated();
	void OnHovered();
	void OnQuestSeen_Event_0(class UFortQuestItem* Quest);
	void Destruct();
	void OnDeselected();
	void ExecuteUbergraph_QuestTreeEntry(int32 EntryPoint, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue3, bool CallFunc_IsValid_ReturnValue5, class UFortQuestCategory* K2Node_Event_Category2, class UFortQuestItem* K2Node_Event_Category, bool K2Node_Event_bExpanded, int32 CallFunc_Conv_BoolToInt_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAssetNull_ReturnValue, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable2, bool CallFunc_BooleanOR_ReturnValue2, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default, int32 Temp_int_Variable, int32 Temp_int_Variable2, class UFortQuestItem* K2Node_CustomEvent_Quest, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 Temp_int_Variable4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, enum class EFortQuestState Temp_byte_Variable3, int32 K2Node_Select3_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
