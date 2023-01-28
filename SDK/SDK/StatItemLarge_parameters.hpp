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

// 0xA5 (0xA5 - 0x0)
// Function StatItemLarge.StatItemLarge_C.UpdateValue
struct UStatItemLarge_C_UpdateValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentValue;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortStatValueDisplayType         DisplayType;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    BuffState;                                         // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BuffColor;                                         // 0xC(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BaseColor;                                         // 0x1C(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortStatValueDisplayType         LocalDisplayType;                                  // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    LocalBuffState;                                    // 0x2D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LocalCurrentValue;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocalNewValue;                                     // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable4;                               // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                             Temp_struct_Variable;                              // 0x3C(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Base___Buff_Colors_Base;              // 0x44(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Base___Buff_Colors_Buff;              // 0x54(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable2;                             // 0x64(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable3;                             // 0x6C(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    Temp_byte_Variable5;                               // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable4;                             // 0x78(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_Select_Default;                             // 0x88(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Temp_byte_Variable6;                               // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select3_Default;                            // 0x94(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StatItemLarge.StatItemLarge_C.UpdateIcon
struct UStatItemLarge_C_UpdateIcon_Params
{
public:
};

// 0x98 (0x98 - 0x0)
// Function StatItemLarge.StatItemLarge_C.UpdateDisplayData
struct UStatItemLarge_C_UpdateDisplayData_Params
{
public:
	enum class EFortStatValueDisplayType         DisplayState;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    BuffState;                                         // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NewValue;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit)
	float                                        CurrentValue;                                      // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDisplayAttribute                 CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute; // 0x28(0x70)()
};

// 0x48 (0x48 - 0x0)
// Function StatItemLarge.StatItemLarge_C.GetLocalPlayerId
struct UStatItemLarge_C_GetLocalPlayerId_Params
{
public:
	struct FUniqueNetIdRepl                      LocalPlayerNetId;                                  // 0x0(0x18)(Parm, OutParm, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                      K2Node_DynamicCast_AsFort_Player_State;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetUniqueID_ReturnValue;                  // 0x30(0x18)(HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StatItemLarge.StatItemLarge_C.Construct
struct UStatItemLarge_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StatItemLarge.StatItemLarge_C.DisplayAttributeChanged
struct UStatItemLarge_C_DisplayAttributeChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function StatItemLarge.StatItemLarge_C.PreConstruct
struct UStatItemLarge_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StatItemLarge.StatItemLarge_C.PreviewStarted
struct UStatItemLarge_C_PreviewStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StatItemLarge.StatItemLarge_C.PreviewEnded
struct UStatItemLarge_C_PreviewEnded_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function StatItemLarge.StatItemLarge_C.ValueChanged
struct UStatItemLarge_C_ValueChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function StatItemLarge.StatItemLarge_C.ExecuteUbergraph_StatItemLarge
struct UStatItemLarge_C_ExecuteUbergraph_StatItemLarge_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
