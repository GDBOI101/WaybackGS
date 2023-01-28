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

enum class ETextGender : uint8
{
	Masculine                      = 0,
	Feminine                       = 1,
	Neuter                         = 2,
	ETextGender_MAX                = 3,
};

enum class EFormatArgumentType : uint8
{
	Int                            = 0,
	UInt                           = 1,
	Float                          = 2,
	Double                         = 3,
	Text                           = 4,
	Gender                         = 5,
	EFormatArgumentType_MAX        = 6,
};

enum class EEndPlayReason : uint8
{
	Destroyed                      = 0,
	LevelTransition                = 1,
	EndPlayInEditor                = 2,
	RemovedFromWorld               = 3,
	Quit                           = 4,
	EEndPlayReason_MAX             = 5,
};

enum class ENavPathEvent : uint8
{
	Cleared                        = 0,
	NewPath                        = 1,
	UpdatedDueToGoalMoved          = 2,
	UpdatedDueToNavigationChanged  = 3,
	Invalidated                    = 4,
	RePathFailed                   = 5,
	MetaPathUpdate                 = 6,
	Custom                         = 7,
	ENavPathEvent_MAX              = 8,
};

enum class ETickingGroup : uint8
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8,
};

enum class EComponentCreationMethod : uint8
{
	Native                         = 0,
	SimpleConstructionScript       = 1,
	UserConstructionScript         = 2,
	Instance                       = 3,
	EComponentCreationMethod_MAX   = 4,
};

enum class EPlaneConstraintAxisSetting : uint8
{
	Custom                         = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	UseGlobalPhysicsSetting        = 4,
	EPlaneConstraintAxisSetting_MAX = 5,
};

enum class EInterpToBehaviourType : uint8
{
	OneShot                        = 0,
	OneShot_Reverse                = 1,
	Loop_Reset                     = 2,
	PingPong                       = 3,
	EInterpToBehaviourType_MAX     = 4,
};

enum class EPlatformInterfaceDataType : uint8
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6,
};

enum class EMovementMode : uint8
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7,
};

enum class ENetworkFailure : uint8
{
	NetDriverAlreadyExists         = 0,
	NetDriverCreateFailure         = 1,
	NetDriverListenFailure         = 2,
	ConnectionLost                 = 3,
	ConnectionTimeout              = 4,
	FailureReceived                = 5,
	OutdatedClient                 = 6,
	OutdatedServer                 = 7,
	PendingConnectionFailure       = 8,
	NetGuidMismatch                = 9,
	NetChecksumMismatch            = 10,
	ENetworkFailure_MAX            = 11,
};

enum class ETravelFailure : uint8
{
	NoLevel                        = 0,
	LoadMapFailure                 = 1,
	InvalidURL                     = 2,
	PackageMissing                 = 3,
	PackageVersion                 = 4,
	NoDownload                     = 5,
	TravelFailure                  = 6,
	CheatCommands                  = 7,
	PendingNetGameCreateFailure    = 8,
	CloudSaveFailure               = 9,
	ServerTravelFailure            = 10,
	ClientTravelFailure            = 11,
	ETravelFailure_MAX             = 12,
};

enum class EScreenOrientation : uint8
{
	Unknown                        = 0,
	Portrait                       = 1,
	PortraitUpsideDown             = 2,
	LandscapeLeft                  = 3,
	LandscapeRight                 = 4,
	FaceUp                         = 5,
	FaceDown                       = 6,
	EScreenOrientation_MAX         = 7,
};

enum class EObjectTypeQuery : uint8
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33,
};

enum class EDrawDebugTrace : uint8
{
	None                           = 0,
	ForOneFrame                    = 1,
	ForDuration                    = 2,
	Persistent                     = 3,
	EDrawDebugTrace_MAX            = 4,
};

enum class ETraceTypeQuery : uint8
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33,
};

enum class EMoveComponentAction : uint8
{
	Move                           = 0,
	Stop                           = 1,
	Return                         = 2,
	EMoveComponentAction_MAX       = 3,
};

enum class EQuitPreference : uint8
{
	Quit                           = 0,
	Background                     = 1,
	EQuitPreference_MAX            = 2,
};

enum class ENetRole : uint8
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4,
};

enum class EAttachLocation : uint8
{
	KeepRelativeOffset             = 0,
	KeepWorldPosition              = 1,
	SnapToTarget                   = 2,
	SnapToTargetIncludingScale     = 3,
	EAttachLocation_MAX            = 4,
};

enum class EAttachmentRule : uint8
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	SnapToTarget                   = 2,
	EAttachmentRule_MAX            = 3,
};

enum class EDetachmentRule : uint8
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	EDetachmentRule_MAX            = 2,
};

enum class ENetDormancy : uint8
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORN_MAX                       = 5,
	ENetDormancy_MAX               = 6,
};

enum class ESpawnActorCollisionHandlingMethod : uint8
{
	Undefined                      = 0,
	AlwaysSpawn                    = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding           = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum class EInputConsumeOptions : uint8
{
	ICO_ConsumeAll                 = 0,
	ICO_ConsumeBoundKeys           = 1,
	ICO_ConsumeNone                = 2,
	ICO_MAX                        = 3,
};

enum class EAutoReceiveInput : uint8
{
	Disabled                       = 0,
	Player0                        = 1,
	Player1                        = 2,
	Player2                        = 3,
	Player3                        = 4,
	Player4                        = 5,
	Player5                        = 6,
	Player6                        = 7,
	Player7                        = 8,
	EAutoReceiveInput_MAX          = 9,
};

enum class ERotatorQuantization : uint8
{
	ByteComponents                 = 0,
	ShortComponents                = 1,
	ERotatorQuantization_MAX       = 2,
};

enum class EVectorQuantization : uint8
{
	RoundWholeNumber               = 0,
	RoundOneDecimal                = 1,
	RoundTwoDecimals               = 2,
	EVectorQuantization_MAX        = 3,
};

enum class EMeshBufferAccess : uint8
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2,
};

enum class EConstraintFrame : uint8
{
	Frame1                         = 0,
	Frame2                         = 1,
	EConstraintFrame_MAX           = 2,
};

enum class EAngularConstraintMotion : uint8
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3,
};

enum class EComponentSocketType : uint8
{
	Invalid                        = 0,
	Bone                           = 1,
	Socket                         = 2,
	EComponentSocketType_MAX       = 3,
};

enum class EComponentMobility : uint8
{
	Static                         = 0,
	Stationary                     = 1,
	Movable                        = 2,
	EComponentMobility_MAX         = 3,
};

enum class EPhysicalSurface : uint8
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64,
};

enum class EWalkableSlopeBehavior : uint8
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4,
};

enum class EAutoPossessAI : uint8
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4,
};

enum class EUpdateRateShiftBucket : uint8
{
	ShiftBucket0                   = 0,
	ShiftBucket1                   = 1,
	ShiftBucket2                   = 2,
	ShiftBucket3                   = 3,
	ShiftBucket4                   = 4,
	ShiftBucket5                   = 5,
	ShiftBucketMax                 = 6,
	EUpdateRateShiftBucket_MAX     = 7,
};

enum class EShadowMapFlags : uint8
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2,
};

enum class ELightMapPaddingType : uint8
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3,
};

enum class ECollisionEnabled : uint8
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	PhysicsOnly                    = 2,
	QueryAndPhysics                = 3,
	ECollisionEnabled_MAX          = 4,
};

enum class ETimelineSigType : uint8
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5,
};

enum class ESleepFamily : uint8
{
	Normal                         = 0,
	Sensitive                      = 1,
	Custom                         = 2,
	ESleepFamily_MAX               = 3,
};

enum class ERadialImpulseFalloff : uint8
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2,
};

enum class EFilterInterpolationType : uint8
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3,
};

enum class ECollisionResponse : uint8
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3,
};

enum class EPhysicsSceneType : uint8
{
	PST_Sync                       = 0,
	PST_Cloth                      = 1,
	PST_Async                      = 2,
	PST_MAX                        = 3,
};

enum class EOverlapFilterOption : uint8
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3,
};

enum class ECollisionChannel : uint8
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33,
};

enum class ENetworkSmoothingMode : uint8
{
	Disabled                       = 0,
	Linear                         = 1,
	Exponential                    = 2,
	Replay                         = 3,
	ENetworkSmoothingMode_MAX      = 4,
};

enum class ETriangleSortAxis : uint8
{
	TSA_X_Axis                     = 0,
	TSA_Y_Axis                     = 1,
	TSA_Z_Axis                     = 2,
	TSA_MAX                        = 3,
};

enum class ETriangleSortOption : uint8
{
	TRISORT_None                   = 0,
	TRISORT_CenterRadialDistance   = 1,
	TRISORT_Random                 = 2,
	TRISORT_MergeContiguous        = 3,
	TRISORT_Custom                 = 4,
	TRISORT_CustomLeftRight        = 5,
	TRISORT_MAX                    = 6,
};

enum class ELightingBuildQuality : uint8
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4,
};

enum class EMaterialSamplerType : uint8
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_MAX                = 8,
};

enum class EMaterialTessellationMode : uint8
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3,
};

enum class EMaterialShadingModel : uint8
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_MAX                        = 10,
};

enum class EParticleCollisionMode : uint8
{
	SceneDepth                     = 0,
	DistanceField                  = 1,
	EParticleCollisionMode_MAX     = 2,
};

enum class ETrailWidthMode : uint8
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3,
};

enum class EGBufferFormat : uint8
{
	Force8BitsPerChannel           = 0,
	Default                        = 1,
	HighPrecisionNormals           = 3,
	Force16BitsPerChannel          = 5,
	EGBufferFormat_MAX             = 6,
};

enum class ESceneCaptureCompositeMode : uint8
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_MAX                       = 3,
};

enum class ESceneCaptureSource : uint8
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_Normal                     = 5,
	SCS_BaseColor                  = 6,
	SCS_MAX                        = 7,
};

enum class ETranslucentSortPolicy : uint8
{
	SortByDistance                 = 0,
	SortByProjectedZ               = 1,
	SortAlongAxis                  = 2,
	ETranslucentSortPolicy_MAX     = 3,
};

enum class ERefractionMode : uint8
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_MAX                         = 2,
};

enum class ETranslucencyLightingMode : uint8
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6,
};

enum class ESamplerSourceMode : uint8
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3,
};

enum class EBlendMode : uint8
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_MAX                      = 6,
};

enum class EOcclusionCombineMode : uint8
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2,
};

enum class EIndirectLightingCacheQuality : uint8
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3,
};

enum class ESceneDepthPriorityGroup : uint8
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2,
};

enum class EActorMetricsType : uint8
{
	METRICS_VERTS                  = 0,
	METRICS_TRIS                   = 1,
	METRICS_SECTIONS               = 2,
	METRICS_MAX                    = 3,
};

enum class EAspectRatioAxisConstraint : uint8
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3,
};

enum class EViewModeIndex : uint8
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 8,
	VMI_LightmapDensity            = 9,
	VMI_LitLightmapDensity         = 10,
	VMI_ReflectionOverride         = 11,
	VMI_VisualizeBuffer            = 12,
	VMI_StationaryLightOverlap     = 14,
	VMI_CollisionPawn              = 15,
	VMI_CollisionVisibility        = 16,
	VMI_LODColoration              = 18,
	VMI_QuadOverdraw               = 19,
	VMI_PrimitiveDistanceAccuracy  = 20,
	VMI_MeshUVDensityAccuracy      = 21,
	VMI_ShaderComplexityWithQuadOverdraw = 22,
	VMI_HLODColoration             = 23,
	VMI_GroupLODColoration         = 24,
	VMI_MaterialTextureScaleAccuracy = 25,
	VMI_RequiredTextureResolution  = 26,
	VMI_Max                        = 27,
	VMI_Unknown                    = 255,
};

enum class EDemoPlayFailure : uint8
{
	Generic                        = 0,
	DemoNotFound                   = 1,
	Corrupt                        = 2,
	InvalidVersion                 = 3,
	EDemoPlayFailure_MAX           = 4,
};

enum class ETravelType : uint8
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3,
};

enum class ENetworkLagState : uint8
{
	NotLagging                     = 0,
	Lagging                        = 1,
	ENetworkLagState_MAX           = 2,
};

enum class EMouseLockMode : uint8
{
	DoNotLock                      = 0,
	LockOnCapture                  = 1,
	LockAlways                     = 2,
	EMouseLockMode_MAX             = 3,
};

enum class EMouseCaptureMode : uint8
{
	NoCapture                      = 0,
	CapturePermanently             = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown         = 3,
	CaptureDuringRightMouseDown    = 4,
	EMouseCaptureMode_MAX          = 5,
};

enum class EInputEvent : uint8
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5,
};

enum class ENodeEnabledState : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	DevelopmentOnly                = 2,
	ENodeEnabledState_MAX          = 3,
};

enum class ENodeAdvancedPins : uint8
{
	NoPins                         = 0,
	Shown                          = 1,
	Hidden                         = 2,
	ENodeAdvancedPins_MAX          = 3,
};

enum class ENodeTitleType : uint8
{
	FullTitle                      = 0,
	ListView                       = 1,
	EditableTitle                  = 2,
	MenuTitle                      = 3,
	MAX_TitleTypes                 = 4,
	ENodeTitleType_MAX             = 5,
};

enum class EEdGraphPinDirection : uint8
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2,
};

enum class EBlueprintPinStyleType : uint8
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2,
};

enum class ERelativeTransformSpace : uint8
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_MAX                        = 4,
};

enum class EDetailMode : uint8
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3,
};

enum class EMaterialMergeType : uint8
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2,
};

enum class ETextureSizingType : uint8
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4,
};

enum class EBrushType : uint8
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3,
};

enum class ECsgOper : uint8
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6,
};

enum class EReverbPreset : uint8
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23,
};

enum class EStreamingVolumeUsage : uint8
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5,
};

enum class ENavigationQueryResult : uint8
{
	Invalid                        = 0,
	Error                          = 1,
	Fail                           = 2,
	Success                        = 3,
	ENavigationQueryResult_MAX     = 4,
};

enum class ENavDataGatheringModeConfig : uint8
{
	Invalid                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringModeConfig_MAX = 3,
};

enum class ENavDataGatheringMode : uint8
{
	Default                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringMode_MAX      = 3,
};

enum class ENavigationOptionFlag : uint8
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3,
	ENavigationOptionFlag_MAX      = 4,
};

enum class EBlendableLocation : uint8
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_MAX                         = 4,
};

enum class EAutoExposureMethod : uint8
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2,
};

enum class EAntiAliasingMethod : uint8
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_MAX                        = 4,
};

enum class EDepthOfFieldMethod : uint8
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3,
};

enum class ECameraAnimPlaySpace : uint8
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraAnimPlaySpace_MAX       = 3,
};

enum class ECameraProjectionMode : uint8
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ECameraProjectionMode_MAX      = 2,
};

enum class EInitialOscillatorOffset : uint8
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2,
};

enum class EViewTargetBlendFunction : uint8
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5,
};

enum class EControllerAnalogStick : uint8
{
	CAS_LeftStick                  = 0,
	CAS_RightStick                 = 1,
	CAS_MAX                        = 2,
};

enum class ERichCurveExtrapolation : uint8
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6,
};

enum class ERichCurveTangentWeightMode : uint8
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4,
};

enum class ERichCurveTangentMode : uint8
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4,
};

enum class ERichCurveInterpMode : uint8
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4,
};

enum class EDynamicForceFeedbackAction : uint8
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3,
};

enum class EStandbyType : uint8
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3,
};

enum class EMeshMergeType : uint8
{
	MeshMergeType_Default          = 0,
	MeshMergeType_MergeActor       = 1,
	MeshMergeType_MAX              = 2,
};

enum class EMeshLODSelectionType : uint8
{
	AllLODs                        = 0,
	SpecificLOD                    = 1,
	CalculateLOD                   = 2,
	EMeshLODSelectionType_MAX      = 3,
};

enum class ELandscapeCullingPrecision : uint8
{
	High                           = 0,
	Medium                         = 1,
	Low                            = 2,
	ELandscapeCullingPrecision_MAX = 3,
};

enum class EMeshFeatureImportance : uint8
{
	Off                            = 0,
	Lowest                         = 1,
	Low                            = 2,
	Normal                         = 3,
	High                           = 4,
	Highest                        = 5,
	EMeshFeatureImportance_MAX     = 6,
};

enum class EVisibilityAggressiveness : uint8
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3,
};

enum class EDOFMode : uint8
{
	Default                        = 0,
	SixDOF                         = 1,
	YZPlane                        = 2,
	XZPlane                        = 3,
	XYPlane                        = 4,
	CustomPlane                    = 5,
	None                           = 6,
	EDOFMode_MAX                   = 7,
};

enum class EHasCustomNavigableGeometry : uint8
{
	No                             = 0,
	Yes                            = 1,
	EvenIfNotCollidable            = 2,
	DontExport                     = 3,
	EHasCustomNavigableGeometry_MAX = 4,
};

enum class ECanBeCharacterBase : uint8
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3,
};

enum class ERuntimeGenerationType : uint8
{
	Static                         = 0,
	DynamicModifiersOnly           = 1,
	Dynamic                        = 2,
	LegacyGeneration               = 3,
	ERuntimeGenerationType_MAX     = 4,
};

enum class ERecastPartitioning : uint8
{
	Monotone                       = 0,
	Watershed                      = 1,
	ChunkyMonotone                 = 2,
	ERecastPartitioning_MAX        = 3,
};

enum class ENavCostDisplay : uint8
{
	TotalCost                      = 0,
	HeuristicOnly                  = 1,
	RealCostOnly                   = 2,
	ENavCostDisplay_MAX            = 3,
};

enum class ENavLinkDirection : uint8
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3,
};

enum class EParticleSystemOcclusionBoundsMethod : uint8
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3,
};

enum class EParticleSystemLODMethod : uint8
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3,
};

enum class EParticleSystemUpdateMode : uint8
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2,
};

enum class EParticleEventType : uint8
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6,
};

enum class EParticleReplayState : uint8
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3,
};

enum class EParticleSysParamType : uint8
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_MAX                       = 8,
};

enum class EAnimLinkMethod : uint8
{
	Absolute                       = 0,
	Relative                       = 1,
	Proportional                   = 2,
	EAnimLinkMethod_MAX            = 3,
};

enum class EAnimInterpolationType : uint8
{
	Linear                         = 0,
	Step                           = 1,
	EAnimInterpolationType_MAX     = 2,
};

enum class ECurveBlendOption : uint8
{
	MaxWeight                      = 0,
	NormalizeByWeight              = 1,
	BlendByWeight                  = 2,
	ECurveBlendOption_MAX          = 3,
};

enum class EAdditiveAnimationType : uint8
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3,
};

enum class ENotifyFilterType : uint8
{
	NoFiltering                    = 0,
	LOD                            = 1,
	ENotifyFilterType_MAX          = 2,
};

enum class EMontageNotifyTickType : uint8
{
	Queued                         = 0,
	BranchingPoint                 = 1,
	EMontageNotifyTickType_MAX     = 2,
};

enum class EBoneRotationSource : uint8
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3,
};

enum class EBoneControlSpace : uint8
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4,
};

enum class EBoneAxis : uint8
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3,
};

enum class ESkeletalMeshOptimizationType : uint8
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_MAX                       = 2,
};

enum class ESkeletalMeshOptimizationImportance : uint8
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6,
};

enum class EAnimGroupRole : uint8
{
	CanBeLeader                    = 0,
	AlwaysFollower                 = 1,
	AlwaysLeader                   = 2,
	TransitionLeader               = 3,
	TransitionFollower             = 4,
	EAnimGroupRole_MAX             = 5,
};

enum class ERootMotionMode : uint8
{
	NoRootMotionExtraction         = 0,
	IgnoreRootMotion               = 1,
	RootMotionFromEverything       = 2,
	RootMotionFromMontagesOnly     = 3,
	ERootMotionMode_MAX            = 4,
};

enum class ERootMotionRootLock : uint8
{
	RefPose                        = 0,
	AnimFirstFrame                 = 1,
	Zero                           = 2,
	ERootMotionRootLock_MAX        = 3,
};

enum class ERootMotionFinishVelocityMode : uint8
{
	MaintainLastRootMotionVelocity = 0,
	SetVelocity                    = 1,
	ClampVelocity                  = 2,
	ERootMotionFinishVelocityMode_MAX = 3,
};

enum class ERootMotionSourceSettingsFlags : uint8
{
	UseSensitiveLiftoffCheck       = 1,
	DisablePartialEndTick          = 2,
	ERootMotionSourceSettingsFlags_MAX = 3,
};

enum class ERootMotionSourceStatusFlags : uint8
{
	Prepared                       = 1,
	Finished                       = 2,
	MarkedForRemoval               = 4,
	ERootMotionSourceStatusFlags_MAX = 5,
};

enum class ERootMotionAccumulateMode : uint8
{
	Override                       = 0,
	Additive                       = 1,
	ERootMotionAccumulateMode_MAX  = 2,
};

enum class EBoneTranslationRetargetingMode : uint8
{
	Animation                      = 0,
	Skeleton                       = 1,
	AnimationScaled                = 2,
	AnimationRelative              = 3,
	EBoneTranslationRetargetingMode_MAX = 4,
};

enum class EAlphaBlendOption : uint8
{
	Linear                         = 0,
	Cubic                          = 1,
	HermiteCubic                   = 2,
	Sinusoidal                     = 3,
	QuadraticInOut                 = 4,
	CubicInOut                     = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	Custom                         = 14,
	EAlphaBlendOption_MAX          = 15,
};

enum class ETypeAdvanceAnim : uint8
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3,
};

enum class EAnimNotifyEventType : uint8
{
	Begin                          = 0,
	End                            = 1,
	EAnimNotifyEventType_MAX       = 2,
};

enum class ELinearConstraintMotion : uint8
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3,
};

enum class EAngularDriveMode : uint8
{
	SLERP                          = 0,
	TwistAndSwing                  = 1,
	EAngularDriveMode_MAX          = 2,
};

enum class EAttenuationShape : uint8
{
	Sphere                         = 0,
	Capsule                        = 1,
	Box                            = 2,
	Cone                           = 3,
	EAttenuationShape_MAX          = 4,
};

enum class EAttenuationDistanceModel : uint8
{
	Linear                         = 0,
	Logarithmic                    = 1,
	Inverse                        = 2,
	LogReverse                     = 3,
	NaturalSound                   = 4,
	Custom                         = 5,
	EAttenuationDistanceModel_MAX  = 6,
};

enum class ESoundSpatializationAlgorithm : uint8
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2,
};

enum class ESoundDistanceCalc : uint8
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4,
};

enum class ESkyLightSourceType : uint8
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2,
};

enum class EBoneSpaces : uint8
{
	WorldSpace                     = 0,
	ComponentSpace                 = 1,
	EBoneSpaces_MAX                = 2,
};

enum class EMeshComponentUpdateFlag : uint8
{
	AlwaysTickPoseAndRefreshBones  = 0,
	AlwaysTickPose                 = 1,
	OnlyTickPoseWhenRendered       = 2,
	EMeshComponentUpdateFlag_MAX   = 3,
};

enum class EPhysBodyOp : uint8
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_Disable                    = 2,
	PBO_MAX                        = 3,
};

enum class EBoneVisibilityStatus : uint8
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3,
};

enum class EPhysicsTransformUpdateMode : uint8
{
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic  = 1,
	EPhysicsTransformUpdateMode_MAX = 2,
};

enum class EAnimationMode : uint8
{
	AnimationBlueprint             = 0,
	AnimationSingleNode            = 1,
	AnimationCustomMode            = 2,
	EAnimationMode_MAX             = 3,
};

enum class EKinematicBonesUpdateToPhysics : uint8
{
	SkipSimulatingBones            = 0,
	SkipAllBones                   = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2,
};

enum class ESplineMeshAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineMeshAxis_MAX            = 3,
};

enum class ESplineCoordinateSpace : uint8
{
	Local                          = 0,
	World                          = 1,
	ESplineCoordinateSpace_MAX     = 2,
};

enum class ESplinePointType : uint8
{
	Linear                         = 0,
	Curve                          = 1,
	Constant                       = 2,
	CurveClamped                   = 3,
	CurveCustomTangent             = 4,
	ESplinePointType_MAX           = 5,
};

enum class EVerticalTextAligment : uint8
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4,
};

enum class EHorizTextAligment : uint8
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3,
};

enum class EReflectionSourceType : uint8
{
	CapturedScene                  = 0,
	SpecifiedCubemap               = 1,
	EReflectionSourceType_MAX      = 2,
};

