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
// Function Node_Arrows.Node_Arrows_C.OverideColorOnBrush
struct UNode_Arrows_C_OverideColorOnBrush_Params
{
public:
	class UImage*                                InBrush;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x8(0x90)()
};

// 0x0 (0x0 - 0x0)
// Function Node_Arrows.Node_Arrows_C.ApplyOverideColor
struct UNode_Arrows_C_ApplyOverideColor_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Node_Arrows.Node_Arrows_C.PreConstruct
struct UNode_Arrows_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Node_Arrows.Node_Arrows_C.Construct
struct UNode_Arrows_C_Construct_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function Node_Arrows.Node_Arrows_C.ExecuteUbergraph_Node_Arrows
struct UNode_Arrows_C_ExecuteUbergraph_Node_Arrows_Params
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
