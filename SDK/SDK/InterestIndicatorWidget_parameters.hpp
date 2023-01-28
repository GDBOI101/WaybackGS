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

// 0xA (0xA - 0x0)
// Function InterestIndicatorWidget.InterestIndicatorWidget_C.RemovePointOfInterest
struct UInterestIndicatorWidget_C_RemovePointOfInterest_Params
{
public:
	class AActor*                                PointOfInterest;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Removed;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function InterestIndicatorWidget.InterestIndicatorWidget_C.InitPointOfInterest
struct UInterestIndicatorWidget_C_InitPointOfInterest_Params
{
public:
	class AActor*                                PointOfInterest;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DisplayText;                                       // 0x8(0x18)(Parm)
	class UTexture2D*                            DisplayImage;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayImage
struct UInterestIndicatorWidget_C_SetDisplayImage_Params
{
public:
	class UTexture2D*                            Icon;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function InterestIndicatorWidget.InterestIndicatorWidget_C.SetDisplayText
struct UInterestIndicatorWidget_C_SetDisplayText_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Parm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Construct
struct UInterestIndicatorWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InterestIndicatorWidget.InterestIndicatorWidget_C.Destruct
struct UInterestIndicatorWidget_C_Destruct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function InterestIndicatorWidget.InterestIndicatorWidget_C.ExecuteUbergraph_InterestIndicatorWidget
struct UInterestIndicatorWidget_C_ExecuteUbergraph_InterestIndicatorWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