enum class EStereoLayerShape : uint8
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_MAX                       = 3,
};

enum class EStereoLayerType : uint8
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3,
};

enum class EWindSourceType : uint8
{
	Directional                    = 0,
	Point                          = 1,
	EWindSourceType_MAX            = 2,
};

enum class ETimelineDirection : uint8
{
	Forward                        = 0,
	Backward                       = 1,
	ETimelineDirection_MAX         = 2,
};

enum class ETimelineLengthMode : uint8
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2,
};

enum class EAdditiveBasePoseType : uint8
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4,
};

enum class EAnimationKeyFormat : uint8
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3,
};

enum class EAnimationCompressionFormat : uint8
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7,
};

enum class ENotifyTriggerMode : uint8
{
	AllAnimations                  = 0,
	HighestWeightedAnimation       = 1,
	None                           = 2,
	ENotifyTriggerMode_MAX         = 3,
};

enum class EBlendSpaceAxis : uint8
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3,
};

enum class ETransitionLogicType : uint8
{
	TLT_StandardBlend              = 0,
	TLT_Custom                     = 1,
	TLT_MAX                        = 2,
};

enum class ETransitionBlendMode : uint8
{
	TBM_Linear                     = 0,
	TBM_Cubic                      = 1,
	TBM_MAX                        = 2,
};

enum class EMontagePlayReturnType : uint8
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2,
};

enum class EAnimCurveType : uint8
{
	AttributeCurve                 = 0,
	MaterialCurve                  = 1,
	MorphTargetCurve               = 2,
	MaxAnimCurveType               = 3,
	EAnimCurveType_MAX             = 4,
};

enum class EPrimaryAssetCookRule : uint8
{
	Unknown                        = 0,
	NeverCook                      = 1,
	DevelopmentCook                = 2,
	AlwaysCook                     = 3,
	EPrimaryAssetCookRule_MAX      = 4,
};

enum class EBlueprintNativizationFlag : uint8
{
	Disabled                       = 0,
	Dependency                     = 1,
	ExplicitlyEnabled              = 2,
	EBlueprintNativizationFlag_MAX = 3,
};

enum class EBlueprintCompileMode : uint8
{
	Default                        = 0,
	Development                    = 1,
	FinalRelease                   = 2,
	EBlueprintCompileMode_MAX      = 3,
};

enum class EBlueprintType : uint8
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6,
};

enum class EBlueprintStatus : uint8
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6,
};

enum class EEvaluateCurveTableResult : uint8
{
	RowFound                       = 0,
	RowNotFound                    = 1,
	EEvaluateCurveTableResult_MAX  = 2,
};

enum class EGrammaticalNumber : uint8
{
	Singular                       = 0,
	Plural                         = 1,
	EGrammaticalNumber_MAX         = 2,
};

enum class EGrammaticalGender : uint8
{
	Neuter                         = 0,
	Masculine                      = 1,
	Feminine                       = 2,
	Mixed                          = 3,
	EGrammaticalGender_MAX         = 4,
};

enum class ESuggestProjVelocityTraceOption : uint8
{
	DoNotTrace                     = 0,
	TraceFullPath                  = 1,
	OnlyTraceWhileAscending        = 2,
	ESuggestProjVelocityTraceOption_MAX = 3,
};

enum class EHMDWornState : uint8
{
	Unknown                        = 0,
	Worn                           = 1,
	NotWorn                        = 2,
	EHMDWornState_MAX              = 3,
};

enum class EHMDTrackingOrigin : uint8
{
	Floor                          = 0,
	Eye                            = 1,
	EHMDTrackingOrigin_MAX         = 2,
};

enum class EOrientPositionSelector : uint8
{
	Orientation                    = 0,
	Position                       = 1,
	OrientationAndPosition         = 2,
	EOrientPositionSelector_MAX    = 3,
};

enum class ELerpInterpolationMode : uint8
{
	QuatInterp                     = 0,
	EulerInterp                    = 1,
	DualQuatInterp                 = 2,
	ELerpInterpolationMode_MAX     = 3,
};

enum class EEasingFunc : uint8
{
	Linear                         = 0,
	Step                           = 1,
	SinusoidalIn                   = 2,
	SinusoidalOut                  = 3,
	SinusoidalInOut                = 4,
	EaseIn                         = 5,
	EaseOut                        = 6,
	EaseInOut                      = 7,
	ExpoIn                         = 8,
	ExpoOut                        = 9,
	ExpoInOut                      = 10,
	CircularIn                     = 11,
	CircularOut                    = 12,
	CircularInOut                  = 13,
	EEasingFunc_MAX                = 14,
};

enum class ERoundingMode : uint8
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7,
};

enum class EFNavigationSystemRunMode : uint8
{
	InvalidMode                    = 0,
	GameMode                       = 1,
	EditorMode                     = 2,
	SimulationMode                 = 3,
	PIEMode                        = 4,
	FNavigationSystemRunMode_MAX   = 5,
};

enum class EBodyCollisionResponse : uint8
{
	BodyCollision_Enabled          = 0,
	BodyCollision_Disabled         = 1,
	BodyCollision_MAX              = 2,
};

enum class EPhysicsType : uint8
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3,
};

enum class ECollisionTraceFlag : uint8
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4,
};

enum class EFrictionCombineMode : uint8
{
	Average                        = 0,
	Min                            = 1,
	Multiply                       = 2,
	Max                            = 3,
	EFrictionCombineMode_MAX       = 4,
};

enum class ESettingsLockedAxis : uint8
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	Invalid                        = 4,
	ESettingsLockedAxis_MAX        = 5,
};

enum class ESettingsDOF : uint8
{
	Full3D                         = 0,
	YZPlane                        = 1,
	XZPlane                        = 2,
	XYPlane                        = 3,
	ESettingsDOF_MAX               = 4,
};

enum class EAutoExposureMethodUI : uint8
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2,
};

enum class EEarlyZPass : uint8
{
	None                           = 0,
	OpaqueOnly                     = 1,
	OpaqueAndMasked                = 2,
	Auto                           = 3,
	EEarlyZPass_MAX                = 4,
};

enum class ECustomDepthStencil : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledOnDemand                = 2,
	EnabledWithStencil             = 3,
	ECustomDepthStencil_MAX        = 4,
};

enum class EMobileMSAASampleCount : uint8
{
	One                            = 1,
	Two                            = 2,
	Four                           = 4,
	Eight                          = 8,
	EMobileMSAASampleCount_MAX     = 9,
};

enum class ECompositingSampleCount : uint8
{
	One                            = 1,
	Two                            = 2,
	Four                           = 4,
	Eight                          = 8,
	ECompositingSampleCount_MAX    = 9,
};

enum class EClearSceneOptions : uint8
{
	NoClear                        = 0,
	HardwareClear                  = 1,
	QuadAtMaxZ                     = 2,
	EClearSceneOptions_MAX         = 3,
};

enum class EUIScalingRule : uint8
{
	ShortestSide                   = 0,
	LongestSide                    = 1,
	Horizontal                     = 2,
	Vertical                       = 3,
	Custom                         = 4,
	EUIScalingRule_MAX             = 5,
};

enum class ERenderFocusRule : uint8
{
	Always                         = 0,
	NonPointer                     = 1,
	NavigationOnly                 = 2,
	Never                          = 3,
	ERenderFocusRule_MAX           = 4,
};

enum class EDistributionParamMode : uint8
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3,
};

enum class EDistributionVectorMirrorFlags : uint8
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3,
};

enum class EDistributionVectorLockFlags : uint8
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5,
};

enum class ECanCreateConnectionResponse : uint8
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6,
};

enum class EGraphType : uint8
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5,
};

enum class EConsoleType : uint8
{
	CONSOLE_Any                    = 0,
	CONSOLE_Mobile                 = 1,
	CONSOLE_MAX                    = 2,
};

enum class ETransitionType : uint8
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_WaitingToConnect            = 6,
	TT_MAX                         = 7,
};

enum class EFullyLoadPackageType : uint8
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5,
};

enum class EFontImportCharacterSet : uint8
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3,
};

enum class EFontCacheType : uint8
{
	Offline                        = 0,
	Runtime                        = 1,
	EFontCacheType_MAX             = 2,
};

enum class EWindowMode : uint8
{
	Fullscreen                     = 0,
	WindowedFullscreen             = 1,
	Windowed                       = 2,
	EWindowMode_MAX                = 3,
};

enum class ETrackActiveCondition : uint8
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3,
};

enum class EInterpTrackMoveRotMode : uint8
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3,
};

enum class EInterpMoveAxis : uint8
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6,
};

enum class ETrackToggleAction : uint8
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4,
};

enum class EVisibilityTrackCondition : uint8
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3,
};

enum class EVisibilityTrackAction : uint8
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3,
};

enum class EMaterialAttributeBlend : uint8
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3,
};

enum class EClampMode : uint8
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3,
};

enum class ECustomMaterialOutputType : uint8
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4,
};

enum class EDepthOfFieldFunctionValue : uint8
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4,
};

enum class EFunctionInputType : uint8
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_StaticBool       = 6,
	FunctionInput_MaterialAttributes = 7,
	FunctionInput_MAX              = 8,
};

enum class ENoiseFunction : uint8
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6,
};

enum class EMaterialSceneAttributeInputMode : uint8
{
	Coordinates                    = 0,
	OffsetFraction                 = 1,
	EMaterialSceneAttributeInputMode_MAX = 2,
};

enum class ESceneTextureId : uint8
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModel               = 22,
	PPI_AmbientOcclusion           = 23,
	PPI_CustomStencil              = 24,
	PPI_StoredBaseColor            = 25,
	PPI_StoredSpecular             = 26,
	PPI_MAX                        = 27,
};

enum class EMaterialExpressionScreenPositionMapping : uint8
{
	MESP_SceneTextureUV            = 0,
	MESP_ViewportUV                = 1,
	MESP_Max                       = 2,
};

enum class ESpeedTreeLODType : uint8
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2,
};

enum class ESpeedTreeWindType : uint8
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7,
};

enum class ESpeedTreeGeometryType : uint8
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5,
};

enum class ETextureMipValueMode : uint8
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4,
};

enum class ETextureColorChannel : uint8
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4,
};

enum class EMaterialExposedTextureProperty : uint8
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2,
};

enum class EMaterialVectorCoordTransform : uint8
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6,
};

enum class EMaterialVectorCoordTransformSource : uint8
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6,
};

enum class EMaterialPositionTransformSource : uint8
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_MAX         = 6,
};

enum class EVectorNoiseFunction : uint8
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5,
};

enum class EMaterialExposedViewProperty : uint8
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_MAX                       = 6,
};

enum class EWorldPositionIncludedOffsets : uint8
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4,
};

enum class EMaterialDecalResponse : uint8
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8,
};

enum class EMaterialDomain : uint8
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_MAX                         = 6,
};

enum class EDecalBlendMode : uint8
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_Volumetric_DistanceFunction = 11,
	DBM_MAX                        = 12,
};

enum class EEmitterRenderMode : uint8
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5,
};

enum class EParticleSubUVInterpMethod : uint8
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5,
};

enum class EParticleBurstMethod : uint8
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2,
};

enum class EParticleScreenAlignment : uint8
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7,
};

enum class EParticleSystemInsignificanceReaction : uint8
{
	Auto                           = 0,
	Complete                       = 1,
	DisableTick                    = 2,
	DisableTickAndKill             = 3,
	Num                            = 4,
	EParticleSystemInsignificanceReaction_MAX = 5,
};

enum class EParticleSignificanceLevel : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Critical                       = 3,
	Num                            = 4,
	EParticleSignificanceLevel_MAX = 5,
};

enum class EParticleSourceSelectionMethod : uint8
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2,
};

enum class EModuleType : uint8
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9,
};

enum class EAttractorParticleSelectionMethod : uint8
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2,
};

enum class EBeam2SourceTargetTangentMethod : uint8
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4,
};

enum class EBeam2SourceTargetMethod : uint8
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5,
};

enum class EBeamModifierType : uint8
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2,
};

enum class EParticleCameraOffsetUpdateMethod : uint8
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3,
};

enum class EParticleCollisionComplete : uint8
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6,
};

enum class EParticleCollisionResponse : uint8
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3,
};

enum class ELocationBoneSocketSelectionMethod : uint8
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2,
};

enum class ELocationBoneSocketSource : uint8
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2,
};

enum class ELocationEmitterSelectionMethod : uint8
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2,
};

enum class ECylinderHeightAxis : uint8
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3,
};

enum class ELocationSkelVertSurfaceSource : uint8
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2,
};

enum class EOrbitChainMode : uint8
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3,
};

enum class EParticleAxisLock : uint8
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10,
};

enum class EEmitterDynamicParameterValue : uint8
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6,
};

enum class EOpacitySourceMode : uint8
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5,
};

enum class ESubUVBoundingVertexCount : uint8
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2,
};

enum class EEmitterNormalsMode : uint8
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3,
};

enum class EParticleSortMode : uint8
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5,
};

enum class EParticleUVFlipMode : uint8
{
	None                           = 0,
	FlipUV                         = 1,
	FlipUOnly                      = 2,
	FlipVOnly                      = 3,
	RandomFlipUV                   = 4,
	RandomFlipUOnly                = 5,
	RandomFlipVOnly                = 6,
	RandomFlipUVIndependent        = 7,
	EParticleUVFlipMode_MAX        = 8,
};

enum class ETrail2SourceMethod : uint8
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3,
};

enum class EBeamTaperMethod : uint8
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3,
};

enum class EBeam2Method : uint8
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3,
};

enum class EMeshCameraFacingOptions : uint8
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13,
};

enum class EMeshCameraFacingUpAxis : uint8
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5,
};

enum class EMeshScreenAlignment : uint8
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3,
};

enum class ETrailsRenderAxisOption : uint8
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3,
};

enum class ECloudStorageDelegate : uint8
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7,
};

enum class EAdManagerDelegate : uint8
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2,
};

enum class EMicroTransactionResult : uint8
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4,
};

enum class EMicroTransactionDelegate : uint8
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2,
};

enum class ETwitterIntegrationDelegate : uint8
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3,
};

enum class ETwitterRequestMethod : uint8
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3,
};

enum class EReporterLineStyle : uint8
{
	Line                           = 0,
	Dash                           = 1,
	EReporterLineStyle_MAX         = 2,
};

enum class ELegendPosition : uint8
{
	Outside                        = 0,
	Inside                         = 1,
	ELegendPosition_MAX            = 2,
};

enum class EGraphDataStyle : uint8
{
	Lines                          = 0,
	Filled                         = 1,
	EGraphDataStyle_MAX            = 2,
};

enum class EGraphAxisStyle : uint8
{
	Lines                          = 0,
	Notches                        = 1,
	Grid                           = 2,
	EGraphAxisStyle_MAX            = 3,
};

enum class EConstraintTransform : uint8
{
	Absolute                       = 0,
	Relative                       = 1,
	EConstraintTransform_MAX       = 2,
};

enum class EControlConstraint : uint8
{
	Orientation                    = 0,
	Translation                    = 1,
	Max                            = 2,
	EControlConstraint_MAX         = 3,
};

enum class EImpactDamageOverride : uint8
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3,
};

enum class ETextureSamplerFilter : uint8
{
	Point                          = 0,
	Bilinear                       = 1,
	Trilinear                      = 2,
	AnisotropicPoint               = 3,
	AnisotropicLinear              = 4,
	ETextureSamplerFilter_MAX      = 5,
};

enum class ETexturePowerOfTwoSetting : uint8
{
	None                           = 0,
	PadToPowerOfTwo                = 1,
	PadToSquarePowerOfTwo          = 2,
	ETexturePowerOfTwoSetting_MAX  = 3,
};

enum class ETextureMipGenSettings : uint8
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20,
};

enum class ETextureGroup : uint8
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_Pixels2D          = 28,
	TEXTUREGROUP_HierarchicalLOD   = 29,
	TEXTUREGROUP_MAX               = 30,
};

enum class ETextureSourceFormat : uint8
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_MAX                        = 8,
};

enum class ETextureSourceArtType : uint8
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3,
};

enum class ETextureMipCount : uint8
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3,
};

enum class ECompositeTextureMode : uint8
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5,
};

enum class ETextureAddress : uint8
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3,
};

enum class ETextureFilter : uint8
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4,
};

enum class ETextureCompressionSettings : uint8
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12,
};

enum class EMaxConcurrentResolutionRule : uint8
{
	PreventNew                     = 0,
	StopOldest                     = 1,
	StopFarthestThenPreventNew     = 2,
	StopFarthestThenOldest         = 3,
	StopLowestPriority             = 4,
	StopQuietest                   = 5,
	StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule_MAX = 7,
};

enum class ESoundGroup : uint8
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25,
};

enum class EDecompressionType : uint8
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8,
};

enum class EAudioOutputTarget : uint8
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3,
};

enum class EModulationParamMode : uint8
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3,
};

enum class EOptimizationType : uint8
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2,
};

enum class EImportanceLevel : uint8
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7,
};

enum class ENormalMode : uint8
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5,
};

enum class EVertexAttributeStreamType : uint8
{
	VAST_unknown                   = 0,
	VAST_float                     = 1,
	VAST_float2                    = 2,
	VAST_float3                    = 3,
	VAST_float4                    = 4,
	VAST_MAX                       = 5,
};

enum class EUserDefinedStructureStatus : uint8
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4,
};

enum class EVectorFieldConstructionOp : uint8
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2,
};

enum class EPostCopyOperation : uint8
{
	None                           = 0,
	LogicalNegateBool              = 1,
	EPostCopyOperation_MAX         = 2,
};

enum class EPinHidingMode : uint8
{
	NeverAsPin                     = 0,
	PinHiddenByDefault             = 1,
	PinShownByDefault              = 2,
	AlwaysAsPin                    = 3,
	EPinHidingMode_MAX             = 4,
};

enum class EEvaluatorMode : uint8
{
	EM_Standard                    = 0,
	EM_Freeze                      = 1,
	EM_DelayedFreeze               = 2,
	EM_MAX                         = 3,
};

enum class EEvaluatorDataSource : uint8
{
	EDS_SourcePose                 = 0,
	EDS_DestinationPose            = 1,
	EDS_MAX                        = 2,
};

enum class ECameraAlphaBlendMode : uint8
{
	CABM_Linear                    = 0,
	CABM_Cubic                     = 1,
	CABM_MAX                       = 2,
};

enum class EVertexPaintAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EVertexPaintAxis_MAX           = 3,
};

enum class EDrawDebugItemType : uint8
{
	DirectionalArrow               = 0,
	Sphere                         = 1,
	Line                           = 2,
	OnScreenMessage                = 3,
	EDrawDebugItemType_MAX         = 4,
};

enum class EAnimPhysCollisionType : uint8
{
	CoM                            = 0,
	CustomSphere                   = 1,
	InnerSphere                    = 2,
	OuterSphere                    = 3,
	AnimPhysCollisionType_MAX      = 4,
};

enum class EAnimPhysTwistAxis : uint8
{
	AxisX                          = 0,
	AxisY                          = 1,
	AxisZ                          = 2,
	AnimPhysTwistAxis_MAX          = 3,
};

