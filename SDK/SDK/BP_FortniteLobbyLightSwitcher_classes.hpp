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

// 0x51 (0x3D9 - 0x388)
// BlueprintGeneratedClass BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
class ABP_FortniteLobbyLightSwitcher_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x390(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                     DirectionLight;                                    // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                             SkyLight;                                          // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APointLight*>                   Pointlights;                                       // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AExponentialHeightFog*                 ExponentialHeightFog;                              // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                     DirectionalLight_LowDetailMode;                    // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEmitter*>                      ParticleSystems;                                   // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                         IsActive;                                          // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortniteLobbyLightSwitcher_C");
		return Clss;
	}

	void SetVisiblityofSceneLighting(bool Activate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, int32 Temp_int_Array_Index_Variable2, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue6, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AEmitter* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue7, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APointLight* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EnableLobbySetLighting();
	void DisableLobbySetLighting();
	void UpdateSettings();
	void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
