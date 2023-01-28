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

enum class ECameraFocusMethod : uint8
{
	None                           = 0,
	Manual                         = 1,
	Tracking                       = 2,
	ECameraFocusMethod_MAX         = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
struct FCameraLookatTrackingSettings
{
public:
	uint8                                        bEnableLookAtTracking : 1;                         // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawDebugLookAtTrackingPosition : 1;              // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1E8 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1AA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAtTrackingInterpSpeed;                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA2[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ActorToTrack;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeOffset;                                    // 0x20(0xC)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
struct FCameraTrackingFocusSettings
{
public:
	class AActor*                                ActorToTrack;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeOffset;                                    // 0x8(0xC)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawDebugTrackingFocusPoint : 1;                  // Mask: 0x1, PropSize: 0x10x14(0x1)(Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CinematicCamera.CameraFocusSettings
struct FCameraFocusSettings
{
public:
	enum class ECameraFocusMethod                FocusMethod;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ManualFocusDistance;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraTrackingFocusSettings          TrackingFocusSettings;                             // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bSmoothFocusChanges : 1;                           // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1E9 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1AA6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FocusSmoothingInterpSpeed;                         // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FocusOffset;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct CinematicCamera.CameraLensSettings
struct FCameraLensSettings
{
public:
	float                                        MinFocalLength;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFocalLength;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFStop;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFStop;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumFocusDistance;                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CinematicCamera.NamedLensPreset
struct FNamedLensPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                   LensSettings;                                      // 0x10(0x14)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct CinematicCamera.CameraFilmbackSettings
struct FCameraFilmbackSettings
{
public:
	float                                        SensorWidth;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SensorHeight;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SensorAspectRatio;                                 // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CinematicCamera.NamedFilmbackPreset
struct FNamedFilmbackPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0x10(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
