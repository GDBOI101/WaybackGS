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

// 0x38 (0x270 - 0x238)
// WidgetBlueprintGeneratedClass BadgesEarnedPanelContent.BadgesEarnedPanelContent_C
class UBadgesEarnedPanelContent_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          EarnedBadges;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayBadeInfo;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PotentialBadges;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxEarnedBadges;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BadgesEarnedPanelContent_C");
		return Clss;
	}

	void Get_Badge_And_Count_For_Player(class AFortPlayerController* InFortPC, struct FEarnedBadgeEntry& EarnedBadgeEntry, bool* Found, class AFortPlayerController** FortPC, class UFortBadgeItemDefinition** Badge, int32* Count, int32 OutCount, bool OutFound, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FEarnedBadgePlayerData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, bool CallFunc_AreUniqueIDsIdentical_ReturnValue);
	void HandleMissionsUpdated();
	void UpdatePotentialBadges(int32 Temp_int_Array_Index_Variable, class UEarnedBadgeTile_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FFortBadgeCount>& CallFunc_GetPotentialBadges_ReturnValue, const struct FFortBadgeCount& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandlePotentialBadgesChanged();
	void UpdateBadgeWidgets(class UFortHUDContext* CallFunc_GetContext_ReturnValue, TArray<struct FEarnedBadgeEntry>& CallFunc_GetEarnedBadges_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FEarnedBadgeEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Get_Badge_And_Count_For_Player_Found, class AFortPlayerController* CallFunc_Get_Badge_And_Count_For_Player_FortPC, class UFortBadgeItemDefinition* CallFunc_Get_Badge_And_Count_For_Player_Badge, int32 CallFunc_Get_Badge_And_Count_For_Player_Count, enum class ESlateVisibility K2Node_Select_Default, class UEarnedBadgeTile_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void HandleEarnedBadgesChanged();
	void Construct();
	void ExecuteUbergraph_BadgesEarnedPanelContent(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
