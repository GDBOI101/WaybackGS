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

enum class ESpawnOwnership : uint8
{
	InnerSequence                  = 0,
	MasterSequence                 = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3,
};

enum class EMovieSceneKeyInterpolation : uint8
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	Linear                         = 3,
	Constant                       = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
};

enum class EMovieSceneCompletionMode : uint8
{
	KeepState                      = 0,
	RestoreState                   = 1,
	EMovieSceneCompletionMode_MAX  = 2,
};

enum class ESectionEvaluationFlags : uint8
{
	None                           = 0,
	PreRoll                        = 1,
	PostRoll                       = 2,
	ESectionEvaluationFlags_MAX    = 3,
};

enum class EEvaluationMethod : uint8
{
	Static                         = 0,
	Swept                          = 1,
	EEvaluationMethod_MAX          = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct MovieScene.MovieSceneSpawnable
struct FMovieSceneSpawnable
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Name;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                               ObjectTemplate;                                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         ChildPossessables;                                 // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ESpawnOwnership                   Ownership;                                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DD4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneBinding
struct FMovieSceneBinding
{
public:
	struct FGuid                                 ObjectGuid;                                        // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                BindingName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              Tracks;                                            // 0x20(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieScenePossessable
struct FMovieScenePossessable
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Name;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                PossessedObjectClass;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 ParentGuid;                                        // 0x28(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackLabels
struct FMovieSceneTrackLabels
{
public:
	TArray<class FString>                        Strings;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneExpansionState
struct FMovieSceneExpansionState
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MovieScene.MovieSceneEditorData
struct FMovieSceneEditorData
{
public:
	TMap<class FString, struct FMovieSceneExpansionState> ExpansionStates;                                   // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFloatRange                           WorkingRange;                                      // 0x50(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           ViewRange;                                         // 0x60(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectBindingPtr
struct FMovieSceneObjectBindingPtr
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MovieScene.MovieSceneBindingOverrideData
struct FMovieSceneBindingOverrideData
{
public:
	struct FMovieSceneObjectBindingPtr           ObjectBindingId;                                   // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                Object;                                            // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridesDefault;                                 // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
struct FMovieSceneSequencePlaybackSettings
{
public:
	int32                                        LoopCount;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomStartTime;                                  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTime;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestoreState;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          BindingOverrides;                                  // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
struct FMovieSceneSectionEvalOptions
{
public:
	bool                                         bCanEditCompletionMode;                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
struct FMovieSceneTrackEvalOptions
{
public:
	uint8                                        bCanEvaluateNearestSection : 1;                    // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateNearestSection : 1;                       // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackCompilationParams
struct FMovieSceneTrackCompilationParams
{
public:
	bool                                         bForEditorPreview;                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackIdentifier
struct FMovieSceneTrackIdentifier
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceID
struct FMovieSceneSequenceID
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
struct FMovieSceneEvaluationGroupLUTIndex
{
public:
	bool                                         bRequiresImmediateFlush;                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LUTOffset;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumInitPtrs;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumEvalPtrs;                                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
struct FMovieSceneEvaluationFieldTrackPtr
{
public:
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTrackIdentifier            TrackIdentifier;                                   // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0xC - 0x8)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
public:
	int32                                        SegmentIndex;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroup
struct FMovieSceneEvaluationGroup
{
public:
	TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
struct FMovieSceneEvaluationMetaData
{
public:
	TArray<struct FMovieSceneSequenceID>         ActiveSequences;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationField
struct FMovieSceneEvaluationField
{
public:
	TArray<struct FFloatRange>                   Ranges;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneEvaluationGroup>    Groups;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneEvaluationMetaData> MetaData;                                          // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.MovieSceneSegment
struct FMovieSceneSegment
{
public:
	uint8                                        Pad_1DDA[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.SectionEvaluationData
struct FSectionEvaluationData
{
public:
	int32                                        ImplIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForcedTime;                                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DDB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
struct FMovieSceneEvalTemplateBase
{
public:
	uint8                                        Pad_1DDC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneEmptyStruct
struct FMovieSceneEmptyStruct
{
public:
	uint8                                        Pad_1DDD[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
struct FMovieSceneEvalTemplatePtr
{
public:
	uint8                                        Pad_1DDE[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x18 - 0x10)
// ScriptStruct MovieScene.MovieSceneEvalTemplate
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
public:
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DDF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
struct FMovieSceneTrackImplementationPtr
{
public:
	uint8                                        Pad_1DE0[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct MovieScene.MovieSceneTrackImplementation
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{
public:
};

// 0x80 (0x80 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTrack
struct FMovieSceneEvaluationTrack
{
public:
	struct FGuid                                 ObjectBindingId;                                   // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       EvaluationPriority;                                // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEvaluationMethod                 EvaluationMethod;                                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DE1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneSegment>            Segments;                                          // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvalTemplatePtr>    ChildTemplates;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneTrackImplementationPtr     TrackTemplate;                                     // 0x38(0x38)(NativeAccessSpecifierPrivate)
	class FName                                  EvaluationGroup;                                   // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x1, PropSize: 0x10x78(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x2, PropSize: 0x10x78(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DE2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceTransform
struct FMovieSceneSequenceTransform
{
public:
	float                                        TimeScale;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionParameters
struct FMovieSceneSectionParameters
{
public:
	float                                        StartOffset;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeScale;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrerollTime;                                       // 0x8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostrollTime;                                      // 0xC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceData
struct FMovieSceneSubSequenceData
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceTransform          RootToSequenceTransform;                           // 0x8(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGuid                                 SourceSequenceSignature;                           // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                 DeterministicSequenceID;                           // 0x20(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
struct FMovieSceneSequenceHierarchyNode
{
public:
	struct FMovieSceneSequenceID                 ParentID;                                          // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneSequenceID>         Children;                                          // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
struct FMovieSceneSequenceHierarchy
{
public:
	TMap<uint32, struct FMovieSceneSubSequenceData> SubSequences;                                      // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<uint32, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                         // 0x50(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct MovieScene.MovieSceneGenerationLedger
struct FMovieSceneGenerationLedger
{
public:
	struct FMovieSceneTrackIdentifier            LastTrackIdentifier;                               // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE5[0xA4];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x220 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
struct FMovieSceneEvaluationTemplate
{
public:
	TMap<uint32, struct FMovieSceneEvaluationTrack> Tracks;                                            // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DE6[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEvaluationField            EvaluationField;                                   // 0xA0(0x30)(NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceHierarchy          Hierarchy;                                         // 0xD0(0xA0)(NativeAccessSpecifierPublic)
	struct FMovieSceneGenerationLedger           Ledger;                                            // 0x170(0xA8)(NativeAccessSpecifierPrivate)
	uint8                                        bHasLegacyTrackInstances : 1;                      // Mask: 0x1, PropSize: 0x10x218(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bKeepStaleTracks : 1;                              // Mask: 0x2, PropSize: 0x10x218(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x220 - 0x220)
// ScriptStruct MovieScene.CachedMovieSceneEvaluationTemplate
struct FCachedMovieSceneEvaluationTemplate : public FMovieSceneEvaluationTemplate
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceCachedSignature
struct FMovieSceneSequenceCachedSignature
{
public:
	TWeakObjectPtr<class UMovieSceneSequence>    Sequence;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CachedSignature;                                   // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct MovieScene.MovieSceneLegacyTrackInstanceTemplate
struct FMovieSceneLegacyTrackInstanceTemplate : public FMovieSceneEvalTemplate
{
public:
	class UMovieSceneTrack*                      Track;                                             // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieScenePropertySectionData
struct FMovieScenePropertySectionData
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                PropertyPath;                                      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  FunctionName;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneKeyStruct
struct FMovieSceneKeyStruct
{
public:
	uint8                                        Pad_1DE8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
