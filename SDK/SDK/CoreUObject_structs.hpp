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

enum class EInterpCurveMode : uint8
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6,
};

enum class ERangeBoundTypes : uint8
{
	Exclusive                      = 0,
	Inclusive                      = 1,
	Open                           = 2,
	ERangeBoundTypes_MAX           = 3,
};

enum class EUnit : uint8
{
	Micrometers                    = 0,
	Millimeters                    = 1,
	Centimeters                    = 2,
	Meters                         = 3,
	Kilometers                     = 4,
	Inches                         = 5,
	Feet                           = 6,
	Yards                          = 7,
	Miles                          = 8,
	Lightyears                     = 9,
	Degrees                        = 10,
	Radians                        = 11,
	MetersPerSecond                = 12,
	KilometersPerHour              = 13,
	MilesPerHour                   = 14,
	Celsius                        = 15,
	Farenheit                      = 16,
	Kelvin                         = 17,
	Micrograms                     = 18,
	Milligrams                     = 19,
	Grams                          = 20,
	Kilograms                      = 21,
	MetricTons                     = 22,
	Ounces                         = 23,
	Pounds                         = 24,
	Stones                         = 25,
	Newtons                        = 26,
	PoundsForce                    = 27,
	KilogramsForce                 = 28,
	Hertz                          = 29,
	Kilohertz                      = 30,
	Megahertz                      = 31,
	Gigahertz                      = 32,
	RevolutionsPerMinute           = 33,
	Bytes                          = 34,
	Kilobytes                      = 35,
	Megabytes                      = 36,
	Gigabytes                      = 37,
	Terabytes                      = 38,
	Lumens                         = 39,
	Milliseconds                   = 40,
	Seconds                        = 41,
	Minutes                        = 42,
	Hours                          = 43,
	Days                           = 44,
	Months                         = 45,
	Years                          = 46,
	Multiplier                     = 47,
	Unspecified                    = 48,
	EUnit_MAX                      = 49,
};

enum class EMouseCursor : uint8
{
	None                           = 0,
	Default                        = 1,
	TextEditBeam                   = 2,
	ResizeLeftRight                = 3,
	ResizeUpDown                   = 4,
	ResizeSouthEast                = 5,
	ResizeSouthWest                = 6,
	CardinalCross                  = 7,
	Crosshairs                     = 8,
	Hand                           = 9,
	GrabHand                       = 10,
	GrabHandClosed                 = 11,
	SlashedCircle                  = 12,
	EyeDropper                     = 13,
	EMouseCursor_MAX               = 14,
};

enum class EPixelFormat : uint8
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_R8_UINT                     = 57,
	PF_MAX_                        = 58,
};

enum class EAxis : uint8
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	EAxis_MAX                      = 4,
};

enum class ELogTimes : uint8
{
	None                           = 0,
	UTC                            = 1,
	SinceGStartTime                = 2,
	ELogTimes_MAX                  = 3,
};

enum class ESearchDir : uint8
{
	FromStart                      = 0,
	FromEnd                        = 1,
	ESearchDir_MAX                 = 2,
};

enum class ESearchCase : uint8
{
	CaseSensitive                  = 0,
	IgnoreCase                     = 1,
	ESearchCase_MAX                = 2,
};

enum class ELifetimeCondition : uint8
{
	COND_None                      = 0,
	COND_InitialOnly               = 1,
	COND_OwnerOnly                 = 2,
	COND_SkipOwner                 = 3,
	COND_SimulatedOnly             = 4,
	COND_AutonomousOnly            = 5,
	COND_SimulatedOrPhysics        = 6,
	COND_InitialOrOwner            = 7,
	COND_Custom                    = 8,
	COND_ReplayOrOwner             = 9,
	COND_ReplayOnly                = 10,
	COND_SimulatedOnlyNoReplay     = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay                = 13,
	COND_Max                       = 14,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.JoinabilitySettings
struct FJoinabilitySettings
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPublicSearchable;                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInvites;                                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJoinViaPresence;                                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJoinViaPresenceFriendsOnly;                       // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPartySize;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct CoreUObject.UniqueNetIdWrapper
struct FUniqueNetIdWrapper
{
public:
	uint8                                        Pad_1F[0x1];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Guid
struct FGuid
{
public:
	int32                                        A;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        D;                                                 // 0xC(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	inline bool operator== (const FGuid GB)
	{
		return A == GB.A && B == GB.B && C == GB.C && D == GB.D;
	}
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.Vector
struct FVector
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	FVector operator+(const FVector& A)
	{
		return FVector{ this->X + A.X, this->Y + A.Y, this->Z + A.Z };
	}

