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

// 0x1D0 (0xDC0 - 0xBF0)
// BlueprintGeneratedClass TODM_A.TODM_A_C
class ATODM_A_C : public AFortTimeOfDayManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBF0(0x8)(Transient, DuplicateTransient)
	class UPostProcessComponent*                 EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_; // 0xBF8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        New_Storm_Timeline_Wind_Strength_A54B465A45C4FA058D4E33A79E94EB3C; // 0xC00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        New_Storm_Timeline_RainInt_A54B465A45C4FA058D4E33A79E94EB3C; // 0xC04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        New_Storm_Timeline_Lightning_Modulator_A54B465A45C4FA058D4E33A79E94EB3C; // 0xC08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        New_Storm_Timeline_Storm_Ramp_In_Value_A54B465A45C4FA058D4E33A79E94EB3C; // 0xC0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                New_Storm_Timeline__Direction_A54B465A45C4FA058D4E33A79E94EB3C; // 0xC10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4071[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    New_Storm_Timeline;                                // 0xC18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlashLightning_LightningColorLERP_2BD0C1B54C66FC6DE051729F8F094D6E; // 0xC20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlashLightning_lightning_alpha_2BD0C1B54C66FC6DE051729F8F094D6E; // 0xC24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlashLightning_Lightning_Intensity_2BD0C1B54C66FC6DE051729F8F094D6E; // 0xC28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FlashLightning__Direction_2BD0C1B54C66FC6DE051729F8F094D6E; // 0xC2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4072[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FlashLightning;                                    // 0xC30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WindSpeed;                                         // 0xC38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomWeatherWaitTime;                             // 0xC3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentAmountOfRandomWeatherTimeLeft;              // 0xC40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewWeatherLerpAmount;                              // 0xC44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WindStrength;                                      // 0xC48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FutureWindStrength;                                // 0xC4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FutureWindSpeed;                                   // 0xC50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPickNewWindConditions;                            // 0xC54(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4073[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LightningStrength;                                 // 0xC58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ThreatCloudStormAmount;                            // 0xC5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRainWithStorms;                                 // 0xC60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Play_a_Particle_Effect_Near_the_players_Feet;      // 0xC61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         WindEffects_Should_be_Active;                      // 0xC62(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4074[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              Storm_Foot_Particle_Outdoor;                       // 0xC68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Storm_Foot_Particle_While_on_Terrain;              // 0xC70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Storm_Foot_Particle_Indoor;                        // 0xC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Storm_Foot_Particle_While_NOT_on_Terrain;          // 0xC80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Storm_Wind_Strength;                               // 0xC88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Generate_Foliage_Wind_Gusts;                       // 0xC8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4075[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          LightningStrikeTimerHandle;                        // 0xC90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLinearColor                          PreviousDirectionalLightColor;                     // 0xC98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Lightning_Flash_Color;                             // 0xCA8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Lightning_Flash_Timeline_Min;                      // 0xCB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lightning_Flash_Timeline_Max;                      // 0xCBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ShootingStarParticleSystem;                        // 0xCC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawn_Shooting_Stars;                              // 0xCC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4076[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SkyboxFogMorningColor;                             // 0xCCC(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogMorningLitColor;                          // 0xCDC(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningDistance;                          // 0xCEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningDiffuseAmount;                     // 0xCF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningEmissiveAmount;                    // 0xCF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningLitLength;                         // 0xCF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningLitRotation;                       // 0xCFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogMorningLitOffset;                         // 0xD00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogDayColor;                                 // 0xD04(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogDayLitColor;                              // 0xD14(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayDistance;                              // 0xD24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayDiffuseAmount;                         // 0xD28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayEmissiveAmount;                        // 0xD2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayLitLength;                             // 0xD30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayLitRotation;                           // 0xD34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogDayLitOffset;                             // 0xD38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogEveningColor;                             // 0xD3C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogEveningLitColor;                          // 0xD4C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningDistance;                          // 0xD5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningDiffuseAmount;                     // 0xD60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningEmissiveAmount;                    // 0xD64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningLitLength;                         // 0xD68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningLitRotation;                       // 0xD6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogEveningLitOffset;                         // 0xD70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogNightColor;                               // 0xD74(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkyboxFogNightLitColor;                            // 0xD84(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightDistance;                            // 0xD94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightDiffuseAmount;                       // 0xD98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightEmissiveAmount;                      // 0xD9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightLitLength;                           // 0xDA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightLitRotation;                         // 0xDA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkyboxFogNightLitOffset;                           // 0xDA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        World_Border_Cloud_Base_Color_Brightness;          // 0xDAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          World_Border_Cloud_Sub_Surface_Color_and_Opacity;  // 0xDB0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TODM_A_C");
		return Clss;
	}

	void UserConstructionScript(float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue2, float CallFunc_FClamp_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_FClamp_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue4, const struct FLinearColor& CallFunc_MakeColor_ReturnValue3, const struct FLinearColor& CallFunc_MakeColor_ReturnValue4, float CallFunc_FClamp_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_FClamp_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue6, const struct FLinearColor& CallFunc_MakeColor_ReturnValue5, const struct FLinearColor& CallFunc_MakeColor_ReturnValue6, float CallFunc_FClamp_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue7, float CallFunc_FClamp_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue8, const struct FLinearColor& CallFunc_MakeColor_ReturnValue7, const struct FLinearColor& CallFunc_MakeColor_ReturnValue8);
	void FlashLightning__FinishedFunc();
	void FlashLightning__UpdateFunc();
	void New_Storm_Timeline__FinishedFunc();
	void New_Storm_Timeline__UpdateFunc();
	void New_Storm_Timeline__FireOffRain__EventFunc();
	void StartStorm();
	void OnStormStart();
	void OnStormEnd();
	void LightningStrike();
	void ReceiveBeginPlay();
	void DisableLightAndFog(bool Enable);
	void EnableHDRRendering();
	void ExecuteUbergraph_TODM_A(int32 EntryPoint, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Square_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetStormStrength_ReturnValue, bool K2Node_CustomEvent_Enable, bool CallFunc_Not_PreBool_ReturnValue2, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, float CallFunc_Multiply_FloatFloat_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue7, float CallFunc_Multiply_FloatFloat_ReturnValue8, float CallFunc_Multiply_FloatFloat_ReturnValue9, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue10, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue6, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue11, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue7, float CallFunc_FClamp_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue8, const struct FLinearColor& CallFunc_MakeColor_ReturnValue2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue3, float CallFunc_FClamp_ReturnValue3, float CallFunc_FClamp_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue9, float CallFunc_Add_FloatFloat_ReturnValue10, const struct FLinearColor& CallFunc_MakeColor_ReturnValue4, const struct FLinearColor& CallFunc_MakeColor_ReturnValue5, float CallFunc_FClamp_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue11, float CallFunc_FClamp_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue12, const struct FLinearColor& CallFunc_MakeColor_ReturnValue6, const struct FLinearColor& CallFunc_MakeColor_ReturnValue7, float CallFunc_FClamp_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue13, float CallFunc_FClamp_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue14, const struct FLinearColor& CallFunc_MakeColor_ReturnValue8);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
