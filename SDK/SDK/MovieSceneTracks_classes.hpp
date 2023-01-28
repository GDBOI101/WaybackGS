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

// 0x10 (0xE0 - 0xD0)
// Class MovieSceneTracks.MovieScene3DConstraintSection
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                 ConstraintId;                                      // 0xD0(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DConstraintSection");
		return Clss;
	}

};

// 0x20 (0x100 - 0xE0)
// Class MovieSceneTracks.MovieScene3DAttachSection
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	class FName                                  AttachSocketName;                                  // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachComponentName;                               // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainTx : 1;                                  // Mask: 0x1, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainTy : 1;                                  // Mask: 0x2, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainTz : 1;                                  // Mask: 0x4, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainRx : 1;                                  // Mask: 0x8, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainRy : 1;                                  // Mask: 0x10, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainRz : 1;                                  // Mask: 0x20, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D13[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DAttachSection");
		return Clss;
	}

};

// 0x80 (0x160 - 0xE0)
// Class MovieSceneTracks.MovieScene3DPathSection
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FRichCurve                            TimingCurve;                                       // 0xE0(0x70)(Edit, NativeAccessSpecifierPrivate)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0x151(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D14[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x154(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x154(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10x154(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D15[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DPathSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieScene3DConstraintTrack
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            ConstraintSections;                                // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D16[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DConstraintTrack");
		return Clss;
	}

};

// 0x0 (0xD0 - 0xD0)
// Class MovieSceneTracks.MovieScene3DAttachTrack
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DAttachTrack");
		return Clss;
	}

};

// 0x0 (0xD0 - 0xD0)
// Class MovieSceneTracks.MovieScene3DPathTrack
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DPathTrack");
		return Clss;
	}

};

// 0x400 (0x4D0 - 0xD0)
// Class MovieSceneTracks.MovieScene3DTransformSection
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1D17[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Translation;                                       // 0xD8(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D18[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Rotation;                                          // 0x228(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D19[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Scale;                                             // 0x378(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D1A[0xE8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DTransformSection");
		return Clss;
	}

};

// 0xA0 (0x170 - 0xD0)
// Class MovieSceneTracks.MovieSceneActorReferenceSection
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1D1B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntegralCurve                        ActorGuidIndexCurve;                               // 0xD8(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D1C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ActorGuidStrings;                                  // 0x158(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D1D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneActorReferenceSection");
		return Clss;
	}

};

// 0x100 (0x1D0 - 0xD0)
// Class MovieSceneTracks.MovieSceneAudioSection
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                            Sound;                                             // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioStartTime;                                    // 0xDC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioDilationFactor;                               // 0xE0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioVolume;                                       // 0xE4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRichCurve                            SoundVolume;                                       // 0xE8(0x70)(Edit, NativeAccessSpecifierPrivate)
	struct FRichCurve                            PitchMultiplier;                                   // 0x158(0x70)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bSuppressSubtitles;                                // 0x1C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D1E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAudioSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneAudioTrack
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            AudioSections;                                     // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D1F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAudioTrack");
		return Clss;
	}

};

// 0x80 (0x150 - 0xD0)
// Class MovieSceneTracks.MovieSceneBoolSection
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1D20[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DefaultValue;                                      // 0xD8(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D21[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntegralCurve                        BoolCurve;                                         // 0xE0(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBoolSection");
		return Clss;
	}

};

// 0x0 (0x150 - 0x150)
// Class MovieSceneTracks.MovieSceneSpawnSection
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSpawnSection");
		return Clss;
	}

};

// 0x80 (0x150 - 0xD0)
// Class MovieSceneTracks.MovieSceneByteSection
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1D22[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntegralCurve                        ByteCurve;                                         // 0xD8(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D23[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneByteSection");
		return Clss;
	}

};

// 0x40 (0x110 - 0xD0)
// Class MovieSceneTracks.MovieSceneCameraAnimSection
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData      AnimData;                                          // 0xD0(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCameraAnim*                           CameraAnim;                                        // 0xF0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0xF8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayScale;                                         // 0xFC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendInTime;                                       // 0x100(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendOutTime;                                      // 0x104(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLooping;                                          // 0x108(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D24[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraAnimSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneCameraAnimTrack
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            CameraAnimSections;                                // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D25[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraAnimTrack");
		return Clss;
	}

};

// 0x10 (0xE0 - 0xD0)
// Class MovieSceneTracks.MovieSceneCameraCutSection
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	struct FGuid                                 CameraGuid;                                        // 0xD0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraCutSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneCameraCutTrack
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D26[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraCutTrack");
		return Clss;
	}

};

// 0x40 (0x110 - 0xD0)
// Class MovieSceneTracks.MovieSceneCameraShakeSection
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData     ShakeData;                                         // 0xD0(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              ShakeClass;                                        // 0xF0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0xF8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraAnimPlaySpace              PlaySpace;                                         // 0xFC(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D27[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserDefinedPlaySpace;                              // 0x100(0xC)(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D28[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneCameraShakeTrack
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            CameraShakeSections;                               // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D29[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeTrack");
		return Clss;
	}

};

// 0x1D0 (0x2A0 - 0xD0)
// Class MovieSceneTracks.MovieSceneColorSection
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1D2A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            RedCurve;                                          // 0xD8(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            GreenCurve;                                        // 0x148(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            BlueCurve;                                         // 0x1B8(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            AlphaCurve;                                        // 0x228(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D2B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneColorSection");
		return Clss;
	}

};

// 0x80 (0x150 - 0xD0)
// Class MovieSceneTracks.MovieSceneEnumSection
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1D2C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntegralCurve                        EnumCurve;                                         // 0xD8(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D2D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEnumSection");
		return Clss;
	}

};

