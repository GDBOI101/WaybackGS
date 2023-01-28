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

// 0x30 (0x288 - 0x258)
// WidgetBlueprintGeneratedClass MovieWidget.MovieWidget_C
class UMovieWidget_C : public UFortMovieWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UImage*                                Video_Image;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Video_ScaleBox;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShouldLoop;                                        // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         AutoPlay;                                          // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         MaintainAspectRatio;                               // 0x272(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_35A5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnMediaReadyToPlay;                                // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieWidget_C");
		return Clss;
	}

	void SetDelayedContentValues(bool Temp_bool_Variable, enum class EStretch Temp_byte_Variable, enum class EStretch Temp_byte_Variable2, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, enum class EStretch K2Node_Select_Default, bool CallFunc_SetLooping_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMediaTexture* CallFunc_GetMediaTexture_ReturnValue);
	void Play(bool ShouldRewind);
	void StopPlaying();
	void Init(class UMediaSource* InMediaSource, class UMediaSoundWave* InMediaSoundWave, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasPlayerForSource_ReturnValue);
	void Destruct();
	void MediaDimensionsUpdated(float NewWidth, float NewHeight);
	void OnMediaLoaded();
	void ExecuteUbergraph_MovieWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_NewWidth, float K2Node_Event_NewHeight, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void OnMediaReadyToPlay__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
