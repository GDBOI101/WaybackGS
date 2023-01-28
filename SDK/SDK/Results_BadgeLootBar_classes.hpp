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

// 0xB8 (0x2F0 - 0x238)
// WidgetBlueprintGeneratedClass Results_BadgeLootBar.Results_BadgeLootBar_C
class UResults_BadgeLootBar_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_PostLevelUpIntro;                             // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_LevelUp;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ConvertBadge;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Intro;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressBarNew;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextLootLevel;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  IntroComplete;                                     // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        InitialPoints;                                     // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentPoints;                                     // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          AddBadgePointsTimer;                               // 0x288(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        TargetPoints;                                      // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentLootLevel;                                  // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  FinishedAddingBadgePoints;                         // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        AddBadgePointsTime;                                // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AddBadgePointsTimeStart;                           // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  LeveledUp;                                         // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        DelayBetweenLevelUpAndPostLevelUp;                 // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkippedToEnd;                                     // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSkippingToEnd;                                    // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A3A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PointsPerLootLevel;                                // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            LevelLootBar;                                      // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            YellowFillUp_Sound;                                // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       YellowBarFillSound_AC;                             // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MAT_XPBar;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_BadgeLootBar_C");
		return Clss;
	}

	void GetNextLootLevelPoints(int32 LootPoints, int32* NextLootLevelPoints, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue);
	void SkipToFinalState();
	void SetSkippingToEnd(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_K2_IsTimerPausedHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UWidgetAnimation* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void PlayAnimationCommon(class UWidgetAnimation* Animation);
	void GetBadgePoints(class UResults_Badge_C* Badge, int32* Points, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortBadgeItemDefinition* K2Node_DynamicCast_AsFort_Badge_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMissionPoints_ReturnValue);
	void SetLootLevel(int32 Level, class UTexture2D* PackageImage, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Initialize(float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2);
	void UpdateAddBadgePoints(float CurrentPointsFloat, float TimePassed, float TargetFillPercentage, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetNextLootLevelPoints_NextLootLevelPoints, int32 CallFunc_Min_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_FInterpEaseInOut_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue);
	void BndEvt__IntroAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Intro_Sequence();
	void BndEvt__Anim_LevelUp_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Add_Badge_Points_Sequence(class UResults_Badge_C* Badge);
	void BndEvt__Anim_PostLevelUpIntro_K2Node_ComponentBoundEvent_6_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void On_Leveled_Up();
	void Construct();
	void ExecuteUbergraph_Results_BadgeLootBar(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, class UResults_Badge_C* K2Node_CustomEvent_Badge, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetBadgePoints_Points, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue6, float CallFunc_GetGameTimeInSeconds_ReturnValue2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
	void LeveledUp__DelegateSignature();
	void FinishedAddingBadgePoints__DelegateSignature();
	void IntroComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
