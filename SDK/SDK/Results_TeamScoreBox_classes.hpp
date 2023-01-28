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

// 0xD6 (0x30E - 0x238)
// WidgetBlueprintGeneratedClass Results_TeamScoreBox.Results_TeamScoreBox_C
class UResults_TeamScoreBox_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_AbsorptionOutro;                              // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_AbsorptionIntro;                              // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_SkipToFinalState;                             // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CountOutro;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CountIntro;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Intro;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageAbsorb;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageCore;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageFlashFX;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageType;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextScore;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextType;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortUIScoreType                  ScoreType;                                         // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Score;                                             // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CountInterpolationTime;                            // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  CountUpFinished;                                   // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bCountingUp;                                       // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_362E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  CountDownFinished;                                 // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  IntroFinished;                                     // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        PlayRate;                                          // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlashTextTypeTime;                                 // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TextTypeColor;                                     // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FlashTextTypeTimer;                                // 0x300(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        FlashTextTypeTimeStart;                            // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkippedToEnd;                                     // 0x30C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSkippingToEnd;                                    // 0x30D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_TeamScoreBox_C");
		return Clss;
	}

	void SkipToFinalState();
	void SetSkippingToEnd(bool CallFunc_IsInterpolatingNumericValue_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void UpdateFlashTextType(const struct FLinearColor& ColorWhite, float TimePassed, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void FlashTextType(float CallFunc_GetGameTimeInSeconds_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Initialize(enum class EFortUIScoreType ScoreType, int32 Score, float PlayRate, float CallFunc_Divide_FloatFloat_ReturnValue);
	void InitializeScoreType(class UTexture2D* Texture, const struct FLinearColor& Color, class FText Text, const struct FFortScoreStylingInfo& CallFunc_GetScoreStylingData_ScoreStylingInfo, bool CallFunc_GetScoreStylingData_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Intro_Sequence();
	void Count_Up_Sequence();
	void Count_Down_Sequence();
	void BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Text_Count_Up_Finished();
	void Text_Count_Down_Finished();
	void Skip_Count_Interpolation();
	void Stop_Count_Down_Absorption();
	void BndEvt__TextScore_K2Node_ComponentBoundEvent_0_OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	void ExecuteUbergraph_Results_TeamScoreBox(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, int32 CallFunc_RandomIntegerInRange_ReturnValue2, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5, class UCommonNumericTextBlock* K2Node_ComponentBoundEvent_NumericTextBlock, bool K2Node_ComponentBoundEvent_HadCompleted, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue6, bool CallFunc_NotEqual_FloatFloat_ReturnValue2);
	void IntroFinished__DelegateSignature();
	void CountDownFinished__DelegateSignature();
	void CountUpFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
