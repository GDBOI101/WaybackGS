#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function MovieWidget.MovieWidget_C.SetDelayedContentValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EStretch                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStretch                Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaPlayer*                CallFunc_GetMediaPlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStretch                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetLooping_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaTexture*               CallFunc_GetMediaTexture_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMovieWidget_C::SetDelayedContentValues(bool Temp_bool_Variable, enum class EStretch Temp_byte_Variable, enum class EStretch Temp_byte_Variable2, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, enum class EStretch K2Node_Select_Default, bool CallFunc_SetLooping_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMediaTexture* CallFunc_GetMediaTexture_ReturnValue)
{
	static auto Func = Class->GetFunction("MovieWidget_C", "SetDelayedContentValues");

	Params::UMovieWidget_C_SetDelayedContentValues_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetMediaPlayer_ReturnValue = CallFunc_GetMediaPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetLooping_ReturnValue = CallFunc_SetLooping_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetMediaTexture_ReturnValue = CallFunc_GetMediaTexture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieWidget.MovieWidget_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRewind                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMovieWidget_C::Play(bool ShouldRewind)
{
	static auto Func = Class->GetFunction("MovieWidget_C", "Play");

	Params::UMovieWidget_C_Play_Params Parms;
	Parms.ShouldRewind = ShouldRewind;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieWidget.MovieWidget_C.StopPlaying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMovieWidget_C::StopPlaying()
{
	static auto Func = Class->GetFunction("MovieWidget_C", "StopPlaying");

	Params::UMovieWidget_C_StopPlaying_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieWidget.MovieWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*                InMediaSource                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaSoundWave*             InMediaSoundWave                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasPlayerForSource_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMovieWidget_C::Init(class UMediaSource* InMediaSource, class UMediaSoundWave* InMediaSoundWave, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasPlayerForSource_ReturnValue)
{
	static auto Func = Class->GetFunction("MovieWidget_C", "Init");

	Params::UMovieWidget_C_Init_Params Parms;
	Parms.InMediaSource = InMediaSource;
	Parms.InMediaSoundWave = InMediaSoundWave;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasPlayerForSource_ReturnValue = CallFunc_HasPlayerForSource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieWidget.MovieWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMovieWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("MovieWidget_C", "Destruct");

	Params::UMovieWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieWidget.MovieWidget_C.MediaDimensionsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              NewWidth                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHeight                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMovieWidget_C::MediaDimensionsUpdated(float NewWidth, float NewHeight)
{
	static auto Func = Class->GetFunction("MovieWidget_C", "MediaDimensionsUpdated");

	Params::UMovieWidget_C_MediaDimensionsUpdated_Params Parms;
	Parms.NewWidth = NewWidth;
	Parms.NewHeight = NewHeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieWidget.MovieWidget_C.OnMediaLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMovieWidget_C::OnMediaLoaded()
{
	static auto Func = Class->GetFunction("MovieWidget_C", "OnMediaLoaded");

	Params::UMovieWidget_C_OnMediaLoaded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_NewWidth                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewHeight                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UMovieWidget_C::ExecuteUbergraph_MovieWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_NewWidth, float K2Node_Event_NewHeight, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("MovieWidget_C", "ExecuteUbergraph_MovieWidget");

	Params::UMovieWidget_C_ExecuteUbergraph_MovieWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_NewWidth = K2Node_Event_NewWidth;
	Parms.K2Node_Event_NewHeight = K2Node_Event_NewHeight;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieWidget.MovieWidget_C.OnMediaReadyToPlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMovieWidget_C::OnMediaReadyToPlay__DelegateSignature()
{
	static auto Func = Class->GetFunction("MovieWidget_C", "OnMediaReadyToPlay__DelegateSignature");

	Params::UMovieWidget_C_OnMediaReadyToPlay__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
