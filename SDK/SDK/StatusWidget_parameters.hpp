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
// Function StatusWidget.StatusWidget_C.UpdateLoginStatusText
struct UStatusWidget_C_UpdateLoginStatusText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLoginStatusText_ReturnValue;           // 0x20(0x18)()
};

// 0x18 (0x18 - 0x0)
// Function StatusWidget.StatusWidget_C.SetStatusText
struct UStatusWidget_C_SetStatusText_Params
{
public:
	class FText                                  Status;                                            // 0x0(0x18)(Parm)
};

// 0x18 (0x18 - 0x0)
// Function StatusWidget.StatusWidget_C.SetTitleText
struct UStatusWidget_C_SetTitleText_Params
{
public:
	class FText                                  TitleText;                                         // 0x0(0x18)(Parm)
};

// 0x0 (0x0 - 0x0)
// Function StatusWidget.StatusWidget_C.Construct
struct UStatusWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StatusWidget.StatusWidget_C.Destruct
struct UStatusWidget_C_Destruct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
struct UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
