#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x154 (0x154 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.IntializeGamepadSensitivitySliders
struct UTabGameOptionsMain_C_IntializeGamepadSensitivitySliders_Params
{
public:
	bool                                         Local_IsPS4;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x20(0x18)()
	bool                                         Temp_bool_Variable2;                               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable3;                               // 0x40(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x58(0x18)()
	bool                                         Temp_bool_Variable3;                               // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable5;                               // 0x78(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0x90(0x18)()
	bool                                         Temp_bool_Variable4;                               // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable7;                               // 0xB0(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xC8(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0xE0(0x18)()
	class FText                                  K2Node_Select2_Default;                            // 0xF8(0x18)()
	class FText                                  K2Node_Select3_Default;                            // 0x110(0x18)()
	class FText                                  K2Node_Select4_Default;                            // 0x128(0x18)()
	bool                                         CallFunc_IsPS4Platform_ReturnValue;                // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetGamepadLookSensitivityValue_ReturnValue; // 0x144(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x320 (0x320 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.Initialize Data
struct UTabGameOptionsMain_C_Initialize_Data_Params
{
public:
	TArray<class FText>                          OffOnOptions;                                      // 0x0(0x10)(Edit, ZeroConstructor)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x10(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x28(0x18)()
	TArray<class FText>                          CallFunc_GetRegionDisplayNames_ReturnValue;        // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue3;             // 0x50(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue4;             // 0x68(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue5;             // 0x80(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue6;             // 0x98(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue7;             // 0xB0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue8;             // 0xC8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue9;             // 0xE0(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0xF8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsPS4Platform_ReturnValue;                // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue10;            // 0x110(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue11;            // 0x128(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue12;            // 0x140(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue13;            // 0x158(0x18)()
	TArray<class FText>                          CallFunc_GetPossibleLanguages_ReturnValue;         // 0x170(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  Temp_text_Variable;                                // 0x180(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue14;            // 0x198(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue15;            // 0x1B0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue16;            // 0x1C8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue17;            // 0x1E0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue18;            // 0x1F8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue19;            // 0x210(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue20;            // 0x228(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue21;            // 0x240(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue22;            // 0x258(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x270(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue23;            // 0x288(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x2A8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue24;            // 0x2C0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue25;            // 0x2D8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue26;            // 0x2F0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue27;            // 0x308(0x18)()
};

// 0x238 (0x238 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.Update Data
struct UTabGameOptionsMain_C_Update_Data_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetShowHeroBackpackForLocalPlayer_ReturnValue; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetShowHeroHeadAccessoriesForLocalPlayer_ReturnValue; // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36FA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue2;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable3;                               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable5;                               // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable6;                               // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable4;                               // 0x27(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable7;                               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable8;                               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36FB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x48(0x18)()
	bool                                         CallFunc_IsPS4Platform_ReturnValue;                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable9;                               // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable10;                              // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetConsoleUnlockedFPSState_ReturnValue;   // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue3;              // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGamepadScopedMultiplierValue_ReturnValue; // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGamepadTargetingMultiplierValue_ReturnValue; // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue3;             // 0x70(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue4;             // 0x88(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue5;             // 0xA0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue6;             // 0xB8(0x18)()
	bool                                         CallFunc_IsXboxPlatform_ReturnValue;               // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetTargetingToggleState_ReturnValue;      // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36FC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue4;              // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScopedMultiplierValue_ReturnValue;     // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue7;             // 0xE0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue8;             // 0xF8(0x18)()
	float                                        CallFunc_GetTargetingMultiplierValue_ReturnValue;  // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue9;             // 0x118(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue10;            // 0x130(0x18)()
	bool                                         CallFunc_IsAthena_ReturnValue;                     // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentRegion_ReturnValue;             // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable5;                               // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAthena_ReturnValue2;                    // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable6;                               // 0x152(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x153(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3700[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select3_Default;                            // 0x158(0x18)()
	bool                                         CallFunc_GetTapInteractState_ReturnValue;          // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState_ReturnValue; // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3701[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue5;              // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue6;              // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPS4Platform_ReturnValue2;               // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsXboxPlatform_ReturnValue2;              // 0x17D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x17E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select4_Default;                            // 0x17F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select5_Default;                            // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select6_Default;                            // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable7;                               // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3702[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentLanguage_ReturnValue;           // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select7_Default;                            // 0x188(0x18)()
	float                                        CallFunc_GetSafeZoneValue_ReturnValue;             // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSprintCancelsReloadState_ReturnValue;  // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3703[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue7;              // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3704[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue11;            // 0x1B0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue12;            // 0x1C8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue13;            // 0x1E0(0x18)()
	bool                                         CallFunc_GetForceFeedbackState_ReturnValue;        // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3705[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue8;              // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetLookInversionState_ReturnValue;        // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFirstPersonCameraState_ReturnValue;    // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3706[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue9;              // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue10;             // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAutoEquipState_ReturnValue;            // 0x20C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSprintToggleState_ReturnValue;         // 0x20D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3707[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue11;             // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue12;             // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMouseSensitivityValue_ReturnValue;     // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3708[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue14;            // 0x220(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.Construct
struct UTabGameOptionsMain_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdateOptionsTab
struct UTabGameOptionsMain_C_UpdateOptionsTab_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.CenterOnTab
struct UTabGameOptionsMain_C_CenterOnTab_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__GamepadLookSensitivityX_K2Node_ComponentBoundEvent_39_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__GamepadLookSensitivityY_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__SafeZone_K2Node_ComponentBoundEvent_45_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdatePossibleLanguages
struct UTabGameOptionsMain_C_UpdatePossibleLanguages_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__ShowHeadAccessories_K2Node_ComponentBoundEvent_50_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__ShowBackpack_K2Node_ComponentBoundEvent_111_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__Language_K2Node_ComponentBoundEvent_42_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__InvertMouse_K2Node_ComponentBoundEvent_51_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_60_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__SprintCancelsReload_K2Node_ComponentBoundEvent_70_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__TapInteract_K2Node_ComponentBoundEvent_81_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__AutoEquipBetterItems_K2Node_ComponentBoundEvent_93_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__First-PersonCamera_K2Node_ComponentBoundEvent_106_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__First_PersonCamera_K2Node_ComponentBoundEvent_106_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__ForceFeedback_K2Node_ComponentBoundEvent_121_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__EquipFirstBuildingPieceWhenSwappingQuickbars_K2Node_ComponentBoundEvent_136_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__Region_K2Node_ComponentBoundEvent_105_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__Region_K2Node_ComponentBoundEvent_105_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ScopedMultiplier_K2Node_ComponentBoundEvent_201_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__ScopedMultiplier_K2Node_ComponentBoundEvent_201_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__TargetingMultiplier_K2Node_ComponentBoundEvent_219_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__TargetingMultiplier_K2Node_ComponentBoundEvent_219_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ToggleTargeting_K2Node_ComponentBoundEvent_207_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__ToggleTargeting_K2Node_ComponentBoundEvent_207_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadScopedMultiplier_K2Node_ComponentBoundEvent_401_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__GamepadScopedMultiplier_K2Node_ComponentBoundEvent_401_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__GamepadTargetingMultiplier_K2Node_ComponentBoundEvent_423_SliderChanged__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__GamepadTargetingMultiplier_K2Node_ComponentBoundEvent_423_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__ConsoleUnlockedFPS_K2Node_ComponentBoundEvent_300_Selection Changed__DelegateSignature
struct UTabGameOptionsMain_C_BndEvt__ConsoleUnlockedFPS_K2Node_ComponentBoundEvent_300_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x109 (0x109 - 0x0)
// Function TabGameOptionsMain.TabGameOptionsMain_C.ExecuteUbergraph_TabGameOptionsMain
struct UTabGameOptionsMain_C_ExecuteUbergraph_TabGameOptionsMain_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Slider_Value8;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Slider_Value7;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Slider_Value6;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Slider_Value5;          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsXboxPlatform_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPS4Platform_ReturnValue;                // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3709[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x18(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x30(0x18)()
	TArray<class FText>                          CallFunc_GetPossibleLanguages_ReturnValue;         // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_GetCurrentLanguage_ReturnValue;           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_370A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetItemAt_ReturnValue;                    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetListWidget_ReturnValue;                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Selected_Index14;       // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_370B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOptionsMenuHudRotator_C*              K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator;     // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_370C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue;                   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Selected_Index13;       // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_370D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue2;                  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue2;              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_370E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index12;       // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Selected_Index11;       // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue3;              // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_370F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index10;       // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue4;              // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3710[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index9;        // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue5;              // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3711[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index8;        // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue6;              // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3712[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index7;        // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue7;              // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3713[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index6;        // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue8;              // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3714[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index5;        // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue9;              // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3715[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index4;        // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue10;             // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3716[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index3;        // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Slider_Value4;          // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Slider_Value3;          // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Selected_Index2;        // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Slider_Value2;          // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue11;             // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3717[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_Slider_Value;           // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Selected_Index;         // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue12;             // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
