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

// 0x1F0 (0x1F0 - 0x0)
// Function StoreItemCardFront.StoreItemCardFront_C.Get Type Text
struct UStoreItemCardFront_C_Get_Type_Text_Params
{
public:
	class FText                                  OutText;                                           // 0x0(0x18)(Parm, OutParm)
	enum class EFortInventoryFilter              Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x38(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x50(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x68(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x80(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0x98(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0xB0(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xC8(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0xE0(0x18)()
	class FText                                  Temp_text_Variable10;                              // 0xF8(0x18)()
	class FText                                  Temp_text_Variable11;                              // 0x110(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x128(0x18)()
	class FText                                  Temp_text_Variable13;                              // 0x140(0x18)()
	class FText                                  Temp_text_Variable14;                              // 0x158(0x18)()
	class FText                                  Temp_text_Variable15;                              // 0x170(0x18)()
	class FText                                  Temp_text_Variable16;                              // 0x188(0x18)()
	class FText                                  Temp_text_Variable17;                              // 0x1A0(0x18)()
	class FText                                  Temp_text_Variable18;                              // 0x1B8(0x18)()
	enum class EFortInventoryFilter              CallFunc_GetFilterCategory_ReturnValue;            // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x1D8(0x18)()
};

// 0x398 (0x398 - 0x0)
// Function StoreItemCardFront.StoreItemCardFront_C.Get Card Name Text
struct UStoreItemCardFront_C_Get_Card_Name_Text_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x30(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x48(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x60(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x78(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0x90(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0xA8(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xC0(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0xD8(0x18)()
	class FText                                  Temp_text_Variable10;                              // 0xF0(0x18)()
	class FText                                  Temp_text_Variable11;                              // 0x108(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x120(0x18)()
	class FText                                  Temp_text_Variable13;                              // 0x138(0x18)()
	class FText                                  Temp_text_Variable14;                              // 0x150(0x18)()
	class FText                                  Temp_text_Variable15;                              // 0x168(0x18)()
	class FText                                  Temp_text_Variable16;                              // 0x180(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortInventoryFilter              Temp_byte_Variable;                                // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x1A0(0x18)()
	class FText                                  CallFunc_GetTertiaryCategory_ItemCategoryText;     // 0x1B8(0x18)()
	struct FSlateBrush                           CallFunc_GetTertiaryCategory_ItemCategoryBrush;    // 0x1D0(0x90)()
	bool                                         CallFunc_GetTertiaryCategory_ReturnValue;          // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4000[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x268(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x280(0x40)(HasGetValueTypeHash)
	enum class EFortInventoryFilter              CallFunc_GetFilterCategory_ReturnValue;            // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4001[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x2C8(0x18)()
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4002[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x2E8(0x18)()
	class FText                                  CallFunc_TextTrimPrecedingAndTrailing_ReturnValue; // 0x300(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x318(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x358(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x368(0x18)()
	class FText                                  K2Node_Select2_Default;                            // 0x380(0x18)()
};

// 0x100 (0x100 - 0x0)
// Function StoreItemCardFront.StoreItemCardFront_C.Draw_Card
struct UStoreItemCardFront_C_Draw_Card_Params
{
public:
	struct FFortRarityItemData                   RarityData;                                        // 0x0(0x80)(Edit)
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x80(0x80)()
};

// 0x19 (0x19 - 0x0)
// Function StoreItemCardFront.StoreItemCardFront_C.Initialize_Card
struct UStoreItemCardFront_C_Initialize_Card_Params
{
public:
	struct FCard                                 InCard;                                            // 0x0(0x18)(Parm, NoDestructor)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StoreItemCardFront.StoreItemCardFront_C.Construct
struct UStoreItemCardFront_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function StoreItemCardFront.StoreItemCardFront_C.OnFortStoreStateChanged
struct UStoreItemCardFront_C_OnFortStoreStateChanged_Params
{
public:
	enum class EFortStoreState                   NewStoreState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function StoreItemCardFront.StoreItemCardFront_C.InitFromObject
struct UStoreItemCardFront_C_InitFromObject_Params
{
public:
	class UObject*                               InitObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function StoreItemCardFront.StoreItemCardFront_C.ExecuteUbergraph_StoreItemCardFront
struct UStoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4003[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortStoreState                   K2Node_CustomEvent_NewStoreState;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4004[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCard                                 CallFunc_GetCard_ResultOut;                        // 0x20(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4005[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_InitObject;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue3;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CardFrontRevealComplete_ReturnValue;      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