enum class EWindowTitleBarMode : uint8
{
	Overlay                        = 0,
	VerticalBox                    = 1,
	EWindowTitleBarMode_MAX        = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.DistributionLookupTable
struct FDistributionLookupTable
{
public:
	uint8                                        Op;                                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EntryCount;                                        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EntryStride;                                       // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SubEntryStride;                                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeScale;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBias;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1534[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Values;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        LockFlag;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1535[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.RawDistribution
struct FRawDistribution
{
public:
	struct FDistributionLookupTable              Table;                                             // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.FloatDistribution
struct FFloatDistribution
{
public:
	struct FDistributionLookupTable              Table;                                             // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.VectorDistribution
struct FVectorDistribution
{
public:
	struct FDistributionLookupTable              Table;                                             // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.Vector4Distribution
struct FVector4Distribution
{
public:
	struct FDistributionLookupTable              Table;                                             // 0x0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.FloatRK4SpringInterpolator
struct FFloatRK4SpringInterpolator
{
public:
	float                                        StiffnessConstant;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DampeningRatio;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.VectorRK4SpringInterpolator
struct FVectorRK4SpringInterpolator
{
public:
	float                                        StiffnessConstant;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DampeningRatio;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.FormatArgumentData
struct FFormatArgumentData
{
public:
	class FString                                ArgumentName;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFormatArgumentType               ArgumentValueType;                                 // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1536[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ArgumentValue;                                     // 0x18(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	int32                                        ArgumentValueInt;                                  // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArgumentValueFloat;                                // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextGender                       ArgumentValueGender;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1537[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.ExpressionInput
struct FExpressionInput
{
public:
	int32                                        OutputIndex;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1538[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InputName;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Mask;                                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskR;                                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskG;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskB;                                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskA;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1539[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ExpressionName;                                    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x40 - 0x38)
// ScriptStruct Engine.MaterialAttributesInput
struct FMaterialAttributesInput : public FExpressionInput
{
public:
	int32                                        PropertyConnectedBitmask;                          // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.ExpressionOutput
struct FExpressionOutput
{
public:
	class FString                                OutputName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Mask;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskR;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskG;                                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskB;                                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskA;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.MaterialInput
struct FMaterialInput
{
public:
	int32                                        OutputIndex;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InputName;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Mask;                                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskR;                                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskG;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskB;                                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskA;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ExpressionName;                                    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x40 - 0x38)
// ScriptStruct Engine.ColorMaterialInput
struct FColorMaterialInput : public FMaterialInput
{
public:
	uint8                                        UseConstant : 1;                                   // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_19E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_153E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                Constant;                                          // 0x3C(0x4)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x40 - 0x38)
// ScriptStruct Engine.ScalarMaterialInput
struct FScalarMaterialInput : public FMaterialInput
{
public:
	uint8                                        UseConstant : 1;                                   // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_19F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_153F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Constant;                                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x48 - 0x38)
// ScriptStruct Engine.VectorMaterialInput
struct FVectorMaterialInput : public FMaterialInput
{
public:
	uint8                                        UseConstant : 1;                                   // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A0 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1540[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Constant;                                          // 0x3C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x48 - 0x38)
// ScriptStruct Engine.Vector2MaterialInput
struct FVector2MaterialInput : public FMaterialInput
{
public:
	uint8                                        UseConstant : 1;                                   // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A1 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1541[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConstantX;                                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstantY;                                         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1542[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0xC - 0xC)
// ScriptStruct Engine.Vector_NetQuantize
struct FVector_NetQuantize : public FVector
{
public:
};

// 0x0 (0xC - 0xC)
// ScriptStruct Engine.Vector_NetQuantizeNormal
struct FVector_NetQuantizeNormal : public FVector
{
public:
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Engine.HitResult
struct FHitResult
{
public:
	uint8                                        bBlockingHit : 1;                                  // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStartPenetrating : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A2 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1543[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Time;                                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   Location;                                          // 0xC(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   ImpactPoint;                                       // 0x18(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             Normal;                                            // 0x24(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             ImpactNormal;                                      // 0x30(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   TraceStart;                                        // 0x3C(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   TraceEnd;                                          // 0x48(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        PenetrationDepth;                                  // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Item;                                              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>      PhysMaterial;                                      // 0x5C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>    Component;                                         // 0x6C(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1544[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneName;                                          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FaceIndex;                                         // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1545[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SimpleMemberReference
struct FSimpleMemberReference
{
public:
	class UObject*                               MemberParent;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MemberName;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MemberGuid;                                        // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.TickFunction
struct FTickFunction
{
public:
	uint8                                        Pad_1546[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETickingGroup                     TickGroup;                                         // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETickingGroup                     EndTickGroup;                                      // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1547[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bTickEvenWhenPaused : 1;                           // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanEverTick : 1;                                  // Mask: 0x2, PropSize: 0x10xC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStartWithTickEnabled : 1;                         // Mask: 0x4, PropSize: 0x10xC(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowTickOnDedicatedServer : 1;                   // Mask: 0x8, PropSize: 0x10xC(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A3 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1548[0x33];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TickInterval;                                      // 0x40(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1549[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct Engine.ActorComponentTickFunction
struct FActorComponentTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_154A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SubtitleCue
struct FSubtitleCue
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.InterpControlPoint
struct FInterpControlPoint
{
public:
	struct FVector                               PositionControlPoint;                              // 0x0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPositionIsRelative;                               // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154C[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.PlatformInterfaceData
struct FPlatformInterfaceData
{
public:
	class FName                                  DataName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlatformInterfaceDataType        Type;                                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntValue;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StringValue;                                       // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ObjectValue;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.PlatformInterfaceDelegateResult
struct FPlatformInterfaceDelegateResult
{
public:
	bool                                         bSuccessful;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlatformInterfaceData                Data;                                              // 0x8(0x30)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.DebugFloatHistory
struct FDebugFloatHistory
{
public:
	TArray<float>                                Samples;                                           // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	float                                        MaxSamples;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAdjustMinMax;                                 // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1550[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.LatentActionInfo
struct FLatentActionInfo
{
public:
	int32                                        Linkage;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UUID;                                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ExecutionFunction;                                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               CallbackTarget;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.TimerHandle
struct FTimerHandle
{
public:
	uint64                                       Handle;                                            // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.CollisionProfileName
struct FCollisionProfileName
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.GenericStruct
struct FGenericStruct
{
public:
	int32                                        Data;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.UserActivity
struct FUserActivity
{
public:
	class FString                                ActionName;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1551[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.FastArraySerializerItem
struct FFastArraySerializerItem
{
public:
	int32                                        ReplicationID;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReplicationKey;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MostRecentArrayReplicationKey;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.CurveTableRowHandle
struct FCurveTableRowHandle
{
public:
	class UCurveTable*                           CurveTable;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0xC - 0xC)
// ScriptStruct Engine.Vector_NetQuantize10
struct FVector_NetQuantize10 : public FVector
{
public:
};

// 0x0 (0xC - 0xC)
// ScriptStruct Engine.Vector_NetQuantize100
struct FVector_NetQuantize100 : public FVector
{
public:
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Engine.FastArraySerializer
struct FFastArraySerializer
{
public:
	char ItemMap[0x50];
	int32_t IDCounter;
	int32_t ArrayReplicationKey;

	char GuidReferencesMap[0x50];

	int32_t CachedNumItems;
	int32_t CachedNumItemsToConsiderForWriting;

	void MarkArrayDirty()
	{
		IncrementArrayReplicationKey();

		CachedNumItems = -1;
		CachedNumItemsToConsiderForWriting = -1;
	}

	void IncrementArrayReplicationKey()
	{
		ArrayReplicationKey++;

		if (ArrayReplicationKey == -1)
			ArrayReplicationKey++;
	}
};

// 0x17 (0x18 - 0x1)
// ScriptStruct Engine.UniqueNetIdRepl
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
public:
	uint8                                        Pad_1553[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.RepAttachment
struct FRepAttachment
{
public:
	class AActor*                                AttachParent;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                LocationOffset;                                    // 0x8(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                RelativeScale3D;                                   // 0x14(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x20(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1554[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachSocket;                                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       AttachComponent;                                   // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct Engine.RepMovement
struct FRepMovement
{
public:
	struct FVector                               LinearVelocity;                                    // 0x0(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0xC(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x18(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x24(0xC)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bSimulatedPhysicSleep : 1;                         // Mask: 0x1, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRepPhysics : 1;                                   // Mask: 0x2, PropSize: 0x10x30(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A4 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EVectorQuantization               LocationQuantizationLevel;                         // 0x31(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVectorQuantization               VelocityQuantizationLevel;                         // 0x32(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERotatorQuantization              RotationQuantizationLevel;                         // 0x33(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x58 - 0x50)
// ScriptStruct Engine.ActorTickFunction
struct FActorTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_1555[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DataTableRowHandle
struct FDataTableRowHandle
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.TableRowBase
struct FTableRowBase
{
public:
	uint8                                        Pad_1556[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.ParticleSysParam
struct FParticleSysParam
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EParticleSysParamType             ParamType;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1557[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scalar;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scalar_Low;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector;                                            // 0x14(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector_Low;                                        // 0x20(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x2C(0x4)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1558[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.TextureParameterValue
struct FTextureParameterValue
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              ParameterValue;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExpressionGUID;                                    // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.VectorParameterValue
struct FVectorParameterValue
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ParameterValue;                                    // 0x8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExpressionGUID;                                    // 0x18(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ScalarParameterValue
struct FScalarParameterValue
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParameterValue;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExpressionGUID;                                    // 0xC(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1559[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.ExposedValueCopyRecord
struct FExposedValueCopyRecord
{
public:
	class UProperty*                             SourceProperty;                                    // 0x0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourcePropertyName;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceSubPropertyName;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceArrayIndex;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProperty*                             DestProperty;                                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DestArrayIndex;                                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Size;                                              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInstanceIsTarget;                                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPostCopyOperation                PostCopyOperation;                                 // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBoolProperty*                         CachedBoolSourceProperty;                          // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoolProperty*                         CachedBoolDestProperty;                            // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                       CachedStructDestProperty;                          // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProperty*                             CachedSourceProperty;                              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProperty*                             CachedSourceStructSubProperty;                     // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.ExposedValueHandler
struct FExposedValueHandler
{
public:
	class FName                                  BoundFunction;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FExposedValueCopyRecord>       CopyRecords;                                       // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UFunction*                             Function;                                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.AnimNode_Base
struct FAnimNode_Base
{
public:
	uint8                                        Pad_155E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExposedValueHandler                  EvaluateGraphExposedInputs;                        // 0x8(0x28)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.PoseLinkBase
struct FPoseLinkBase
{
public:
	int32                                        LinkID;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155F[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Engine.PoseLink
struct FPoseLink : public FPoseLinkBase
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.InputScaleBias
struct FInputScaleBias
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct Engine.ComponentSpacePoseLink
struct FComponentSpacePoseLink : public FPoseLinkBase
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BoneReference
struct FBoneReference
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1560[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.LightingChannels
struct FLightingChannels
{
public:
	uint8                                        bChannel0 : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bChannel1 : 1;                                     // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bChannel2 : 1;                                     // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x58 - 0x30)
// ScriptStruct Engine.AnimNode_AssetPlayerBase
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
public:
	bool                                         bIgnoreForRelevancyTest;                           // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1561[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GroupIndex;                                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1562[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendWeight;                                       // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InternalTimeAccumulator;                           // 0x40(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1563[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.BlendSampleData
struct FBlendSampleData
{
public:
	int32                                        SampleDataIndex;                                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1564[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         Animation;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalWeight;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousTime;                                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1565[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.BlendFilter
struct FBlendFilter
{
public:
	uint8                                        Pad_1566[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.AlphaBlend
struct FAlphaBlend
{
public:
	enum class EAlphaBlendOption                 BlendOption;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1567[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CustomCurve;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendTime;                                         // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1568[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BranchFilter
struct FBranchFilter
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlendDepth;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1569[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.InputBlendPose
struct FInputBlendPose
{
public:
	TArray<struct FBranchFilter>                 BranchFilters;                                     // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.PoseSnapshot
struct FPoseSnapshot
{
public:
	TArray<struct FTransform>                    LocalTransforms;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          BoneNames;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  SkeletalMeshName;                                  // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SnapshotName;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValid;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x460 (0x460 - 0x0)
// ScriptStruct Engine.AnimInstanceProxy
struct FAnimInstanceProxy
{
public:
	uint8                                        Pad_156B[0x460];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.SplineCurves
struct FSplineCurves
{
public:
	struct FInterpCurveVector                    Position;                                          // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveQuat                      Rotation;                                          // 0x18(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                    Scale;                                             // 0x30(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     ReparamTable;                                      // 0x48(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.KeyHandleMap
struct FKeyHandleMap
{
public:
	uint8                                        Pad_156C[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.IndexedCurve
struct FIndexedCurve
{
public:
	uint8                                        Pad_156D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKeyHandleMap                         KeyHandlesToIndices;                               // 0x8(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.RichCurveKey
struct FRichCurveKey
{
public:
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentWeightMode       TangentWeightMode;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Time;                                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArriveTangent;                                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArriveTangentWeight;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangent;                                      // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangentWeight;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x70 - 0x58)
// ScriptStruct Engine.RichCurve
struct FRichCurve : public FIndexedCurve
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultValue;                                      // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRichCurveKey>                 Keys;                                              // 0x60(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Engine.RuntimeFloatCurve
struct FRuntimeFloatCurve
{
public:
	struct FRichCurve                            EditorCurveData;                                   // 0x0(0x70)(NativeAccessSpecifierPublic)
	class UCurveFloat*                           ExternalCurve;                                     // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimCurveParam
struct FAnimCurveParam
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1570[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.IntegralKey
struct FIntegralKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x70 - 0x58)
// ScriptStruct Engine.IntegralCurve
struct FIntegralCurve : public FIndexedCurve
{
public:
	TArray<struct FIntegralKey>                  Keys;                                              // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        DefaultValue;                                      // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseDefaultValueBeforeFirstKey;                    // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1571[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.StringCurveKey
struct FStringCurveKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1572[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x78 - 0x58)
// ScriptStruct Engine.StringCurve
struct FStringCurve : public FIndexedCurve
{
public:
	class FString                                DefaultValue;                                      // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStringCurveKey>               Keys;                                              // 0x68(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DirectoryPath
struct FDirectoryPath
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.CanvasUVTri
struct FCanvasUVTri
{
public:
	struct FVector2D                             V0_Pos;                                            // 0x0(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             V0_UV;                                             // 0x8(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          V0_Color;                                          // 0x10(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             V1_Pos;                                            // 0x20(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             V1_UV;                                             // 0x28(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          V1_Color;                                          // 0x30(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             V2_Pos;                                            // 0x40(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             V2_UV;                                             // 0x48(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          V2_Color;                                          // 0x50(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.DepthFieldGlowInfo
struct FDepthFieldGlowInfo
{
public:
	uint8                                        bEnableGlow : 1;                                   // Mask: 0x1, PropSize: 0x10x0(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A5 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1573[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          GlowColor;                                         // 0x4(0x10)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             GlowOuterRadius;                                   // 0x14(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             GlowInnerRadius;                                   // 0x1C(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.FontRenderInfo
struct FFontRenderInfo
{
public:
	uint8                                        bClipText : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableShadow : 1;                                 // Mask: 0x2, PropSize: 0x10x0(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A6 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1574[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDepthFieldGlowInfo                   GlowInfo;                                          // 0x4(0x24)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.Redirector
struct FRedirector
{
public:
	class FName                                  OldName;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewName;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.FilePath
struct FFilePath
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ComponentReference
struct FComponentReference
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ComponentProperty;                                 // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1575[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.ConstrainComponentPropName
struct FConstrainComponentPropName
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.WalkableSlopeOverride
struct FWalkableSlopeOverride
{
public:
	enum class EWalkableSlopeBehavior            WalkableSlopeBehavior;                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1576[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WalkableSlopeAngle;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1577[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DamageEvent
struct FDamageEvent
{
public:
	uint8                                        Pad_1578[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageType>               DamageTypeClass;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.RadialDamageParams
struct FRadialDamageParams
{
public:
	float                                        BaseDamage;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDamage;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerRadius;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterRadius;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageFalloff;                                     // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x40 - 0x10)
// ScriptStruct Engine.RadialDamageEvent
struct FRadialDamageEvent : public FDamageEvent
{
public:
	struct FRadialDamageParams                   Params;                                            // 0x10(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x24(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                    ComponentHits;                                     // 0x30(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x98 (0xA8 - 0x10)
// ScriptStruct Engine.PointDamageEvent
struct FPointDamageEvent : public FDamageEvent
{
public:
	float                                        Damage;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             ShotDirection;                                     // 0x14(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FHitResult                            HitInfo;                                           // 0x20(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.MeshBuildSettings
struct FMeshBuildSettings
{
public:
	bool                                         bUseMikkTSpace;                                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecomputeNormals;                                 // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecomputeTangents;                                // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveDegenerates;                                // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBuildAdjacencyBuffer;                             // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBuildReversedIndexBuffer;                         // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHighPrecisionTangentBasis;                     // 0x6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFullPrecisionUVs;                              // 0x7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateLightmapUVs;                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1579[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinLightmapResolution;                             // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SrcLightmapIndex;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DstLightmapIndex;                                  // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BuildScale;                                        // 0x18(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BuildScale3D;                                      // 0x1C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceFieldResolutionScale;                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateDistanceFieldAsIfTwoSided;                // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceFieldBias;                                 // 0x30(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           DistanceFieldReplacementMesh;                      // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.POV
struct FPOV
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Engine.AnimUpdateRateParameters
struct FAnimUpdateRateParameters
{
public:
	uint8                                        Pad_157C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UpdateRate;                                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EvaluationRate;                                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInterpolateSkippedFrames : 1;                     // Mask: 0x1, PropSize: 0x10xC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldUseLodMap : 1;                              // Mask: 0x2, PropSize: 0x10xC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldUseMinLod : 1;                              // Mask: 0x4, PropSize: 0x10xC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkipUpdate : 1;                                   // Mask: 0x8, PropSize: 0x10xC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkipEvaluation : 1;                               // Mask: 0x10, PropSize: 0x10xC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A7 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_157D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TickedPoseOffestTime;                              // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditionalTime;                                    // 0x14(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BaseNonRenderedUpdateRate;                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                BaseVisibleDistanceFactorThesholds;                // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int32, int32>                           LODToFrameSkipMap;                                 // 0x30(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxEvalRateForInterpolation;                       // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUpdateRateShiftBucket            ShiftBucket;                                       // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimSlotDesc
struct FAnimSlotDesc
{
public:
	class FName                                  SlotName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumChannels;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1580[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AnimSlotInfo
struct FAnimSlotInfo
{
public:
	class FName                                  SlotName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                ChannelWeights;                                    // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.MTDResult
struct FMTDResult
{
public:
	struct FVector                               Direction;                                         // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.OverlapResult
struct FOverlapResult
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>    Component;                                         // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1581[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bBlockingHit : 1;                                  // Mask: 0x1, PropSize: 0x10x14(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1582[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.PrimitiveMaterialRef
struct FPrimitiveMaterialRef
{
public:
	class UPrimitiveComponent*                   Primitive;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDecalComponent*                       Decal;                                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ElementIndex;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1583[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.SwarmDebugOptions
struct FSwarmDebugOptions
{
public:
	uint8                                        bDistributionEnabled : 1;                          // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceContentExport : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInitialized : 1;                                  // Mask: 0x4, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1584[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.LightmassDebugOptions
struct FLightmassDebugOptions
{
public:
	uint8                                        bDebugMode : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStatsEnabled : 1;                                 // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGatherBSPSurfacesAcrossComponents : 1;            // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A8 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1585[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CoplanarTolerance;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseImmediateImport : 1;                           // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bImmediateProcessMappings : 1;                     // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortMappings : 1;                                 // Mask: 0x4, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDumpBinaryFiles : 1;                              // Mask: 0x8, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDebugMaterials : 1;                               // Mask: 0x10, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPadMappings : 1;                                  // Mask: 0x20, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDebugPaddings : 1;                                // Mask: 0x40, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlyCalcDebugTexelMappings : 1;                   // Mask: 0x80, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseRandomColors : 1;                              // Mask: 0x1, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bColorBordersGreen : 1;                            // Mask: 0x2, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bColorByExecutionTime : 1;                         // Mask: 0x4, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A9 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1586[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExecutionTimeDivisor;                              // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.LightmassPrimitiveSettings
struct FLightmassPrimitiveSettings
{
public:
	uint8                                        bUseTwoSidedLighting : 1;                          // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShadowIndirectOnly : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseEmissiveForStaticLighting : 1;                 // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseVertexNormalForHemisphereGather : 1;           // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1AA : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1587[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EmissiveLightFalloffExponent;                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmissiveLightExplicitInfluenceRadius;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmissiveBoost;                                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DiffuseBoost;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FullyOccludedSamplesFraction;                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.LightmassLightSettings
struct FLightmassLightSettings
{
public:
	float                                        IndirectLightingSaturation;                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowExponent;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAreaShadowsForStationaryLight;                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1588[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x10 - 0xC)
// ScriptStruct Engine.LightmassDirectionalLightSettings
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
public:
	float                                        LightSourceAngle;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0xC - 0xC)
// ScriptStruct Engine.LightmassPointLightSettings
struct FLightmassPointLightSettings : public FLightmassLightSettings
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.LocalizedSubtitle
struct FLocalizedSubtitle
{
public:
	class FString                                LanguageExt;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSubtitleCue>                  Subtitles;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bMature : 1;                                       // Mask: 0x1, PropSize: 0x10x20(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bManualWordWrap : 1;                               // Mask: 0x2, PropSize: 0x10x20(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSingleLine : 1;                                   // Mask: 0x4, PropSize: 0x10x20(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1589[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.BasedPosition
struct FBasedPosition
{
public:
	class AActor*                                Base;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CachedBaseLocation;                                // 0x14(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CachedBaseRotation;                                // 0x20(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CachedTransPosition;                               // 0x2C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.FractureEffect
struct FFractureEffect
{
public:
	class UParticleSystem*                       ParticleSystem;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Sound;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.RigidBodyContactInfo
struct FRigidBodyContactInfo
{
public:
	struct FVector                               ContactPosition;                                   // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ContactNormal;                                     // 0xC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ContactPenetration;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.CollisionImpactData
struct FCollisionImpactData
{
public:
	TArray<struct FRigidBodyContactInfo>         ContactInfos;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               TotalNormalImpulse;                                // 0x10(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TotalFrictionImpulse;                              // 0x1C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.RigidBodyErrorCorrection
struct FRigidBodyErrorCorrection
{
public:
	float                                        LinearDeltaThresholdSq;                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearInterpAlpha;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearRecipFixTime;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularDeltaThreshold;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularInterpAlpha;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularRecipFixTime;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodySpeedThresholdSq;                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.RigidBodyState
struct FRigidBodyState
{
public:
	struct FVector_NetQuantize100                Position;                                          // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_158C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Quaternion;                                        // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                LinVel;                                            // 0x20(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                AngVel;                                            // 0x2C(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Flags;                                             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.CollisionResponseContainer
struct FCollisionResponseContainer
{
public:
	enum class ECollisionResponse                WorldStatic;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                WorldDynamic;                                      // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                Pawn;                                              // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                Visibility;                                        // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                Camera;                                            // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                PhysicsBody;                                       // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                Vehicle;                                           // 0x6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                Destructible;                                      // 0x7(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                EngineTraceChannel1;                               // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                EngineTraceChannel2;                               // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                EngineTraceChannel3;                               // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                EngineTraceChannel4;                               // 0xB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                EngineTraceChannel5;                               // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                EngineTraceChannel6;                               // 0xD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel1;                                 // 0xE(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel2;                                 // 0xF(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel3;                                 // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel4;                                 // 0x11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel5;                                 // 0x12(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel6;                                 // 0x13(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel7;                                 // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel8;                                 // 0x15(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel9;                                 // 0x16(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel10;                                // 0x17(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel11;                                // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel12;                                // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel13;                                // 0x1A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel14;                                // 0x1B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel15;                                // 0x1C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel16;                                // 0x1D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel17;                                // 0x1E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                GameTraceChannel18;                                // 0x1F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ResponseChannel
struct FResponseChannel
{
public:
	class FName                                  Channel;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                Response;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.ExposureSettings
struct FExposureSettings
{
public:
	int32                                        LogOffset;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFixed;                                            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.URL
struct FURL
{
public:
	class FString                                Protocol;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Host;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1590[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Map;                                               // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RedirectUrl;                                       // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Op;                                                // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Portal;                                            // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Valid;                                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1591[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_1592[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.TickPrerequisite
struct FTickPrerequisite
{
public:
	uint8                                        Pad_1593[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.EdGraphTerminalType
struct FEdGraphTerminalType
{
public:
	class FString                                TerminalCategory;                                  // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TerminalSubCategory;                               // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                TerminalSubCategoryObject;                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTerminalIsConst;                                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTerminalIsWeakPointer;                            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1594[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.EdGraphPinReference
struct FEdGraphPinReference
{
public:
	TWeakObjectPtr<class UEdGraphNode>           OwningNode;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 PinId;                                             // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.EdGraphPinType
struct FEdGraphPinType
{
public:
	class FString                                PinCategory;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PinSubCategory;                                    // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                PinSubCategoryObject;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleMemberReference                PinSubCategoryMemberReference;                     // 0x28(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FEdGraphTerminalType                  PinValueType;                                      // 0x48(0x30)(NativeAccessSpecifierPublic)
	bool                                         bIsMap;                                            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSet;                                            // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsArray;                                          // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReference;                                      // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsConst;                                          // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsWeakPointer;                                    // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1595[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.OverlapInfo
struct FOverlapInfo
{
public:
	uint8                                        Pad_1596[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.MaterialProxySettings
struct FMaterialProxySettings
{
public:
	struct FIntPoint                             TextureSize;                                       // 0x0(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureSizingType                TextureSizingType;                                 // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1597[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GutterSpace;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalMap;                                        // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMetallicMap;                                      // 0x11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1598[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MetallicConstant;                                  // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRoughnessMap;                                     // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1599[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RoughnessConstant;                                 // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpecularMap;                                      // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpecularConstant;                                  // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmissiveMap;                                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOpacityMap;                                       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             DiffuseTextureSize;                                // 0x2C(0x8)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             NormalTextureSize;                                 // 0x34(0x8)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             MetallicTextureSize;                               // 0x3C(0x8)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             RoughnessTextureSize;                              // 0x44(0x8)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             SpecularTextureSize;                               // 0x4C(0x8)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             EmissiveTextureSize;                               // 0x54(0x8)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             OpacityTextureSize;                                // 0x5C(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMaterialMergeType                MaterialMergeType;                                 // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x44 (0x44 - 0x0)
// ScriptStruct Engine.MaterialSimplificationSettings
struct FMaterialSimplificationSettings
{
public:
	struct FIntPoint                             BaseColorMapSize;                                  // 0x0(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalMap;                                        // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             NormalMapSize;                                     // 0xC(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MetallicConstant;                                  // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMetallicMap;                                      // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             MetallicMapSize;                                   // 0x1C(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RoughnessConstant;                                 // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRoughnessMap;                                     // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             RoughnessMapSize;                                  // 0x2C(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpecularConstant;                                  // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpecularMap;                                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             SpecularMapSize;                                   // 0x3C(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x174 (0x174 - 0x0)
// ScriptStruct Engine.LevelSimplificationDetails
struct FLevelSimplificationDetails
{
public:
	bool                                         bCreatePackagePerAsset;                            // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DetailsPercentage;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialSimplificationSettings       StaticMeshMaterial;                                // 0x8(0x44)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                StaticMeshMaterialSettings;                        // 0x4C(0x68)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideLandscapeExportLOD;                       // 0xB4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LandscapeExportLOD;                                // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialSimplificationSettings       LandscapeMaterial;                                 // 0xBC(0x44)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                LandscapeMaterialSettings;                         // 0x100(0x68)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBakeFoliageToLandscape;                           // 0x168(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBakeGrassToLandscape;                             // 0x169(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateMeshNormalMap;                            // 0x16A(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateMeshMetallicMap;                          // 0x16B(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateMeshRoughnessMap;                         // 0x16C(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateMeshSpecularMap;                          // 0x16D(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateLandscapeNormalMap;                       // 0x16E(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateLandscapeMetallicMap;                     // 0x16F(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateLandscapeRoughnessMap;                    // 0x170(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateLandscapeSpecularMap;                     // 0x171(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A3[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.StreamableTextureInstance
struct FStreamableTextureInstance
{
public:
	uint8                                        Pad_15A4[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct Engine.DynamicTextureInstance
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
public:
	class UTexture2D*                            Texture;                                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttached;                                         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OriginalRadius;                                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.GeomSelection
struct FGeomSelection
{
public:
	int32                                        Type;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectionIndex;                                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.InteriorSettings
struct FInteriorSettings
{
public:
	uint8                                        bIsWorldSettings : 1;                              // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1AB : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExteriorVolume;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExteriorTime;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExteriorLPF;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExteriorLPFTime;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteriorVolume;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteriorTime;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteriorLPF;                                       // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteriorLPFTime;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ReverbSettings
struct FReverbSettings
{
public:
	uint8                                        bApplyReverb : 1;                                  // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1AC : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EReverbPreset                     ReverbType;                                        // 0x4(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReverbEffect*                         ReverbEffect;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeTime;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.CullDistanceSizePair
struct FCullDistanceSizePair
{
public:
	float                                        Size;                                              // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CullDistance;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.NavigationFilterFlags
struct FNavigationFilterFlags
{
public:
	uint8                                        bNavFlag0 : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag1 : 1;                                     // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag2 : 1;                                     // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag3 : 1;                                     // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag4 : 1;                                     // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag5 : 1;                                     // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag6 : 1;                                     // Mask: 0x40, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag7 : 1;                                     // Mask: 0x80, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag8 : 1;                                     // Mask: 0x1, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag9 : 1;                                     // Mask: 0x2, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag10 : 1;                                    // Mask: 0x4, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag11 : 1;                                    // Mask: 0x8, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag12 : 1;                                    // Mask: 0x10, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag13 : 1;                                    // Mask: 0x20, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag14 : 1;                                    // Mask: 0x40, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNavFlag15 : 1;                                    // Mask: 0x80, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A9[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.NavigationFilterArea
struct FNavigationFilterArea
{
public:
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TravelCostOverride;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnteringCostOverride;                              // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsExcluded : 1;                                   // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideTravelCost : 1;                           // Mask: 0x2, PropSize: 0x10x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideEnteringCost : 1;                         // Mask: 0x4, PropSize: 0x10x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.MovementProperties
struct FMovementProperties
{
public:
	uint8                                        bCanCrouch : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanJump : 1;                                      // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanWalk : 1;                                      // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanSwim : 1;                                      // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanFly : 1;                                       // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x20 - 0x4)
// ScriptStruct Engine.NavAgentProperties
struct FNavAgentProperties : public FMovementProperties
{
public:
	float                                        AgentRadius;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentHeight;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AgentStepHeight;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NavWalkingSearchHeightScale;                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ANavigationData>           PreferredNavData;                                  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct Engine.NavDataConfig
struct FNavDataConfig : public FNavAgentProperties
{
public:
	class FName                                  Name;                                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x28(0x4)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DefaultQueryExtent;                                // 0x2C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ANavigationData>           NavigationDataClass;                               // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStringClassReference                 NavigationDataClassName;                           // 0x40(0x10)(Config, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.NavAgentSelector
struct FNavAgentSelector
{
public:
	uint8                                        bSupportsAgent0 : 1;                               // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent1 : 1;                               // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent2 : 1;                               // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent3 : 1;                               // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent4 : 1;                               // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent5 : 1;                               // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent6 : 1;                               // Mask: 0x40, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent7 : 1;                               // Mask: 0x80, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent8 : 1;                               // Mask: 0x1, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent9 : 1;                               // Mask: 0x2, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent10 : 1;                              // Mask: 0x4, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent11 : 1;                              // Mask: 0x8, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent12 : 1;                              // Mask: 0x10, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent13 : 1;                              // Mask: 0x20, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent14 : 1;                              // Mask: 0x40, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent15 : 1;                              // Mask: 0x80, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AD[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.WeightedBlendable
struct FWeightedBlendable
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Object;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.WeightedBlendables
struct FWeightedBlendables
{
public:
	TArray<struct FWeightedBlendable>            Array;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4C0 (0x4C0 - 0x0)
// ScriptStruct Engine.PostProcessSettings
struct FPostProcessSettings
{
public:
	uint8                                        bOverride_WhiteTemp : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_WhiteTint : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorSaturation : 1;                     // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorContrast : 1;                       // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorGamma : 1;                          // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorGain : 1;                           // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorOffset : 1;                         // Mask: 0x40, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorSaturationShadows : 1;              // Mask: 0x80, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorContrastShadows : 1;                // Mask: 0x1, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorGammaShadows : 1;                   // Mask: 0x2, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorGainShadows : 1;                    // Mask: 0x4, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorOffsetShadows : 1;                  // Mask: 0x8, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorSaturationMidtones : 1;             // Mask: 0x10, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorContrastMidtones : 1;               // Mask: 0x20, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorGammaMidtones : 1;                  // Mask: 0x40, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorGainMidtones : 1;                   // Mask: 0x80, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorOffsetMidtones : 1;                 // Mask: 0x1, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorSaturationHighlights : 1;           // Mask: 0x2, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorContrastHighlights : 1;             // Mask: 0x4, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorGammaHighlights : 1;                // Mask: 0x8, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorGainHighlights : 1;                 // Mask: 0x10, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorOffsetHighlights : 1;               // Mask: 0x20, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorCorrectionShadowsMax : 1;           // Mask: 0x40, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorCorrectionHighlightsMin : 1;        // Mask: 0x80, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmWhitePoint : 1;                      // Mask: 0x1, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmSaturation : 1;                      // Mask: 0x2, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmChannelMixerRed : 1;                 // Mask: 0x4, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmChannelMixerGreen : 1;               // Mask: 0x8, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmChannelMixerBlue : 1;                // Mask: 0x10, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmContrast : 1;                        // Mask: 0x20, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmDynamicRange : 1;                    // Mask: 0x40, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmHealAmount : 1;                      // Mask: 0x80, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmToeAmount : 1;                       // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmShadowTint : 1;                      // Mask: 0x2, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmShadowTintBlend : 1;                 // Mask: 0x4, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmShadowTintAmount : 1;                // Mask: 0x8, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmSlope : 1;                           // Mask: 0x10, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmToe : 1;                             // Mask: 0x20, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmShoulder : 1;                        // Mask: 0x40, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmBlackClip : 1;                       // Mask: 0x80, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_FilmWhiteClip : 1;                       // Mask: 0x1, PropSize: 0x10x5(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_SceneColorTint : 1;                      // Mask: 0x2, PropSize: 0x10x5(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_SceneFringeIntensity : 1;                // Mask: 0x4, PropSize: 0x10x5(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientCubemapTint : 1;                  // Mask: 0x8, PropSize: 0x10x5(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientCubemapIntensity : 1;             // Mask: 0x10, PropSize: 0x10x5(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_BloomIntensity : 1;                      // Mask: 0x20, PropSize: 0x10x5(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_BloomThreshold : 1;                      // Mask: 0x40, PropSize: 0x10x5(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom1Tint : 1;                          // Mask: 0x80, PropSize: 0x10x5(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom1Size : 1;                          // Mask: 0x1, PropSize: 0x10x6(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom2Size : 1;                          // Mask: 0x2, PropSize: 0x10x6(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom2Tint : 1;                          // Mask: 0x4, PropSize: 0x10x6(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom3Tint : 1;                          // Mask: 0x8, PropSize: 0x10x6(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom3Size : 1;                          // Mask: 0x10, PropSize: 0x10x6(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom4Tint : 1;                          // Mask: 0x20, PropSize: 0x10x6(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom4Size : 1;                          // Mask: 0x40, PropSize: 0x10x6(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom5Tint : 1;                          // Mask: 0x80, PropSize: 0x10x6(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom5Size : 1;                          // Mask: 0x1, PropSize: 0x10x7(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom6Tint : 1;                          // Mask: 0x2, PropSize: 0x10x7(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Bloom6Size : 1;                          // Mask: 0x4, PropSize: 0x10x7(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_BloomSizeScale : 1;                      // Mask: 0x8, PropSize: 0x10x7(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_BloomDirtMaskIntensity : 1;              // Mask: 0x10, PropSize: 0x10x7(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_BloomDirtMaskTint : 1;                   // Mask: 0x20, PropSize: 0x10x7(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_BloomDirtMask : 1;                       // Mask: 0x40, PropSize: 0x10x7(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AutoExposureMethod : 1;                  // Mask: 0x80, PropSize: 0x10x7(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AutoExposureLowPercent : 1;              // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AutoExposureHighPercent : 1;             // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AutoExposureMinBrightness : 1;           // Mask: 0x4, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AutoExposureMaxBrightness : 1;           // Mask: 0x8, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AutoExposureSpeedUp : 1;                 // Mask: 0x10, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AutoExposureSpeedDown : 1;               // Mask: 0x20, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AutoExposureBias : 1;                    // Mask: 0x40, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_HistogramLogMin : 1;                     // Mask: 0x80, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_HistogramLogMax : 1;                     // Mask: 0x1, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LensFlareIntensity : 1;                  // Mask: 0x2, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LensFlareTint : 1;                       // Mask: 0x4, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LensFlareTints : 1;                      // Mask: 0x8, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LensFlareBokehSize : 1;                  // Mask: 0x10, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LensFlareBokehShape : 1;                 // Mask: 0x20, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LensFlareThreshold : 1;                  // Mask: 0x40, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_VignetteIntensity : 1;                   // Mask: 0x80, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_GrainIntensity : 1;                      // Mask: 0x1, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_GrainJitter : 1;                         // Mask: 0x2, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionIntensity : 1;           // Mask: 0x4, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionStaticFraction : 1;      // Mask: 0x8, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionRadius : 1;              // Mask: 0x10, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionFadeDistance : 1;        // Mask: 0x20, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionFadeRadius : 1;          // Mask: 0x40, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionDistance : 1;            // Mask: 0x80, PropSize: 0x10xA(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionRadiusInWS : 1;          // Mask: 0x1, PropSize: 0x10xB(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionPower : 1;               // Mask: 0x2, PropSize: 0x10xB(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionBias : 1;                // Mask: 0x4, PropSize: 0x10xB(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionQuality : 1;             // Mask: 0x8, PropSize: 0x10xB(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionMipBlend : 1;            // Mask: 0x10, PropSize: 0x10xB(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionMipScale : 1;            // Mask: 0x20, PropSize: 0x10xB(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_AmbientOcclusionMipThreshold : 1;        // Mask: 0x40, PropSize: 0x10xB(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVIntensity : 1;                        // Mask: 0x80, PropSize: 0x10xB(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVDirectionalOcclusionIntensity : 1;    // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVDirectionalOcclusionRadius : 1;       // Mask: 0x2, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVDiffuseOcclusionExponent : 1;         // Mask: 0x4, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVSpecularOcclusionExponent : 1;        // Mask: 0x8, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVDiffuseOcclusionIntensity : 1;        // Mask: 0x10, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVSpecularOcclusionIntensity : 1;       // Mask: 0x20, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVSize : 1;                             // Mask: 0x40, PropSize: 0x10xC(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVSecondaryOcclusionIntensity : 1;      // Mask: 0x80, PropSize: 0x10xC(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVSecondaryBounceIntensity : 1;         // Mask: 0x1, PropSize: 0x10xD(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVGeometryVolumeBias : 1;               // Mask: 0x2, PropSize: 0x10xD(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVVplInjectionBias : 1;                 // Mask: 0x4, PropSize: 0x10xD(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_LPVEmissiveInjectionIntensity : 1;       // Mask: 0x8, PropSize: 0x10xD(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_IndirectLightingColor : 1;               // Mask: 0x10, PropSize: 0x10xD(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_IndirectLightingIntensity : 1;           // Mask: 0x20, PropSize: 0x10xD(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorGradingIntensity : 1;               // Mask: 0x40, PropSize: 0x10xD(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ColorGradingLUT : 1;                     // Mask: 0x80, PropSize: 0x10xD(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldFocalDistance : 1;           // Mask: 0x1, PropSize: 0x10xE(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldFstop : 1;                   // Mask: 0x2, PropSize: 0x10xE(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldSensorWidth : 1;             // Mask: 0x4, PropSize: 0x10xE(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldDepthBlurRadius : 1;         // Mask: 0x8, PropSize: 0x10xE(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldDepthBlurAmount : 1;         // Mask: 0x10, PropSize: 0x10xE(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldFocalRegion : 1;             // Mask: 0x20, PropSize: 0x10xE(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldNearTransitionRegion : 1;    // Mask: 0x40, PropSize: 0x10xE(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldFarTransitionRegion : 1;     // Mask: 0x80, PropSize: 0x10xE(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldScale : 1;                   // Mask: 0x1, PropSize: 0x10xF(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldMaxBokehSize : 1;            // Mask: 0x2, PropSize: 0x10xF(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldNearBlurSize : 1;            // Mask: 0x4, PropSize: 0x10xF(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldFarBlurSize : 1;             // Mask: 0x8, PropSize: 0x10xF(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldMethod : 1;                  // Mask: 0x10, PropSize: 0x10xF(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MobileHQGaussian : 1;                    // Mask: 0x20, PropSize: 0x10xF(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldBokehShape : 1;              // Mask: 0x40, PropSize: 0x10xF(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldOcclusion : 1;               // Mask: 0x80, PropSize: 0x10xF(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldColorThreshold : 1;          // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldSizeThreshold : 1;           // Mask: 0x2, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldSkyFocusDistance : 1;        // Mask: 0x4, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_DepthOfFieldVignetteSize : 1;            // Mask: 0x8, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MotionBlurAmount : 1;                    // Mask: 0x10, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MotionBlurMax : 1;                       // Mask: 0x20, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MotionBlurPerObjectSize : 1;             // Mask: 0x40, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ScreenPercentage : 1;                    // Mask: 0x80, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ScreenSpaceReflectionIntensity : 1;      // Mask: 0x1, PropSize: 0x10x11(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ScreenSpaceReflectionQuality : 1;        // Mask: 0x2, PropSize: 0x10x11(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ScreenSpaceReflectionMaxRoughness : 1;   // Mask: 0x4, PropSize: 0x10x11(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_ScreenSpaceReflectionRoughnessScale : 1; // Mask: 0x8, PropSize: 0x10x11(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1AD : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15AF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WhiteTemp;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WhiteTint;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ColorSaturation;                                   // 0x20(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorContrast;                                     // 0x30(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorGamma;                                        // 0x40(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorGain;                                         // 0x50(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorOffset;                                       // 0x60(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorSaturationShadows;                            // 0x70(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorContrastShadows;                              // 0x80(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorGammaShadows;                                 // 0x90(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorGainShadows;                                  // 0xA0(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorOffsetShadows;                                // 0xB0(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorCorrectionShadowsMax;                         // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B1[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              ColorSaturationMidtones;                           // 0xD0(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorContrastMidtones;                             // 0xE0(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorGammaMidtones;                                // 0xF0(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorGainMidtones;                                 // 0x100(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorOffsetMidtones;                               // 0x110(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorSaturationHighlights;                         // 0x120(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorContrastHighlights;                           // 0x130(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorGammaHighlights;                              // 0x140(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorGainHighlights;                               // 0x150(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorOffsetHighlights;                             // 0x160(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorCorrectionHighlightsMin;                      // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FilmWhitePoint;                                    // 0x174(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FilmShadowTint;                                    // 0x184(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmShadowTintBlend;                               // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmShadowTintAmount;                              // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmSaturation;                                    // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FilmChannelMixerRed;                               // 0x1A0(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FilmChannelMixerGreen;                             // 0x1B0(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FilmChannelMixerBlue;                              // 0x1C0(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmContrast;                                      // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmToeAmount;                                     // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmHealAmount;                                    // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmDynamicRange;                                  // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmSlope;                                         // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmToe;                                           // 0x1E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmShoulder;                                      // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmBlackClip;                                     // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmWhiteClip;                                     // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SceneColorTint;                                    // 0x1F4(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SceneFringeIntensity;                              // 0x204(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BloomIntensity;                                    // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BloomThreshold;                                    // 0x20C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BloomSizeScale;                                    // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bloom1Size;                                        // 0x214(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bloom2Size;                                        // 0x218(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bloom3Size;                                        // 0x21C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bloom4Size;                                        // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bloom5Size;                                        // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bloom6Size;                                        // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Bloom1Tint;                                        // 0x22C(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Bloom2Tint;                                        // 0x23C(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Bloom3Tint;                                        // 0x24C(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Bloom4Tint;                                        // 0x25C(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Bloom5Tint;                                        // 0x26C(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Bloom6Tint;                                        // 0x27C(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BloomDirtMaskIntensity;                            // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BloomDirtMaskTint;                                 // 0x290(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              BloomDirtMask;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AmbientCubemapTint;                                // 0x2A8(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientCubemapIntensity;                           // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureCube*                          AmbientCubemap;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAutoExposureMethod               AutoExposureMethod;                                // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoExposureLowPercent;                            // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoExposureHighPercent;                           // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoExposureMinBrightness;                         // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoExposureMaxBrightness;                         // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoExposureSpeedUp;                               // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoExposureSpeedDown;                             // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoExposureBias;                                  // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HistogramLogMin;                                   // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HistogramLogMax;                                   // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LensFlareIntensity;                                // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LensFlareTint;                                     // 0x2F4(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LensFlareBokehSize;                                // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LensFlareThreshold;                                // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              LensFlareBokehShape;                               // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LensFlareTints;                                    // 0x318(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B5[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VignetteIntensity;                                 // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrainJitter;                                       // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrainIntensity;                                    // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionIntensity;                         // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionStaticFraction;                    // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionRadius;                            // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AmbientOcclusionRadiusInWS : 1;                    // Mask: 0x1, PropSize: 0x10x3B0(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1AE : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AmbientOcclusionFadeDistance;                      // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionFadeRadius;                        // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionDistance;                          // 0x3BC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionPower;                             // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionBias;                              // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionQuality;                           // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionMipBlend;                          // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionMipScale;                          // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmbientOcclusionMipThreshold;                      // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          IndirectLightingColor;                             // 0x3D8(0x10)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IndirectLightingIntensity;                         // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorGradingIntensity;                             // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              ColorGradingLUT;                                   // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDepthOfFieldMethod               DepthOfFieldMethod;                                // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bMobileHQGaussian : 1;                             // Mask: 0x1, PropSize: 0x10x3FC(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1AF : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DepthOfFieldFstop;                                 // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldSensorWidth;                           // 0x404(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldFocalDistance;                         // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldDepthBlurAmount;                       // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldDepthBlurRadius;                       // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldFocalRegion;                           // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldNearTransitionRegion;                  // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldFarTransitionRegion;                   // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldScale;                                 // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldMaxBokehSize;                          // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldNearBlurSize;                          // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldFarBlurSize;                           // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              DepthOfFieldBokehShape;                            // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldOcclusion;                             // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldColorThreshold;                        // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldSizeThreshold;                         // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldSkyFocusDistance;                      // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldVignetteSize;                          // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MotionBlurAmount;                                  // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MotionBlurMax;                                     // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MotionBlurPerObjectSize;                           // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVIntensity;                                      // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVVplInjectionBias;                               // 0x45C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVSize;                                           // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVSecondaryOcclusionIntensity;                    // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVSecondaryBounceIntensity;                       // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVGeometryVolumeBias;                             // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVEmissiveInjectionIntensity;                     // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVDirectionalOcclusionIntensity;                  // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVDirectionalOcclusionRadius;                     // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVDiffuseOcclusionExponent;                       // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVSpecularOcclusionExponent;                      // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVDiffuseOcclusionIntensity;                      // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPVSpecularOcclusionIntensity;                     // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScreenSpaceReflectionIntensity;                    // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScreenSpaceReflectionQuality;                      // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScreenSpaceReflectionMaxRoughness;                 // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScreenPercentage;                                  // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedBlendables                   WeightedBlendables;                                // 0x4A0(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       Blendables;                                        // 0x4B0(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Engine.LatentActionManager
struct FLatentActionManager
{
public:
	uint8                                        Pad_15BA[0xF0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.PlayerMuteList
struct FPlayerMuteList
{
public:
	uint8                                        Pad_15BB[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasVoiceHandshakeCompleted;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VoiceChannelIdx;                                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x510 (0x510 - 0x0)
// ScriptStruct Engine.MinimalViewInfo
struct FMinimalViewInfo
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OrthoWidth;                                        // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OrthoNearClipPlane;                                // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OrthoFarClipPlane;                                 // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AspectRatio;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x2C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseFieldOfViewForLOD : 1;                         // Mask: 0x2, PropSize: 0x10x2C(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B0 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECameraProjectionMode             ProjectionMode;                                    // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PostProcessBlendWeight;                            // 0x34(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x40(0x4C0)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             OffCenterProjectionOffset;                         // 0x500(0x8)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.FOscillator
struct FFOscillator
{
public:
	float                                        Amplitude;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInitialOscillatorOffset          InitialOffset;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.VOscillator
struct FVOscillator
{
public:
	struct FFOscillator                          X;                                                 // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                          Y;                                                 // 0xC(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                          Z;                                                 // 0x18(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.ROscillator
struct FROscillator
{
public:
	struct FFOscillator                          Pitch;                                             // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                          Yaw;                                               // 0xC(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                          Roll;                                              // 0x18(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ViewTargetTransitionParams
struct FViewTargetTransitionParams
{
public:
	float                                        BlendTime;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EViewTargetBlendFunction          BlendFunction;                                     // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendExp;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockOutgoing : 1;                                 // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x530 (0x530 - 0x0)
// ScriptStruct Engine.TViewTarget
struct FTViewTarget
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMinimalViewInfo                      POV;                                               // 0x10(0x510)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class APlayerState*                          PlayerState;                                       // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15C5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x520 (0x520 - 0x0)
// ScriptStruct Engine.CameraCacheEntry
struct FCameraCacheEntry
{
public:
	float                                        TimeStamp;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C6[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMinimalViewInfo                      POV;                                               // 0x10(0x510)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ActiveForceFeedbackEffect
struct FActiveForceFeedbackEffect
{
public:
	class UForceFeedbackEffect*                  ForceFeedbackEffect;                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C7[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.ForceFeedbackChannelDetails
struct FForceFeedbackChannelDetails
{
public:
	uint8                                        bAffectsLeftLarge : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsLeftSmall : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsRightLarge : 1;                            // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsRightSmall : 1;                            // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B1 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Curve;                                             // 0x8(0x78)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
struct FUpdateLevelVisibilityLevelInfo
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsVisible : 1;                                    // Mask: 0x1, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
struct FUpdateLevelStreamingLevelStatus
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODIndex;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNewShouldBeLoaded : 1;                            // Mask: 0x1, PropSize: 0x10xC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNewShouldBeVisible : 1;                           // Mask: 0x2, PropSize: 0x10xC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNewShouldBlockOnLoad : 1;                         // Mask: 0x4, PropSize: 0x10xC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.DebugTextInfo
struct FDebugTextInfo
{
public:
	class AActor*                                SrcActor;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SrcActorOffset;                                    // 0x8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SrcActorDesiredOffset;                             // 0x14(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DebugText;                                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRemaining;                                     // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                TextColor;                                         // 0x38(0x4)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAbsoluteLocation : 1;                             // Mask: 0x1, PropSize: 0x10x3C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bKeepAttachedToActor : 1;                          // Mask: 0x2, PropSize: 0x10x3C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawShadow : 1;                                   // Mask: 0x4, PropSize: 0x10x3C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B2 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OrigActorLocation;                                 // 0x40(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFont*                                 Font;                                              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FontScale;                                         // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x94 (0x94 - 0x0)
// ScriptStruct Engine.MeshMergingSettings
struct FMeshMergingSettings
{
public:
	bool                                         bGenerateLightMapUV;                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetLightMapResolution;                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportVertexColors;                               // 0x8(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPivotPointAtZero;                                 // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMergePhysicsData;                                 // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMergeMaterials;                                   // 0xB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                MaterialSettings;                                  // 0xC(0x68)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBakeVertexDataToMesh;                             // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseVertexDataForBakingMaterial;                   // 0x75(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTextureBinning;                                // 0x76(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCalculateCorrectLODModel;                         // 0x77(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshLODSelectionType             LODSelectionType;                                  // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ExportSpecificLOD;                                 // 0x7C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpecificLOD;                                       // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLandscapeCulling;                              // 0x84(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportNormalMap;                                  // 0x85(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportMetallicMap;                                // 0x86(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportRoughnessMap;                               // 0x87(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportSpecularMap;                                // 0x88(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MergedMaterialAtlasResolution;                     // 0x8C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD4 (0xD4 - 0x0)
// ScriptStruct Engine.MeshProxySettings
struct FMeshProxySettings
{
public:
	int32                                        ScreenSize;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                MaterialSettings;                                  // 0x4(0x68)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TextureWidth;                                      // 0x6C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureHeight;                                     // 0x70(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportNormalMap;                                  // 0x74(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportMetallicMap;                                // 0x75(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportRoughnessMap;                               // 0x76(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportSpecularMap;                                // 0x77(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialSimplificationSettings       Material;                                          // 0x78(0x44)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCalculateCorrectLODModel;                         // 0xBC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MergeDistance;                                     // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HardAngleThreshold;                                // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LightMapResolution;                                // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecalculateNormals;                               // 0xCC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBakeVertexData;                                   // 0xCD(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLandscapeCulling;                              // 0xCE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeCullingPrecision        LandscapeCullingPrecision;                         // 0xCF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowAdjacency;                                   // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDistanceField;                               // 0xD1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D3[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.MeshReductionSettings
struct FMeshReductionSettings
{
public:
	float                                        PercentTriangles;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDeviation;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PixelError;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeldingThreshold;                                  // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HardAngleThreshold;                                // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshFeatureImportance            SilhouetteImportance;                              // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshFeatureImportance            TextureImportance;                                 // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshFeatureImportance            ShadingImportance;                                 // 0x16(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecalculateNormals;                               // 0x17(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseLODModel;                                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateUniqueLightmapUVs;                        // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKeepSymmetry;                                     // 0x1D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisibilityAided;                                  // 0x1E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCullOccluded;                                     // 0x1F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshFeatureImportance            VisibilityAggressiveness;                          // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshFeatureImportance            VertexColorImportance;                             // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D4[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x184 (0x184 - 0x0)
// ScriptStruct Engine.HierarchicalSimplification
struct FHierarchicalSimplification
{
public:
	uint8                                        Pad_15D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransitionScreenSize;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimplifyMesh;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMeshProxySettings                    ProxySetting;                                      // 0xC(0xD4)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FMeshMergingSettings                  MergeSetting;                                      // 0xE0(0x94)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        DesiredBoundRadius;                                // 0x174(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredFillingPercentage;                          // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinNumberOfActorsToBuild;                          // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyGenerateClustersForVolumes;                   // 0x180(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.NetViewer
struct FNetViewer
{
public:
	class UNetConnection*                        Connection;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InViewer;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ViewTarget;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ViewLocation;                                      // 0x18(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ViewDir;                                           // 0x24(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// ScriptStruct Engine.LightmassWorldInfoSettings
struct FLightmassWorldInfoSettings
{
public:
	float                                        StaticLightingLevelScale;                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumIndirectLightingBounces;                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IndirectLightingQuality;                           // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IndirectLightingSmoothness;                        // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                EnvironmentColor;                                  // 0x10(0x4)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnvironmentIntensity;                              // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmissiveBoost;                                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DiffuseBoost;                                      // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseAmbientOcclusion : 1;                          // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateAmbientOcclusionMaterialMask : 1;         // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B3 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DirectIlluminationOcclusionFraction;               // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IndirectIlluminationOcclusionFraction;             // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionExponent;                                 // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FullyOccludedSamplesFraction;                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxOcclusionDistance;                              // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bVisualizeMaterialDiffuse : 1;                     // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bVisualizeAmbientOcclusion : 1;                    // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B4 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumeLightSamplePlacementScale;                   // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCompressLightmaps : 1;                            // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.StreamingTextureBuildInfo
struct FStreamingTextureBuildInfo
{
public:
	uint32                                       PackedRelativeBox;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureLevelIndex;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TexelFactor;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.StreamingTexturePrimitiveInfo
struct FStreamingTexturePrimitiveInfo
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                      Bounds;                                            // 0x8(0x1C)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TexelFactor;                                       // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PackedRelativeBox;                                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.CollisionResponse
struct FCollisionResponse
{
public:
	struct FCollisionResponseContainer           ResponseToChannels;                                // 0x0(0x20)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct FResponseChannel>              ResponseArray;                                     // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x220 (0x220 - 0x0)
// ScriptStruct Engine.BodyInstance
struct FBodyInstance
{
public:
	uint8                                        Pad_15DC[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCollisionResponseContainer           ResponseToChannels;                                // 0x14(0x20)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESleepFamily                      SleepFamily;                                       // 0x35(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDOFMode                          DOFMode;                                           // 0x36(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionEnabled                 CollisionEnabled;                                  // 0x37(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  CollisionProfileName;                              // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCollisionResponse                    CollisionResponses;                                // 0x40(0x30)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15DE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseCCD : 1;                                       // Mask: 0x1, PropSize: 0x10x71(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNotifyRigidBodyCollision : 1;                     // Mask: 0x2, PropSize: 0x10x71(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSimulatePhysics : 1;                              // Mask: 0x4, PropSize: 0x10x71(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideMass : 1;                                 // Mask: 0x8, PropSize: 0x10x71(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableGravity : 1;                                // Mask: 0x10, PropSize: 0x10x71(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoWeld : 1;                                     // Mask: 0x20, PropSize: 0x10x71(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B5 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bStartAwake : 1;                                   // Mask: 0x80, PropSize: 0x10x71(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateWakeEvents : 1;                           // Mask: 0x1, PropSize: 0x10x72(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUpdateMassWhenScaleChanges : 1;                   // Mask: 0x2, PropSize: 0x10x72(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockTranslation : 1;                              // Mask: 0x4, PropSize: 0x10x72(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockRotation : 1;                                 // Mask: 0x8, PropSize: 0x10x72(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockXTranslation : 1;                             // Mask: 0x10, PropSize: 0x10x72(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockYTranslation : 1;                             // Mask: 0x20, PropSize: 0x10x72(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockZTranslation : 1;                             // Mask: 0x40, PropSize: 0x10x72(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockXRotation : 1;                                // Mask: 0x80, PropSize: 0x10x72(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockYRotation : 1;                                // Mask: 0x1, PropSize: 0x10x73(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockZRotation : 1;                                // Mask: 0x2, PropSize: 0x10x73(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideMaxAngularVelocity : 1;                   // Mask: 0x4, PropSize: 0x10x73(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B6 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bUseAsyncScene : 1;                                // Mask: 0x10, PropSize: 0x10x73(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverrideMaxDepenetrationVelocity : 1;             // Mask: 0x20, PropSize: 0x10x73(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverrideWalkableSlopeOnInstance : 1;              // Mask: 0x40, PropSize: 0x10x73(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1B7 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	float                                        MaxDepenetrationVelocity;                          // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15DF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MassInKgOverride;                                  // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LinearDamping;                                     // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularDamping;                                    // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CustomDOFPlaneNormal;                              // 0x8C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               COMNudge;                                          // 0x98(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MassScale;                                         // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InertiaTensorScale;                                // 0xA8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 ObjectType;                                        // 0xB4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15E0[0x13];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWalkableSlopeOverride                WalkableSlopeOverride;                             // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	class UPhysicalMaterial*                     PhysMaterialOverride;                              // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxAngularVelocity;                                // 0xE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CustomSleepThresholdMultiplier;                    // 0xE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhysicsBlendWeight;                                // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PositionSolverIterationCount;                      // 0xEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E1[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       RigidActorSyncId;                                  // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       RigidActorAsyncId;                                 // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VelocitySolverIterationCount;                      // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E2[0xF4];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.SpriteCategoryInfo
struct FSpriteCategoryInfo
{
public:
	class FName                                  Category;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.MaterialTextureInfo
struct FMaterialTextureInfo
{
public:
	float                                        SamplingScale;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UVChannelIndex;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TextureName;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.LightmassMaterialInterfaceSettings
struct FLightmassMaterialInterfaceSettings
{
public:
	uint8                                        bCastShadowAsMasked : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B8 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EmissiveBoost;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DiffuseBoost;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExportResolutionScale;                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCastShadowAsMasked : 1;                   // Mask: 0x1, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideEmissiveBoost : 1;                        // Mask: 0x2, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideDiffuseBoost : 1;                         // Mask: 0x4, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideExportResolutionScale : 1;                // Mask: 0x8, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.PaintedVertex
struct FPaintedVertex
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPackedNormal                         Normal;                                            // 0xC(0x4)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x10(0x4)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Engine.StaticMeshComponentLODInfo
struct FStaticMeshComponentLODInfo
{
public:
	uint8                                        Pad_15E5[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPaintedVertex>                PaintedVertices;                                   // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E6[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.InterpGroupActorInfo
struct FInterpGroupActorInfo
{
public:
	class FName                                  ObjectName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.CameraCutInfo
struct FCameraCutInfo
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeStamp;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SupportedAreaData
struct FSupportedAreaData
{
public:
	class FString                                AreaClassName;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AreaID;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AreaClass;                                         // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.NavGraphNode
struct FNavGraphNode
{
public:
	class UObject*                               Owner;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.NavGraphEdge
struct FNavGraphEdge
{
public:
	uint8                                        Pad_15E9[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.NavigationLinkBase
struct FNavigationLinkBase
{
public:
	float                                        LeftProjectHeight;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFallDownLength;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENavLinkDirection                 Direction;                                         // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SnapRadius;                                        // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SnapHeight;                                        // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x18(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent0 : 1;                               // Mask: 0x1, PropSize: 0x10x1C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent1 : 1;                               // Mask: 0x2, PropSize: 0x10x1C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent2 : 1;                               // Mask: 0x4, PropSize: 0x10x1C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent3 : 1;                               // Mask: 0x8, PropSize: 0x10x1C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent4 : 1;                               // Mask: 0x10, PropSize: 0x10x1C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent5 : 1;                               // Mask: 0x20, PropSize: 0x10x1C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent6 : 1;                               // Mask: 0x40, PropSize: 0x10x1C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent7 : 1;                               // Mask: 0x80, PropSize: 0x10x1C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent8 : 1;                               // Mask: 0x1, PropSize: 0x10x1D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent9 : 1;                               // Mask: 0x2, PropSize: 0x10x1D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent10 : 1;                              // Mask: 0x4, PropSize: 0x10x1D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent11 : 1;                              // Mask: 0x8, PropSize: 0x10x1D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent12 : 1;                              // Mask: 0x10, PropSize: 0x10x1D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent13 : 1;                              // Mask: 0x20, PropSize: 0x10x1D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent14 : 1;                              // Mask: 0x40, PropSize: 0x10x1D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsAgent15 : 1;                              // Mask: 0x80, PropSize: 0x10x1D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseSnapHeight : 1;                                // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSnapToCheapestArea : 1;                           // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCustomFlag0 : 1;                                  // Mask: 0x4, PropSize: 0x10x20(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCustomFlag1 : 1;                                  // Mask: 0x8, PropSize: 0x10x20(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCustomFlag2 : 1;                                  // Mask: 0x10, PropSize: 0x10x20(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCustomFlag3 : 1;                                  // Mask: 0x20, PropSize: 0x10x20(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCustomFlag4 : 1;                                  // Mask: 0x40, PropSize: 0x10x20(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCustomFlag5 : 1;                                  // Mask: 0x80, PropSize: 0x10x20(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCustomFlag6 : 1;                                  // Mask: 0x1, PropSize: 0x10x21(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCustomFlag7 : 1;                                  // Mask: 0x2, PropSize: 0x10x21(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B9 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_15EC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavArea>                  AreaClass;                                         // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15ED[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x68 - 0x38)
// ScriptStruct Engine.NavigationSegmentLink
struct FNavigationSegmentLink : public FNavigationLinkBase
{
public:
	struct FVector                               LeftStart;                                         // 0x38(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LeftEnd;                                           // 0x44(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RightStart;                                        // 0x50(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RightEnd;                                          // 0x5C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x50 - 0x38)
// ScriptStruct Engine.NavigationLink
struct FNavigationLink : public FNavigationLinkBase
{
public:
	struct FVector                               Left;                                              // 0x38(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Right;                                             // 0x44(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.NamedEmitterMaterial
struct FNamedEmitterMaterial
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.LODSoloTrack
struct FLODSoloTrack
{
public:
	TArray<uint8>                                SoloEnableSetting;                                 // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.ParticleSystemLOD
struct FParticleSystemLOD
{
public:
	uint8                                        Pad_15EE[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.MeshUVChannelInfo
struct FMeshUVChannelInfo
{
public:
	bool                                         bInitialized;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDensities;                                // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LocalUVDensities;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F0[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.PreviewAttachedObjectPair
struct FPreviewAttachedObjectPair
{
public:
	TSoftObjectPtr<class UObject>                AttachedObject;                                    // 0x0(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                               Object;                                            // 0x20(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AttachedTo;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PreviewAssetAttachContainer
struct FPreviewAssetAttachContainer
{
public:
	TArray<struct FPreviewAttachedObjectPair>    AttachedObjects;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.AnimLinkableElement
struct FAnimLinkableElement
{
public:
	uint8                                        Pad_15F1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          LinkedMontage;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SlotIndex;                                         // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SegmentIndex;                                      // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAnimLinkMethod                   LinkMethod;                                        // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAnimLinkMethod                   CachedLinkMethod;                                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15F2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SegmentBeginTime;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SegmentLength;                                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LinkValue;                                         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                     LinkedSequence;                                    // 0x28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimSyncMarker
struct FAnimSyncMarker
{
public:
	class FName                                  MarkerName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.MarkerSyncData
struct FMarkerSyncData
{
public:
	TArray<struct FAnimSyncMarker>               AuthoredSyncMarkers;                               // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F4[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.AnimNotifyTrack
struct FAnimNotifyTrack
{
public:
	class FName                                  TrackName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TrackColor;                                        // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F5[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0xA8 - 0x30)
// ScriptStruct Engine.AnimNotifyEvent
struct FAnimNotifyEvent : public FAnimLinkableElement
{
public:
	float                                        DisplayTime;                                       // 0x30(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TriggerTimeOffset;                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTriggerTimeOffset;                              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TriggerWeightThreshold;                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NotifyName;                                        // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimNotify*                           Notify;                                            // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimNotifyState*                      NotifyStateClass;                                  // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimLinkableElement                  EndLink;                                           // 0x60(0x30)(NativeAccessSpecifierPublic)
	bool                                         bConvertedFromBranchingPoint;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMontageNotifyTickType            MontageTickType;                                   // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NotifyTriggerChance;                               // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENotifyFilterType                 NotifyFilterType;                                  // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NotifyFilterLOD;                                   // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriggerOnDedicatedServer;                         // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TrackIndex;                                        // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.PerBoneBlendWeight
struct FPerBoneBlendWeight
{
public:
	int32                                        SourceIndex;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendWeight;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PerBoneBlendWeights
struct FPerBoneBlendWeights
{
public:
	TArray<struct FPerBoneBlendWeight>           BoneBlendWeights;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.SkeletalMaterial
struct FSkeletalMaterial
{
public:
	class UMaterialInterface*                    MaterialInterface;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableShadowCasting;                              // 0x8(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecomputeTangent;                                 // 0x9(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MaterialSlotName;                                  // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshUVChannelInfo                    UVChannelData;                                     // 0x18(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.ClothPhysicsProperties
struct FClothPhysicsProperties
{
public:
	float                                        VerticalResistance;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizontalResistance;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BendResistance;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShearResistance;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Friction;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TetherStiffness;                                   // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TetherLimit;                                       // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Drag;                                              // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StiffnessFrequency;                                // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MassScale;                                         // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InertiaBlend;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionThickness;                            // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionSquashScale;                          // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionStiffness;                            // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SolverFrequency;                                   // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FiberCompression;                                  // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FiberExpansion;                                    // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FiberResistance;                                   // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Engine.ClothingAssetData
struct FClothingAssetData
{
public:
	class FName                                  AssetName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ApexFileName;                                      // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClothPropertiesChanged;                           // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClothPhysicsProperties               PhysicsProperties;                                 // 0x1C(0x50)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ApexToUnrealBoneMapping;                           // 0x70(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FE[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.TriangleSortSettings
struct FTriangleSortSettings
{
public:
	enum class ETriangleSortOption               TriangleSorting;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETriangleSortAxis                 CustomLeftRightAxis;                               // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CustomLeftRightBoneName;                           // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.SkeletalMeshOptimizationSettings
struct FSkeletalMeshOptimizationSettings
{
public:
	enum class ESkeletalMeshOptimizationType     ReductionMethod;                                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1600[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NumOfTrianglesPercentage;                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDeviationPercentage;                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeldingThreshold;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecalcNormals;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1601[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NormalsThreshold;                                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkeletalMeshOptimizationImportance SilhouetteImportance;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkeletalMeshOptimizationImportance TextureImportance;                                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkeletalMeshOptimizationImportance ShadingImportance;                                 // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkeletalMeshOptimizationImportance SkinningImportance;                                // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneReductionRatio;                                // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBonesPerVertex;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1602[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneReference>                BonesToRemove;                                     // 0x28(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	int32                                        BaseLOD;                                           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1603[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Engine.SkeletalMeshLODInfo
struct FSkeletalMeshLODInfo
{
public:
	float                                        ScreenSize;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LODHysteresis;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                LODMaterialMap;                                    // 0x8(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 bEnableShadowCasting;                              // 0x18(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FTriangleSortSettings>         TriangleSortSettings;                              // 0x28(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bHasBeenSimplified : 1;                            // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1BA : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1604[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkeletalMeshOptimizationSettings     ReductionSettings;                                 // 0x40(0x40)(Edit, NativeAccessSpecifierPublic)
	TArray<class FName>                          RemovedBones;                                      // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                SourceImportFilename;                              // 0x90(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.BoneMirrorExport
struct FBoneMirrorExport
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceBoneName;                                    // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             BoneFlipAxis;                                      // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1605[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.BoneMirrorInfo
struct FBoneMirrorInfo
{
public:
	int32                                        SourceIndex;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             BoneFlipAxis;                                      // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1606[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimationGroupReference
struct FAnimationGroupReference
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1607[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.RootMotionMovementParams
struct FRootMotionMovementParams
{
public:
	bool                                         bHasRootMotion;                                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1608[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendWeight;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1609[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RootMotionTransform;                               // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.AnimGroupInstance
struct FAnimGroupInstance
{
public:
	uint8                                        Pad_160A[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.AnimTickRecord
struct FAnimTickRecord
{
public:
	class UAnimationAsset*                       SourceAsset;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160B[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.MarkerSyncAnimPosition
struct FMarkerSyncAnimPosition
{
public:
	class FName                                  PreviousMarkerName;                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NextMarkerName;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionBetweenMarkers;                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.RootMotionSourceSettings
struct FRootMotionSourceSettings
{
public:
	uint8                                        Flags;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct Engine.RootMotionSourceGroup
struct FRootMotionSourceGroup
{
public:
	uint8                                        Pad_160D[0xE8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasAdditiveSources;                               // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasOverrideSources;                               // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize10                 LastPreAdditiveVelocity;                           // 0xEC(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsAdditiveVelocityApplied;                        // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRootMotionSourceSettings             LastAccumulatedSettings;                           // 0xF9(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_160F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.RootMotionFinishVelocitySettings
struct FRootMotionFinishVelocitySettings
{
public:
	enum class ERootMotionFinishVelocityMode     Mode;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1610[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SetVelocity;                                       // 0x4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampVelocity;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.RootMotionSourceStatus
struct FRootMotionSourceStatus
{
public:
	uint8                                        Flags;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Engine.RootMotionSource
struct FRootMotionSource
{
public:
	uint8                                        Pad_1611[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       Priority;                                          // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       LocalID;                                           // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionAccumulateMode         AccumulateMode;                                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1612[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InstanceName;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentTime;                                       // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousTime;                                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRootMotionSourceStatus               Status;                                            // 0x30(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRootMotionSourceSettings             Settings;                                          // 0x31(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bInLocalSpace;                                     // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1613[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRootMotionMovementParams             RootMotionParams;                                  // 0x40(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRootMotionFinishVelocitySettings     FinishVelocityParams;                              // 0x80(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1614[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0xD0 - 0x98)
// ScriptStruct Engine.RootMotionSource_JumpForce
struct FRootMotionSource_JumpForce : public FRootMotionSource
{
public:
	struct FRotator                              Rotation;                                          // 0x98(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableTimeout;                                   // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1615[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1616[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0xD0 - 0x98)
// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
public:
	struct FVector                               StartLocation;                                     // 0x98(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialTargetLocation;                             // 0xA4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0xB0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictSpeedToExpected;                          // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1617[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0xC0 - 0x98)
// ScriptStruct Engine.RootMotionSource_MoveToForce
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
public:
	struct FVector                               StartLocation;                                     // 0x98(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0xA4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictSpeedToExpected;                          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1618[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0xE0 - 0x98)
// ScriptStruct Engine.RootMotionSource_RadialForce
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
public:
	struct FVector                               Location;                                          // 0x98(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1619[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LocationActor;                                     // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPush;                                           // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoZForce;                                         // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           StrengthDistanceFalloff;                           // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           StrengthOverTime;                                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFixedWorldDirection;                           // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              FixedWorldDirection;                               // 0xD4(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0xB0 - 0x98)
// ScriptStruct Engine.RootMotionSource_ConstantForce
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
public:
	struct FVector                               Force;                                             // 0x98(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           StrengthOverTime;                                  // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.BasedMovementInfo
struct FBasedMovementInfo
{
public:
	class UPrimitiveComponent*                   MovementBase;                                      // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                Location;                                          // 0x10(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x1C(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bServerHasBaseComponent;                           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelativeRotation;                                 // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bServerHasVelocity;                                // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161D[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// ScriptStruct Engine.RepRootMotionMontage
struct FRepRootMotionMontage
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          AnimMontage;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Position;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                Location;                                          // 0x14(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x20(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_161F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   MovementBase;                                      // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MovementBaseBoneName;                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelativePosition;                                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelativeRotation;                                 // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1620[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRootMotionSourceGroup                AuthoritativeRootMotion;                           // 0x48(0x100)(NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 Acceleration;                                      // 0x148(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 LinearVelocity;                                    // 0x154(0xC)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
struct FSimulatedRootMotionReplicatedMove
{
public:
	float                                        Time;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1621[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRepRootMotionMontage                 RootMotion;                                        // 0x8(0x160)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.SmartName
struct FSmartName
{
public:
	class FName                                  DisplayName;                                       // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1622[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.SmartNameContainer
struct FSmartNameContainer
{
public:
	uint8                                        Pad_1623[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct Engine.SmartNameMapping
struct FSmartNameMapping
{
public:
	uint8                                        Pad_1624[0xF8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CurveMetaData
struct FCurveMetaData
{
public:
	uint8                                        Pad_1625[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Engine.AnimCurveType
struct FAnimCurveType
{
public:
	uint8                                        Pad_1626[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.VirtualBone
struct FVirtualBone
{
public:
	class FName                                  SourceBoneName;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetBoneName;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VirtualBoneName;                                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AnimSlotGroup
struct FAnimSlotGroup
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SlotNames;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.NameMapping
struct FNameMapping
{
public:
	class FName                                  NodeName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.RigConfiguration
struct FRigConfiguration
{
public:
	class URig*                                  Rig;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNameMapping>                  BoneMappingTable;                                  // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BoneReductionSetting
struct FBoneReductionSetting
{
public:
	TArray<class FName>                          BonesToRemove;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ReferencePose
struct FReferencePose
{
public:
	class FName                                  PoseName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ReferencePose;                                     // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BoneNode
struct FBoneNode
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneTranslationRetargetingMode   TranslationRetargetingMode;                        // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1627[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SkeletonToMeshLinkup
struct FSkeletonToMeshLinkup
{
public:
	TArray<int32>                                SkeletonToMeshTable;                               // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                MeshToSkeletonTable;                               // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AnimCurveBase
struct FAnimCurveBase
{
public:
	class FName                                  LastObservedName;                                  // 0x0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartName                            Name;                                              // 0x8(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        CurveTypeFlags;                                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1628[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x90 - 0x20)
// ScriptStruct Engine.FloatCurve
struct FFloatCurve : public FAnimCurveBase
{
public:
	struct FRichCurve                            FloatCurve;                                        // 0x20(0x70)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.RawCurveTracks
struct FRawCurveTracks
{
public:
	TArray<struct FFloatCurve>                   FloatCurves;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x150 (0x170 - 0x20)
// ScriptStruct Engine.VectorCurve
struct FVectorCurve : public FAnimCurveBase
{
public:
	struct FRichCurve                            FloatCurves;                                       // 0x20(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1629[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x450 (0x470 - 0x20)
// ScriptStruct Engine.TransformCurve
struct FTransformCurve : public FAnimCurveBase
{
public:
	struct FVectorCurve                          TranslationCurve;                                  // 0x20(0x170)(NativeAccessSpecifierPublic)
	struct FVectorCurve                          RotationCurve;                                     // 0x190(0x170)(NativeAccessSpecifierPublic)
	struct FVectorCurve                          ScaleCurve;                                        // 0x300(0x170)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AnimSegment
struct FAnimSegment
{
public:
	class UAnimSequenceBase*                     AnimReference;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartPos;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimStartTime;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimEndTime;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimPlayRate;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoopingCount;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimTrack
struct FAnimTrack
{
public:
	TArray<struct FAnimSegment>                  AnimSegments;                                      // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.RootMotionExtractionStep
struct FRootMotionExtractionStep
{
public:
	class UAnimSequence*                         AnimSequence;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartPosition;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndPosition;                                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// ScriptStruct Engine.AnimMontageInstance
struct FAnimMontageInstance
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162B[0x88];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bPlaying;                                          // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultBlendTimeMultiplier;                        // 0x94(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162D[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                NextSections;                                      // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int32>                                PrevSections;                                      // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_162E[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnimNotifyEvent>              ActiveStateBranchingPoints;                        // 0xF0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        Position;                                          // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAlphaBlend                           Blend;                                             // 0x108(0x38)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_162F[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DisableRootMotionCount;                            // 0x160(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1630[0x2C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.BranchingPointMarker
struct FBranchingPointMarker
{
public:
	int32                                        NotifyIndex;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TriggerTime;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimNotifyEventType              NotifyEventType;                                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1631[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x40 - 0x30)
// ScriptStruct Engine.BranchingPoint
struct FBranchingPoint : public FAnimLinkableElement
{
public:
	class FName                                  EventName;                                         // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayTime;                                       // 0x38(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TriggerTimeOffset;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.SlotAnimationTrack
struct FSlotAnimationTrack
{
public:
	class FName                                  SlotName;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimTrack                            AnimTrack;                                         // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x28 (0x58 - 0x30)
// ScriptStruct Engine.CompositeSection
struct FCompositeSection : public FAnimLinkableElement
{
public:
	class FName                                  SectionName;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x38(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1632[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NextSectionName;                                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMetaData*>                 MetaData;                                          // 0x48(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.NavAvoidanceMask
struct FNavAvoidanceMask
{
public:
	uint8                                        bGroup0 : 1;                                       // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup1 : 1;                                       // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup2 : 1;                                       // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup3 : 1;                                       // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup4 : 1;                                       // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup5 : 1;                                       // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup6 : 1;                                       // Mask: 0x40, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup7 : 1;                                       // Mask: 0x80, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup8 : 1;                                       // Mask: 0x1, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup9 : 1;                                       // Mask: 0x2, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup10 : 1;                                      // Mask: 0x4, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup11 : 1;                                      // Mask: 0x8, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup12 : 1;                                      // Mask: 0x10, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup13 : 1;                                      // Mask: 0x20, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup14 : 1;                                      // Mask: 0x40, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup15 : 1;                                      // Mask: 0x80, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup16 : 1;                                      // Mask: 0x1, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup17 : 1;                                      // Mask: 0x2, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup18 : 1;                                      // Mask: 0x4, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup19 : 1;                                      // Mask: 0x8, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup20 : 1;                                      // Mask: 0x10, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup21 : 1;                                      // Mask: 0x20, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup22 : 1;                                      // Mask: 0x40, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup23 : 1;                                      // Mask: 0x80, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup24 : 1;                                      // Mask: 0x1, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup25 : 1;                                      // Mask: 0x2, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup26 : 1;                                      // Mask: 0x4, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup27 : 1;                                      // Mask: 0x8, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup28 : 1;                                      // Mask: 0x10, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup29 : 1;                                      // Mask: 0x20, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup30 : 1;                                      // Mask: 0x40, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGroup31 : 1;                                      // Mask: 0x80, PropSize: 0x10x3(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x58 - 0x50)
// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_1633[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Engine.FindFloorResult
struct FFindFloorResult
{
public:
	uint8                                        bBlockingHit : 1;                                  // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWalkableFloor : 1;                                // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLineTrace : 1;                                    // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1BB : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1634[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FloorDist;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineDist;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1635[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            HitResult;                                         // 0x10(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.ConstraintBaseParams
struct FConstraintBaseParams
{
public:
	float                                        Stiffness;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Restitution;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ContactDistance;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSoftConstraint : 1;                               // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1636[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x1C - 0x14)
// ScriptStruct Engine.TwistConstraint
struct FTwistConstraint : public FConstraintBaseParams
{
public:
	float                                        TwistLimitDegrees;                                 // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAngularConstraintMotion          TwistMotion;                                       // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1637[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0x20 - 0x14)
// ScriptStruct Engine.ConeConstraint
struct FConeConstraint : public FConstraintBaseParams
{
public:
	float                                        Swing1LimitDegrees;                                // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Swing2LimitDegrees;                                // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAngularConstraintMotion          Swing1Motion;                                      // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAngularConstraintMotion          Swing2Motion;                                      // 0x1D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1638[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x1C - 0x14)
// ScriptStruct Engine.LinearConstraint
struct FLinearConstraint : public FConstraintBaseParams
{
public:
	float                                        Limit;                                             // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELinearConstraintMotion           XMotion;                                           // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELinearConstraintMotion           YMotion;                                           // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELinearConstraintMotion           ZMotion;                                           // 0x1A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1639[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ConstraintDrive
struct FConstraintDrive
{
public:
	float                                        Stiffness;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxForce;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnablePositionDrive : 1;                          // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableVelocityDrive : 1;                          // Mask: 0x2, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4C (0x4C - 0x0)
// ScriptStruct Engine.AngularDriveConstraint
struct FAngularDriveConstraint
{
public:
	struct FConstraintDrive                      TwistDrive;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FConstraintDrive                      SwingDrive;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FConstraintDrive                      SlerpDrive;                                        // 0x20(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              OrientationTarget;                                 // 0x30(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocityTarget;                             // 0x3C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAngularDriveMode                 AngularDriveMode;                                  // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4C (0x4C - 0x0)
// ScriptStruct Engine.LinearDriveConstraint
struct FLinearDriveConstraint
{
public:
	struct FVector                               PositionTarget;                                    // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VelocityTarget;                                    // 0xC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConstraintDrive                      XDrive;                                            // 0x18(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FConstraintDrive                      YDrive;                                            // 0x28(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FConstraintDrive                      ZDrive;                                            // 0x38(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bEnablePositionDrive : 1;                          // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x104 (0x104 - 0x0)
// ScriptStruct Engine.ConstraintProfileProperties
struct FConstraintProfileProperties
{
public:
	float                                        ProjectionLinearTolerance;                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectionAngularTolerance;                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearBreakThreshold;                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularBreakThreshold;                             // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearConstraint                     LinearLimit;                                       // 0x10(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FConeConstraint                       ConeLimit;                                         // 0x2C(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FTwistConstraint                      TwistLimit;                                        // 0x4C(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearDriveConstraint                LinearDrive;                                       // 0x68(0x4C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAngularDriveConstraint               AngularDrive;                                      // 0xB4(0x4C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bDisableCollision : 1;                             // Mask: 0x1, PropSize: 0x10x100(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bParentDominates : 1;                              // Mask: 0x2, PropSize: 0x10x100(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableProjection : 1;                             // Mask: 0x4, PropSize: 0x10x100(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAngularBreakable : 1;                             // Mask: 0x8, PropSize: 0x10x100(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLinearBreakable : 1;                              // Mask: 0x10, PropSize: 0x10x100(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct Engine.ConstraintInstance
struct FConstraintInstance
{
public:
	uint8                                        Pad_163E[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  JointName;                                         // 0x18(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ConstraintBone1;                                   // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ConstraintBone2;                                   // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Pos1;                                              // 0x30(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PriAxis1;                                          // 0x3C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecAxis1;                                          // 0x48(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Pos2;                                              // 0x54(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PriAxis2;                                          // 0x60(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecAxis2;                                          // 0x6C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              AngularRotationOffset;                             // 0x78(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bScaleLinearLimits : 1;                            // Mask: 0x1, PropSize: 0x10x84(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1BC : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_163F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConstraintProfileProperties          ProfileInstance;                                   // 0x8C(0x104)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1640[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.PhysicalAnimationData
struct FPhysicalAnimationData
{
public:
	class FName                                  BodyName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsLocalSimulation : 1;                            // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1BD : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1641[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OrientationStrength;                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularVelocityStrength;                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionStrength;                                  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityStrength;                                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLinearForce;                                    // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngularForce;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1642[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Engine.AtmospherePrecomputeParameters
struct FAtmospherePrecomputeParameters
{
public:
	float                                        DensityHeight;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecayHeight;                                       // 0x4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxScatteringOrder;                                // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransmittanceTexWidth;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransmittanceTexHeight;                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IrradianceTexWidth;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IrradianceTexHeight;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InscatterAltitudeSampleNum;                        // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InscatterMuNum;                                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InscatterMuSNum;                                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InscatterNuNum;                                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Engine.BaseAttenuationSettings
struct FBaseAttenuationSettings
{
public:
	uint8                                        Pad_1643[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAttenuationDistanceModel         DistanceAlgorithm;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1644[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    CustomAttenuationCurve;                            // 0x10(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EAttenuationShape                 AttenuationShape;                                  // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1645[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DBAttenuationAtMax;                                // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AttenuationShapeExtents;                           // 0x90(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConeOffset;                                        // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FalloffDistance;                                   // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1646[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x120 - 0xA8)
// ScriptStruct Engine.SoundAttenuationSettings
struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
public:
	uint8                                        bAttenuate : 1;                                    // Mask: 0x1, PropSize: 0x10xA8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSpatialize : 1;                                   // Mask: 0x2, PropSize: 0x10xA8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAttenuateWithLPF : 1;                             // Mask: 0x4, PropSize: 0x10xA8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableListenerFocus : 1;                          // Mask: 0x8, PropSize: 0x10xA8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableFocusInterpolation : 1;                     // Mask: 0x10, PropSize: 0x10xA8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableOcclusion : 1;                              // Mask: 0x20, PropSize: 0x10xA8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseComplexCollisionForOcclusion : 1;              // Mask: 0x40, PropSize: 0x10xA8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1BE : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1647[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESoundDistanceCalc                DistanceType;                                      // 0xAC(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1648[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OmniRadius;                                        // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StereoSpread;                                      // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESoundSpatializationAlgorithm     SpatializationAlgorithm;                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1649[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RadiusMin;                                         // 0xBC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadiusMax;                                         // 0xC0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPFRadiusMin;                                      // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPFRadiusMax;                                      // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPFFrequencyAtMin;                                 // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LPFFrequencyAtMax;                                 // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FocusAzimuth;                                      // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NonFocusAzimuth;                                   // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FocusDistanceScale;                                // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NonFocusDistanceScale;                             // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FocusPriorityScale;                                // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NonFocusPriorityScale;                             // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FocusVolumeAttenuation;                            // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NonFocusVolumeAttenuation;                         // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FocusAttackInterpSpeed;                            // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FocusReleaseInterpSpeed;                           // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OcclusionTraceChannel;                             // 0xFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OcclusionLowPassFilterFrequency;                   // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionVolumeAttenuation;                        // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionInterpolationTime;                        // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverbWetLevelMin;                                 // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverbWetLevelMax;                                 // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverbDistanceMin;                                 // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverbDistanceMax;                                 // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AudioComponentParam
struct FAudioComponentParam
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatParam;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolParam;                                         // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntParam;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundWave*                            SoundWaveParam;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0xA8 - 0xA8)
// ScriptStruct Engine.ForceFeedbackAttenuationSettings
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.BatchedPoint
struct FBatchedPoint
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xC(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointSize;                                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemainingLifeTime;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DepthPriority;                                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x34 - 0x0)
// ScriptStruct Engine.BatchedLine
struct FBatchedLine
{
public:
	struct FVector                               Start;                                             // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0xC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x18(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemainingLifeTime;                                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DepthPriority;                                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.MaterialSpriteElement
struct FMaterialSpriteElement
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           DistanceToOpacityCurve;                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSizeIsInScreenSpace : 1;                          // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1BF : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1650[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseSizeX;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseSizeY;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1651[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           DistanceToSizeCurve;                               // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SkelMeshComponentLODInfo
struct FSkelMeshComponentLODInfo
{
public:
	TArray<bool>                                 HiddenMaterials;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1652[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.SkelMeshSkinWeightInfo
struct FSkelMeshSkinWeightInfo
{
public:
	int32                                        Bones;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1653[0x1C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        Weights;                                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1654[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.SingleAnimationPlayData
struct FSingleAnimationPlayData
{
public:
	class UAnimationAsset*                       AnimToPlay;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSavedLooping : 1;                                 // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSavedPlaying : 1;                                 // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C0 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1655[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SavedPosition;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SavedPlayRate;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1656[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_1657[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_1658[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.InstancedStaticMeshMappingInfo
struct FInstancedStaticMeshMappingInfo
{
public:
	uint8                                        Pad_1659[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.InstancedStaticMeshInstanceData
struct FInstancedStaticMeshInstanceData
{
public:
	struct FMatrix                               Transform;                                         // 0x0(0x40)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             LightmapUVBias;                                    // 0x40(0x8)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowmapUVBias;                                   // 0x48(0x8)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.ClusterNode
struct FClusterNode
{
public:
	struct FVector                               BoundMin;                                          // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FirstChild;                                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoundMax;                                          // 0x10(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastChild;                                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FirstInstance;                                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastInstance;                                      // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Engine.SplineMeshParams
struct FSplineMeshParams
{
public:
	struct FVector                               StartPos;                                          // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartTangent;                                      // 0xC(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             StartScale;                                        // 0x18(0x8)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartRoll;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             StartOffset;                                       // 0x24(0x8)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndPos;                                            // 0x2C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndTangent;                                        // 0x38(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             EndScale;                                          // 0x44(0x8)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndRoll;                                           // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             EndOffset;                                         // 0x50(0x8)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// ScriptStruct Engine.SplinePoint
struct FSplinePoint
{
public:
	float                                        InputKey;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x4(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ArriveTangent;                                     // 0x10(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LeaveTangent;                                      // 0x1C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x28(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x34(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplinePointType                  Type;                                              // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.DebugDisplayProperty
struct FDebugDisplayProperty
{
public:
	class UObject*                               Obj;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   WithinClass;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.EngineShowFlagsSetting
struct FEngineShowFlagsSetting
{
public:
	class FString                                ShowFlagName;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.TimelineEventEntry
struct FTimelineEventEntry
{
public:
	float                                        Time;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           EventFunc;                                         // 0x8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.TimelineVectorTrack
struct FTimelineVectorTrack
{
public:
	class UCurveVector*                          VectorCurve;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           InterpFunc;                                        // 0x8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  TrackName;                                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VectorPropertyName;                                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                       VectorProperty;                                    // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165E[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.TimelineFloatTrack
struct FTimelineFloatTrack
{
public:
	class UCurveFloat*                           FloatCurve;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           InterpFunc;                                        // 0x8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  TrackName;                                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FloatPropertyName;                                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFloatProperty*                        FloatProperty;                                     // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165F[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.TimelineLinearColorTrack
struct FTimelineLinearColorTrack
{
public:
	class UCurveLinearColor*                     LinearColorCurve;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           InterpFunc;                                        // 0x8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  TrackName;                                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LinearColorPropertyName;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                       LinearColorProperty;                               // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1660[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Engine.Timeline
struct FTimeline
{
public:
	enum class ETimelineLengthMode               LengthMode;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1661[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Length;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bReversePlayback : 1;                              // Mask: 0x2, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bPlaying : 1;                                      // Mask: 0x4, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1C1 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1662[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlayRate;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Position;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1663[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTimelineEventEntry>           Events;                                            // 0x18(0x10)(ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineVectorTrack>          InterpVectors;                                     // 0x28(0x10)(ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineFloatTrack>           InterpFloats;                                      // 0x38(0x10)(ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineLinearColorTrack>     InterpLinearColors;                                // 0x48(0x10)(ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	UDelegateProperty_                           TimelinePostUpdateFunc;                            // 0x58(0x10)(ZeroConstructor, InstancedReference, RepSkip, NoDestructor, NativeAccessSpecifierPrivate)
	UDelegateProperty_                           TimelineFinishedFunc;                              // 0x68(0x10)(ZeroConstructor, InstancedReference, RepSkip, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1664[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                PropertySetObject;                                 // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DirectionPropertyName;                             // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UProperty*                             DirectionProperty;                                 // 0xD0(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1665[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.CompressedTrack
struct FCompressedTrack
{
public:
	TArray<uint8>                                ByteStream;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Times;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Mins;                                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1666[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Ranges;                                            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1667[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CurveTrack
struct FCurveTrack
{
public:
	class FName                                  CurveName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                CurveWeights;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ScaleTrack
struct FScaleTrack
{
public:
	TArray<struct FVector>                       ScaleKeys;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Times;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.RotationTrack
struct FRotationTrack
{
public:
	TArray<struct FQuat>                         RotKeys;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Times;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.TranslationTrack
struct FTranslationTrack
{
public:
	TArray<struct FVector>                       PosKeys;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Times;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.TrackToSkeletonMap
struct FTrackToSkeletonMap
{
public:
	int32                                        BoneTreeIndex;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.RawAnimSequenceTrack
struct FRawAnimSequenceTrack
{
public:
	TArray<struct FVector>                       PosKeys;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                         RotKeys;                                           // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       ScaleKeys;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AnimSequenceTrackContainer
struct FAnimSequenceTrackContainer
{
public:
	TArray<struct FRawAnimSequenceTrack>         AnimationTracks;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          TrackNames;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.PerBoneInterpolation
struct FPerBoneInterpolation
{
public:
	struct FBoneReference                        BoneReference;                                     // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InterpolationSpeedPerSec;                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1668[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.EditorElement
struct FEditorElement
{
public:
	int32                                        Indices;                                           // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1669[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weights;                                           // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.GridBlendSample
struct FGridBlendSample
{
public:
	struct FEditorElement                        GridElement;                                       // 0x0(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        BlendWeight;                                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.BlendSample
struct FBlendSample
{
public:
	class UAnimSequence*                         Animation;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SampleValue;                                       // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RateScale;                                         // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.BlendParameter
struct FBlendParameter
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GridNum;                                           // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.InterpolationParameter
struct FInterpolationParameter
{
public:
	float                                        InterpolationTime;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFilterInterpolationType          InterpolationType;                                 // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.PoseData
struct FPoseData
{
public:
	TArray<struct FTransform>                    LocalSpacePose;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 LocalSpacePoseMask;                                // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                CurveData;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Engine.PoseDataContainer
struct FPoseDataContainer
{
public:
	TArray<struct FSmartName>                    PoseNames;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPoseData>                     Poses;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FName>                          Tracks;                                            // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     TrackMap;                                          // 0x30(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FAnimCurveBase>                Curves;                                            // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.BakedStateExitTransition
struct FBakedStateExitTransition
{
public:
	int32                                        CanTakeDelegateIndex;                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CustomResultNodeIndex;                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransitionIndex;                                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDesiredTransitionReturnValue;                     // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutomaticRemainingTimeRule;                       // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                PoseEvaluatorLinks;                                // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.BakedAnimationState
struct FBakedAnimationState
{
public:
	class FName                                  StateName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBakedStateExitTransition>     Transitions;                                       // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        StateRootNodeIndex;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartNotify;                                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndNotify;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FullyBlendedNotify;                                // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAConduit;                                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EntryRuleNodeIndex;                                // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PlayerNodeIndices;                                 // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAlwaysResetOnEntry;                               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.AnimationStateBase
struct FAnimationStateBase
{
public:
	class FName                                  StateName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct Engine.AnimationTransitionBetweenStates
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
public:
	int32                                        PreviousState;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NextState;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrossfadeDuration;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartNotify;                                       // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndNotify;                                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterruptNotify;                                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 BlendMode;                                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1670[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CustomCurve;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                         BlendProfile;                                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransitionLogicType              LogicType;                                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1671[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.BakedAnimationStateMachine
struct FBakedAnimationStateMachine
{
public:
	class FName                                  MachineName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialState;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1672[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBakedAnimationState>          States;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimationTransitionBetweenStates> Transitions;                                       // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimationTransitionRule
struct FAnimationTransitionRule
{
public:
	class FName                                  RuleToExecute;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TransitionReturnVal;                               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1673[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TransitionIndex;                                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Engine.AnimationState
struct FAnimationState : public FAnimationStateBase
{
public:
	TArray<struct FAnimationTransitionRule>      Transitions;                                       // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        StateRootNodeIndex;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartNotify;                                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndNotify;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FullyBlendedNotify;                                // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.SlotEvaluationPose
struct FSlotEvaluationPose
{
public:
	enum class EAdditiveAnimationType            AdditiveType;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1674[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1675[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.A2Pose
struct FA2Pose
{
public:
	TArray<struct FTransform>                    Bones;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x28 - 0x10)
// ScriptStruct Engine.A2CSPose
struct FA2CSPose : public FA2Pose
{
public:
	uint8                                        Pad_1676[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                ComponentSpaceFlags;                               // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.BranchingPointNotifyPayload
struct FBranchingPointNotifyPayload
{
public:
	uint8                                        Pad_1677[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AnimSetMeshLinkup
struct FAnimSetMeshLinkup
{
public:
	TArray<int32>                                BoneToTrackTable;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.AssetImportInfo
struct FAssetImportInfo
{
public:
	uint8                                        Pad_1678[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PrimaryAssetRules
struct FPrimaryAssetRules
{
public:
	int32                                        Priority;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyRecursively;                                 // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1679[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChunkId;                                           // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPrimaryAssetCookRule             CookRule;                                          // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.PrimaryAssetTypeInfo
struct FPrimaryAssetTypeInfo
{
public:
	class FName                                  PrimaryAssetType;                                  // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UObject>                 AssetBaseClass;                                    // 0x8(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                AssetBaseClassLoaded;                              // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBlueprintClasses;                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEditorOnly;                                     // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDirectoryPath>                Directories;                                       // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FStringAssetReference>         SpecificAssets;                                    // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FPrimaryAssetRules                    Rules;                                             // 0x58(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        AssetScanPaths;                                    // 0x68(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         bIsDynamicAsset;                                   // 0x78(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfAssets;                                    // 0x7C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.AssetMapping
struct FAssetMapping
{
public:
	class UAnimationAsset*                       SourceAsset;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       TargetAsset;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.LaunchOnTestSettings
struct FLaunchOnTestSettings
{
public:
	struct FFilePath                             LaunchOnTestmap;                                   // 0x0(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	class FString                                DeviceID;                                          // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.EditorMapPerformanceTestDefinition
struct FEditorMapPerformanceTestDefinition
{
public:
	struct FStringAssetReference                 PerformanceTestmap;                                // 0x0(0x10)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TestTimer;                                         // 0x10(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ImportFactorySettingValues
struct FImportFactorySettingValues
{
public:
	class FString                                SettingName;                                       // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.EditorImportWorkflowDefinition
struct FEditorImportWorkflowDefinition
{
public:
	struct FFilePath                             ImportFilePath;                                    // 0x0(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FImportFactorySettingValues>   FactorySettings;                                   // 0x10(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
struct FBuildPromotionImportWorkflowSettings
{
public:
	struct FEditorImportWorkflowDefinition       Diffuse;                                           // 0x0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       Normal;                                            // 0x20(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       StaticMesh;                                        // 0x40(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       ReimportStaticMesh;                                // 0x60(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       BlendShapeMesh;                                    // 0x80(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       MorphMesh;                                         // 0xA0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       SkeletalMesh;                                      // 0xC0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       Animation;                                         // 0xE0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       Sound;                                             // 0x100(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition       SurroundSound;                                     // 0x120(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport;                               // 0x140(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.BuildPromotionOpenAssetSettings
struct FBuildPromotionOpenAssetSettings
{
public:
	struct FFilePath                             BlueprintAsset;                                    // 0x0(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                             MaterialAsset;                                     // 0x10(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                             ParticleSystemAsset;                               // 0x20(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                             SkeletalMeshAsset;                                 // 0x30(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                             StaticMeshAsset;                                   // 0x40(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                             TextureAsset;                                      // 0x50(0x10)(Edit, Config, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.BuildPromotionNewProjectSettings
struct FBuildPromotionNewProjectSettings
{
public:
	struct FDirectoryPath                        NewProjectFolderOverride;                          // 0x0(0x10)(Edit, NativeAccessSpecifierPublic)
	class FString                                NewProjectNameOverride;                            // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct Engine.BuildPromotionTestSettings
struct FBuildPromotionTestSettings
{
public:
	struct FFilePath                             DefaultStaticMeshAsset;                            // 0x0(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow;                                    // 0x10(0x150)(Edit, NativeAccessSpecifierPublic)
	struct FBuildPromotionOpenAssetSettings      OpenAssets;                                        // 0x160(0x60)(Edit, NativeAccessSpecifierPublic)
	struct FBuildPromotionNewProjectSettings     NewProjectSettings;                                // 0x1C0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FFilePath                             SourceControlMaterial;                             // 0x1E0(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.BlueprintEditorPromotionSettings
struct FBlueprintEditorPromotionSettings
{
public:
	struct FFilePath                             FirstMeshPath;                                     // 0x0(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FFilePath                             SecondMeshPath;                                    // 0x10(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FFilePath                             DefaultParticleAsset;                              // 0x20(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ParticleEditorPromotionSettings
struct FParticleEditorPromotionSettings
{
public:
	struct FFilePath                             DefaultParticleAsset;                              // 0x0(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.MaterialEditorPromotionSettings
struct FMaterialEditorPromotionSettings
{
public:
	struct FFilePath                             DefaultMaterialAsset;                              // 0x0(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FFilePath                             DefaultDiffuseTexture;                             // 0x10(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FFilePath                             DefaultNormalTexture;                              // 0x20(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.EditorImportExportTestDefinition
struct FEditorImportExportTestDefinition
{
public:
	struct FFilePath                             ImportFilePath;                                    // 0x0(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	class FString                                ExportFileExtension;                               // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipExport;                                       // 0x20(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FImportFactorySettingValues>   FactorySettings;                                   // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.ExternalToolDefinition
struct FExternalToolDefinition
{
public:
	class FString                                ToolName;                                          // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             ExecutablePath;                                    // 0x10(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	class FString                                CommandLineOptions;                                // 0x20(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        WorkingDirectory;                                  // 0x30(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	class FString                                ScriptExtension;                                   // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        ScriptDirectory;                                   // 0x50(0x10)(Edit, Config, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.OpenTestAsset
struct FOpenTestAsset
{
public:
	struct FFilePath                             AssetToOpen;                                       // 0x0(0x10)(Edit, NativeAccessSpecifierPublic)
	bool                                         bSkipTestWhenUnAttended;                           // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3C (0x3C - 0x0)
// ScriptStruct Engine.NavAvoidanceData
struct FNavAvoidanceData
{
public:
	uint8                                        Pad_1680[0x3C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.BlendProfileBoneEntry
struct FBlendProfileBoneEntry
{
public:
	struct FBoneReference                        BoneReference;                                     // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BlendScale;                                        // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1681[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.EditedDocumentInfo
struct FEditedDocumentInfo
{
public:
	class UObject*                               EditedObject;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SavedViewOffset;                                   // 0x8(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SavedZoomAmount;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1682[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.BPInterfaceDescription
struct FBPInterfaceDescription
{
public:
	TSubclassOf<class UInterface>                Interface;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEdGraph*>                      Graphs;                                            // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.BPVariableMetaDataEntry
struct FBPVariableMetaDataEntry
{
public:
	class FName                                  DataKey;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DataValue;                                         // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct Engine.BPVariableDescription
struct FBPVariableDescription
{
public:
	class FName                                  VarName;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 VarGuid;                                           // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdGraphPinType                       VarType;                                           // 0x18(0x80)(Edit, NativeAccessSpecifierPublic)
	class FString                                FriendlyName;                                      // 0x98(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Category;                                          // 0xA8(0x18)(Edit, NativeAccessSpecifierPublic)
	uint64                                       PropertyFlags;                                     // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RepNotifyFunc;                                     // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELifetimeCondition                ReplicationCondition;                              // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1683[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBPVariableMetaDataEntry>      MetaDataArray;                                     // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                DefaultValue;                                      // 0xE8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Engine.CompilerNativizationOptions
struct FCompilerNativizationOptions
{
public:
	bool                                         ServerOnlyPlatform;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClientOnlyPlatform;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AnimParentNodeAssetOverride
struct FAnimParentNodeAssetOverride
{
public:
	class UAnimationAsset*                       NewAsset;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ParentNodeGuid;                                    // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.AnimGroupInfo
struct FAnimGroupInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.DataTableCategoryHandle
struct FDataTableCategoryHandle
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ColumnName;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowContents;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.DialogueContext
struct FDialogueContext
{
public:
	class UDialogueVoice*                        Speaker;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDialogueVoice*>                Targets;                                           // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.DialogueWaveParameter
struct FDialogueWaveParameter
{
public:
	class UDialogueWave*                         DialogueWave;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogueContext                      Context;                                           // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.PredictProjectilePathPointData
struct FPredictProjectilePathPointData
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0xC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Engine.PredictProjectilePathResult
struct FPredictProjectilePathResult
{
public:
	TArray<struct FPredictProjectilePathPointData> PathData;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FPredictProjectilePathPointData       LastTraceDestination;                              // 0x10(0x1C)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1684[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            HitResult;                                         // 0x30(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.PredictProjectilePathParams
struct FPredictProjectilePathParams
{
public:
	struct FVector                               StartLocation;                                     // 0x0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LaunchVelocity;                                    // 0xC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceWithCollision;                               // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1685[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProjectileRadius;                                  // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSimTime;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceWithChannel;                                 // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1686[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        SimFrequency;                                      // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideGravityZ;                                  // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrawDebugTrace                   DrawDebugType;                                     // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1687[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DrawDebugTime;                                     // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceComplex;                                     // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1688[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.VectorSpringState
struct FVectorSpringState
{
public:
	uint8                                        Pad_1689[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.FloatSpringState
struct FFloatSpringState
{
public:
	uint8                                        Pad_168A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DrawToRenderTargetContext
struct FDrawToRenderTargetContext
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
struct FBlueprintComponentChangedPropertyInfo
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArrayIndex;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStruct*                               PropertyScope;                                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.BlueprintCookedComponentInstancingData
struct FBlueprintCookedComponentInstancingData
{
public:
	bool                                         bIsValid;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;                               // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_168E[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.EventGraphFastCallPair
struct FEventGraphFastCallPair
{
public:
	class UFunction*                             FunctionToPatch;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EventGraphCallOffset;                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.BlueprintDebugData
struct FBlueprintDebugData
{
public:
	uint8                                        Pad_1690[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.PointerToUberGraphFrame
struct FPointerToUberGraphFrame
{
public:
	uint8                                        Pad_1691[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct Engine.DebuggingInfoForSingleFunction
struct FDebuggingInfoForSingleFunction
{
public:
	uint8                                        Pad_1692[0x1E0];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.NodeToCodeAssociation
struct FNodeToCodeAssociation
{
public:
	uint8                                        Pad_1693[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.AnimBlueprintDebugData
struct FAnimBlueprintDebugData
{
public:
	uint8                                        Pad_1694[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.AnimationFrameSnapshot
struct FAnimationFrameSnapshot
{
public:
	uint8                                        Pad_1695[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Engine.StateMachineDebugData
struct FStateMachineDebugData
{
public:
	uint8                                        Pad_1696[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.KShapeElem
struct FKShapeElem
{
public:
	uint8                                        Pad_1697[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x90 - 0x20)
// ScriptStruct Engine.KConvexElem
struct FKConvexElem : public FKShapeElem
{
public:
	TArray<struct FVector>                       VertexData;                                        // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBox                                  ElemBox;                                           // 0x30(0x1C)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1698[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x50(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1699[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x90 - 0x20)
// ScriptStruct Engine.KBoxElem
struct FKBoxElem : public FKShapeElem
{
public:
	struct FMatrix                               TM;                                                // 0x20(0x40)(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Center;                                            // 0x60(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Orientation;                                       // 0x70(0x10)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        X;                                                 // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x70 - 0x20)
// ScriptStruct Engine.KSphereElem
struct FKSphereElem : public FKShapeElem
{
public:
	struct FMatrix                               TM;                                                // 0x20(0x40)(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Center;                                            // 0x60(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x90 - 0x20)
// ScriptStruct Engine.KSphylElem
struct FKSphylElem : public FKShapeElem
{
public:
	struct FMatrix                               TM;                                                // 0x20(0x40)(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Center;                                            // 0x60(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Orientation;                                       // 0x70(0x10)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.KAggregateGeom
struct FKAggregateGeom
{
public:
	TArray<struct FKSphereElem>                  SphereElems;                                       // 0x0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKBoxElem>                     BoxElems;                                          // 0x10(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKSphylElem>                   SphylElems;                                        // 0x20(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKConvexElem>                  ConvexElems;                                       // 0x30(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_169E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.CircleElement2D
struct FCircleElement2D
{
public:
	struct FVector2D                             Center;                                            // 0x0(0x8)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.BoxElement2D
struct FBoxElement2D
{
public:
	struct FVector2D                             Center;                                            // 0x0(0x8)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ConvexElement2D
struct FConvexElement2D
{
public:
	TArray<struct FVector2D>                     VertexData;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.AggregateGeometry2D
struct FAggregateGeometry2D
{
public:
	TArray<struct FCircleElement2D>              CircleElements;                                    // 0x0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoxElement2D>                 BoxElements;                                       // 0x10(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FConvexElement2D>              ConvexElements;                                    // 0x20(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.PhysicalAnimationProfile
struct FPhysicalAnimationProfile
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPhysicalAnimationData                PhysicalAnimationData;                             // 0x8(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.BuilderPoly
struct FBuilderPoly
{
public:
	TArray<int32>                                VertexIndices;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Direction;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemName;                                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolyFlags;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.WrappedStringElement
struct FWrappedStringElement
{
public:
	class FString                                Value;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LineExtent;                                        // 0x10(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.TextSizingParameters
struct FTextSizingParameters
{
public:
	float                                        DrawX;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DrawY;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DrawXL;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DrawYL;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Scaling;                                           // 0x10(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                 DrawFont;                                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SpacingAdjust;                                     // 0x20(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CanvasIcon
struct FCanvasIcon
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        V;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UL;                                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VL;                                                // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.AutoCompleteNode
struct FAutoCompleteNode
{
public:
	int32                                        IndexChar;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                AutoCompleteListIndices;                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C8 (0x1C8 - 0x0)
// ScriptStruct Engine.RuntimeCurveLinearColor
struct FRuntimeCurveLinearColor
{
public:
	struct FRichCurve                            ColorCurves;                                       // 0x0(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_16A3[0x150];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveLinearColor*                     ExternalCurve;                                     // 0x1C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.NamedCurveValue
struct FNamedCurveValue
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.PreviewMeshCollectionEntry
struct FPreviewMeshCollectionEntry
{
public:
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0x0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.DestructibleChunkParameters
struct FDestructibleChunkParameters
{
public:
	bool                                         bIsSupportChunk;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotFracture;                                    // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotDamage;                                      // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotCrumble;                                     // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.FractureMaterial
struct FFractureMaterial
{
public:
	struct FVector2D                             UVScale;                                           // 0x0(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UVOffset;                                          // 0x8(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Tangent;                                           // 0x10(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UAngle;                                            // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InteriorElementIndex;                              // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.PrimaryAssetRulesOverride
struct FPrimaryAssetRulesOverride
{
public:
	struct FPrimaryAssetId                       PrimaryAssetId;                                    // 0x0(0x10)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPrimaryAssetRules                    Rules;                                             // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AssetManagerRedirect
struct FAssetManagerRedirect
{
public:
	class FString                                Old;                                               // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                New;                                               // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AudioQualitySettings
struct FAudioQualitySettings
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	int32                                        MaxChannels;                                       // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CustomProfile
struct FCustomProfile
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FResponseChannel>              CustomResponses;                                   // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CustomChannelSetup
struct FCustomChannelSetup
{
public:
	enum class ECollisionChannel                 Channel;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionResponse                DefaultResponse;                                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceType;                                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStaticObject;                                     // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A7[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.CollisionResponseTemplate
struct FCollisionResponseTemplate
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionEnabled                 CollisionEnabled;                                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ObjectTypeName;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FResponseChannel>              CustomResponses;                                   // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                HelpMessage;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanModify;                                        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A9[0x27];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PhysicalSurfaceName
struct FPhysicalSurfaceName
{
public:
	enum class EPhysicalSurface                  Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.DialogueContextMapping
struct FDialogueContextMapping
{
public:
	struct FDialogueContext                      Context;                                           // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class USoundWave*                            SoundWave;                                         // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LocalizationKeyFormat;                             // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogueSoundWaveProxy*               Proxy;                                             // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct Engine.RawDistributionFloat
struct FRawDistributionFloat : public FRawDistribution
{
public:
	float                                        MinValue;                                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxValue;                                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDistributionFloat*                    Distribution;                                      // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct Engine.RawDistributionVector
struct FRawDistributionVector : public FRawDistribution
{
public:
	float                                        MinValue;                                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxValue;                                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               MinValueVec;                                       // 0x30(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               MaxValueVec;                                       // 0x3C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDistributionVector*                   Distribution;                                      // 0x48(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.BlueprintComponentDelegateBinding
struct FBlueprintComponentDelegateBinding
{
public:
	class FName                                  ComponentPropertyName;                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DelegatePropertyName;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionNameToBind;                                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.BlueprintInputDelegateBinding
struct FBlueprintInputDelegateBinding
{
public:
	uint8                                        bConsumeInput : 1;                                 // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExecuteWhenPaused : 1;                            // Mask: 0x2, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideParentBinding : 1;                        // Mask: 0x4, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x20 - 0x4)
// ScriptStruct Engine.BlueprintInputActionDelegateBinding
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
public:
	uint8                                        Pad_16AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InputActionName;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       InputKeyEvent;                                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FunctionNameToBind;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x18 - 0x4)
// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
public:
	uint8                                        Pad_16AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InputAxisName;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionNameToBind;                                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x28 - 0x4)
// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
public:
	uint8                                        Pad_16AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  AxisKey;                                           // 0x8(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionNameToBind;                                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x38 - 0x4)
// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
public:
	uint8                                        Pad_16B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           InputChord;                                        // 0x8(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       InputKeyEvent;                                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FunctionNameToBind;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x10 - 0x4)
// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
public:
	enum class EInputEvent                       InputKeyEvent;                                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FunctionNameToBind;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.GraphReference
struct FGraphReference
{
public:
	class UEdGraph*                              MacroGraph;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlueprint*                            GraphBlueprint;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 GraphGuid;                                         // 0x10(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Engine.EdGraphSchemaAction
struct FEdGraphSchemaAction
{
public:
	uint8                                        Pad_16B3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MenuDescription;                                   // 0x8(0x18)(NativeAccessSpecifierPrivate)
	class FString                                TooltipDescription;                                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  Category;                                          // 0x30(0x18)(NativeAccessSpecifierPrivate)
	class FText                                  Keywords;                                          // 0x48(0x18)(NativeAccessSpecifierPrivate)
	int32                                        Grouping;                                          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SectionId;                                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        MenuDescriptionArray;                              // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        FullSearchTitlesArray;                             // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        FullSearchKeywordsArray;                           // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        FullSearchCategoryArray;                           // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                SearchText;                                        // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xC0 - 0xB8)
// ScriptStruct Engine.EdGraphSchemaAction_NewNode
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
public:
	class UEdGraphNode*                          NodeTemplate;                                      // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.PacketSimulationSettings
struct FPacketSimulationSettings
{
public:
	int32                                        PktLoss;                                           // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PktOrder;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PktDup;                                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PktLag;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PktLagVariance;                                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.RollbackNetStartupActorInfo
struct FRollbackNetStartupActorInfo
{
public:
	uint8                                        Pad_16B4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Archetype;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B5[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevel*                                Level;                                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.LevelNameAndTime
struct FLevelNameAndTime
{
public:
	class FString                                LevelName;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       LevelChangeTimeInMS;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.LevelCollection
struct FLevelCollection
{
public:
	uint8                                        Pad_16B7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        GameState;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNetDriver*                            NetDriver;                                         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDemoNetDriver*                        DemoNetDriver;                                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULevel*                                PersistentLevel;                                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSet<class ULevel*>                          Levels;                                            // 0x28(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16B8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct Engine.StartAsyncSimulationFunction
struct FStartAsyncSimulationFunction : public FTickFunction
{
public:
	uint8                                        Pad_16B9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct Engine.EndPhysicsTickFunction
struct FEndPhysicsTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_16BA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct Engine.StartPhysicsTickFunction
struct FStartPhysicsTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_16BB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.LevelViewportInfo
struct FLevelViewportInfo
{
public:
	struct FVector                               CamPosition;                                       // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CamRotation;                                       // 0xC(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CamOrthoZoom;                                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CamUpdated;                                        // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.PluginRedirect
struct FPluginRedirect
{
public:
	class FString                                OldPluginName;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewPluginName;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.StructRedirect
struct FStructRedirect
{
public:
	class FName                                  OldStructName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewStructName;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.ClassRedirect
struct FClassRedirect
{
public:
	class FName                                  ObjectName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OldClassName;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewClassName;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OldSubobjName;                                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewSubobjName;                                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewClassClass;                                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewClassPackage;                                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InstanceOnly;                                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.GameNameRedirect
struct FGameNameRedirect
{
public:
	class FName                                  OldGameName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewGameName;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.ScreenMessageString
struct FScreenMessageString
{
public:
	uint64                                       Key;                                               // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ScreenMessage;                                     // 0x8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                DisplayColor;                                      // 0x18(0x4)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToDisplay;                                     // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentTimeDisplayed;                              // 0x20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TextScale;                                         // 0x24(0x8)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.DropNoteInfo
struct FDropNoteInfo
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                Comment;                                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.StatColorMapEntry
struct FStatColorMapEntry
{
public:
	float                                        In;                                                // 0x0(0x4)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Out;                                               // 0x4(0x4)(Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.StatColorMapping
struct FStatColorMapping
{
public:
	class FString                                StatName;                                          // 0x0(0x10)(ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStatColorMapEntry>            ColorMap;                                          // 0x10(0x10)(ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	uint8                                        DisableBlend : 1;                                  // Mask: 0x1, PropSize: 0x10x20(0x1)(Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.FullyLoadedPackagesInfo
struct FFullyLoadedPackagesInfo
{
public:
	enum class EFullyLoadPackageType             FullyLoadType;                                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Tag;                                               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          PackagesToLoad;                                    // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       LoadedObjects;                                     // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.LevelStreamingStatus
struct FLevelStreamingStatus
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBeLoaded : 1;                               // Mask: 0x1, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBeVisible : 1;                              // Mask: 0x2, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C2 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       LODIndex;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.NamedNetDriver
struct FNamedNetDriver
{
public:
	class UNetDriver*                            NetDriver;                                         // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2A0 (0x2A0 - 0x0)
// ScriptStruct Engine.WorldContext
struct FWorldContext
{
public:
	uint8                                        Pad_16C3[0xE8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FURL                                  LastURL;                                           // 0xE8(0x70)(NativeAccessSpecifierPublic)
	struct FURL                                  LastRemoteURL;                                     // 0x158(0x70)(NativeAccessSpecifierPublic)
	class UPendingNetGame*                       PendingNetGame;                                    // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFullyLoadedPackagesInfo>      PackagesToFullyLoad;                               // 0x1D0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C4[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULevel*>                        LoadedLevelsForPendingMapChange;                   // 0x1F0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C5[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObjectReferencer*>             ObjectReferencers;                                 // 0x218(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLevelStreamingStatus>         PendingLevelStreamingStatusUpdates;                // 0x228(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UGameViewportClient*                   GameViewport;                                      // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameInstance*                         OwningGameInstance;                                // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedNetDriver>               ActiveNetDrivers;                                  // 0x248(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C6[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.NetDriverDefinition
struct FNetDriverDefinition
{
public:
	class FName                                  DefName;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DriverClassName;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DriverClassNameFallback;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Engine.FontImportOptionsData
struct FFontImportOptionsData
{
public:
	class FString                                FontName;                                          // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableAntialiasing : 1;                           // Mask: 0x1, PropSize: 0x10x14(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableBold : 1;                                   // Mask: 0x2, PropSize: 0x10x14(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableItalic : 1;                                 // Mask: 0x4, PropSize: 0x10x14(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableUnderline : 1;                              // Mask: 0x8, PropSize: 0x10x14(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlphaOnly : 1;                                    // Mask: 0x10, PropSize: 0x10x14(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C3 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFontImportCharacterSet           CharacterSet;                                      // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Chars;                                             // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UnicodeRange;                                      // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharsFilePath;                                     // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharsFileWildcard;                                 // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCreatePrintableOnly : 1;                          // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIncludeASCIIRange : 1;                            // Mask: 0x2, PropSize: 0x10x60(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C4 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ForegroundColor;                                   // 0x64(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableDropShadow : 1;                             // Mask: 0x1, PropSize: 0x10x74(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C5 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TexturePageWidth;                                  // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TexturePageMaxHeight;                              // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XPadding;                                          // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        YPadding;                                          // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExtendBoxTop;                                      // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExtendBoxBottom;                                   // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExtendBoxRight;                                    // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExtendBoxLeft;                                     // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableLegacyMode : 1;                             // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C6 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Kerning;                                           // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseDistanceFieldAlpha : 1;                        // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C7 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DistanceFieldScaleFactor;                          // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceFieldScanRadiusScale;                      // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.FontCharacter
struct FFontCharacter
{
public:
	int32                                        StartU;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartV;                                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        USize;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VSize;                                             // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TextureIndex;                                      // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VerticalOffset;                                    // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ActiveHapticFeedbackEffect
struct FActiveHapticFeedbackEffect
{
public:
	class UHapticFeedbackEffect_Base*            HapticEffect;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Engine.HapticFeedbackDetails_Curve
struct FHapticFeedbackDetails_Curve
{
public:
	struct FRuntimeFloatCurve                    Frequency;                                         // 0x0(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Amplitude;                                         // 0x78(0x78)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ComponentKey
struct FComponentKey
{
public:
	class UClass*                                OwnerClass;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SCSVariableName;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 AssociatedGuid;                                    // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.ComponentOverrideRecord
struct FComponentOverrideRecord
{
public:
	class UClass*                                ComponentClass;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       ComponentTemplate;                                 // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComponentKey                         ComponentKey;                                      // 0x10(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData;                     // 0x30(0x50)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.InputAxisKeyMapping
struct FInputAxisKeyMapping
{
public:
	class FName                                  AxisName;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x8(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.InputActionKeyMapping
struct FInputActionKeyMapping
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x8(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShift : 1;                                        // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCtrl : 1;                                         // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlt : 1;                                          // Mask: 0x4, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCmd : 1;                                          // Mask: 0x8, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.InputAxisProperties
struct FInputAxisProperties
{
public:
	float                                        DeadZone;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sensitivity;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Exponent;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInvert : 1;                                       // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.InputAxisConfigEntry
struct FInputAxisConfigEntry
{
public:
	class FName                                  AxisKeyName;                                       // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisProperties                  AxisProperties;                                    // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.KeyBind
struct FKeyBind
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Command;                                           // 0x18(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Control : 1;                                       // Mask: 0x1, PropSize: 0x10x28(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Shift : 1;                                         // Mask: 0x2, PropSize: 0x10x28(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Alt : 1;                                           // Mask: 0x4, PropSize: 0x10x28(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Cmd : 1;                                           // Mask: 0x8, PropSize: 0x10x28(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreCtrl : 1;                                   // Mask: 0x10, PropSize: 0x10x28(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreShift : 1;                                  // Mask: 0x20, PropSize: 0x10x28(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreAlt : 1;                                    // Mask: 0x40, PropSize: 0x10x28(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreCmd : 1;                                    // Mask: 0x80, PropSize: 0x10x28(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisabled : 1;                                     // Mask: 0x1, PropSize: 0x10x29(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D3[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.CurveEdEntry
struct FCurveEdEntry
{
public:
	class UObject*                               CurveObject;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                CurveColor;                                        // 0x8(0x4)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurveName;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        bHideCurve;                                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        bColorCurve;                                       // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        bFloatingPointColorCurve;                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        bClamp;                                            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampLow;                                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampHigh;                                         // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.CurveEdTab
struct FCurveEdTab
{
public:
	class FString                                TabName;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCurveEdEntry>                 Curves;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ViewStartInput;                                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewEndInput;                                      // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewStartOutput;                                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewEndOutput;                                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.InterpEdSelKey
struct FInterpEdSelKey
{
public:
	class UInterpGroup*                          Group;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterpTrack*                          Track;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KeyIndex;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnsnappedPosition;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.CameraPreviewInfo
struct FCameraPreviewInfo
{
public:
	TSubclassOf<class APawn>                     PawnClass;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AnimSeq;                                           // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x1C(0xC)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class APawn*                                 PawnInst;                                          // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.SubTrackGroup
struct FSubTrackGroup
{
public:
	class FString                                GroupName;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                TrackIndices;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsCollapsed : 1;                                  // Mask: 0x1, PropSize: 0x10x20(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsSelected : 1;                                   // Mask: 0x2, PropSize: 0x10x20(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SupportedSubTrackInfo
struct FSupportedSubTrackInfo
{
public:
	TSubclassOf<class UInterpTrack>              SupportedClass;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubTrackName;                                      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupIndex;                                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.BoolTrackKey
struct FBoolTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value : 1;                                         // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.DirectorTrackCut
struct FDirectorTrackCut
{
public:
	float                                        Time;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionTime;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetCamGroup;                                    // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShotNumber;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.EventTrackKey
struct FEventTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EventName;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.AnimControlTrackKey
struct FAnimControlTrackKey
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         AnimSeq;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimStartOffset;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimEndOffset;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimPlayRate;                                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x1C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x1C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.InterpLookupPoint
struct FInterpLookupPoint
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.InterpLookupTrack
struct FInterpLookupTrack
{
public:
	TArray<struct FInterpLookupPoint>            Points;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.ParticleReplayTrackKey
struct FParticleReplayTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClipIDNumber;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.ToggleTrackKey
struct FToggleTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrackToggleAction                ToggleAction;                                      // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.SoundTrackKey
struct FSoundTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound;                                             // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.VisibilityTrackKey
struct FVisibilityTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVisibilityTrackAction            Action;                                            // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVisibilityTrackCondition         ActiveCondition;                                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DF[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.LayerActorStats
struct FLayerActorStats
{
public:
	class UClass*                                Type;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Total;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.ClientReceiveData
struct FClientReceiveData
{
public:
	class APlayerController*                     LocalPC;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MessageType;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MessageIndex;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MessageString;                                     // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          RelatedPlayerState_1;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          RelatedPlayerState_2;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalObject;                                    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.CustomInput
struct FCustomInput
{
public:
	class FString                                InputName;                                         // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Input;                                             // 0x10(0x38)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.FunctionExpressionOutput
struct FFunctionExpressionOutput
{
public:
	class UMaterialExpressionFunctionOutput*     ExpressionOutput;                                  // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExpressionOutputId;                                // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionOutput                     Output;                                            // 0x18(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.FunctionExpressionInput
struct FFunctionExpressionInput
{
public:
	class UMaterialExpressionFunctionInput*      ExpressionInput;                                   // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExpressionInputId;                                 // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Input;                                             // 0x18(0x38)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.MaterialParameterCollectionInfo
struct FMaterialParameterCollectionInfo
{
public:
	struct FGuid                                 StateId;                                           // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*          ParameterCollection;                               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.MaterialFunctionInfo
struct FMaterialFunctionInfo
{
public:
	struct FGuid                                 StateId;                                           // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialFunction*                     Function;                                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
struct FMaterialInstanceBasePropertyOverrides
{
public:
	bool                                         bOverride_OpacityMaskClipValue;                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverride_BlendMode;                               // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverride_ShadingModel;                            // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverride_DitheredLODTransition;                   // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverride_TwoSided;                                // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OpacityMaskClipValue;                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBlendMode                        BlendMode;                                         // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMaterialShadingModel             ShadingModel;                                      // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        TwoSided : 1;                                      // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DitheredLODTransition : 1;                         // Mask: 0x2, PropSize: 0x10x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.FontParameterValue
struct FFontParameterValue
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                 FontValue;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FontPage;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExpressionGUID;                                    // 0x14(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.CollectionParameterBase
struct FCollectionParameterBase
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ID;                                                // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Engine.CollectionVectorParameter
struct FCollectionVectorParameter : public FCollectionParameterBase
{
public:
	struct FLinearColor                          DefaultValue;                                      // 0x18(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct Engine.CollectionScalarParameter
struct FCollectionScalarParameter : public FCollectionParameterBase
{
public:
	float                                        DefaultValue;                                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.NavCollisionBox
struct FNavCollisionBox
{
public:
	struct FVector                               Offset;                                            // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Extent;                                            // 0xC(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.NavCollisionCylinder
struct FNavCollisionCylinder
{
public:
	struct FVector                               Offset;                                            // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.ParticleBurst
struct FParticleBurst
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CountLow;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ParticleRandomSeedInfo
struct FParticleRandomSeedInfo
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGetSeedFromInstance : 1;                          // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInstanceSeedIsIndex : 1;                          // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bResetSeedOnEmitterLooping : 1;                    // Mask: 0x4, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRandomlySelectSeedArray : 1;                      // Mask: 0x8, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C8 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                RandomSeeds;                                       // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.ParticleCurvePair
struct FParticleCurvePair
{
public:
	class FString                                CurveName;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               CurveObject;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.BeamModifierOptions
struct FBeamModifierOptions
{
public:
	uint8                                        bModify : 1;                                       // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScale : 1;                                        // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLock : 1;                                         // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.ParticleEvent_GenerateInfo
struct FParticleEvent_GenerateInfo
{
public:
	enum class EParticleEventType                Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Frequency;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleFrequency;                                 // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FirstTimeOnly : 1;                                 // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LastTimeOnly : 1;                                  // Mask: 0x2, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseReflectedImpactVector : 1;                      // Mask: 0x4, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseOrbitOffset : 1;                               // Mask: 0x8, PropSize: 0x10xC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1C9 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CustomName;                                        // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;                  // 0x18(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.LocationBoneSocketInfo
struct FLocationBoneSocketInfo
{
public:
	class FName                                  BoneSocketName;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.OrbitOptions
struct FOrbitOptions
{
public:
	uint8                                        bProcessDuringSpawn : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bProcessDuringUpdate : 1;                          // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseEmitterTime : 1;                               // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.EmitterDynamicParameter
struct FEmitterDynamicParameter
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseEmitterTime : 1;                               // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSpawnTimeOnly : 1;                                // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1CA : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EEmitterDynamicParameterValue     ValueMethod;                                       // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bScaleVelocityByParamValue : 1;                    // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1CB : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRawDistributionFloat                 ParamValue;                                        // 0x18(0x38)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.BeamTargetData
struct FBeamTargetData
{
public:
	class FName                                  TargetName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetPercentage;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// ScriptStruct Engine.GPUSpriteResourceData
struct FGPUSpriteResourceData
{
public:
	TArray<struct FColor>                        QuantizedColorSamples;                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FColor>                        QuantizedMiscSamples;                              // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FColor>                        QuantizedSimulationAttrSamples;                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector4                              ColorScale;                                        // 0x30(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              ColorBias;                                         // 0x40(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              MiscScale;                                         // 0x50(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              MiscBias;                                          // 0x60(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              SimulationAttrCurveScale;                          // 0x70(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              SimulationAttrCurveBias;                           // 0x80(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              SubImageSize;                                      // 0x90(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              SizeBySpeed;                                       // 0xA0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ConstantAcceleration;                              // 0xB0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OrbitOffsetBase;                                   // 0xBC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OrbitOffsetRange;                                  // 0xC8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OrbitFrequencyBase;                                // 0xD4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OrbitFrequencyRange;                               // 0xE0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OrbitPhaseBase;                                    // 0xEC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OrbitPhaseRange;                                   // 0xF8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlobalVectorFieldScale;                            // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlobalVectorFieldTightness;                        // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerParticleVectorFieldScale;                       // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerParticleVectorFieldBias;                        // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragCoefficientScale;                              // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragCoefficientBias;                               // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResilienceScale;                                   // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResilienceBias;                                    // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRadiusScale;                              // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRadiusBias;                               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionTimeBias;                                 // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRandomSpread;                             // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRandomDistribution;                       // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OneMinusFriction;                                  // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationRateScale;                                 // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraMotionBlurAmount;                            // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EParticleScreenAlignment          ScreenAlignment;                                   // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EParticleAxisLock                 LockAxisFlag;                                      // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             PivotOffset;                                       // 0x148(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRemoveHMDRoll : 1;                                // Mask: 0x1, PropSize: 0x10x150(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1CC : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinFacingCameraBlendDistance;                      // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFacingCameraBlendDistance;                      // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
struct FGPUSpriteLocalVectorFieldInfo
{
public:
	class UVectorField*                          Field;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MinInitialRotation;                                // 0x40(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MaxInitialRotation;                                // 0x4C(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RotationRate;                                      // 0x58(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tightness;                                         // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreComponentTransform : 1;                     // Mask: 0x1, PropSize: 0x10x6C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTileX : 1;                                        // Mask: 0x2, PropSize: 0x10x6C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTileY : 1;                                        // Mask: 0x4, PropSize: 0x10x6C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTileZ : 1;                                        // Mask: 0x8, PropSize: 0x10x6C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseFixDT : 1;                                     // Mask: 0x10, PropSize: 0x10x6C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C0 (0x2C0 - 0x0)
// ScriptStruct Engine.GPUSpriteEmitterInfo
struct FGPUSpriteEmitterInfo
{
public:
	class UParticleModuleRequired*               RequiredModule;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleModuleSpawn*                  SpawnModule;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleModuleSpawnPerUnit*           SpawnPerUnitModule;                                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleModule*>               SpawnModules;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGPUSpriteLocalVectorFieldInfo        LocalVectorField;                                  // 0x30(0x70)(NoDestructor, NativeAccessSpecifierPublic)
	struct FFloatDistribution                    VectorFieldScale;                                  // 0xA0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatDistribution                    DragCoefficient;                                   // 0xC8(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatDistribution                    PointAttractorStrength;                            // 0xF0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatDistribution                    Resilience;                                        // 0x118(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ConstantAcceleration;                              // 0x140(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PointAttractorPosition;                            // 0x14C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointAttractorRadiusSq;                            // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OrbitOffsetBase;                                   // 0x15C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OrbitOffsetRange;                                  // 0x168(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InvMaxSize;                                        // 0x174(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InvRotationRateScale;                              // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLifetime;                                       // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxParticleCount;                                  // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EParticleScreenAlignment          ScreenAlignment;                                   // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EParticleAxisLock                 LockAxisFlag;                                      // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bEnableCollision : 1;                              // Mask: 0x1, PropSize: 0x10x18C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1CD : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EParticleCollisionMode            CollisionMode;                                     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bRemoveHMDRoll : 1;                                // Mask: 0x1, PropSize: 0x10x194(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1CE : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_16FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinFacingCameraBlendDistance;                      // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFacingCameraBlendDistance;                      // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionVector                DynamicColor;                                      // 0x1A0(0x50)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                 DynamicAlpha;                                      // 0x1F0(0x38)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionVector                DynamicColorScale;                                 // 0x228(0x50)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                 DynamicAlphaScale;                                 // 0x278(0x38)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ParticleSystemReplayFrame
struct FParticleSystemReplayFrame
{
public:
	uint8                                        Pad_16FC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.ParticleEmitterReplayFrame
struct FParticleEmitterReplayFrame
{
public:
	uint8                                        Pad_16FD[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.TireFrictionScalePair
struct FTireFrictionScalePair
{
public:
	class UTireType*                             TireType;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrictionScale;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct Engine.PhysicsConstraintProfileHandle
struct FPhysicsConstraintProfileHandle
{
public:
	struct FConstraintProfileProperties          ProfileProperties;                                 // 0x0(0x104)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ProfileName;                                       // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DelegateArray
struct FDelegateArray
{
public:
	TArray<UDelegateProperty_>                   Delegates;                                         // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Engine.PurchaseInfo
struct FPurchaseInfo
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayDescription;                                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayPrice;                                      // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.RigTransformConstraint
struct FRigTransformConstraint
{
public:
	enum class EConstraintTransform              TranformType;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1700[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ParentSpace;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1701[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.TransformBaseConstraint
struct FTransformBaseConstraint
{
public:
	TArray<struct FRigTransformConstraint>       TransformConstraints;                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.TransformBase
struct FTransformBase
{
public:
	class FName                                  Node;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformBaseConstraint              Constraints;                                       // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1702[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.Node
struct FNode
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentName;                                        // 0x8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdvanced;                                         // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1703[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.DestructibleDamageParameters
struct FDestructibleDamageParameters
{
public:
	float                                        DamageThreshold;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageSpread;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableImpactDamage;                               // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1704[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImpactDamage;                                      // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultImpactDamageDepth;                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomImpactResistance;                           // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1705[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImpactResistance;                                  // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Engine.DestructibleDebrisParameters
struct FDestructibleDebrisParameters
{
public:
	float                                        DebrisLifetimeMin;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisLifetimeMax;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisMaxSeparationMin;                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisMaxSeparationMax;                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  ValidBounds;                                       // 0x10(0x1C)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.DestructibleDepthParameters
struct FDestructibleDepthParameters
{
public:
	enum class EImpactDamageOverride             ImpactDamageOverride;                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.DestructibleAdvancedParameters
struct FDestructibleAdvancedParameters
{
public:
	float                                        DamageCap;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactVelocityThreshold;                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxChunkSpeed;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FractureImpulseScale;                              // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.DestructibleSpecialHierarchyDepths
struct FDestructibleSpecialHierarchyDepths
{
public:
	int32                                        SupportDepth;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumFractureDepth;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDebris;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1706[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DebrisDepth;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EssentialDepth;                                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Engine.DestructibleParametersFlag
struct FDestructibleParametersFlag
{
public:
	uint8                                        bAccumulateDamage : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAssetDefinedSupport : 1;                          // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWorldSupport : 1;                                 // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDebrisTimeout : 1;                                // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDebrisMaxSeparation : 1;                          // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCrumbleSmallestChunks : 1;                        // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAccurateRaycasts : 1;                             // Mask: 0x40, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseValidBounds : 1;                               // Mask: 0x80, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFormExtendedStructures : 1;                       // Mask: 0x1, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1707[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Engine.DestructibleParameters
struct FDestructibleParameters
{
public:
	struct FDestructibleDamageParameters         DamageParameters;                                  // 0x0(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDestructibleDebrisParameters         DebrisParameters;                                  // 0x1C(0x2C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDestructibleAdvancedParameters       AdvancedParameters;                                // 0x48(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDestructibleSpecialHierarchyDepths   SpecialHierarchyDepths;                            // 0x58(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1708[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDestructibleDepthParameters>  DepthParameters;                                   // 0x70(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDestructibleParametersFlag           Flags;                                             // 0x80(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1709[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Engine.SkeletalMeshLODGroupSettings
struct FSkeletalMeshLODGroupSettings
{
public:
	float                                        ScreenSize;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_170A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkeletalMeshOptimizationSettings     OptimizationSettings;                              // 0x8(0x40)(Edit, Protected, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.TexturePlatformData
struct FTexturePlatformData
{
public:
	uint8                                        Pad_170B[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Engine.TextureSource
struct FTextureSource
{
public:
	uint8                                        Pad_170C[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.SoundConcurrencySettings
struct FSoundConcurrencySettings
{
public:
	int32                                        MaxCount;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimitToOwner : 1;                                 // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1CF : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_170D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMaxConcurrentResolutionRule      ResolutionRule;                                    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumeScale;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.SoundNodeEditorData
struct FSoundNodeEditorData
{
public:
	uint8                                        Pad_170F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.SoundGroup
struct FSoundGroup
{
public:
	enum class ESoundGroup                       SoundGroup;                                        // 0x0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1710[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DisplayName;                                       // 0x8(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysDecompressOnLoad : 1;                       // Mask: 0x1, PropSize: 0x10x18(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1D0 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1711[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DecompressedDuration;                              // 0x1C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.StreamedAudioPlatformData
struct FStreamedAudioPlatformData
{
public:
	uint8                                        Pad_1712[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.PassiveSoundMixModifier
struct FPassiveSoundMixModifier
{
public:
	class USoundMix*                             SoundMix;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinVolumeThreshold;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxVolumeThreshold;                                // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Engine.SoundClassProperties
struct FSoundClassProperties
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StereoBleed;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LFEBleed;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VoiceCenterChannelVolume;                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadioFilterVolume;                                 // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadioFilterVolumeThreshold;                        // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyEffects : 1;                                 // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysPlay : 1;                                   // Mask: 0x2, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x4, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsMusic : 1;                                      // Mask: 0x8, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverb : 1;                                       // Mask: 0x10, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1D1 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1713[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Default2DReverbSendAmount;                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCenterChannelOnly : 1;                            // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyAmbientVolumes : 1;                          // Mask: 0x2, PropSize: 0x10x24(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1D2 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1714[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAudioOutputTarget                OutputTarget;                                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1715[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.SoundClassEditorData
struct FSoundClassEditorData
{
public:
	uint8                                        Pad_1716[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.SoundClassAdjuster
struct FSoundClassAdjuster
{
public:
	class USoundClass*                           SoundClassObject;                                  // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumeAdjuster;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchAdjuster;                                     // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyToChildren : 1;                              // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1D3 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1717[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VoiceCenterChannelVolumeAdjuster;                  // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.AudioEQEffect
struct FAudioEQEffect
{
public:
	uint8                                        Pad_1718[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FrequencyCenter0;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Gain0;                                             // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bandwidth0;                                        // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrequencyCenter1;                                  // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Gain1;                                             // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bandwidth1;                                        // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrequencyCenter2;                                  // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Gain2;                                             // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bandwidth2;                                        // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrequencyCenter3;                                  // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Gain3;                                             // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bandwidth3;                                        // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Engine.DistanceDatum
struct FDistanceDatum
{
public:
	float                                        FadeInDistanceStart;                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeInDistanceEnd;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutDistanceStart;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutDistanceEnd;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Engine.ModulatorContinuousParams
struct FModulatorContinuousParams
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinInput;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxInput;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinOutput;                                         // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxOutput;                                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModulationParamMode              ParamMode;                                         // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1719[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Engine.MaterialRemapIndex
struct FMaterialRemapIndex
{
public:
	uint32                                       ImportVersionKey;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                MaterialRemap;                                     // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.StaticMaterial
struct FStaticMaterial
{
public:
	class UMaterialInterface*                    MaterialInterface;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialSlotName;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshUVChannelInfo                    UVChannelData;                                     // 0x10(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_171B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Engine.AssetEditorOrbitCameraPosition
struct FAssetEditorOrbitCameraPosition
{
public:
	bool                                         bIsSet;                                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CamOrbitPoint;                                     // 0x4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CamOrbitZoom;                                      // 0x10(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CamOrbitRotation;                                  // 0x1C(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Engine.MeshSectionInfo
struct FMeshSectionInfo
{
public:
	int32                                        MaterialIndex;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCollision;                                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastShadow;                                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Engine.MeshSectionInfoMap
struct FMeshSectionInfoMap
{
public:
	TMap<uint32, struct FMeshSectionInfo>        Map;                                               // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Engine.StaticMeshSourceModel
struct FStaticMeshSourceModel
{
public:
	struct FMeshBuildSettings                    BuildSettings;                                     // 0x0(0x40)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMeshReductionSettings                ReductionSettings;                                 // 0x40(0x24)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LODDistance;                                       // 0x64(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScreenSize;                                        // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Engine.StaticMeshOptimizationSettings
struct FStaticMeshOptimizationSettings
{
public:
	enum class EOptimizationType                 ReductionMethod;                                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NumOfTrianglesPercentage;                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDeviationPercentage;                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeldingThreshold;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecalcNormals;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1720[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NormalsThreshold;                                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SilhouetteImportance;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TextureImportance;                                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ShadingImportance;                                 // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1721[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Engine.SubsurfaceProfileStruct
struct FSubsurfaceProfileStruct
{
public:
	float                                        ScatterRadius;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SubsurfaceColor;                                   // 0x4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FalloffColor;                                      // 0x14(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.TextureLODGroup
struct FTextureLODGroup
{
public:
	enum class ETextureGroup                     Group;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1722[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODBias;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1723[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumStreamedMips;                                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureMipGenSettings            MipGenSettings;                                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1724[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinLODSize;                                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLODSize;                                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1725[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MinMagFilter;                                      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MipFilter;                                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.TTTrackBase
struct FTTTrackBase
{
public:
	class FName                                  TrackName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsExternalCurve;                                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1726[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x18 - 0x10)
// ScriptStruct Engine.TTLinearColorTrack
struct FTTLinearColorTrack : public FTTTrackBase
{
public:
	class UCurveLinearColor*                     CurveLinearColor;                                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct Engine.TTVectorTrack
struct FTTVectorTrack : public FTTTrackBase
{
public:
	class UCurveVector*                          CurveVector;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct Engine.TTFloatTrack
struct FTTFloatTrack : public FTTTrackBase
{
public:
	class UCurveFloat*                           CurveFloat;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct Engine.TTEventTrack
struct FTTEventTrack : public FTTTrackBase
{
public:
	class UCurveFloat*                           CurveKeys;                                         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Engine.TouchInputControl
struct FTouchInputControl
{
public:
	class UTexture2D*                            Image1;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image2;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Center;                                            // 0x10(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             VisualSize;                                        // 0x18(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ThumbSize;                                         // 0x20(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InteractionSize;                                   // 0x28(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InputScale;                                        // 0x30(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  MainInputKey;                                      // 0x38(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  AltInputKey;                                       // 0x50(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Engine.AnimationRecordingSettings
struct FAnimationRecordingSettings
{
public:
	bool                                         bRecordInWorldSpace;                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveRootAnimation;                              // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoSaveAsset;                                    // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1727[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SampleRate;                                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x78 - 0x30)
// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             Additive;                                          // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x64(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1728[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0xA8 - 0x30)
// ScriptStruct Engine.AnimNode_SaveCachedPose
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             Pose;                                              // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  CachePoseName;                                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlobalWeight;                                      // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1729[0x54];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x70 - 0x58)
// ScriptStruct Engine.AnimNode_SequencePlayer
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
public:
	class UAnimSequenceBase*                     Sequence;                                          // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoopAnimation;                                    // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlayRate;                                          // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartPosition;                                     // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xD8 - 0x30)
// ScriptStruct Engine.AnimNode_StateMachine
struct FAnimNode_StateMachine : public FAnimNode_Base
{
public:
	int32                                        StateMachineIndexInClass;                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTransitionsPerFrame;                            // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipFirstUpdateTransition;                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172C[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentState;                                      // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ElapsedTime;                                       // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_172D[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Engine.AnimationPotentialTransition
struct FAnimationPotentialTransition
{
public:
	uint8                                        Pad_172E[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Engine.AnimationActiveTransitionEntry
struct FAnimationActiveTransitionEntry
{
public:
	uint8                                        Pad_172F[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendProfile*                         BlendProfile;                                      // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1730[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x68 - 0x30)
// ScriptStruct Engine.AnimNode_SubInput
struct FAnimNode_SubInput : public FAnimNode_Base
{
public:
	uint8                                        Pad_1731[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xC8 - 0x30)
// ScriptStruct Engine.AnimNode_SubInstance
struct FAnimNode_SubInstance : public FAnimNode_Base
{
public:
	struct FPoseLink                             InPose;                                            // 0x30(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>             InstanceClass;                                     // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimInstance*                         InstanceToRun;                                     // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UProperty*>                     InstanceProperties;                                // 0x58(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UProperty*>                     SubInstanceProperties;                             // 0x68(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class FName>                          SourcePropertyNames;                               // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          DestPropertyNames;                                 // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1732[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x78 - 0x30)
// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
public:
	enum class EEvaluatorDataSource              DataSource;                                        // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEvaluatorMode                    EvaluatorMode;                                     // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1733[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FramesToCachePose;                                 // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1734[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CacheFramesRemaining;                              // 0x70(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1735[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x80 - 0x30)
// ScriptStruct Engine.AnimNode_TransitionResult
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
public:
	bool                                         bCanEnterTransition;                               // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1736[0x4F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x50 - 0x30)
// ScriptStruct Engine.AnimNode_UseCachedPose
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             LinkToCachingNode;                                 // 0x30(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  CachePoseName;                                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
public:
	struct FPoseLink                             LocalPose;                                         // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Engine.DummySpacerCameraTypes
struct FDummySpacerCameraTypes
{
public:
	uint8                                        Pad_1737[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Engine.NameCurveKey
struct FNameCurveKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1738[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Value;                                             // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x68 - 0x58)
// ScriptStruct Engine.NameCurve
struct FNameCurve : public FIndexedCurve
{
public:
	TArray<struct FNameCurveKey>                 Keys;                                              // 0x58(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Engine.MemberReference
struct FMemberReference
{
public:
	class UObject*                               MemberParent;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                MemberScope;                                       // 0x8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MemberName;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 MemberGuid;                                        // 0x20(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSelfContext;                                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWasDeprecated;                                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1739[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Engine.QueuedDrawDebugItem
struct FQueuedDrawDebugItem
{
public:
	enum class EDrawDebugItemType                ItemType;                                          // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartLoc;                                          // 0x4(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLoc;                                            // 0x10(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Center;                                            // 0x1C(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x2C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Segments;                                          // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x34(0x4)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPersistentLines;                                  // 0x38(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LifeTime;                                          // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MESSAGE;                                           // 0x48(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TextScale;                                         // 0x58(0x8)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x5E0 - 0x460)
// ScriptStruct Engine.AnimSingleNodeInstanceProxy
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_173D[0x180];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x50 - 0x30)
// ScriptStruct Engine.AnimNode_SingleNode
struct FAnimNode_SingleNode : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_173E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
