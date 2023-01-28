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

// 0x98 (0x98 - 0x0)
// Function BasicGradientFill.BasicGradientFill_C.Set Brush Size
struct UBasicGradientFill_C_Set_Brush_Size_Params
{
public:
	struct FVector2D                             Brush_Size;                                        // 0x0(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x8(0x90)()
};

// 0x31 (0x31 - 0x0)
// Function BasicGradientFill.BasicGradientFill_C.Set Fill
struct UBasicGradientFill_C_Set_Fill_Params
{
public:
	struct FLinearColor                          Color_1;                                           // 0x0(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color_2;                                           // 0x10(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rotation__0___1_;                                  // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BasicGradientFill.BasicGradientFill_C.PreConstruct
struct UBasicGradientFill_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BasicGradientFill.BasicGradientFill_C.ExecuteUbergraph_BasicGradientFill
struct UBasicGradientFill_C_ExecuteUbergraph_BasicGradientFill_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