	FVector operator*(float A)
	{
		return FVector{ this->X * A, this->Y * A, this->Z * A };
	}
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Vector4
struct FVector4
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Vector2D
struct FVector2D
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.TwoVectors
struct FTwoVectors
{
public:
	struct FVector                               V1;                                                // 0x0(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               V2;                                                // 0xC(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x10 - 0xC)
// ScriptStruct CoreUObject.Plane
struct FPlane : public FVector
{
public:
	float                                        W;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.Rotator
struct FRotator
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Quat
struct FQuat
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.PackedNormal
struct FPackedNormal
{
public:
	uint8                                        X;                                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Y;                                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Z;                                                 // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        W;                                                 // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.PackedRGB10A2N
struct FPackedRGB10A2N
{
public:
	int32                                        Packed;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.PackedRGBA16N
struct FPackedRGBA16N
{
public:
	int32                                        XY;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZW;                                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.IntPoint
struct FIntPoint
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.IntVector
struct FIntVector
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.Color
struct FColor
{
public:
	uint8                                        B;                                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        G;                                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        R;                                                 // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        A;                                                 // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.LinearColor
struct FLinearColor
{
public:
	float                                        R;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        G;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        A;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CoreUObject.Box
struct FBox
{
public:
	struct FVector                               Min;                                               // 0x0(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Max;                                               // 0xC(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        IsValid;                                           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct CoreUObject.Box2D
struct FBox2D
{
public:
	struct FVector2D                             Min;                                               // 0x0(0x8)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Max;                                               // 0x8(0x8)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        IsValid;                                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CoreUObject.BoxSphereBounds
struct FBoxSphereBounds
{
public:
	struct FVector                               Origin;                                            // 0x0(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoxExtent;                                         // 0xC(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SphereRadius;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct CoreUObject.OrientedBox
struct FOrientedBox
{
public:
	struct FVector                               Center;                                            // 0x0(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AxisX;                                             // 0xC(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AxisY;                                             // 0x18(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AxisZ;                                             // 0x24(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentX;                                           // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentY;                                           // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentZ;                                           // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CoreUObject.Matrix
struct FMatrix
{
public:
	struct FPlane                                XPlane;                                            // 0x0(0x10)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPlane                                YPlane;                                            // 0x10(0x10)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPlane                                ZPlane;                                            // 0x20(0x10)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPlane                                WPlane;                                            // 0x30(0x10)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointFloat
struct FInterpCurvePointFloat
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutVal;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArriveTangent;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangent;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveFloat
struct FInterpCurveFloat
{
public:
	TArray<struct FInterpCurvePointFloat>        Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointVector2D
struct FInterpCurvePointVector2D
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             OutVal;                                            // 0x4(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ArriveTangent;                                     // 0xC(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeaveTangent;                                      // 0x14(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveVector2D
struct FInterpCurveVector2D
{
public:
	TArray<struct FInterpCurvePointVector2D>     Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointVector
struct FInterpCurvePointVector
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutVal;                                            // 0x4(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ArriveTangent;                                     // 0x10(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LeaveTangent;                                      // 0x1C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveVector
struct FInterpCurveVector
{
public:
	TArray<struct FInterpCurvePointVector>       Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointQuat
struct FInterpCurvePointQuat
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28[0xC];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 OutVal;                                            // 0x10(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 ArriveTangent;                                     // 0x20(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 LeaveTangent;                                      // 0x30(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29[0xF];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveQuat
struct FInterpCurveQuat
{
public:
	TArray<struct FInterpCurvePointQuat>         Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
struct FInterpCurvePointTwoVectors
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoVectors                           OutVal;                                            // 0x4(0x18)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTwoVectors                           ArriveTangent;                                     // 0x1C(0x18)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTwoVectors                           LeaveTangent;                                      // 0x34(0x18)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveTwoVectors
struct FInterpCurveTwoVectors
{
public:
	TArray<struct FInterpCurvePointTwoVectors>   Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointLinearColor
struct FInterpCurvePointLinearColor
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OutVal;                                            // 0x4(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ArriveTangent;                                     // 0x14(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LeaveTangent;                                      // 0x24(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveLinearColor
struct FInterpCurveLinearColor
{
public:
	TArray<struct FInterpCurvePointLinearColor>  Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CoreUObject.Transform
struct FTransform
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x10)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x10(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale3D;                                           // 0x20(0xC)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.RandomStream
struct FRandomStream
{
public:
	int32                                        InitialSeed;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed;                                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.DateTime
struct FDateTime
{
public:
	uint8                                        Pad_31[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Timespan
struct FTimespan
{
public:
	uint8                                        Pad_32[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.StringAssetReference
struct FStringAssetReference
{
public:
	class FString                                AssetLongPathname;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct CoreUObject.StringClassReference
struct FStringClassReference : public FStringAssetReference
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.PrimaryAssetType
struct FPrimaryAssetType
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.PrimaryAssetId
struct FPrimaryAssetId
{
public:
	struct FPrimaryAssetType                     PrimaryAssetType;                                  // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  PrimaryAssetName;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct CoreUObject.FallbackStruct
struct FFallbackStruct
{
public:
	uint8                                        Pad_33[0x1];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FloatRangeBound
struct FFloatRangeBound
{
public:
	enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.FloatRange
struct FFloatRange
{
public:
	struct FFloatRangeBound                      LowerBound;                                        // 0x0(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRangeBound                      UpperBound;                                        // 0x8(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Int32RangeBound
struct FInt32RangeBound
{
public:
	enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Int32Range
struct FInt32Range
{
public:
	struct FInt32RangeBound                      LowerBound;                                        // 0x0(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInt32RangeBound                      UpperBound;                                        // 0x8(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FloatInterval
struct FFloatInterval
{
public:
	float                                        Min;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Int32Interval
struct FInt32Interval
{
public:
	int32                                        Min;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max;                                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
