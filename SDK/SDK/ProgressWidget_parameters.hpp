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

// 0x95 (0x95 - 0x0)
// Function ProgressWidget.ProgressWidget_C.SetIcon
struct UProgressWidget_C_SetIcon_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x90)(Parm)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function ProgressWidget.ProgressWidget_C.SetDescription
struct UProgressWidget_C_SetDescription_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Parm)
};

// 0x18 (0x18 - 0x0)
// Function ProgressWidget.ProgressWidget_C.SetTitle
struct UProgressWidget_C_SetTitle_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
