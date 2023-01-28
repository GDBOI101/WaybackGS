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

// 0xF2 (0x4C2 - 0x3D0)
// BlueprintGeneratedClass MusicManager.MusicManager_C
class AMusicManager_C : public AFortMusicManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)
	class USoundBase*                            MusicFrontend;                                     // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicLobby;                                        // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StingerReturningToAmbientMusic;                    // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StingerMorning;                                    // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicMorning;                                      // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicDay;                                          // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StingerEvening;                                    // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicEvening;                                      // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StingerNight;                                      // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicNight;                                        // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2766[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GameMode_Current;                                  // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_Lobby;                                    // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_Frontend;                                 // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_InGame;                                   // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayStingerWhenReturningToAmbientMusic;            // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingAmbientMusic;                               // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingThreatMusic;                                // 0x452(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingNearbyEnemiesMusic;                         // 0x453(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingHuskLowMusic;                               // 0x454(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingHuskHighMusic;                              // 0x455(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingLargeEnemyMusic;                            // 0x456(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2767[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastTimeMusicWasStartedOrContinued;                // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentMusicIntensityLevel;                        // 0x45C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CurrentDayPhase;                                   // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2768[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            LargeEnemyStinger;                                 // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            LargeEnemyMusic;                                   // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HuskHighStinger;                                   // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HuskHighMusic;                                     // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HuskLowStinger;                                    // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HuskLowMusic;                                      // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            NearbyEnemiesStinger;                              // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            NearbyEnemiesMusic;                                // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MusicLogicUpdateTickTime;                          // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDurationBeforeMusicCanIncreaseIntensity;        // 0x4AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityIncreaseFadeTime;                         // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMusicFadeStyles                  IntensityIncreaseFadeStyle;                        // 0x4B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2769[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDurationBeforeMusicCanDecreaseInIntensity;      // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityDecreaseFadeTime;                         // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMusicFadeStyles                  IntensityDecreaseFadeStyle;                        // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MusicShouldStop;                                   // 0x4C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MusicManager_C");
		return Clss;
	}

	void ResetMusicBools();
	void UserConstructionScript(class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End2, bool K2Node_DynamicCast_bSuccess2);
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void OnUpdateMusic();
	void PlayAmbientMusic();
	void ReceiveBeginPlay();
	void StartMusic();
	void StopMusic();
	void ExecuteUbergraph_MusicManager(int32 EntryPoint, bool Temp_bool_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable2, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_GetGameTimeInSeconds_ReturnValue5, bool CallFunc_Greater_FloatFloat_ReturnValue3, bool CallFunc_NotEqual_IntInt_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue6, float CallFunc_Subtract_FloatFloat_ReturnValue4, int32 CallFunc_MakeLiteralInt_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue2, bool Temp_bool_Variable3, enum class EMusicFadeStyles K2Node_Select_Default, float K2Node_Select2_Default, bool CallFunc_BooleanAND_ReturnValue2, int32 CallFunc_MakeLiteralInt_ReturnValue3, bool CallFunc_NotEqual_IntInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue3, float CallFunc_GetGameTimeInSeconds_ReturnValue7, float CallFunc_GetGameTimeInSeconds_ReturnValue8, float CallFunc_Subtract_FloatFloat_ReturnValue5, bool CallFunc_Greater_FloatFloat_ReturnValue5, float CallFunc_GetGameTimeInSeconds_ReturnValue9, float CallFunc_GetGameTimeInSeconds_ReturnValue10, float CallFunc_Subtract_FloatFloat_ReturnValue6, float CallFunc_GetGameTimeInSeconds_ReturnValue11, bool CallFunc_Greater_FloatFloat_ReturnValue6, float CallFunc_Subtract_FloatFloat_ReturnValue7, bool CallFunc_Greater_FloatFloat_ReturnValue7, float CallFunc_GetGameTimeInSeconds_ReturnValue12, float CallFunc_Subtract_FloatFloat_ReturnValue8, bool CallFunc_Greater_FloatFloat_ReturnValue8, class USoundBase* Temp_object_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue4, bool Temp_bool_Variable4, const class FString& CallFunc_Concat_StrStr_ReturnValue5, const class FString& CallFunc_Concat_StrStr_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue7, const class FString& CallFunc_Concat_StrStr_ReturnValue8, class USoundBase* Temp_object_Variable2, const class FString& CallFunc_Concat_StrStr_ReturnValue9, const class FString& CallFunc_Concat_StrStr_ReturnValue10, const class FString& CallFunc_Concat_StrStr_ReturnValue11, bool Temp_bool_Variable5, const class FString& CallFunc_Concat_StrStr_ReturnValue12, bool Temp_bool_Variable6, const class FString& CallFunc_Concat_StrStr_ReturnValue13, const class FString& CallFunc_Concat_StrStr_ReturnValue14, const class FString& CallFunc_Concat_StrStr_ReturnValue15, class USoundBase* Temp_object_Variable3, const class FString& CallFunc_Concat_StrStr_ReturnValue16, bool Temp_bool_Variable7, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_EqualEqual_NameName_ReturnValue4, bool CallFunc_EqualEqual_NameName_ReturnValue5, bool CallFunc_EqualEqual_NameName_ReturnValue6, bool CallFunc_NotEqual_IntInt_ReturnValue4, float CallFunc_GetTimeOfDaySpeed_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class USoundBase* Temp_object_Variable4, float CallFunc_GetEventHeatPercent_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue2, float CallFunc_GetEventHeatPercent_ReturnValue3, float CallFunc_GetEventHeatPercent_ReturnValue4, enum class EFortDayPhase Temp_byte_Variable, class USoundBase* K2Node_Select3_Default, class USoundBase* K2Node_Select4_Default, enum class EFortDayPhase Temp_byte_Variable2, int32 CallFunc_MakeLiteralInt_ReturnValue4, class USoundBase* K2Node_Select5_Default, bool CallFunc_Greater_IntInt_ReturnValue4, float K2Node_Select6_Default, class USoundBase* K2Node_Select7_Default, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_IsNearActiveEncounters_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, class USoundBase* K2Node_Select8_Default, float CallFunc_GetEventHeatPercent_ReturnValue5, float CallFunc_GetEventHeatPercent_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue, class USoundBase* Temp_object_Variable5, float CallFunc_Add_FloatFloat_ReturnValue2, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue9, bool Temp_bool_Variable8, float CallFunc_GetEventHeatPercent_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue3, enum class EMusicFadeStyles K2Node_Select9_Default, bool CallFunc_Less_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue10, float CallFunc_GetEventHeatPercent_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_GetEventHeatPercent_ReturnValue9, bool CallFunc_Less_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue5, bool CallFunc_Less_FloatFloat_ReturnValue4, bool CallFunc_Greater_FloatFloat_ReturnValue11, bool CallFunc_Greater_FloatFloat_ReturnValue12, bool Temp_bool_Variable9, bool Temp_bool_Variable10, class USoundBase* K2Node_Select10_Default, bool Temp_bool_Variable11, float K2Node_Select11_Default, class USoundBase* Temp_object_Variable6, enum class EMusicFadeStyles K2Node_Select12_Default, bool Temp_bool_Variable12, bool Temp_bool_Variable13, class USoundBase* K2Node_Select13_Default, float K2Node_Select14_Default, bool Temp_bool_Variable14, class USoundBase* Temp_object_Variable7, enum class EMusicFadeStyles K2Node_Select15_Default, class USoundBase* K2Node_Select16_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
