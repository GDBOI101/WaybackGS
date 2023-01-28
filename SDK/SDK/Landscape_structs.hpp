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

enum class ELandscapeGizmoType : uint8
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3,
};

enum class EGrassScaling : uint8
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	EGrassScaling_MAX              = 3,
};

enum class ELandscapeLODFalloff : uint8
{
	Linear                         = 0,
	SquareRoot                     = 1,
	ELandscapeLODFalloff_MAX       = 2,
};

enum class ELandscapeLayerDisplayMode : uint8
{
	Default                        = 0,
	Alphabetical                   = 1,
	UserSpecific                   = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

enum class ELandscapeLayerPaintingRestriction : uint8
{
	None                           = 0,
	UseMaxLayers                   = 1,
	ExistingOnly                   = 2,
	UseComponentWhitelist          = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class ELandscapeImportAlphamapType : uint8
{
	Additive                       = 0,
	Layered                        = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class ELandscapeSetupErrors : uint8
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4,
};

enum class ELandscapeSplineMeshOrientation : uint8
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2,
};

enum class ELandscapeLayerBlendType : uint8
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3,
};

enum class ELandscapeCustomizedCoordType : uint8
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5,
};

enum class ETerrainCoordMappingType : uint8
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.WeightmapLayerAllocationInfo
struct FWeightmapLayerAllocationInfo
{
public:
	class ULandscapeLayerInfoObject*             LayerInfo;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeightmapTextureIndex;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeightmapTextureChannel;                           // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB4[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Landscape.GizmoSelectData
struct FGizmoSelectData
{
public:
	uint8                                        Pad_1DB5[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Landscape.GrassVariety
struct FGrassVariety
{
public:
	class UStaticMesh*                           GrassMesh;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrassDensity;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGrid;                                          // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlacementJitter;                                   // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartCullDistance;                                 // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndCullDistance;                                   // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLOD;                                            // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGrassScaling                     Scaling;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        ScaleX;                                            // 0x24(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        ScaleY;                                            // 0x2C(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        ScaleZ;                                            // 0x34(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RandomRotation;                                    // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AlignToSurface;                                    // 0x3D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLandscapeLightmap;                             // 0x3E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                     LightingChannels;                                  // 0x3F(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bReceivesDecals;                                   // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeInfoLayerSettings
struct FLandscapeInfoLayerSettings
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LayerName;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeImportLayerInfo
struct FLandscapeImportLayerInfo
{
public:
	uint8                                        Pad_1DB9[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landscape.LandscapeLayerStruct
struct FLandscapeLayerStruct
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeEditorLayerSettings
struct FLandscapeEditorLayerSettings
{
public:
	uint8                                        Pad_1DBA[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Landscape.LandscapeWeightmapUsage
struct FLandscapeWeightmapUsage
{
public:
	class ULandscapeComponent*                   ChannelUsage;                                      // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DBB[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeSplineMeshEntry
struct FLandscapeSplineMeshEntry
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            MaterialOverrides;                                 // 0x8(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        bCenterH : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FD : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DBC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CenterAdjust;                                      // 0x1C(0x8)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleToWidth : 1;                                 // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FE : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x28(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeSplineMeshOrientation   Orientation;                                       // 0x34(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplineMeshAxis                   ForwardAxis;                                       // 0x35(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplineMeshAxis                   UpAxis;                                            // 0x36(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DBE[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Landscape.LandscapeSplineSegmentConnection
struct FLandscapeSplineSegmentConnection
{
public:
	class ULandscapeSplineControlPoint*          ControlPoint;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TangentLen;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DBF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Landscape.LandscapeSplineInterpPoint
struct FLandscapeSplineInterpPoint
{
public:
	struct FVector                               Center;                                            // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Left;                                              // 0xC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Right;                                             // 0x18(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FalloffLeft;                                       // 0x24(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FalloffRight;                                      // 0x30(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartEndFalloff;                                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeSplineConnection
struct FLandscapeSplineConnection
{
public:
	class ULandscapeSplineSegment*               Segment;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        End : 1;                                           // Mask: 0x1, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignWorldSplineData
struct FForeignWorldSplineData
{
public:
	uint8                                        Pad_1DC1[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignSplineSegmentData
struct FForeignSplineSegmentData
{
public:
	uint8                                        Pad_1DC2[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignControlPointData
struct FForeignControlPointData
{
public:
	uint8                                        Pad_1DC3[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Landscape.GrassInput
struct FGrassInput
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULandscapeGrassType*                   GrassType;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Input;                                             // 0x10(0x38)(NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Landscape.LayerBlendInput
struct FLayerBlendInput
{
public:
	class FName                                  LayerName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeLayerBlendType          BlendType;                                         // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExpressionInput                      LayerInput;                                        // 0x10(0x38)(NativeAccessSpecifierPublic)
	struct FExpressionInput                      HeightInput;                                       // 0x48(0x38)(NativeAccessSpecifierPublic)
	float                                        PreviewWeight;                                     // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ConstLayerInput;                                   // 0x84(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstHeightInput;                                  // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
