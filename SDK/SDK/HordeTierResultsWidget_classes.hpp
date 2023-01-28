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

// 0x60 (0x2C8 - 0x268)
// WidgetBlueprintGeneratedClass HordeTierResultsWidget.HordeTierResultsWidget_C
class UHordeTierResultsWidget_C : public UFortActionHandlerPanel
{
public:
	class UMovieWidget_C*                        Movie;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_NameplateWidget_C*            ResultsNameplate;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnTierResultsWidgetComplete;                       // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EFortCompletionResult             CompletionResult;                                  // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaSource*                          DefaultDefeatMedia;                                // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          DefaultVictoryMedia;                               // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            VictorySound;                                      // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            DefeatSound;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MovieTextDelay;                                    // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NameplateIntroFunctionName;                        // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HordeTierResultsWidget_C");
		return Clss;
	}

	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnEndOfMovieReached(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue);
	void ChooseMediaToUse(class UMediaSource** MediaToUse, const class FString& StringTest, bool Temp_bool_Variable, enum class EFortCompletionResult Temp_byte_Variable, enum class EFortCompletionResult Temp_byte_Variable2, class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, class UMediaSource* K2Node_Select_Default, class UMediaSource* K2Node_Select2_Default, class UMediaSource* K2Node_Select3_Default);
	void Initialize(enum class EFortCompletionResult Result, enum class EFortCompletionResult Temp_byte_Variable, class USoundBase* K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void InitializeMovie(class UMediaSource* MediaToUse, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMediaSource* CallFunc_ChooseMediaToUse_MediaToUse, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue);
	void OnTierResultsWidgetComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
