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

// 0x80 (0x2B0 - 0x230)
// WidgetBlueprintGeneratedClass MissionTooltip.MissionTooltip_C
class UMissionTooltip_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        Biome_Info;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Biome_Name;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_PowerWidget;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Difficulty_Info;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Difficulty_Name;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LevelConningWarning;                               // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Mission_Name;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Mission_Type_Icon;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ModifiersContentHorizontalBox;                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ModifierVerticalBox;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPowerRequirement_C*                   PowerRequirement;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RewardsContent;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFortMissionRewardInfo>        MissionRewards;                                    // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionTooltip_C");
		return Clss;
	}

	void HandleGameplayModifiers(TArray<class UFortGameplayModifierItemDefinition*>& GameplayModifiers, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMissionModifierItem_C* CallFunc_Create_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleMissionRewards(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortMissionRewardInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMissionRewardItem_Tooltip_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void UpdateMissionInfo(class ABP_Hex_PARENT_C* Mission_Details, const struct FGameDifficultyInfo& GameDifficultyInfo, int32 ConningBucketIndex, const struct FLinearColor& ConningColor, bool CollapseDifficulty, const struct FFortMissionDetails& TileMissionDetails, int32 ContentDifficulty, int32 TotalSkillPoints, class FText Blank_FText, const TArray<class UFortGameplayModifierItemDefinition*>& GameplayMods, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, enum class EFortTheaterMapTileType Temp_byte_Variable, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, enum class EFortTheaterMapTileType Temp_byte_Variable2, int32 CallFunc_GetLocalTeamHomebaseRating_Rating, float CallFunc_GetLocalTeamHomebaseRating_ProgressFraction, bool CallFunc_GetLocalTeamHomebaseRating_ReturnValue, class FText Temp_text_Variable6, class FText Temp_text_Variable7, enum class EFortTheaterMapTileType Temp_byte_Variable3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, const struct FFortMissionDetails& CallFunc_GetTileMissionDetails_MissionDetails, bool CallFunc_GetTileMissionDetails_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, const struct FLinearColor& CallFunc_Get_Conning_Color_From_Difficulty_Value_Difficulty_Linear_Color, bool CallFunc_Get_Conning_Color_From_Difficulty_Value_Success, class FText CallFunc_Get_Conning_Color_From_Difficulty_Value_TooltipText, int32 CallFunc_Get_Conning_Color_From_Difficulty_Value_DifficultyValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_GetTotalSkillPointsEarned_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, bool CallFunc_IsValid_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue3, class FText K2Node_Select2_Default, class FText K2Node_Select3_Default, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, bool Temp_bool_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue5, class FText K2Node_Select4_Default, enum class ESlateVisibility K2Node_Select5_Default);
	void Construct();
	void InitFromObject(class UObject* InitObject);
	void ExecuteUbergraph_MissionTooltip(int32 EntryPoint, class UObject* K2Node_Event_InitObject, class ABP_Hex_PARENT_C* K2Node_DynamicCast_AsBP_Hex_PARENT, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
