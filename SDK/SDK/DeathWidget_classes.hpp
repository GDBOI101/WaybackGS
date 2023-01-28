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

// 0xAC (0x2E4 - 0x238)
// WidgetBlueprintGeneratedClass DeathWidget.DeathWidget_C
class UDeathWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonTextBlock_PrimaryDeathText;                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlockExtraLives;                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlockRespawn;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlockResurrect;                          // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlockResurrectionTimerText;              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlockWait;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlockWarningText;                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKillerPortraitWidget_C*               KillerPortraitWidget;                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               LeftMouseBase;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      RespawnBinding;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RespawnBox;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      ResurrectBinding;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RightMouseBase;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StartDeathBox;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          RespawnTimerHandle;                                // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        ReleaseTimeRemaining;                              // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReadyToRespawnText;                                // 0x2C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          ShowExtraLivesTimerHandle;                         // 0x2D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        ResurrectTimeRemaining;                            // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DeathWidget_C");
		return Clss;
	}

	void ShowExtraLivesText(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class AFortPlayerStateZone* CallFunc_GetPlayerStateZone_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor2);
	void SetRespawnTimerText(const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Max_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue2);
	void OnRespawnTimerUpdate(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue);
	void ConfigureRespawnTimer(float ServerRespawnTime, float ServerResurrectTime, float ResurrectTimeRemainingFloat, float ReleaseTimeRemainingFloat, float TimerDelay, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortGameStateZone* CallFunc_GetGameStateZone_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_FCeil_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class UFortHUDContext* CallFunc_GetContext_ReturnValue3, class AFortGameStateZone* CallFunc_GetGameStateZone_ReturnValue2, class AFortGameStateZone* CallFunc_GetGameStateZone_ReturnValue3, float CallFunc_GetServerWorldTimeSeconds_ReturnValue2, float CallFunc_GetServerWorldTimeSeconds_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_FCeil_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2);
	void OnPawnDied(struct FFortPlayerDeathReport& DeathReport, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, const struct FFortKillerVisualInfo& CallFunc_GetKillerVisualInfoFromDeathReport_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue3, class UFortHeroManagementContext* CallFunc_GetContext_ReturnValue4, class AFortGameStateZone* CallFunc_GetGameStateZone_ReturnValue, const struct FHeroUIData& CallFunc_GetHeroData_HeroData, bool CallFunc_GetHeroData_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnPawnSpawned(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void Construct();
	void ExecuteUbergraph_DeathWidget(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
