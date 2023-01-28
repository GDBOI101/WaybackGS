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


// Function MovieScene.MovieSceneSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Stop()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "Stop");

	Params::UMovieSceneSequencePlayer_Stop_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::StartPlayingNextTick()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "StartPlayingNextTick");

	Params::UMovieSceneSequencePlayer_StartPlayingNextTick_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlayRate");

	Params::UMovieSceneSequencePlayer_SetPlayRate_Params Parms;
	Parms.PlayRate = PlayRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewStartTime                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewEndTime                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlaybackRange");

	Params::UMovieSceneSequencePlayer_SetPlaybackRange_Params Parms;
	Parms.NewStartTime = NewStartTime;
	Parms.NewEndTime = NewEndTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPlaybackPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlaybackPosition");

	Params::UMovieSceneSequencePlayer_SetPlaybackPosition_Params Parms;
	Parms.NewPlaybackPosition = NewPlaybackPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::PlayReverse()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayReverse");

	Params::UMovieSceneSequencePlayer_PlayReverse_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumLoops                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::PlayLooping(int32 NumLoops)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayLooping");

	Params::UMovieSceneSequencePlayer_PlayLooping_Params Parms;
	Parms.NumLoops = NumLoops;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Play()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "Play");

	Params::UMovieSceneSequencePlayer_Play_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Pause()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "Pause");

	Params::UMovieSceneSequencePlayer_Pause_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::IsPlaying()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "IsPlaying");

	Params::UMovieSceneSequencePlayer_IsPlaying_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlayRate()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlayRate");

	Params::UMovieSceneSequencePlayer_GetPlayRate_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlaybackStart()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlaybackStart");

	Params::UMovieSceneSequencePlayer_GetPlaybackStart_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlaybackPosition()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlaybackPosition");

	Params::UMovieSceneSequencePlayer_GetPlaybackPosition_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlaybackEnd()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlaybackEnd");

	Params::UMovieSceneSequencePlayer_GetPlaybackEnd_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetLength()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetLength");

	Params::UMovieSceneSequencePlayer_GetLength_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "ChangePlaybackDirection");

	Params::UMovieSceneSequencePlayer_ChangePlaybackDirection_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
