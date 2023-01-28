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

// 0x1A8 (0x1A8 - 0x0)
// Function ColorLibrary.ColorLibrary_C.Get HarvestWeakPoint Color
struct UColorLibrary_C_Get_HarvestWeakPoint_Color_Params
{
public:
	struct FColorStylesheet                      Stylesheet;                                        // 0x0(0x190)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x190(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          StyleSheetOut;                                     // 0x198(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x278 (0x278 - 0x0)
// Function ColorLibrary.ColorLibrary_C.Get Base & Buff Colors
struct UColorLibrary_C_Get_Base___Buff_Colors_Params
{
public:
	enum class EFortStatValueDisplayType         Display_Type;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortBuffState                    Buff_State;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27DB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColorStylesheet                      Stylesheet;                                        // 0x4(0x190)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_27DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x198(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Base;                                              // 0x1A0(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          buff;                                              // 0x1B0(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable;                              // 0x1C0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Buff_Color_Color;                     // 0x1D0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Debuff_Color_Color;                   // 0x1E0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Unique_Color_Color;                   // 0x1F0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Fire_Elemental_Color_Color;           // 0x200(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Ice_Elemental_Color_Color;            // 0x210(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Get_Bolt_Elemental_Color_Color;           // 0x220(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortStatValueDisplayType         Temp_byte_Variable;                                // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable2;                             // 0x234(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable3;                             // 0x244(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuffState                    Temp_byte_Variable2;                               // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0x258(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select2_Default;                            // 0x268(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function ColorLibrary.ColorLibrary_C.Get Bolt Elemental Color
struct UColorLibrary_C_Get_Bolt_Elemental_Color_Params
{
public:
	struct FColorStylesheet                      Stylesheet;                                        // 0x0(0x190)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x190(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x198(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function ColorLibrary.ColorLibrary_C.Get Ice Elemental Color
struct UColorLibrary_C_Get_Ice_Elemental_Color_Params
{
public:
	struct FColorStylesheet                      Stylesheet;                                        // 0x0(0x190)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x190(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x198(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function ColorLibrary.ColorLibrary_C.Get Fire Elemental Color
struct UColorLibrary_C_Get_Fire_Elemental_Color_Params
{
public:
	struct FColorStylesheet                      Stylesheet;                                        // 0x0(0x190)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x190(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x198(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function ColorLibrary.ColorLibrary_C.Get Unique Color
struct UColorLibrary_C_Get_Unique_Color_Params
{
public:
	struct FColorStylesheet                      Stylesheet;                                        // 0x0(0x190)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x190(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x198(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function ColorLibrary.ColorLibrary_C.Get Debuff Color
struct UColorLibrary_C_Get_Debuff_Color_Params
{
public:
	struct FColorStylesheet                      Stylesheet;                                        // 0x0(0x190)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x190(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x198(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function ColorLibrary.ColorLibrary_C.Get Buff Color
struct UColorLibrary_C_Get_Buff_Color_Params
{
public:
	struct FColorStylesheet                      Stylesheet;                                        // 0x0(0x190)(Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x190(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x198(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
