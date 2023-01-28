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

// 0x48 (0x2D0 - 0x288)
// WidgetBlueprintGeneratedClass TabGamePadConfig.TabGamePadConfig_C
class UTabGamePadConfig_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(Transient, DuplicateTransient)
	class URotatorSelector_C*                    ControllerPlatformConfig;                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    GamepadConfig;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadMappingInfo_C*                 GamepadMappingInfo;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxControllerPlatform;                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsCombatMode;                                      // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        InputPresets;                                      // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        ControllerPlatformMappingIndex;                    // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ControllerConfiguration;                           // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabGamePadConfig_C");
		return Clss;
	}

	void HandleGamepadMappingInfoChange(int32 CallFunc_Conv_BoolToInt_ReturnValue);
	void Handle_Mode_Toggled(bool CallFunc_Not_PreBool_ReturnValue);
	void Update_Data(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetControllerPlatform_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue);
	void Initialize_Data(const TArray<class FText>& NewLocalVar_0, class FText Temp_text_Variable, class FText Temp_text_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<class FString>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames, TArray<class FText>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames, TArray<class FText>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default);
	void Construct();
	void Configuration_Changed(int32 Selected_Index);
	void CenterOnTab();
	void Gamepad_Config_Changed(int32 Selected_Index);
	void UpdateOptionsTab();
	void ControllerPlatformConfigChanged(int32 Selected_Index);
	void ExecuteUbergraph_TabGamePadConfig(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable2, const class FString& K2Node_Select_Default, enum class ECommonInputType Temp_byte_Variable, enum class ECommonInputType Temp_byte_Variable2, enum class ECommonInputType K2Node_Select2_Default, int32 K2Node_CustomEvent_Selected_Index3, int32 K2Node_CustomEvent_Selected_Index2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const class FString& CallFunc_Array_Get_Item, bool CallFunc_IsPS4Platform_ReturnValue, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_CustomEvent_Selected_Index, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
