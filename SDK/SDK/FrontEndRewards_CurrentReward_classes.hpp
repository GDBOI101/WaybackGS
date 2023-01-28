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

// 0xB4 (0x2E4 - 0x230)
// WidgetBlueprintGeneratedClass FrontEndRewards_CurrentReward.FrontEndRewards_CurrentReward_C
class UFrontEndRewards_CurrentReward_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimIdleBounce;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimOpenReward;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimDropReward;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimPopReward;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          RewardCanvasPanel;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardsIcon_C*                        RewardsIcon;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxIcon;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnDropAnimationFinished;                           // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnPopAnimationFinished;                            // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnOpenAnimationStarted;                            // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnOpenAnimationFinished;                           // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        CountTimeStart;                                    // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        CountTime;                                         // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CountTimer;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        FadeDuration;                                      // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFadingOut;                                       // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FinalScale;                                        // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             FinalAlignment;                                    // 0x2CC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              FinalAnchors;                                      // 0x2D4(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEndRewards_CurrentReward_C");
		return Clss;
	}

	void Reset_Canvas_Panel_Slot_Alignment_and_Anchors(class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess);
	void Reset_Reward_Icon_Translation_and_Scale();
	void Play_Open_Animation_Sound(enum class EFrontEndRewardType Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, class USoundBase* Temp_object_Variable5, class USoundBase* Temp_object_Variable6, class USoundBase* K2Node_Select_Default);
	void Play_Pop_Animation_Sound(enum class EFrontEndRewardType Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, class USoundBase* Temp_object_Variable5, class USoundBase* Temp_object_Variable6, class USoundBase* K2Node_Select_Default);
	void Play_Drop_Animation_Sound(enum class EFrontEndRewardType Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* Temp_object_Variable4, class USoundBase* Temp_object_Variable5, class USoundBase* Temp_object_Variable6, class USoundBase* K2Node_Select_Default);
	void SkipPopAnimation(bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue2);
	void StopBounceAnimation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void PlayFadeOutAnimation(bool CallFunc_IsAnimationPlaying_ReturnValue);
	void SkipOpenAnimation(const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void UpdateFade(float TimePassed, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FInterpEaseInOut_ReturnValue);
	void HandleOpenAnimationFinished();
	void HandleDropAnimationFinished();
	void HandlePopAnimationFinished();
	void PlayOpenAnimation(bool CallFunc_IsAnimationPlaying_ReturnValue);
	void PlayPopAnimation(bool CallFunc_IsAnimationPlaying_ReturnValue);
	void PlayDropAnimation(bool CallFunc_IsAnimationPlaying_ReturnValue);
	void Construct();
	void FadeIconToWhite();
	void ExecuteUbergraph_FrontEndRewards_CurrentReward(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, float CallFunc_GetGameTimeInSeconds_ReturnValue);
	void OnOpenAnimationFinished__DelegateSignature();
	void OnOpenAnimationStarted__DelegateSignature();
	void OnPopAnimationFinished__DelegateSignature();
	void OnDropAnimationFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
