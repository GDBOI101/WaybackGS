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

// 0x38 (0x268 - 0x230)
// WidgetBlueprintGeneratedClass MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C
class UMissionRewardItem_Tooltip_C : public UUserWidget
{
public:
	class UBorder*                               Border;                                            // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextField;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             Item;                                              // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x250(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionRewardItem-Tooltip_C");
		return Clss;
	}

	struct FSlateColor Get_Rarity_Color__SlateColor_(const struct FLinearColor& CallFunc_Get_Rarity_Color_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	struct FLinearColor Get_Rarity_Color(const struct FLinearColor& RarityColor, bool CallFunc_IsValid_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	struct FSlateBrush Get_Reward_Icon(const struct FSlateBrush& Reward_Icon, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue);
	class FText Get_Reward_Name(class FText Reward_Name, bool Temp_bool_Variable, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
