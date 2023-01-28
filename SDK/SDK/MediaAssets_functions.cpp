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


// Function MediaAssets.MediaOverlays.GetTexts
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMediaPlayerOverlay> OutTexts                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FTimespan                   Time                                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaOverlays::GetTexts(TArray<struct FMediaPlayerOverlay>* OutTexts, const struct FTimespan& Time)
{
	static auto Func = Class->GetFunction("MediaOverlays", "GetTexts");

	Params::UMediaOverlays_GetTexts_Params Parms;
	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutTexts != nullptr)
		*OutTexts = Parms.OutTexts;

}


// Function MediaAssets.MediaOverlays.GetSubtitles
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMediaPlayerOverlay> OutSubtitles                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FTimespan                   Time                                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaOverlays::GetSubtitles(TArray<struct FMediaPlayerOverlay>* OutSubtitles, const struct FTimespan& Time)
{
	static auto Func = Class->GetFunction("MediaOverlays", "GetSubtitles");

	Params::UMediaOverlays_GetSubtitles_Params Parms;
	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutSubtitles != nullptr)
		*OutSubtitles = Parms.OutSubtitles;

}


// Function MediaAssets.MediaOverlays.GetCaptions
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMediaPlayerOverlay> OutCaptions                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FTimespan                   Time                                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaOverlays::GetCaptions(TArray<struct FMediaPlayerOverlay>* OutCaptions, const struct FTimespan& Time)
{
	static auto Func = Class->GetFunction("MediaOverlays", "GetCaptions");

	Params::UMediaOverlays_GetCaptions_Params Parms;
	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (OutCaptions != nullptr)
		*OutCaptions = Parms.OutCaptions;

}


