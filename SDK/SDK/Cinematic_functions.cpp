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


// Function Cinematic.Cinematic_C.GetAudioTrackIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AudioTrack                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetPreferredLanguages_ReturnValue                       (ZeroConstructor, ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ZeroConstructor, ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCinematicLanuageToTrackStructCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCinematic_C::GetAudioTrackIndex(int32* AudioTrack, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable2, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, TArray<class FString>& CallFunc_GetPreferredLanguages_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, const class FString& CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue, const struct FCinematicLanuageToTrackStruct& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("Cinematic_C", "GetAudioTrackIndex");

	Params::UCinematic_C_GetAudioTrackIndex_Params Parms;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GetPreferredLanguages_ReturnValue = CallFunc_GetPreferredLanguages_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioTrack != nullptr)
		*AudioTrack = Parms.AudioTrack;

}


// Function Cinematic.Cinematic_C.StopAndClearSubtitles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCinematic_C::StopAndClearSubtitles(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("Cinematic_C", "StopAndClearSubtitles");

	Params::UCinematic_C_StopAndClearSubtitles_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewSubtitlesExist                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMediaSubtitlesPlayer*   NewSubtitles                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable2                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCinematic_C::ClearOldSubtitlesIfNecessary(bool NewSubtitlesExist, class UFortMediaSubtitlesPlayer* NewSubtitles, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable2, bool Temp_bool_Variable, const class FString& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("Cinematic_C", "ClearOldSubtitlesIfNecessary");

	Params::UCinematic_C_ClearOldSubtitlesIfNecessary_Params Parms;
	Parms.NewSubtitlesExist = NewSubtitlesExist;
	Parms.NewSubtitles = NewSubtitles;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable2 = Temp_string_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.SetMoviePlaying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoviePlaying                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCinematic_C::SetMoviePlaying(bool MoviePlaying)
{
	static auto Func = Class->GetFunction("Cinematic_C", "SetMoviePlaying");

	Params::UCinematic_C_SetMoviePlaying_Params Parms;
	Parms.MoviePlaying = MoviePlaying;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.ClearMovieWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMovieWidget*            MovieWidgetToClear                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMediaPlayer*                CallFunc_GetMediaPlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCinematic_C::ClearMovieWidget(class UFortMovieWidget*& MovieWidgetToClear, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue2)
{
	static auto Func = Class->GetFunction("Cinematic_C", "ClearMovieWidget");

	Params::UCinematic_C_ClearMovieWidget_Params Parms;
	Parms.MovieWidgetToClear = MovieWidgetToClear;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMediaPlayer_ReturnValue = CallFunc_GetMediaPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.ClearMovieSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                MovieSlotToClear                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCinematic_C::ClearMovieSlot(class UPanelWidget*& MovieSlotToClear)
{
	static auto Func = Class->GetFunction("Cinematic_C", "ClearMovieSlot");

	Params::UCinematic_C_ClearMovieSlot_Params Parms;
	Parms.MovieSlotToClear = MovieSlotToClear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.PopContentWidgetInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState           State                                                            (Parm, NoDestructor)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_PopWigdet_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UCinematic_C::PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWigdet_ReturnValue)
{
	static auto Func = Class->GetFunction("Cinematic_C", "PopContentWidgetInternal");

	Params::UCinematic_C_PopContentWidgetInternal_Params Parms;
	Parms.State = State;
	Parms.CallFunc_PopWigdet_ReturnValue = CallFunc_PopWigdet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Cinematic.Cinematic_C.SkipMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaPlayer*                CallFunc_GetMediaPlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Pause_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCinematic_C::SkipMovie(class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Pause_ReturnValue)
{
	static auto Func = Class->GetFunction("Cinematic_C", "SkipMovie");

	Params::UCinematic_C_SkipMovie_Params Parms;
	Parms.CallFunc_GetMediaPlayer_ReturnValue = CallFunc_GetMediaPlayer_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_Pause_ReturnValue = CallFunc_Pause_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.ClearMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCinematic_C::ClearMovie()
{
	static auto Func = Class->GetFunction("Cinematic_C", "ClearMovie");

	Params::UCinematic_C_ClearMovie_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.ShowMovie
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*                MediaSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaSoundWave*             MediaSoundWave                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNamedSlot*                  MovieSlot                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMovieWidget_C*              MovieWidget                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMovieWidget_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCinematic_C::ShowMovie(class UMediaSource* MediaSource, class UMediaSoundWave* MediaSoundWave, class UNamedSlot*& MovieSlot, class UMovieWidget_C*& MovieWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMovieWidget_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("Cinematic_C", "ShowMovie");

	Params::UCinematic_C_ShowMovie_Params Parms;
	Parms.MediaSource = MediaSource;
	Parms.MediaSoundWave = MediaSoundWave;
	Parms.MovieSlot = MovieSlot;
	Parms.MovieWidget = MovieWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCinematic_C::Construct()
{
	static auto Func = Class->GetFunction("Cinematic_C", "Construct");

	Params::UCinematic_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UCinematic_C::HandleClientEvent_QueueCinematic(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("Cinematic_C", "HandleClientEvent_QueueCinematic");

	Params::UCinematic_C_HandleClientEvent_QueueCinematic_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCinematic_C::Destruct()
{
	static auto Func = Class->GetFunction("Cinematic_C", "Destruct");

	Params::UCinematic_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.HandleEndReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCinematic_C::HandleEndReached()
{
	static auto Func = Class->GetFunction("Cinematic_C", "HandleEndReached");

	Params::UCinematic_C_HandleEndReached_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UCinematic_C::HandleClientEvent_SkipCinematic(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("Cinematic_C", "HandleClientEvent_SkipCinematic");

	Params::UCinematic_C_HandleClientEvent_SkipCinematic_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           State                                                            (Parm, NoDestructor)

void UCinematic_C::PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State)
{
	static auto Func = Class->GetFunction("Cinematic_C", "PushContentWidgetInternal");

	Params::UCinematic_C_PushContentWidgetInternal_Params Parms;
	Parms.Widget = Widget;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCinematic_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static auto Func = Class->GetFunction("Cinematic_C", "OnEnterState");

	Params::UCinematic_C_OnEnterState_Params Parms;
	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.OnExitState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            NextUIState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCinematic_C::OnExitState(enum class EFortUIState NextUIState)
{
	static auto Func = Class->GetFunction("Cinematic_C", "OnExitState");

	Params::UCinematic_C_OnExitState_Params Parms;
	Parms.NextUIState = NextUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.OnMediaEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCinematic_C::OnMediaEvent()
{
	static auto Func = Class->GetFunction("Cinematic_C", "OnMediaEvent");

	Params::UCinematic_C_OnMediaEvent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent2                            (ConstParm, NoDestructor)
// class UFortMediaSubtitlesPlayer*   K2Node_DynamicCast_AsFort_Media_Subtitles_Player                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMediaSource*                K2Node_DynamicCast_AsMedia_Source                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Event_Widget                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           K2Node_Event_State                                               (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIState            K2Node_Event_NextUIState                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMediaPlayer*                CallFunc_GetMediaPlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaPlayer*                CallFunc_GetMediaPlayer_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPreparing_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMediaPlayer*                CallFunc_GetMediaPlayer_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioTrackIndex_AudioTrack                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTrack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCinematic_C::ExecuteUbergraph_Cinematic(int32 EntryPoint, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_HandleClientEvent_EventSource2, class UObject* K2Node_HandleClientEvent_EventFocus2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent2, class UFortMediaSubtitlesPlayer* K2Node_DynamicCast_AsFort_Media_Subtitles_Player, bool K2Node_DynamicCast_bSuccess, class UMediaSource* K2Node_DynamicCast_AsMedia_Source, bool K2Node_DynamicCast_bSuccess2, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EFortUIState K2Node_Event_PreviousUIState, enum class EFortUIState K2Node_Event_NextUIState, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue2, bool CallFunc_IsPreparing_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue3, int32 CallFunc_GetAudioTrackIndex_AudioTrack, bool CallFunc_SelectTrack_ReturnValue)
{
	static auto Func = Class->GetFunction("Cinematic_C", "ExecuteUbergraph_Cinematic");

	Params::UCinematic_C_ExecuteUbergraph_Cinematic_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_HandleClientEvent_EventSource2 = K2Node_HandleClientEvent_EventSource2;
	Parms.K2Node_HandleClientEvent_EventFocus2 = K2Node_HandleClientEvent_EventFocus2;
	Parms.K2Node_HandleClientEvent_ClientEvent2 = K2Node_HandleClientEvent_ClientEvent2;
	Parms.K2Node_DynamicCast_AsFort_Media_Subtitles_Player = K2Node_DynamicCast_AsFort_Media_Subtitles_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMedia_Source = K2Node_DynamicCast_AsMedia_Source;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;
	Parms.K2Node_Event_NextUIState = K2Node_Event_NextUIState;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue2 = CallFunc_GetPlayerController_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMediaPlayer_ReturnValue = CallFunc_GetMediaPlayer_ReturnValue;
	Parms.CallFunc_GetMediaPlayer_ReturnValue2 = CallFunc_GetMediaPlayer_ReturnValue2;
	Parms.CallFunc_IsPreparing_ReturnValue = CallFunc_IsPreparing_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetMediaPlayer_ReturnValue3 = CallFunc_GetMediaPlayer_ReturnValue3;
	Parms.CallFunc_GetAudioTrackIndex_AudioTrack = CallFunc_GetAudioTrackIndex_AudioTrack;
	Parms.CallFunc_SelectTrack_ReturnValue = CallFunc_SelectTrack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
