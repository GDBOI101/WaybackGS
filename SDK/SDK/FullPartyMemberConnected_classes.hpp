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

// 0x1D8 (0x410 - 0x238)
// WidgetBlueprintGeneratedClass FullPartyMemberConnected.FullPartyMemberConnected_C
class UFullPartyMemberConnected_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UOverlay*                              CONNECTED;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_112;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LeaderImageOverlay;                                // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       PlayerBanner_118;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               PlayerHBRating;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerName;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerNameNonParty;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   MemberInfo;                                        // 0x278(0x190)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                             Dimensions;                                        // 0x408(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FullPartyMemberConnected_C");
		return Clss;
	}

	void UpdateDimensions(const struct FVector2D& NewDimensions);
	void UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo, const struct FUniqueNetIdRepl& PlayerNetId, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable3, bool CallFunc_IsInLocalPlayersParty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable4, enum class ESlateVisibility K2Node_Select2_Default, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, const struct FUniqueNetIdRepl& K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_FullPartyMemberConnected(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
