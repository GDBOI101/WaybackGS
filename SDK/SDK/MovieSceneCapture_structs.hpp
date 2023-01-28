#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHDRCaptureGamut : uint8
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_MAX                       = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneCapture.CaptureResolution
struct FCaptureResolution
{
public:
	uint32                                       ResX;                                              // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ResY;                                              // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
struct FMovieSceneCaptureSettings
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x0(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                         bCreateTemporaryCopiesOfLevels;                    // 0x10(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGameModeBase>             GameModeOverride;                                  // 0x18(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputFormat;                                      // 0x20(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverwriteExisting;                                // 0x30(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRelativeFrameNumbers;                          // 0x31(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F98[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HandleFrames;                                      // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ZeroPadFrameNumbers;                               // 0x38(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FrameRate;                                         // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCaptureResolution                    Resolution;                                        // 0x40(0x8)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableTextureStreaming;                           // 0x48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCinematicEngineScalability;                       // 0x49(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCinematicMode;                                    // 0x4A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMovement;                                    // 0x4B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowTurning;                                     // 0x4C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPlayer;                                       // 0x4D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowHUD;                                          // 0x4E(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9A[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneCapture.CaptureProtocolID
struct FCaptureProtocolID
{
public:
	class FName                                  Identifier;                                        // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
struct FCompositionGraphCapturePasses
{
public:
	TArray<class FString>                        Value;                                             // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
