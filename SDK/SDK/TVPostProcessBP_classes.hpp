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

// 0x17A (0x502 - 0x388)
// BlueprintGeneratedClass TVPostProcessBP.TVPostProcessBP_C
class ATVPostProcessBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class UPostProcessComponent*                 FullScreenTVPP_StoreFF;                            // 0x390(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x398(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 FullScreenTVPP_OnlyMaterialModified;               // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 FullScreenTVPP;                                    // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd02_A319E55147356F64E8D7AE9C824CC6C2; // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd_A319E55147356F64E8D7AE9C824CC6C2; // 0x3B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FrontEndCameraSwitchFade_PostProcessVisibility_A319E55147356F64E8D7AE9C824CC6C2; // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FrontEndCameraSwitchFade__Direction_A319E55147356F64E8D7AE9C824CC6C2; // 0x3BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FrontEndCameraSwitchFade;                          // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Jitter_Timeline_use_solid_color_3FCD803A4A5E86474EA128B9EDBED56E; // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Jitter_Timeline_LerpImageAndScreen_3FCD803A4A5E86474EA128B9EDBED56E; // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Jitter_Timeline_Noise_Distortion_Amount_3FCD803A4A5E86474EA128B9EDBED56E; // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Jitter_Timeline_Screen_Modulation_3FCD803A4A5E86474EA128B9EDBED56E; // 0x3D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Jitter_Timeline__Direction_3FCD803A4A5E86474EA128B9EDBED56E; // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Jitter_Timeline;                                   // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_StartTheMonitor_Text_Timeline_SolidBackgroundModulation_8B52FB0849C47C5870E31DBE0A87A563; // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_StartTheMonitor_Text_Timeline_Additive_screen_modulation_8B52FB0849C47C5870E31DBE0A87A563; // 0x3EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_StartTheMonitor_Text_Timeline_ReplacementAlpha_8B52FB0849C47C5870E31DBE0A87A563; // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_StartTheMonitor_Text_Timeline_Vpos_8B52FB0849C47C5870E31DBE0A87A563; // 0x3F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_StartTheMonitor_Text_Timeline_Hpos_8B52FB0849C47C5870E31DBE0A87A563; // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_StartTheMonitor_Text_Timeline_Noise_Distortion_Amount_8B52FB0849C47C5870E31DBE0A87A563; // 0x3FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_StartTheMonitor_Text_Timeline_Screen_Bend_Amount_8B52FB0849C47C5870E31DBE0A87A563; // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_StartTheMonitor_Text_Timeline_Screen_Modulation_8B52FB0849C47C5870E31DBE0A87A563; // 0x404(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Camera_StartTheMonitor_Text_Timeline__Direction_8B52FB0849C47C5870E31DBE0A87A563; // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Camera_StartTheMonitor_Text_Timeline;              // 0x410(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOut_blendweight_D40D454F4B32910AAC407D9AB580EA07; // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOut_Fading_D40D454F4B32910AAC407D9AB580EA07;   // 0x41C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOut_Effect_translucency_D40D454F4B32910AAC407D9AB580EA07; // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOut_Kill_effect_amount_D40D454F4B32910AAC407D9AB580EA07; // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeOut__Direction_D40D454F4B32910AAC407D9AB580EA07; // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeOut;                                           // 0x430(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_between_cameras_use_solid_color_E4FB35CD487A51ED1632BFAD49D21E03; // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_between_cameras_LerpImageAndScreen_E4FB35CD487A51ED1632BFAD49D21E03; // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_between_cameras_Noise_Distortion_Amount_E4FB35CD487A51ED1632BFAD49D21E03; // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_between_cameras_Screen_Modulation_E4FB35CD487A51ED1632BFAD49D21E03; // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Switch_between_cameras__Direction_E4FB35CD487A51ED1632BFAD49D21E03; // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Switch_between_cameras;                            // 0x450(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_to_static_use_solid_color_010BC5074AA9D38B1E815EB7DA97273B; // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_to_static_ShowScreenStatic_010BC5074AA9D38B1E815EB7DA97273B; // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_to_static_Noise_Distortion_Amount_010BC5074AA9D38B1E815EB7DA97273B; // 0x460(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_to_static_Screen_Modulation_010BC5074AA9D38B1E815EB7DA97273B; // 0x464(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Switch_to_static__Direction_010BC5074AA9D38B1E815EB7DA97273B; // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Switch_to_static;                                  // 0x470(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_to_live_use_solid_color_DFB267304061CE3644C3E1B38972E94E; // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_to_live_LerpImageAndScreen_DFB267304061CE3644C3E1B38972E94E; // 0x47C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_to_live_Noise_Distortion_Amount_DFB267304061CE3644C3E1B38972E94E; // 0x480(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Switch_to_live_Screen_Modulation_DFB267304061CE3644C3E1B38972E94E; // 0x484(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Switch_to_live__Direction_DFB267304061CE3644C3E1B38972E94E; // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Switch_to_live;                                    // 0x490(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Show_the_troll_HideTroll_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x498(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Show_the_troll_use_solid_color_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x49C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Show_the_troll_Noise_Distortion_Amount_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Show_the_troll__Direction_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x4A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Show_the_troll;                                    // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartScreen_Replacement_randomization_676222D64F5268BA3215E5B98CEFBE8A; // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartScreen_ReplacementAlpha_676222D64F5268BA3215E5B98CEFBE8A; // 0x4B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartScreen_Vpos_676222D64F5268BA3215E5B98CEFBE8A; // 0x4B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartScreen_Hpos_676222D64F5268BA3215E5B98CEFBE8A; // 0x4BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartScreen_Noise_Distortion_Amount_676222D64F5268BA3215E5B98CEFBE8A; // 0x4C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartScreen_Screen_Bend_Amount_676222D64F5268BA3215E5B98CEFBE8A; // 0x4C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartScreen_Screen_Modulation_676222D64F5268BA3215E5B98CEFBE8A; // 0x4C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                StartScreen__Direction_676222D64F5268BA3215E5B98CEFBE8A; // 0x4CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    StartScreen;                                       // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GrabNewColorBool;                                  // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Increase_distortion_;                              // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdditionalDistortionAmount;                        // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_troll;                                        // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Troll_counter;                                     // 0x4E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewVar;                                            // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Camera_hasnt_switched_to_live_yet;                 // 0x4E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FluctuatingDisplaySceneValue;                      // 0x4EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ideal_Display_scene_min_value;                     // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ideal_display_scene_max_value;                     // 0x4F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SkipDos;                                           // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DisableOnStartup;                                  // 0x4F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FrontEndCameraSwitch_InProgress;                   // 0x4FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3FBF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PreviousSceneModulation;                           // 0x4FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FFInProgress;                                      // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         RestartFrontEndCameraSwitch_;                      // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TVPostProcessBP_C");
		return Clss;
	}

	void RandomizeTheColor(float Use_Bluescreen, float Probablility_modulator, float Use_Flat_Blue, float MaxColorPerChannelValue, bool Control_replacement_alpha, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue2, float CallFunc_Lerp_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue2, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void UserConstructionScript();
	void Show_the_troll__FinishedFunc();
	void Show_the_troll__UpdateFunc();
	void Switch_between_cameras__FinishedFunc();
	void Switch_between_cameras__UpdateFunc();
	void Switch_between_cameras__Switch_Camera_Position__EventFunc();
	void Switch_to_live__FinishedFunc();
	void Switch_to_live__UpdateFunc();
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void Switch_to_static__FinishedFunc();
	void Switch_to_static__UpdateFunc();
	void Camera_StartTheMonitor_Text_Timeline__FinishedFunc();
	void Camera_StartTheMonitor_Text_Timeline__UpdateFunc();
	void Jitter_Timeline__FinishedFunc();
	void Jitter_Timeline__UpdateFunc();
	void Jitter_Timeline__Switch_Camera_Position__EventFunc();
	void FrontEndCameraSwitchFade__FinishedFunc();
	void FrontEndCameraSwitchFade__UpdateFunc();
	void StartScreen__FinishedFunc();
	void StartScreen__UpdateFunc();
	void Camera_TriggerTheTroll();
	void Camera_SwitchBetweenLocations();
	void Camera_TransitionToLiveStatic();
	void Camera_TurnOffThePostProcess();
	void Camera_TransitionToLiveVideo();
	void Camera_DebugEvents();
	void Camera_StartTheMonitor_Text();
	void Camera_DosTextFinished();
	void Camera_ReturningPlayerInitializeWithLiveVideo();
	void FrontEndCameraSwitch();
	void Camera_LoadAndWait();
	void Camera_Sequence_Start_StaticWhoomp();
	void WriteOutLoading();
	void SequenceFinished(const class FString& SequenceName);
	void Camera_InitializePost();
	void Camera_DisableEffects();
	void ReceiveTick(float DeltaSeconds);
	void FastForwardPostProcess();
	void JitterTheScreen();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TVPostProcessBP(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue2, float CallFunc_Lerp_ReturnValue3, float CallFunc_Lerp_ReturnValue4, float CallFunc_Lerp_ReturnValue5, float CallFunc_Lerp_ReturnValue6, float CallFunc_Lerp_ReturnValue7, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, const struct FPostProcessSettings& CallFunc_GetFrontEndFFSettings_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_RandomFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue4, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue5, float CallFunc_GetScalarParameterValue_ReturnValue4, float CallFunc_GetScalarParameterValue_ReturnValue5, float CallFunc_GetScalarParameterValue_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_GetScalarParameterValue_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue6, float CallFunc_GetScalarParameterValue_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_FClamp_ReturnValue2, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable, float CallFunc_GetScalarParameterValue_ReturnValue9, float CallFunc_Add_FloatFloat_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue7, float CallFunc_RandomFloatInRange_ReturnValue6, const class FString& K2Node_CustomEvent_SequenceName, float CallFunc_RandomFloat_ReturnValue3, float K2Node_Event_DeltaSeconds, bool CallFunc_Greater_FloatFloat_ReturnValue3, float CallFunc_Conv_BoolToFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue8, float CallFunc_GetScalarParameterValue_ReturnValue10, bool Temp_bool_Has_Been_Initd_Variable2, bool Temp_bool_IsClosed_Variable2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
