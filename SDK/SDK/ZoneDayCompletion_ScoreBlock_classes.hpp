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

// 0x88 (0x2C0 - 0x238)
// WidgetBlueprintGeneratedClass ZoneDayCompletion_ScoreBlock.ZoneDayCompletion_ScoreBlock_C
class UZoneDayCompletion_ScoreBlock_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*               NumericTextScore;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxRoot;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  IntroComplete;                                     // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        NextValue;                                         // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  IncrementComplete;                                 // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EFortUIScoreType                  ScoreType;                                         // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OutroComplete;                                     // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         OverfillActive;                                    // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_358F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       AC_ScoreCountLoop;                                 // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCue_ScoreCountStart;                          // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCue_ScoreCountLoop;                           // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundCue_ScoreCountEnd;                            // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ZoneDayCompletion_ScoreBlock_C");
		return Clss;
	}

	void SetScore(int32 New_Score, float CallFunc_Conv_IntToFloat_ReturnValue);
	void On_Count_Finished();
	void Outro();
	void Intro();
	void Increment(int32 New_Score, float Interpolation_Length, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2);
	void Construct();
	void BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_35_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__NumericTextScore_K2Node_ComponentBoundEvent_51_FortCountingFinished__DelegateSignature(class UFortNumericTextBlock* NumericTextBlock);
	void BndEvt__Anim_OverfillOff_K2Node_ComponentBoundEvent_54_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_3546_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void ExecuteUbergraph_ZoneDayCompletion_ScoreBlock(int32 EntryPoint, class UFortNumericTextBlock* K2Node_ComponentBoundEvent_NumericTextBlock);
	void OutroComplete__DelegateSignature();
	void IncrementComplete__DelegateSignature();
	void IntroComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