// Function MediaAssets.MediaPlayer.SupportsSeeking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::SupportsSeeking()
{
	static auto Func = Class->GetFunction("MediaPlayer", "SupportsSeeking");

	Params::UMediaPlayer_SupportsSeeking_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.SupportsScrubbing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::SupportsScrubbing()
{
	static auto Func = Class->GetFunction("MediaPlayer", "SupportsScrubbing");

	Params::UMediaPlayer_SupportsScrubbing_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.SupportsRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Unthinned                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
	static auto Func = Class->GetFunction("MediaPlayer", "SupportsRate");

	Params::UMediaPlayer_SupportsRate_Params Parms;
	Parms.Rate = Rate;
	Parms.Unthinned = Unthinned;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.SetVideoTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaTexture*               NewTexture                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaPlayer::SetVideoTexture(class UMediaTexture* NewTexture)
{
	static auto Func = Class->GetFunction("MediaPlayer", "SetVideoTexture");

	Params::UMediaPlayer_SetVideoTexture_Params Parms;
	Parms.NewTexture = NewTexture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MediaAssets.MediaPlayer.SetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSoundWave*             NewSoundWave                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaPlayer::SetSoundWave(class UMediaSoundWave* NewSoundWave)
{
	static auto Func = Class->GetFunction("MediaPlayer", "SetSoundWave");

	Params::UMediaPlayer_SetSoundWave_Params Parms;
	Parms.NewSoundWave = NewSoundWave;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MediaAssets.MediaPlayer.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::SetRate(float Rate)
{
	static auto Func = Class->GetFunction("MediaPlayer", "SetRate");

	Params::UMediaPlayer_SetRate_Params Parms;
	Parms.Rate = Rate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.SetOverlays
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaOverlays*              NewOverlays                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaPlayer::SetOverlays(class UMediaOverlays* NewOverlays)
{
	static auto Func = Class->GetFunction("MediaPlayer", "SetOverlays");

	Params::UMediaPlayer_SetOverlays_Params Parms;
	Parms.NewOverlays = NewOverlays;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MediaAssets.MediaPlayer.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Looping                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::SetLooping(bool Looping)
{
	static auto Func = Class->GetFunction("MediaPlayer", "SetLooping");

	Params::UMediaPlayer_SetLooping_Params Parms;
	Parms.Looping = Looping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PlayerName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaPlayer::SetDesiredPlayerName(class FName PlayerName)
{
	static auto Func = Class->GetFunction("MediaPlayer", "SetDesiredPlayerName");

	Params::UMediaPlayer_SetDesiredPlayerName_Params Parms;
	Parms.PlayerName = PlayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MediaAssets.MediaPlayer.SelectTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TrackIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::SelectTrack(enum class EMediaPlayerTrack TrackType, int32 TrackIndex)
{
	static auto Func = Class->GetFunction("MediaPlayer", "SelectTrack");

	Params::UMediaPlayer_SelectTrack_Params Parms;
	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.Seek
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   Time                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::Seek(struct FTimespan& Time)
{
	static auto Func = Class->GetFunction("MediaPlayer", "Seek");

	Params::UMediaPlayer_Seek_Params Parms;
	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.Rewind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::Rewind()
{
	static auto Func = Class->GetFunction("MediaPlayer", "Rewind");

	Params::UMediaPlayer_Rewind_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.Reopen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::Reopen()
{
	static auto Func = Class->GetFunction("MediaPlayer", "Reopen");

	Params::UMediaPlayer_Reopen_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::Previous()
{
	static auto Func = Class->GetFunction("MediaPlayer", "Previous");

	Params::UMediaPlayer_Previous_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::Play()
{
	static auto Func = Class->GetFunction("MediaPlayer", "Play");

	Params::UMediaPlayer_Play_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::Pause()
{
	static auto Func = Class->GetFunction("MediaPlayer", "Pause");

	Params::UMediaPlayer_Pause_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.OpenUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::OpenUrl(const class FString& URL)
{
	static auto Func = Class->GetFunction("MediaPlayer", "OpenUrl");

	Params::UMediaPlayer_OpenUrl_Params Parms;
	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.OpenSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                MediaSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
{
	static auto Func = Class->GetFunction("MediaPlayer", "OpenSource");

	Params::UMediaPlayer_OpenSource_Params Parms;
	Parms.MediaSource = MediaSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlaylist*              InPlaylist                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index)
{
	static auto Func = Class->GetFunction("MediaPlayer", "OpenPlaylistIndex");

	Params::UMediaPlayer_OpenPlaylistIndex_Params Parms;
	Parms.InPlaylist = InPlaylist;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.OpenPlaylist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlaylist*              InPlaylist                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
{
	static auto Func = Class->GetFunction("MediaPlayer", "OpenPlaylist");

	Params::UMediaPlayer_OpenPlaylist_Params Parms;
	Parms.InPlaylist = InPlaylist;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.OpenFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::OpenFile(const class FString& FilePath)
{
	static auto Func = Class->GetFunction("MediaPlayer", "OpenFile");

	Params::UMediaPlayer_OpenFile_Params Parms;
	Parms.FilePath = FilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::Next()
{
	static auto Func = Class->GetFunction("MediaPlayer", "Next");

	Params::UMediaPlayer_Next_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::IsReady()
{
	static auto Func = Class->GetFunction("MediaPlayer", "IsReady");

	Params::UMediaPlayer_IsReady_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.IsPreparing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::IsPreparing()
{
	static auto Func = Class->GetFunction("MediaPlayer", "IsPreparing");

	Params::UMediaPlayer_IsPreparing_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::IsPlaying()
{
	static auto Func = Class->GetFunction("MediaPlayer", "IsPlaying");

	Params::UMediaPlayer_IsPlaying_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::IsPaused()
{
	static auto Func = Class->GetFunction("MediaPlayer", "IsPaused");

	Params::UMediaPlayer_IsPaused_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::IsLooping()
{
	static auto Func = Class->GetFunction("MediaPlayer", "IsLooping");

	Params::UMediaPlayer_IsLooping_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMediaPlayer::GetUrl()
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetUrl");

	Params::UMediaPlayer_GetUrl_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetTrackLanguage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TrackIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMediaPlayer::GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32 TrackIndex)
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetTrackLanguage");

	Params::UMediaPlayer_GetTrackLanguage_Params Parms;
	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetTrackDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TrackIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMediaPlayer::GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32 TrackIndex)
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetTrackDisplayName");

	Params::UMediaPlayer_GetTrackDisplayName_Params Parms;
	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimespan UMediaPlayer::GetTime()
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetTime");

	Params::UMediaPlayer_GetTime_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetSelectedTrack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMediaPlayer::GetSelectedTrack(enum class EMediaPlayerTrack TrackType)
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetSelectedTrack");

	Params::UMediaPlayer_GetSelectedTrack_Params Parms;
	Parms.TrackType = TrackType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetReverseRates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Unthinned                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFloatRange                 ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFloatRange UMediaPlayer::GetReverseRates(bool Unthinned)
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetReverseRates");

	Params::UMediaPlayer_GetReverseRates_Params Parms;
	Parms.Unthinned = Unthinned;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMediaPlayer::GetRate()
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetRate");

	Params::UMediaPlayer_GetRate_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UMediaPlayer::GetPlayerName()
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetPlayerName");

	Params::UMediaPlayer_GetPlayerName_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetNumTracks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaPlayerTrack       TrackType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMediaPlayer::GetNumTracks(enum class EMediaPlayerTrack TrackType)
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetNumTracks");

	Params::UMediaPlayer_GetNumTracks_Params Parms;
	Parms.TrackType = TrackType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetForwardRates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Unthinned                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFloatRange                 ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFloatRange UMediaPlayer::GetForwardRates(bool Unthinned)
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetForwardRates");

	Params::UMediaPlayer_GetForwardRates_Params Parms;
	Parms.Unthinned = Unthinned;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimespan UMediaPlayer::GetDuration()
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetDuration");

	Params::UMediaPlayer_GetDuration_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UMediaPlayer::GetDesiredPlayerName()
{
	static auto Func = Class->GetFunction("MediaPlayer", "GetDesiredPlayerName");

	Params::UMediaPlayer_GetDesiredPlayerName_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMediaPlayer::Close()
{
	static auto Func = Class->GetFunction("MediaPlayer", "Close");

	Params::UMediaPlayer_Close_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MediaAssets.MediaPlayer.CanPlayUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::CanPlayUrl(const class FString& URL)
{
	static auto Func = Class->GetFunction("MediaPlayer", "CanPlayUrl");

	Params::UMediaPlayer_CanPlayUrl_Params Parms;
	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.CanPlaySource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                MediaSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
{
	static auto Func = Class->GetFunction("MediaPlayer", "CanPlaySource");

	Params::UMediaPlayer_CanPlaySource_Params Parms;
	Parms.MediaSource = MediaSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlayer.CanPause
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaPlayer::CanPause()
{
	static auto Func = Class->GetFunction("MediaPlayer", "CanPause");

	Params::UMediaPlayer_CanPause_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlaylist.RemoveAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaPlaylist::RemoveAt(int32 Index)
{
	static auto Func = Class->GetFunction("MediaPlaylist", "RemoveAt");

	Params::UMediaPlaylist_RemoveAt_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MediaAssets.MediaPlaylist.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                MediaSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaPlaylist::Remove(class UMediaSource* MediaSource)
{
	static auto Func = Class->GetFunction("MediaPlaylist", "Remove");

	Params::UMediaPlaylist_Remove_Params Parms;
	Parms.MediaSource = MediaSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MediaAssets.MediaPlaylist.Num
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMediaPlaylist::Num()
{
	static auto Func = Class->GetFunction("MediaPlaylist", "Num");

	Params::UMediaPlaylist_Num_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlaylist.Insert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                MediaSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int32 Index)
{
	static auto Func = Class->GetFunction("MediaPlaylist", "Insert");

	Params::UMediaPlaylist_Insert_Params Parms;
	Parms.MediaSource = MediaSource;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MediaAssets.MediaPlaylist.GetRandom
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              InOutIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaSource* UMediaPlaylist::GetRandom(int32* InOutIndex)
{
	static auto Func = Class->GetFunction("MediaPlaylist", "GetRandom");

	Params::UMediaPlaylist_GetRandom_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (InOutIndex != nullptr)
		*InOutIndex = Parms.InOutIndex;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlaylist.GetPrevious
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              InOutIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaSource* UMediaPlaylist::GetPrevious(int32* InOutIndex)
{
	static auto Func = Class->GetFunction("MediaPlaylist", "GetPrevious");

	Params::UMediaPlaylist_GetPrevious_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (InOutIndex != nullptr)
		*InOutIndex = Parms.InOutIndex;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlaylist.GetNext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              InOutIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaSource* UMediaPlaylist::GetNext(int32* InOutIndex)
{
	static auto Func = Class->GetFunction("MediaPlaylist", "GetNext");

	Params::UMediaPlaylist_GetNext_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	if (InOutIndex != nullptr)
		*InOutIndex = Parms.InOutIndex;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlaylist.Get
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaSource* UMediaPlaylist::Get(int32 Index)
{
	static auto Func = Class->GetFunction("MediaPlaylist", "Get");

	Params::UMediaPlaylist_Get_Params Parms;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaPlaylist.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*                MediaSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaPlaylist::Add(class UMediaSource* MediaSource)
{
	static auto Func = Class->GetFunction("MediaPlaylist", "Add");

	Params::UMediaPlaylist_Add_Params Parms;
	Parms.MediaSource = MediaSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MediaAssets.FileMediaSource.SetFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFileMediaSource::SetFilePath(const class FString& Path)
{
	static auto Func = Class->GetFunction("FileMediaSource", "SetFilePath");

	Params::UFileMediaSource_SetFilePath_Params Parms;
	Parms.Path = Path;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MediaAssets.MediaTexture.GetWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMediaTexture::GetWidth()
{
	static auto Func = Class->GetFunction("MediaTexture", "GetWidth");

	Params::UMediaTexture_GetWidth_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaTexture.GetHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMediaTexture::GetHeight()
{
	static auto Func = Class->GetFunction("MediaTexture", "GetHeight");

	Params::UMediaTexture_GetHeight_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaAssets.MediaTexture.GetAspectRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMediaTexture::GetAspectRatio()
{
	static auto Func = Class->GetFunction("MediaTexture", "GetAspectRatio");

	Params::UMediaTexture_GetAspectRatio_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
