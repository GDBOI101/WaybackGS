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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass TooltipLibrary.TooltipLibrary_C
class UTooltipLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TooltipLibrary_C");
		return Clss;
	}

	void CreateXPTooltip(class APlayerController* Owner, class FText Header, class FText CommanderXP, class FText BoostXP, class FText RestXP, class FText Body, class UObject* __WorldContext, class UCommonUserWidget** Out, class UXpBarToolTip_C* CallFunc_Create_ReturnValue);
	void Create_Core_Stat_Tooltip(class APlayerController* Owning_Player, const struct FHeroCoreStat& Data, float Value, class UObject* __WorldContext, class UUserWidget** Output, class UTooltip_CoreStat_C* CallFunc_Create_ReturnValue);
	void Create_Basic_Multi_Line_Tooltip(class APlayerController* Owning_Player, TArray<class FText>& Body_Text, class FText Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, class UUserWidget** Output, class UTooltip_BasicMultiLine_S_C* CallFunc_Create_ReturnValue);
	void Create_Compare_Item_Tooltip(class APlayerController* Owning_Player, class FText Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UFortItem* ComparedItem, class UObject* __WorldContext, class UWidget** Return_Value, class UTooltip_Item_C* CallFunc_Create_ReturnValue);
	void Create_Item_Tooltip(class APlayerController* Owning_Player, class FText Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, int32 OverrideQuantity, class UObject* __WorldContext, class UWidget** Return_Value, class UTooltip_Item_C* CallFunc_Create_ReturnValue);
	void Set_Enabled_And_Tooltip_Text(class UWidget* Widget, bool Enabled, class FText Tooltip_Text, class UObject* __WorldContext, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_TextIsEmpty_ReturnValue);
	void Create_Custom_Tooltip(class APlayerController* Owning_Player, class FText Header_Text, class USlateBrushAsset* Icon_Brush, class UUserWidget* Widget, class UObject* __WorldContext, class UUserWidget** Output, class UTooltip_Custom_S_C* CallFunc_Create_ReturnValue);
	void Create_Basic_Tooltip(class APlayerController* Owning_Player, class FText Body_Text, class FText Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, class UUserWidget** Output, class UTooltip_Basic_S_C* CallFunc_Create_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
