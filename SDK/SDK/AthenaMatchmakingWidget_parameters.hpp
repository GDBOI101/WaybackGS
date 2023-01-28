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

// 0x11 (0x11 - 0x0)
// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.FillChange
struct UAthenaMatchmakingWidget_C_FillChange_Params
{
public:
	bool                                         bDirection;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRotator_C*                      K2Node_DynamicCast_AsAthena_Rotator;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.PlaylistChange
struct UAthenaMatchmakingWidget_C_PlaylistChange_Params
{
public:
	bool                                         bDirection;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRotator_C*                      K2Node_DynamicCast_AsAthena_Rotator;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetAutoFillOptions
struct UAthenaMatchmakingWidget_C_SetAutoFillOptions_Params
{
public:
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x0(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingWidget_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingWidget_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetPlayButtonState
struct UAthenaMatchmakingWidget_C_SetPlayButtonState_Params
{
public:
	bool                                         bCanMatchmake;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.Construct
struct UAthenaMatchmakingWidget_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.SetCancelButtonState
struct UAthenaMatchmakingWidget_C_SetCancelButtonState_Params
{
public:
	bool                                         bIsMatchmaking;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature
struct UAthenaMatchmakingWidget_C_BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature
struct UAthenaMatchmakingWidget_C_BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.ExecuteUbergraph_AthenaMatchmakingWidget
struct UAthenaMatchmakingWidget_C_ExecuteUbergraph_AthenaMatchmakingWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Value;                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F38[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)()
	enum class EFortAthenaPlaylist               Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable2;                               // 0x30(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x48(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x60(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x78(0x18)()
	enum class EFortAthenaPlaylist               Temp_byte_Variable2;                               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable6;                               // 0x98(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0xB0(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xC8(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0xE0(0x18)()
	bool                                         Temp_bool_Variable2;                               // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable10;                              // 0x100(0x18)()
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCanMatchmake;                        // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsMatchmaking;                       // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F3D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x140(0x18)()
	class FText                                  K2Node_Select2_Default;                            // 0x158(0x18)()
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button2;            // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Value2;                 // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select3_Default;                            // 0x180(0x18)()
	class FText                                  K2Node_Select4_Default;                            // 0x198(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
