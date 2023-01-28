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

enum class EModifyCurveApplyMode : uint8
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	EModifyCurveApplyMode_MAX      = 3,
};

enum class EPoseDriverType : uint8
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3,
};

enum class ESnapshotSourceMode : uint8
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2,
};

enum class ERefPoseType : uint8
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,
};

enum class ESequenceEvalReinit : uint8
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3,
};

enum class ESphericalLimitType : uint8
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2,
};

enum class EAnimPhysSimSpaceType : uint8
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5,
};

enum class EAnimPhysLinearConstraintType : uint8
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EAnimPhysAngularConstraintType : uint8
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class EDrivenDestinationMode : uint8
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3,
};

enum class EDrivenBoneModificationMode : uint8
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EComponentType : uint8
{
	None                           = 0,
	TranslationX                   = 1,
	TranslationY                   = 2,
	TranslationZ                   = 3,
	RotationX                      = 4,
	RotationY                      = 5,
	RotationZ                      = 6,
	Scale                          = 7,
	ScaleX                         = 8,
	ScaleY                         = 9,
	ScaleZ                         = 10,
	EComponentType_MAX             = 11,
};

enum class ECopyBoneDeltaMode : uint8
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2,
};

enum class EInterpolationBlend : uint8
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7,
	EInterpolationBlend_MAX        = 8,
};

enum class EAxisOption : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	EAxisOption_MAX                = 6,
};

enum class EBoneModificationMode : uint8
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x70 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x4C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C61[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0x120 - 0x58)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
public:
	float                                        X;                                                 // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C62[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartPosition;                                     // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       BlendSpace;                                        // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlendFilter                          BlendFilter;                                       // 0x78(0x90)(Protected, NativeAccessSpecifierProtected)
	TArray<struct FBlendSampleData>              BlendSampleDataCache;                              // 0x108(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UBlendSpaceBase*                       PreviousBlendSpace;                                // 0x118(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x40 (0x160 - 0x120)
// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
public:
	struct FPoseLink                             BasePose;                                          // 0x120(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLODEnabled;                                     // 0x13C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAtLocation;                                    // 0x140(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SourceSocketName;                                  // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C65[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x78 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             Additive;                                          // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x64(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C66[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xC8 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     BlendPose;                                         // 0x30(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BlendTime;                                         // 0x40(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 BlendType;                                         // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CustomBlendCurve;                                  // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                         BlendProfile;                                      // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAlphaBlend>                   Blends;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BlendWeights;                                      // 0x78(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                RemainingBlendTimes;                               // 0x88(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        LastActiveChildIndex;                              // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBlendSampleData>              PerBoneSampleData;                                 // 0xA0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C69[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bResetChildOnActivation;                           // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C6A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
public:
	bool                                         bActiveValue;                                      // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0xE0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
public:
	TArray<int32>                                EnumToPoseIndex;                                   // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        ActiveEnumValue;                                   // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
public:
	int32                                        ActiveChildIndex;                                  // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x128 - 0x120)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
public:
	float                                        NormalizedTime;                                    // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x98 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
public:
	class USkeletalMeshComponent*                SourceMeshComponent;                               // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAttachedParent;                                // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6F[0x5F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x68 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
struct FAnimNode_CurveSource : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SourceBinding;                                     // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C70[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CurveSource;                                       // 0x58(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x80 (0xB0 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseLink>                     BlendPoses;                                        // 0x48(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputBlendPose>               LayerSetup;                                        // 0x58(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BlendWeights;                                      // 0x68(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceRotationBlend;                           // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECurveBlendOption                 CurveBlendOption;                                  // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendRootMotionBasedOnRootBone;                   // 0x7A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasRelevantPoses;                                 // 0x7B(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C71[0x34];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x78 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x30(0x18)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	enum class EModifyCurveApplyMode             ApplyMode;                                         // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CurveValues;                                       // 0x50(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          CurveNames;                                        // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C73[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x70 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     Poses;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DesiredAlphas;                                     // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAdditiveNode;                                     // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeAlpha;                                   // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C74[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x54(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C75[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0xA0 - 0x58)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
public:
	class UPoseAsset*                            PoseAsset;                                         // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C76[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0xC8 - 0xA0)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0xA0(0x18)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CustomCurve;                                       // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xB0 - 0xA0)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
