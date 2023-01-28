#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
struct UGameLiveStreamingFunctionLibrary_StopWebCam_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
struct UGameLiveStreamingFunctionLibrary_StartWebCam_Params
{
public:
	int32                                        DesiredWebCamWidth;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DesiredWebCamHeight;                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorWebCamImage;                                // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawSimpleWebCamVideo;                            // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params
{
public:
	class FString                                LoginUserName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LoginPassword;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameRate;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScreenScaling;                                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartWebCam;                                      // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DesiredWebCamWidth;                                // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DesiredWebCamHeight;                               // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorWebCamImage;                                // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawSimpleWebCamVideo;                            // 0x35(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCaptureAudioFromComputer;                         // 0x36(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCaptureAudioFromMicrophone;                       // 0x37(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            CoverUpImage;                                      // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
struct UGameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
struct UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params
{
public:
	class FString                                GameName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQueryLiveStreamsCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
