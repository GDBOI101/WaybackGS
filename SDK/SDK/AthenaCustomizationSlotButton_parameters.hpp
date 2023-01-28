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

// 0x6 (0x6 - 0x0)
// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ShouldShowEmptyImage
struct UAthenaCustomizationSlotButton_C_ShouldShowEmptyImage_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.UpdateTypeIconOffset
struct UAthenaCustomizationSlotButton_C_UpdateTypeIconOffset_Params
{
public:
	float                                        VerticalOffset;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x4(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                      K2Node_MakeStruct_WidgetTransform;                 // 0xC(0x1C)(NoDestructor)
};

// 0x110 (0x110 - 0x0)
// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Update SubType Icon Glow
struct UAthenaCustomizationSlotButton_C_Update_SubType_Icon_Glow_Params
{
public:
	bool                                         GlowIcon;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F3F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor2;                     // 0x30(0x28)()
	struct FSlateColor                           K2Node_Select_Default;                             // 0x58(0x28)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x80(0x90)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Update SubType Icon Image
struct UAthenaCustomizationSlotButton_C_Update_SubType_Icon_Image_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct
struct UAthenaCustomizationSlotButton_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.PreConstruct
struct UAthenaCustomizationSlotButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton
struct UAthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton_Params
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