public:
	class FName                                  PoseName;                                          // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoseWeight;                                        // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C78[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x120 - 0xA0)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0xA0(0x18)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        SourceBone;                                        // 0xB8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RadialScaling;                                     // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeRefPoseAsNeutralPose;                      // 0xCC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseDriverType                   Type;                                              // 0xCD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneAxis                         TwistAxis;                                         // 0xCE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C79[0x51];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0xB0 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
public:
	enum class ESnapshotSourceMode               Mode;                                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SnapshotName;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoseSnapshot                         Snapshot;                                          // 0x40(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7B[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
struct FRandomPlayerSequenceEntry
{
public:
	class UAnimSequence*                         Sequence;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToPlay;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLoopCount;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLoopCount;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPlayRate;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPlayRate;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlphaBlend                           BlendIn;                                           // 0x20(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x90 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
public:
	bool                                         bShuffleMode;                                      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRandomPlayerSequenceEntry>    Entries;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7E[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x30 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{
public:
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
struct FAnimNode_RefPose : public FAnimNode_Base
{
public:
	enum class ERefPoseType                      RefPoseType;                                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x48 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_Root
struct FAnimNode_Root : public FAnimNode_Base
{
public:
	struct FPoseLink                             Result;                                            // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x60 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              MeshToComponent;                                   // 0x50(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C80[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x150 - 0x120)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
public:
	struct FPoseLink                             BasePose;                                          // 0x120(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLODEnabled;                                     // 0x13C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x144(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x14C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x70 - 0x58)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
public:
	class UAnimSequenceBase*                     Sequence;                                          // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplicitTime;                                      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldLoopWhenInSyncGroup;                        // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeleportToExplicitTime;                           // 0x65(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C82[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartPosition;                                     // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceEvalReinit               ReinitializationBehavior;                          // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReinitialized;                                    // 0x6D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C83[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x60 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_Slot
struct FAnimNode_Slot : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C84[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x78 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             A;                                                 // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             B;                                                 // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x64(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InternalBlendAlpha;                                // 0x6C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAIsRelevant;                                      // 0x70(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBIsRelevant;                                      // 0x71(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetChildOnActivation;                           // 0x72(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C85[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B0 (0x610 - 0x460)
// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_1C86[0x1B0];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
struct FAnimPhysSphericalLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SphereLocalOffset;                                 // 0x10(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimitRadius;                                       // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESphericalLimitType               LimitType;                                         // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C87[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5C (0x5C - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
struct FAnimPhysConstraintSetup
{
public:
	enum class EAnimPhysLinearConstraintType     LinearXLimitType;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysLinearConstraintType     LinearYLimitType;                                  // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysLinearConstraintType     LinearZLimitType;                                  // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C88[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LinearAxesMin;                                     // 0x4(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearAxesMax;                                     // 0x10(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysAngularConstraintType    AngularConstraintType;                             // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysTwistAxis                TwistAxis;                                         // 0x1D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C89[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConeAngle;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularXAngle;                                     // 0x24(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularYAngle;                                     // 0x28(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularZAngle;                                     // 0x2C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularLimitsMin;                                  // 0x30(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularLimitsMax;                                  // 0x3C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysTwistAxis                AngularTargetAxis;                                 // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AngularTarget;                                     // 0x4C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLinearFullyLocked;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
struct FAnimPhysPlanarLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            PlaneTransform;                                    // 0x10(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1F8 (0x268 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
public:
	enum class EAnimPhysSimSpaceType             SimulationSpace;                                   // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        RelativeSpaceBone;                                 // 0x78(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bChain;                                            // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        BoundBone;                                         // 0x90(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        ChainEnd;                                          // 0xA0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               BoxExtents;                                        // 0xB0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalJointOffset;                                  // 0xBC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLinearSpring;                                     // 0xCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAngularSpring;                                    // 0xCD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LinearSpringConstant;                              // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularSpringConstant;                             // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableWind;                                       // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWindWasEnabled;                                   // 0xD9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindScale;                                         // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideLinearDamping;                            // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LinearDampingOverride;                             // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAngularDamping;                           // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AngularDampingOverride;                            // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAngularBias;                              // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AngularBiasOverride;                               // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoUpdate;                                         // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoEval;                                           // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C93[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumSolverIterationsPreUpdate;                      // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSolverIterationsPostUpdate;                     // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimPhysConstraintSetup              ConstraintSetup;                                   // 0x104(0x5C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUsePlanarLimit;                                   // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnimPhysPlanarLimit>          PlanarLimits;                                      // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseSphericalLimits;                               // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnimPhysSphericalLimit>       SphericalLimits;                                   // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAnimPhysCollisionType            CollisionType;                                     // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SphereCollisionRadius;                             // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExternalForce;                                     // 0x198(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C97[0xC4];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0xD8 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0x70(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EComponentType                    SourceComponent;                                   // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C98[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           DrivingCurve;                                      // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRange;                                         // 0x94(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RangeMin;                                          // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMin;                                       // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMax;                                       // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrivenDestinationMode            DestinationMode;                                   // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ParameterName;                                     // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0xB8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EComponentType                    TargetComponent;                                   // 0xC8(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAffectTargetTranslationX : 1;                     // Mask: 0x1, PropSize: 0x10xCC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationY : 1;                     // Mask: 0x2, PropSize: 0x10xCC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationZ : 1;                     // Mask: 0x4, PropSize: 0x10xCC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationX : 1;                        // Mask: 0x8, PropSize: 0x10xCC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationY : 1;                        // Mask: 0x10, PropSize: 0x10xCC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationZ : 1;                        // Mask: 0x20, PropSize: 0x10xCC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleX : 1;                           // Mask: 0x40, PropSize: 0x10xCC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleY : 1;                           // Mask: 0x80, PropSize: 0x10xCC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleZ : 1;                           // Mask: 0x1, PropSize: 0x10xCD(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F2 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1C9C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDrivenBoneModificationMode       ModificationMode;                                  // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x98 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0x80(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCopyTranslation;                                  // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyRotation;                                     // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyScale;                                        // 0x92(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ControlSpace;                                      // 0x93(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0xA0 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0x80(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCopyTranslation;                                  // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyRotation;                                     // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyScale;                                        // 0x92(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECopyBoneDeltaMode                CopyMode;                                          // 0x93(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslationMultiplier;                             // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationMultiplier;                                // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0xF0 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
public:
	struct FTransform                            EffectorTransform;                                 // 0x70(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorTransformSpace;                            // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        EffectorTransformBone;                             // 0xA8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneRotationSource               EffectorRotationSource;                            // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        TipBone;                                           // 0xC0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RootBone;                                          // 0xD0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDebugDraw;                                  // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0xC8 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        RightHandFK;                                       // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LeftHandFK;                                        // 0x80(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RightHandIK;                                       // 0x90(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LeftHandIK;                                        // 0xA0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                IKBonesToMove;                                     // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        HandFKWeight;                                      // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
struct FAnimLegIKDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             FootBoneForwardAxis;                               // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRotationLimit;                              // 0x25(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinRotationAngle;                                  // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableKneeTwistCorrection;                        // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKData
struct FAnimLegIKData
{
public:
	uint8                                        Pad_1CA5[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x98 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
public:
	float                                        ReachPrecision;                                    // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimLegIKDefinition>          LegsDefinition;                                    // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimLegIKData>                LegsData;                                          // 0x88(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChain
struct FIKChain
{
public:
	uint8                                        Pad_1CA6[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AnimGraphRuntime.IKChainLink
struct FIKChainLink
{
public:
	uint8                                        Pad_1CA7[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0x150 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LookAtBone;                                        // 0x80(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  LookAtSocket;                                      // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LookAtLocation;                                    // 0x98(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxisOption                       LookAtAxis;                                        // 0xA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLookUpAxis;                                    // 0xA5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxisOption                       LookUpAxis;                                        // 0xA6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAtClamp;                                       // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpolationBlend               InterpolationType;                                 // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpolationTime;                                 // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationTriggerThreashold;                    // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDebug;                                      // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAA[0x97];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0xB0 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x80(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x8C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x98(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             TranslationMode;                                   // 0xA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             RotationMode;                                      // 0xA5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             ScaleMode;                                         // 0xA6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0xA7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0xA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0xA8 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToObserve;                                     // 0x70(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 DisplaySpace;                                      // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelativeToRefPose;                                // 0x81(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Translation;                                       // 0x84(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x90(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x9C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x98 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        TargetBone;                                        // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        SourceBone;                                        // 0x80(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneAxis                         RotationAxisToRefer;                               // 0x94(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAdditive;                                       // 0x95(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAD[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
struct FSplineIKCachedBoneData
{
public:
	struct FQuat                                 OffsetFromBoneRotation;                            // 0x0(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Bone;                                              // 0x10(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RefSkeletonIndex;                                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneLength;                                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x1E0 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        StartBone;                                         // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        EndBone;                                           // 0x80(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAxis                             BoneAxis;                                          // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCalculateSpline;                              // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PointCount;                                        // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ControlPoints;                                     // 0x98(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistStart;                                        // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistEnd;                                          // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlphaBlend                           TwistBlend;                                        // 0xB8(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Stretch;                                           // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB1[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSplineCurves                         BoneSpline;                                        // 0x168(0x60)(NativeAccessSpecifierPrivate)
	float                                        OriginalSplineLength;                              // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSplineIKCachedBoneData>       CachedBoneReferences;                              // 0x1D0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x58 (0xC8 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SpringBone;                                        // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLimitDisplacement;                                // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDisplacement;                                   // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringStiffness;                                   // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringDamping;                                     // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorResetThresh;                                  // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoZSpring;                                        // 0x94(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTranslateX;                                       // 0x95(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTranslateY;                                       // 0x96(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTranslateZ;                                       // 0x97(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateX;                                          // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateY;                                          // 0x99(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateZ;                                          // 0x9A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB4[0x2D];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x1A0 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_Trail
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        TrailBone;                                         // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ChainLength;                                       // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             ChainBoneAxis;                                     // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertChainBoneAxis;                              // 0x85(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TrailRelaxation;                                   // 0x88(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    TrailRelaxationSpeed;                              // 0x90(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bLimitStretch;                                     // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchLimit;                                      // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FakeVelocity;                                      // 0x110(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActorSpaceFakeVel;                                // 0x11C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        BaseJoint;                                         // 0x120(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB9[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimGraphRuntime.Axis
struct FAxis
{
public:
	struct FVector                               Axis;                                              // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLocalSpace;                                     // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
struct FReferenceBoneFrame
{
public:
	struct FBoneReference                        Bone;                                              // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                 Axis;                                              // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x78 (0xE8 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
public:
	struct FReferenceBoneFrame                   BaseFrame;                                         // 0x70(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FReferenceBoneFrame                   TwistFrame;                                        // 0x90(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                 TwistPlaneNormalAxis;                              // 0xB0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMin;                                       // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMax;                                       // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimCurveParam                       Curve;                                             // 0xD0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0xC0 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        IKBone;                                            // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               EffectorLocation;                                  // 0x80(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               JointTargetLocation;                               // 0x8C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorSpaceBoneName;                             // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTakeRotationFromEffectorSpace : 1;                // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMaintainEffectorRelRot : 1;                       // Mask: 0x2, PropSize: 0x10xA0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowStretching : 1;                              // Mask: 0x4, PropSize: 0x10xA0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F3 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1CBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             StretchLimits;                                     // 0xA4(0x8)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartStretchRatio;                                 // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxStretchScale;                                   // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 JointTargetLocationSpace;                          // 0xB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  JointTargetSpaceBoneName;                          // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
