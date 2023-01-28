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

// 0x28 (0x258 - 0x230)
// WidgetBlueprintGeneratedClass PowerRequirement.PowerRequirement_C
class UPowerRequirement_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        PowerRequirementHB;                                // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULegacyRatingWidget_C*                 RatingWidget;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        RecommendedPower;                                  // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RequiredPower;                                     // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PowerRequirement_C");
		return Clss;
	}

	class UWidget* GenerateToolTipWidget(bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetLocalTeamHomebaseRating_Rating, float CallFunc_GetLocalTeamHomebaseRating_ProgressFraction, bool CallFunc_GetLocalTeamHomebaseRating_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output2);
	void SetUIForRequired(int32 PartyPower, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor2);
	void SetUIForRecommended(int32 PartyPower, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Update(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue);
	void SetRequirements(int32 RequiredPower, int32 RecommendedPower);
	void Construct();
	void PlayerInfoChanged(struct FUniqueNetIdRepl& UniqueId);
	void ExecuteUbergraph_PowerRequirement(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UniqueId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
