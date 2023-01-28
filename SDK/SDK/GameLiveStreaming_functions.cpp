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


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UGameLiveStreamingFunctionLibrary::StopWebCam()
{
	static auto Func = Class->GetFunction("GameLiveStreamingFunctionLibrary", "StopWebCam");

	Params::UGameLiveStreamingFunctionLibrary_StopWebCam_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UGameLiveStreamingFunctionLibrary::StopBroadcastingGame()
{
	static auto Func = Class->GetFunction("GameLiveStreamingFunctionLibrary", "StopBroadcastingGame");

	Params::UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              DesiredWebCamWidth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DesiredWebCamHeight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMirrorWebCamImage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDrawSimpleWebCamVideo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameLiveStreamingFunctionLibrary::StartWebCam(int32 DesiredWebCamWidth, int32 DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo)
{
	static auto Func = Class->GetFunction("GameLiveStreamingFunctionLibrary", "StartWebCam");

	Params::UGameLiveStreamingFunctionLibrary_StartWebCam_Params Parms;
	Parms.DesiredWebCamWidth = DesiredWebCamWidth;
	Parms.DesiredWebCamHeight = DesiredWebCamHeight;
	Parms.bMirrorWebCamImage = bMirrorWebCamImage;
	Parms.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      LoginUserName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LoginPassword                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameRate                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ScreenScaling                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStartWebCam                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DesiredWebCamWidth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DesiredWebCamHeight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMirrorWebCamImage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDrawSimpleWebCamVideo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCaptureAudioFromComputer                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCaptureAudioFromMicrophone                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  CoverUpImage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameLiveStreamingFunctionLibrary::StartBroadcastingGame(const class FString& LoginUserName, const class FString& LoginPassword, int32 FrameRate, float ScreenScaling, bool bStartWebCam, int32 DesiredWebCamWidth, int32 DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UTexture2D* CoverUpImage)
{
	static auto Func = Class->GetFunction("GameLiveStreamingFunctionLibrary", "StartBroadcastingGame");

	Params::UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params Parms;
	Parms.LoginUserName = LoginUserName;
	Parms.LoginPassword = LoginPassword;
	Parms.FrameRate = FrameRate;
	Parms.ScreenScaling = ScreenScaling;
	Parms.bStartWebCam = bStartWebCam;
	Parms.DesiredWebCamWidth = DesiredWebCamWidth;
	Parms.DesiredWebCamHeight = DesiredWebCamHeight;
	Parms.bMirrorWebCamImage = bMirrorWebCamImage;
	Parms.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;
	Parms.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
	Parms.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
	Parms.CoverUpImage = CoverUpImage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameLiveStreamingFunctionLibrary::IsWebCamEnabled()
{
	static auto Func = Class->GetFunction("GameLiveStreamingFunctionLibrary", "IsWebCamEnabled");

	Params::UGameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameLiveStreamingFunctionLibrary::IsBroadcastingGame()
{
	static auto Func = Class->GetFunction("GameLiveStreamingFunctionLibrary", "IsBroadcastingGame");

	Params::UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQueryLiveStreamsCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UQueryLiveStreamsCallbackProxy* UQueryLiveStreamsCallbackProxy::QueryLiveStreams(const class FString& GameName)
{
	static auto Func = Class->GetFunction("QueryLiveStreamsCallbackProxy", "QueryLiveStreams");

	Params::UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params Parms;
	Parms.GameName = GameName;

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
