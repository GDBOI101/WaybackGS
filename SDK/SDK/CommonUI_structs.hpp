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

enum class ECommonInputType : uint8
{
	MouseAndKeyboard               = 0,
	XboxOneController              = 1,
	PS4Controller                  = 2,
	Touch                          = 3,
	Count                          = 4,
	ECommonInputType_MAX           = 5,
};

enum class EInputActionState : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	HiddenAndDisabled              = 3,
	EInputActionState_MAX          = 4,
};

enum class EItemAlignment : uint8
{
	EvenlyDistributed              = 0,
	EvenlySize                     = 1,
	EvenlyWide                     = 2,
	LeftAligned                    = 3,
	RightAligned                   = 4,
	CenterAligned                  = 5,
	Fill                           = 6,
	EItemAlignment_MAX             = 7,
};

enum class ECommonPlatformType : uint8
{
	PC                             = 0,
	Mac                            = 1,
	PS4                            = 2,
	XBox                           = 3,
	IOS                            = 4,
	Android                        = 5,
	Count                          = 6,
	ECommonPlatformType_MAX        = 7,
};

enum class EOperation : uint8
{
	Intro                          = 0,
	Outro                          = 1,
	Push                           = 2,
	Pop                            = 3,
	Invalid                        = 4,
	EOperation_MAX                 = 5,
};

enum class ETransitionCurve : uint8
{
	Linear                         = 0,
	QuadIn                         = 1,
	QuadOut                        = 2,
	QuadInOut                      = 3,
	CubicIn                        = 4,
	CubicOut                       = 5,
	CubicInOut                     = 6,
	ETransitionCurve_MAX           = 7,
};

enum class ECommonSwitcherTransition : uint8
{
	FadeOnly                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Zoom                           = 3,
	ECommonSwitcherTransition_MAX  = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct CommonUI.CommonNumberFormattingOptions
struct FCommonNumberFormattingOptions
{
public:
	enum class ERoundingMode                     RoundingMode;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseGrouping;                                       // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinimumIntegralDigits;                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumIntegralDigits;                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumFractionalDigits;                           // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumFractionalDigits;                           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonUI.CommonRegisteredTabInfo
struct FCommonRegisteredTabInfo
{
public:
	int32                                        TabIndex;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ContentInstance;                                   // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonUI.CommonInputActionHandlerData
struct FCommonInputActionHandlerData
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1C10[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C8 (0x2D0 - 0x8)
// ScriptStruct CommonUI.CommonInputActionData
struct FCommonInputActionData : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FKey                                  PlatformSpecificKeys;                              // 0x20(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C11[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EInputActionState                 OverrrideStateForInputType;                        // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           InputTypeOverrideBrush;                            // 0x88(0x90)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C13[0x1B0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bActionRequiresHold;                               // 0x2C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoldTime;                                          // 0x2CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x240 (0x240 - 0x0)
// ScriptStruct CommonUI.CommonInputKeyDisplayData
struct FCommonInputKeyDisplayData
{
public:
	struct FSlateBrush                           PlatformSpecificBrush;                             // 0x0(0x90)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C15[0x1B0];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonUI.Operation
struct FOperation
{
public:
	enum class EOperation                        Operation;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatablePanel*               Panel;                                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntroPanel;                                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutroPanelBelow;                                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C17[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x258 (0x258 - 0x0)
// ScriptStruct CommonUI.CommonInputKeyDisplayConfiguration
struct FCommonInputKeyDisplayConfiguration
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCommonInputKeyDisplayData            Value;                                             // 0x18(0x240)(Edit, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
