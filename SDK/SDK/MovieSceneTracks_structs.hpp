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

enum class EMovieScene3DPathSection_Axis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6,
};

enum class EShow3DTrajectory : uint8
{
	EST_OnlyWhenSelected           = 0,
	EST_Always                     = 1,
	EST_Never                      = 2,
	EST_MAX                        = 3,
};

enum class ELevelVisibility : uint8
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2,
};

enum class EParticleKey : uint8
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x78 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x14(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x20(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4A[0x4C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Scale;                                             // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4B[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FRotator                              Rotation;                                          // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4C[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4D[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
struct FMovieSceneCameraAnimSectionData
{
public:
	class UCameraAnim*                           CameraAnim;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
struct FMovieSceneCameraShakeSectionData
{
public:
	TSubclassOf<class UCameraShake>              ShakeClass;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraAnimPlaySpace              PlaySpace;                                         // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserDefinedPlaySpace;                              // 0x10(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D50[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D51[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
struct FMovieSceneEventParameters
{
public:
	uint8                                        Pad_1D52[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.EventPayload
struct FEventPayload
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneEventParameters            Parameters;                                        // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
struct FMovieSceneEventSectionData
{
public:
	TArray<float>                                KeyTimes;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEventPayload>                 KeyValues;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
struct FColorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            RedCurve;                                          // 0x10(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            GreenCurve;                                        // 0x80(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            BlueCurve;                                         // 0xF0(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            AlphaCurve;                                        // 0x160(0x70)(NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
struct FVectorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            XCurve;                                            // 0x10(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0x80(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            ZCurve;                                            // 0xF0(0x70)(NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
struct FScalarParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            ParameterCurve;                                    // 0x10(0x70)(NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
struct FMovieSceneSkeletalAnimationParams
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndOffset;                                         // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x14(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F6 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1D56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SlotName;                                          // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                            Weight;                                            // 0x20(0x70)(Edit, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	uint8                                        Pad_1D57[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x60 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
public:
	uint8                                        Pad_1D58[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Vector;                                            // 0x50(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x58 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
public:
	struct FVector                               Vector;                                            // 0x48(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D59[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x50 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
public:
	struct FVector2D                             Vector;                                            // 0x48(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x48 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	TArray<struct FScalarParameterNameAndCurve>  Scalars;                                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVectorParameterNameAndCurves> Vectors;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColorParameterNameAndCurves>  Colors;                                            // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x8 (0x50 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
	int32                                        MaterialIndex;                                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D5A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x88 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FIntegralCurve                        Curve;                                             // 0x18(0x70)(NativeAccessSpecifierPrivate)
};

// 0x20 (0x38 - 0x18)
// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FGuid                                 AttachGuid;                                        // 0x18(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocketName;                                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachComponentName;                               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FGuid                                 PathGuid;                                          // 0x18(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                            TimingCurve;                                       // 0x28(0x70)(NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x9C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x9C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10x9C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3F0 (0x408 - 0x18)
// ScriptStruct MovieSceneTracks.MovieScene3DTransformSectionTemplate
struct FMovieScene3DTransformSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FRichCurve                            TranslationCurve;                                  // 0x18(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5D[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            RotationCurve;                                     // 0x168(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5E[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            ScaleCurve;                                        // 0x2B8(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5F[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xB8 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x18(0x20)(NativeAccessSpecifierPrivate)
	struct FIntegralCurve                        ActorGuidIndexCurve;                               // 0x38(0x70)(NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         ActorGuids;                                        // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
struct FMovieSceneAudioSectionTemplateData
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AudioStartOffset;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           AudioRange;                                        // 0xC(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D60[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            AudioPitchMultiplierCurve;                         // 0x20(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            AudioVolumeCurve;                                  // 0x90(0x70)(NativeAccessSpecifierPublic)
	int32                                        RowIndex;                                          // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D61[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x120 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneAudioSectionTemplateData   AudioData;                                         // 0x18(0x108)(NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTrackTemplate
struct FMovieSceneAdditiveCameraAnimationTrackTemplate : public FMovieSceneEvalTemplate
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{
public:
};

// 0x28 (0x40 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
public:
	struct FMovieSceneCameraShakeSectionData     SourceData;                                        // 0x18(0x20)(NoDestructor, NativeAccessSpecifierPrivate)
	float                                        SectionStartTime;                                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D62[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x40 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
public:
	struct FMovieSceneCameraAnimSectionData      SourceData;                                        // 0x18(0x20)(NoDestructor, NativeAccessSpecifierPrivate)
	float                                        SectionStartTime;                                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D63[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FGuid                                 CameraGuid;                                        // 0x18(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x1F0 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
struct FMovieSceneColorSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	class FName                                  PropertyName;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PropertyPath;                                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                            Curves;                                            // 0x30(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1D64[0x150];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x40 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneEventSectionData           EventData;                                         // 0x18(0x20)(NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D65[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FRichCurve                            FadeCurve;                                         // 0x18(0x70)(NativeAccessSpecifierPrivate)
	struct FLinearColor                          FadeColor;                                         // 0x88(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bFadeAudio : 1;                                    // Mask: 0x1, PropSize: 0x10x98(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D66[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySharedTrack
struct FMovieSceneLevelVisibilitySharedTrack : public FMovieSceneEvalTemplate
{
public:
};

// 0x18 (0x30 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	enum class ELevelVisibility                  Visibility;                                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LevelNames;                                        // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x0 (0x48 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
};

// 0x70 (0x88 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FIntegralCurve                        ParticleKeys;                                      // 0x18(0x70)(NativeAccessSpecifierPublic)
};

// 0x1E8 (0x200 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
struct FMovieSceneVectorPropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x18(0x20)(Protected, NativeAccessSpecifierProtected)
	struct FRichCurve                            ComponentCurves;                                   // 0x38(0x70)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D68[0x150];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumChannelsUsed;                                   // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D69[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xB0 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
struct FMovieSceneStringPropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x18(0x20)(Protected, NativeAccessSpecifierProtected)
	struct FStringCurve                          StringCurve;                                       // 0x38(0x78)(Protected, NativeAccessSpecifierProtected)
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x18(0x20)(Protected, NativeAccessSpecifierProtected)
	struct FIntegralCurve                        IntegerCurve;                                      // 0x38(0x70)(Protected, NativeAccessSpecifierProtected)
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
struct FMovieSceneEnumPropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x18(0x20)(Protected, NativeAccessSpecifierProtected)
	struct FIntegralCurve                        EnumCurve;                                         // 0x38(0x70)(Protected, NativeAccessSpecifierProtected)
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
struct FMovieSceneBytePropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x18(0x20)(Protected, NativeAccessSpecifierProtected)
	struct FIntegralCurve                        ByteCurve;                                         // 0x38(0x70)(Protected, NativeAccessSpecifierProtected)
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
struct FMovieSceneFloatPropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x18(0x20)(Protected, NativeAccessSpecifierProtected)
	struct FRichCurve                            FloatCurve;                                        // 0x38(0x70)(Protected, NativeAccessSpecifierProtected)
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
struct FMovieSceneBoolPropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x18(0x20)(Protected, NativeAccessSpecifierProtected)
	struct FIntegralCurve                        BoolCurve;                                         // 0x38(0x70)(Protected, NativeAccessSpecifierProtected)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSharedTrack
struct FMovieSceneSkeletalAnimationSharedTrack : public FMovieSceneEvalTemplate
{
public:
};

// 0x8 (0x98 - 0x90)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
public:
	float                                        SectionStartTime;                                  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SectionEndTime;                                    // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xB0 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                            // 0x18(0x98)(NativeAccessSpecifierPublic)
};

// 0x70 (0x88 - 0x18)
// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FRichCurve                            SlomoCurve;                                        // 0x18(0x70)(NativeAccessSpecifierPrivate)
};

// 0x8 (0xB0 - 0xA8)
// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
public:
	bool                                         bTemporarilyHiddenInGame;                          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