// 0x110 (0x1E0 - 0xD0)
// Class MovieSceneTracks.MovieSceneEventSection
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                            Events;                                            // 0xD0(0x68)(Deprecated, NativeAccessSpecifierPrivate)
	struct FMovieSceneEventSectionData           EventData;                                         // 0x138(0x20)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D2E[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventSection");
		return Clss;
	}

};

// 0x28 (0xE0 - 0xB8)
// Class MovieSceneTracks.MovieSceneSpawnTrack
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 ObjectGuid;                                        // 0xC8(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D2F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSpawnTrack");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneEventTrack
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F4 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1D30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xC0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventTrack");
		return Clss;
	}

};

// 0x78 (0x148 - 0xD0)
// Class MovieSceneTracks.MovieSceneFloatSection
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1D31[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            FloatCurve;                                        // 0xD8(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatSection");
		return Clss;
	}

};

// 0x18 (0x160 - 0x148)
// Class MovieSceneTracks.MovieSceneFadeSection
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	struct FLinearColor                          FadeColor;                                         // 0x148(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFadeAudio : 1;                                    // Mask: 0x1, PropSize: 0x10x158(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D32[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFadeSection");
		return Clss;
	}

};

// 0x8 (0x150 - 0x148)
// Class MovieSceneTracks.MovieSceneSlomoSection
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:
	uint8                                        Pad_1D33[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSlomoSection");
		return Clss;
	}

};

// 0x80 (0x150 - 0xD0)
// Class MovieSceneTracks.MovieSceneIntegerSection
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1D34[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntegralCurve                        IntegerCurve;                                      // 0xD8(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D35[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneIntegerSection");
		return Clss;
	}

};

// 0x20 (0xF0 - 0xD0)
// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	enum class ELevelVisibility                  Visibility;                                        // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LevelNames;                                        // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D37[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLevelVisibilitySection");
		return Clss;
	}

};

// 0x28 (0xE0 - 0xB8)
// Class MovieSceneTracks.MovieScenePropertyTrack
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	class FName                                  PropertyName;                                      // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                PropertyPath;                                      // 0xC0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xD0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePropertyTrack");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D38[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLevelVisibilityTrack");
		return Clss;
	}

};

// 0x30 (0x100 - 0xD0)
// Class MovieSceneTracks.MovieSceneParameterSection
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FScalarParameterNameAndCurve>  ScalarParameterNamesAndCurves;                     // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;                     // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColorParameterNameAndCurves>  ColorParameterNamesAndCurves;                      // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParameterSection");
		return Clss;
	}

};

// 0x10 (0xC8 - 0xB8)
// Class MovieSceneTracks.MovieSceneMaterialTrack
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMaterialTrack");
		return Clss;
	}

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	int32                                        MaterialIndex;                                     // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D39[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneComponentMaterialTrack");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneParticleParameterTrack
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D3A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleParameterTrack");
		return Clss;
	}

};

// 0x70 (0x140 - 0xD0)
// Class MovieSceneTracks.MovieSceneParticleSection
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                        ParticleKeys;                                      // 0xD0(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneParticleTrack
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            ParticleSections;                                  // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D3B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieScene3DTransformTrack
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DTransformTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneActorReferenceTrack
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneActorReferenceTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneBoolTrack
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBoolTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneVisibilityTrack
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneVisibilityTrack");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneByteTrack
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                 Enum;                                              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D3C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneByteTrack");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneColorTrack
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                         bIsSlateColor;                                     // 0xE0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D3D[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneColorTrack");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneEnumTrack
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                 Enum;                                              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D3E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEnumTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneFloatTrack
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneFadeTrack
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFadeTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneSlomoTrack
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSlomoTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneIntegerTrack
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneIntegerTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneStringTrack
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneStringTrack");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneVectorTrack
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int32                                        NumChannelsUsed;                                   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D3F[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneVectorTrack");
		return Clss;
	}

};

// 0xC0 (0x190 - 0xD0)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams    Params;                                            // 0xD0(0x90)(Edit, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AnimSequence;                                      // 0x160(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                     Animation;                                         // 0x168(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0x170(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EndOffset;                                         // 0x174(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0x178(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x17C(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1F5 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1D40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SlotName;                                          // 0x180(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D41[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D42[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationTrack");
		return Clss;
	}

};

// 0x80 (0x150 - 0xD0)
// Class MovieSceneTracks.MovieSceneStringSection
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1D43[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStringCurve                          StringCurve;                                       // 0xD8(0x78)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneStringSection");
		return Clss;
	}

};

// 0x68 (0x138 - 0xD0)
// Class MovieSceneTracks.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters          Parameters;                                        // 0xD0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0xE0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeScale;                                         // 0xE4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PrerollTime;                                       // 0xE8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   SubSequence;                                       // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TLazyObjectPtr<class AActor>                 ActorToRecord;                                     // 0xF8(0x1C)(Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TargetSequenceName;                                // 0x118(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirectoryPath                        TargetPathToRecordTo;                              // 0x128(0x10)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSubSection");
		return Clss;
	}

};

// 0x18 (0x150 - 0x138)
// Class MovieSceneTracks.MovieSceneCinematicShotSection
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	class FText                                  DisplayName;                                       // 0x138(0x18)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCinematicShotSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D46[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSubTrack");
		return Clss;
	}

};

// 0x0 (0xD0 - 0xD0)
// Class MovieSceneTracks.MovieSceneCinematicShotTrack
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCinematicShotTrack");
		return Clss;
	}

};

// 0x1D0 (0x2A0 - 0xD0)
// Class MovieSceneTracks.MovieSceneVectorSection
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1D47[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Curves;                                            // 0xD8(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D48[0x150];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChannelsUsed;                                      // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D49[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneVectorSection");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
