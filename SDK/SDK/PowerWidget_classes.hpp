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

// 0x98 (0x2F8 - 0x260)
// WidgetBlueprintGeneratedClass PowerWidget.PowerWidget_C
class UPowerWidget_C : public UFortPlayerTrackerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UImage*                                BarBG;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHomebaseRatingBar_C*                  HomebaseRatingBar;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Power;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               NumericText_RatingValue;                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OuterGlow;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerIconGlow;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        RatingValue;                                       // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        InterpDuration;                                    // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowProgress;                                      // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentRating;                                     // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CParty;                                            // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CSolo;                                             // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_LocalPlayerProfileModal_C*         LocalPlayerWidget;                                 // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Power_Increased;                                   // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Previously_Had_Teammates;                          // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Power_Increased_Sound;                             // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PowerWidget_C");
		return Clss;
	}

	void Check_For_Power_Change(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_PlayerHasTeammates_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	class UWidget* GetPowerRatingTooltipWidget(class UCommonUIContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	bool PlayerHasTeammates(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_GetTeamMemberIDs_TeamMemberIDs, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Debug(class UHomeBaseContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, int32 CallFunc_GetTotalHomebaseRating_Rating, float CallFunc_GetTotalHomebaseRating_ProgressFraction, bool CallFunc_GetTotalHomebaseRating_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData7, class FText CallFunc_Conv_BoolToText_ReturnValue3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetState(bool* PassThrough, bool CallFunc_PlayerHasTeammates_ReturnValue);
	void Update_Rating(bool IsIncreasing, float NewProgressValue, int32 NewRatingValue, int32 CallFunc_GetHomebaseRating_Rating, float CallFunc_GetHomebaseRating_ProgressFraction, bool CallFunc_GetHomebaseRating_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating, float CallFunc_GetModifiedHomebaseRating_ProgressFraction, bool CallFunc_GetModifiedHomebaseRating_ReturnValue, int32 CallFunc_GetModifiedHomebaseRating_Rating2, float CallFunc_GetModifiedHomebaseRating_ProgressFraction2, bool CallFunc_GetModifiedHomebaseRating_ReturnValue2, int32 CallFunc_GetModifiedHomebaseRating_Rating3, float CallFunc_GetModifiedHomebaseRating_ProgressFraction3, bool CallFunc_GetModifiedHomebaseRating_ReturnValue3, int32 CallFunc_GetHomebaseRating_Rating2, float CallFunc_GetHomebaseRating_ProgressFraction2, bool CallFunc_GetHomebaseRating_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetHomebaseRating_Rating3, float CallFunc_GetHomebaseRating_ProgressFraction3, bool CallFunc_GetHomebaseRating_ReturnValue3, int32 CallFunc_GetModifiedHomebaseRating_Rating4, float CallFunc_GetModifiedHomebaseRating_ProgressFraction4, bool CallFunc_GetModifiedHomebaseRating_ReturnValue4, int32 CallFunc_GetHomebaseRating_Rating4, float CallFunc_GetHomebaseRating_ProgressFraction4, bool CallFunc_GetHomebaseRating_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_PlayerHasTeammates_ReturnValue);
	void Update_Rating_Value(int32 New_Rating_Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void Construct();
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	void ExecuteUbergraph_PowerWidget(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_SetState_PassThrough, const struct FFortTeamMemberInfo& K2Node_Event_NewInfo, enum class EFortPartyMemberDisplayState CallFunc_GetPartyMemberDisplayState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Power_Increased__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
