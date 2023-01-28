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

// 0x50 (0x298 - 0x248)
// WidgetBlueprintGeneratedClass TabAudioOptions.TabAudioOptions_C
class UTabAudioOptions_C : public UFortAudioOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class UOptionsMenuSlider_C*                  ChatVolume;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                  DialogVolume;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                  MusicVolume;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    Quality;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                  SoundFXVolume;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    Subtitles;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TooltipDisplay;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    VoiceChatEnable;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    VoiceChatPushToTalk;                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabAudioOptions_C");
		return Clss;
	}

	void UpdateVoiceOptionsVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class ESubGame CallFunc_GetSubGame_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESubGame Temp_byte_Variable6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsPS4Platform_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue2, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue2, enum class ESlateVisibility K2Node_Select2_Default);
	void InitializeData(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, TArray<class FText>& K2Node_MakeArray_Array, class FText CallFunc_MakeLiteralText_ReturnValue3, TArray<class FText>& K2Node_MakeArray_Array2, class FText CallFunc_MakeLiteralText_ReturnValue4, bool CallFunc_ShowChatVolume_ReturnValue, bool CallFunc_ShowQuality_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue5, TArray<class FText>& K2Node_MakeArray_Array3, class FText CallFunc_MakeLiteralText_ReturnValue6, class FText CallFunc_MakeLiteralText_ReturnValue7, TArray<class FText>& K2Node_MakeArray_Array4, class FText CallFunc_MakeLiteralText_ReturnValue8);
	void Update_Data(int32 Temp_int_Variable, int32 Temp_int_Variable2, bool Temp_bool_Variable, int32 Temp_int_Variable3, int32 Temp_int_Variable4, bool CallFunc_GetVoiceChatPTTEnabled_ReturnValue, bool CallFunc_GetVoiceChatEnabled_ReturnValue, int32 CallFunc_GetQuality_ReturnValue, int32 K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, bool Temp_bool_Variable2, bool CallFunc_GetSubtitlesEnabled_ReturnValue, int32 K2Node_Select2_Default, int32 CallFunc_Conv_BoolToInt_ReturnValue, float CallFunc_GetChatVolumeValue_ReturnValue, float CallFunc_GetDialogVolumeValue_ReturnValue, float CallFunc_GetSoundFXVolumeValue_ReturnValue, float CallFunc_GetMusicVolumeValue_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue5, class FText CallFunc_MakeLiteralText_ReturnValue6, class FText CallFunc_MakeLiteralText_ReturnValue7, class FText CallFunc_MakeLiteralText_ReturnValue8);
	void Construct();
	void UpdateOptionsTab();
	void BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature(float Slider_Value);
	void CenterOnTab();
	void BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void ExecuteUbergraph_TabAudioOptions(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Selected_Index, bool CallFunc_Conv_IntToBool_ReturnValue, float K2Node_ComponentBoundEvent_Slider_Value4, float K2Node_ComponentBoundEvent_Slider_Value3, float K2Node_ComponentBoundEvent_Slider_Value2, float K2Node_ComponentBoundEvent_Slider_Value, int32 K2Node_ComponentBoundEvent_Selected_Index4, bool CallFunc_Conv_IntToBool_ReturnValue2, int32 K2Node_ComponentBoundEvent_Selected_Index3, int32 K2Node_ComponentBoundEvent_Selected_Index2, bool CallFunc_Conv_IntToBool_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
