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

// 0x65 (0x29D - 0x238)
// WidgetBlueprintGeneratedClass Results_PlayerScoreBox.Results_PlayerScoreBox_C
class UResults_PlayerScoreBox_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Glare;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Spark;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Intro;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageBackground;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScore;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        CountInterpolationTime;                            // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Score;                                             // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsValidScoreBox;                                  // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsBestScore;                                      // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D78[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlayRate;                                          // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenIntroAndCount;                          // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TopScoreColor;                                     // 0x27C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NormalScoreColor;                                  // 0x28C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkippingToEnd;                                    // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_PlayerScoreBox_C");
		return Clss;
	}

	void GetIsValidScoreBox(bool* bIsValidScoreBox);
	void SetIsValidScoreBox(bool bIsValidScoreBox);
	void SetSkippingToEnd(bool CallFunc_IsInterpolatingNumericValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void SetIsBestScore(bool bIsBestScore, const struct FLinearColor& ScoreColor, class UTexture* Texture, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Initialize(int32 Score, float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2);
	void PreConstruct(bool IsDesignTime);
	void Intro_Sequence();
	void BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Count_Sequence();
	void Skipped_Count_Interpolation();
	void BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	void ExecuteUbergraph_Results_PlayerScoreBox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_RandomBool_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, class UCommonNumericTextBlock* K2Node_ComponentBoundEvent_NumericTextBlock, bool K2Node_ComponentBoundEvent_HadCompleted, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
