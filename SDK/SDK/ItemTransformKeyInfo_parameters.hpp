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

// 0x2E8 (0x2E8 - 0x0)
// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.SetKeyToRepresent
struct UItemTransformKeyInfo_C_SetKeyToRepresent_Params
{
public:
	class UFortItem*                             Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x8(0x18)()
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x28(0x18)()
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x40(0x80)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xC8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x108(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x148(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0x158(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x168(0x18)()
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0x180(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData3;             // 0x198(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData4;             // 0x1D8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array3;                           // 0x218(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array4;                           // 0x228(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue3;                      // 0x238(0x18)()
	class FText                                  CallFunc_Format_ReturnValue4;                      // 0x250(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData5;             // 0x268(0x40)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array5;                           // 0x2B8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue5;                      // 0x2D0(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.Construct
struct UItemTransformKeyInfo_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.ExecuteUbergraph_ItemTransformKeyInfo
struct UItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
