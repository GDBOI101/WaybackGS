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

// 0x38 (0x38 - 0x0)
// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Tick
struct UAthenaAerialFeedback_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x34)(Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x158 (0x158 - 0x0)
// Function AthenaAerialFeedback.AthenaAerialFeedback_C.ExecuteUbergraph_AthenaAerialFeedback
struct UAthenaAerialFeedback_C_ExecuteUbergraph_AthenaAerialFeedback_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaAerialPhase                Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAthena_PlayerController_C*            K2Node_DynamicCast_AsAthena_Player_Controller;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x28(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x40(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x58(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x98(0x10)(ZeroConstructor, ReferenceParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xA8(0x34)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE0(0x18)()
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_GameState_C*                   K2Node_DynamicCast_AsAthena_Game_State;            // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EAthenaAerialPhase                CallFunc_GetAerialPhase_ReturnValue;               // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33AE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x110(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x128(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x140(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
