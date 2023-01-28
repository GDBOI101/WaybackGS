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


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettingsSettings                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ULevelSequencePlayer*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings)
{
	static auto Func = Class->GetFunction("LevelSequencePlayer", "CreateLevelSequencePlayer");

	Params::ULevelSequencePlayer_CreateLevelSequencePlayer_Params Parms;
	Parms.WorldContextObject = WorldContextObject;
	Parms.LevelSequence = LevelSequence;
	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              InSequence                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static auto Func = Class->GetFunction("LevelSequenceActor", "SetSequence");

	Params::ALevelSequenceActor_SetSequence_Params Parms;
	Parms.InSequence = InSequence;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingPtr& Binding, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset)
{
	static auto Func = Class->GetFunction("LevelSequenceActor", "SetBinding");

	Params::ALevelSequenceActor_SetBinding_Params Parms;
	Parms.Binding = Binding;
	Parms.Actors = Actors;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceActor::ResetBindings()
{
	static auto Func = Class->GetFunction("LevelSequenceActor", "ResetBindings");

	Params::ALevelSequenceActor_ResetBindings_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingPtr& Binding)
{
	static auto Func = Class->GetFunction("LevelSequenceActor", "ResetBinding");

	Params::ALevelSequenceActor_ResetBinding_Params Parms;
	Parms.Binding = Binding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor)
{
	static auto Func = Class->GetFunction("LevelSequenceActor", "RemoveBinding");

	Params::ALevelSequenceActor_RemoveBinding_Params Parms;
	Parms.Binding = Binding;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               Load                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequence* ALevelSequenceActor::GetSequence(bool Load)
{
	static auto Func = Class->GetFunction("LevelSequenceActor", "GetSequence");

	Params::ALevelSequenceActor_GetSequence_Params Parms;
	Parms.Load = Load;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static auto Func = Class->GetFunction("LevelSequenceActor", "AddBinding");

	Params::ALevelSequenceActor_AddBinding_Params Parms;
	Parms.Binding = Binding;
	Parms.Actor = Actor;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     InSettings                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static auto Func = Class->GetFunction("LevelSequenceBurnIn", "SetSettings");

	Params::ULevelSequenceBurnIn_SetSettings_Params Parms;
	Parms.InSettings = InSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class ULevelSequenceBurnInInitSettings>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULevelSequenceBurnInInitSettings> ULevelSequenceBurnIn::GetSettingsClass()
{
	static auto Func = Class->GetFunction("LevelSequenceBurnIn", "GetSettingsClass");

	Params::ULevelSequenceBurnIn_GetSettingsClass_Params Parms;

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
