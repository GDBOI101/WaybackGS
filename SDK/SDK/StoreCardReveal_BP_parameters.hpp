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

// 0x21 (0x21 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RarityEnumToText
struct AStoreCardReveal_BP_C_RarityEnumToText_Params
{
public:
	enum class EFortRarity                       InRarity;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OutRarity;                                         // 0x8(0x18)(Parm, OutParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xAA8 (0xAA8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.IsDefender
struct AStoreCardReveal_BP_C_IsDefender_Params
{
public:
	class UFortAccountItemDefinition*            Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDefender;                                        // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Result;                                            // 0x10(0x18)(Parm, OutParm)
	enum class EFortItemType                     Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x38(0x18)()
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_RarityEnumToText_OutRarity;               // 0x58(0x18)()
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0xB8(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetTertiaryCategory_ItemCategoryText;     // 0xF8(0x18)()
	struct FSlateBrush                           CallFunc_GetTertiaryCategory_ItemCategoryBrush;    // 0x110(0x90)()
	bool                                         CallFunc_GetTertiaryCategory_ReturnValue;          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetSecondaryCategory_ItemCategoryText;    // 0x1A8(0x18)()
	struct FSlateBrush                           CallFunc_GetSecondaryCategory_ItemCategoryBrush;   // 0x1C0(0x90)()
	bool                                         CallFunc_GetSecondaryCategory_ReturnValue;         // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData3;             // 0x258(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData4;             // 0x298(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x2D8(0x18)()
	enum class EFortItemType                     CallFunc_GetType_ReturnValue2;                     // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable2;                               // 0x2F8(0x18)()
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x311(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable3;                               // 0x318(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x330(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x348(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0x360(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0x378(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0x390(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0x3A8(0x18)()
	class FText                                  Temp_text_Variable10;                              // 0x3C0(0x18)()
	class FText                                  Temp_text_Variable11;                              // 0x3D8(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x3F0(0x18)()
	class FText                                  Temp_text_Variable13;                              // 0x408(0x18)()
	class FText                                  Temp_text_Variable14;                              // 0x420(0x18)()
	class FText                                  Temp_text_Variable15;                              // 0x438(0x18)()
	class FText                                  Temp_text_Variable16;                              // 0x450(0x18)()
	class FText                                  Temp_text_Variable17;                              // 0x468(0x18)()
	class FText                                  Temp_text_Variable18;                              // 0x480(0x18)()
	class FText                                  Temp_text_Variable19;                              // 0x498(0x18)()
	class FText                                  Temp_text_Variable20;                              // 0x4B0(0x18)()
	class FText                                  Temp_text_Variable21;                              // 0x4C8(0x18)()
	class FText                                  Temp_text_Variable22;                              // 0x4E0(0x18)()
	class FText                                  Temp_text_Variable23;                              // 0x4F8(0x18)()
	class FText                                  Temp_text_Variable24;                              // 0x510(0x18)()
	class FText                                  Temp_text_Variable25;                              // 0x528(0x18)()
	class FText                                  Temp_text_Variable26;                              // 0x540(0x18)()
	class FText                                  Temp_text_Variable27;                              // 0x558(0x18)()
	class FText                                  Temp_text_Variable28;                              // 0x570(0x18)()
	class FText                                  Temp_text_Variable29;                              // 0x588(0x18)()
	class FText                                  Temp_text_Variable30;                              // 0x5A0(0x18)()
	class FText                                  Temp_text_Variable31;                              // 0x5B8(0x18)()
	class FText                                  Temp_text_Variable32;                              // 0x5D0(0x18)()
	class FText                                  Temp_text_Variable33;                              // 0x5E8(0x18)()
	class FText                                  Temp_text_Variable34;                              // 0x600(0x18)()
	class FText                                  Temp_text_Variable35;                              // 0x618(0x18)()
	class FText                                  Temp_text_Variable36;                              // 0x630(0x18)()
	class FText                                  Temp_text_Variable37;                              // 0x648(0x18)()
	class FText                                  Temp_text_Variable38;                              // 0x660(0x18)()
	class FText                                  Temp_text_Variable39;                              // 0x678(0x18)()
	class FText                                  Temp_text_Variable40;                              // 0x690(0x18)()
	class FText                                  Temp_text_Variable41;                              // 0x6A8(0x18)()
	class FText                                  Temp_text_Variable42;                              // 0x6C0(0x18)()
	class FText                                  Temp_text_Variable43;                              // 0x6D8(0x18)()
	class FText                                  Temp_text_Variable44;                              // 0x6F0(0x18)()
	class FText                                  Temp_text_Variable45;                              // 0x708(0x18)()
	class FText                                  Temp_text_Variable46;                              // 0x720(0x18)()
	class FText                                  Temp_text_Variable47;                              // 0x738(0x18)()
	class FText                                  Temp_text_Variable48;                              // 0x750(0x18)()
	class FText                                  Temp_text_Variable49;                              // 0x768(0x18)()
	class FText                                  Temp_text_Variable50;                              // 0x780(0x18)()
	class FText                                  Temp_text_Variable51;                              // 0x798(0x18)()
	class FText                                  Temp_text_Variable52;                              // 0x7B0(0x18)()
	class FText                                  Temp_text_Variable53;                              // 0x7C8(0x18)()
	class FText                                  Temp_text_Variable54;                              // 0x7E0(0x18)()
	class FText                                  Temp_text_Variable55;                              // 0x7F8(0x18)()
	class FText                                  Temp_text_Variable56;                              // 0x810(0x18)()
	class FText                                  Temp_text_Variable57;                              // 0x828(0x18)()
	class FText                                  Temp_text_Variable58;                              // 0x840(0x18)()
	class FText                                  Temp_text_Variable59;                              // 0x858(0x18)()
	class FText                                  Temp_text_Variable60;                              // 0x870(0x18)()
	class FText                                  Temp_text_Variable61;                              // 0x888(0x18)()
	class FText                                  Temp_text_Variable62;                              // 0x8A0(0x18)()
	class FText                                  Temp_text_Variable63;                              // 0x8B8(0x18)()
	class FText                                  Temp_text_Variable64;                              // 0x8D0(0x18)()
	class FText                                  Temp_text_Variable65;                              // 0x8E8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x900(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x918(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData5;             // 0x930(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData6;             // 0x970(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData7;             // 0x9B0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x9F0(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0xA00(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA10(0x18)()
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0xA28(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData8;             // 0xA40(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array3;                           // 0xA80(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue3;                      // 0xA90(0x18)()
};

// 0xB0 (0xB0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCB
struct AStoreCardReveal_BP_C_SetText_CCB_Params
{
public:
	bool                                         Hide;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CCB_Rarity;                                        // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CCB_Text;                                          // 0x8(0x18)(Edit)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable3;                               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChoiceCardName_C*                     K2Node_DynamicCast_AsChoice_Card_Name;             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCard                                 CallFunc_GetCard_ResultOut;                        // 0x50(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24FA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCardPackItem*                     K2Node_DynamicCast_AsFort_Card_Pack_Item;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItemDefinition*>    CallFunc_GetChoices_Choices;                       // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	class UFortAccountItemDefinition*            CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x98(0x18)()
};

// 0xB9 (0xB9 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCA
struct AStoreCardReveal_BP_C_SetText_CCA_Params
{
public:
	bool                                         Hide;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CCA_Text;                                          // 0x8(0x18)(Edit)
	enum class EFortRarity                       CCA_Rarity;                                        // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCard                                 CallFunc_GetCard_ResultOut;                        // 0x38(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24FF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCardPackItem*                     K2Node_DynamicCast_AsFort_Card_Pack_Item;          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2500[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItemDefinition*>    CallFunc_GetChoices_Choices;                       // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	class UFortAccountItemDefinition*            CallFunc_Array_Get_Item;                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable3;                               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2501[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x88(0x18)()
	bool                                         K2Node_Select_Default;                             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2502[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChoiceCardName_C*                     K2Node_DynamicCast_AsChoice_Card_Name;             // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x590 (0x590 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.UserConstructionScript
struct AStoreCardReveal_BP_C_UserConstructionScript_Params
{
public:
	float                                        CallFunc_BreakRotator_Roll;                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2503[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x20(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xA8(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_2504[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0xB8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue2; // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x150(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x180(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x18C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x198(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2505[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue2;      // 0x1B0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location2;                 // 0x1E0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation2;                 // 0x1EC(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale2;                    // 0x1F8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2506[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue3; // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue3;      // 0x210(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue4;      // 0x240(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x270(0xC)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue2;     // 0x27C(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_2507[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x290(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue2;               // 0x2C0(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x2F0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult2;     // 0x378(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue4; // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue5; // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue6; // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue7; // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue8; // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue9; // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue10; // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue11; // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue12; // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue2;     // 0x448(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2508[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult2;   // 0x458(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult2;      // 0x4E0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue13; // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue14; // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue15; // 0x578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue16; // 0x580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue17; // 0x588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardExit__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardExit__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__Proceed__EventFunc
struct AStoreCardReveal_BP_C_TL_CardExit__Proceed__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardFlipToFront__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardFlipToFront__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardUpgradeFast__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardUpgradeFast__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__FinishedFunc
struct AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__UpdateFunc
struct AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__FinishedFunc
struct AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__UpdateFunc
struct AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CC_FlareFX__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CC_FlareFX__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__FinishedFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__UpdateFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CameraFOV__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CameraFOV__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2_Hide__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCA_Reveal__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCA_Reveal__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCB_Reveal__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCB_Reveal__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__ChangeTexture__EventFunc
struct AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__ChangeTexture__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardMoveToScreen__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardMoveToScreen__UpdateFunc_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6
struct AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7181AC990
struct AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7181AC990_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7
struct AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6
struct AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B51198EA0F
struct AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B51198EA0F_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5
struct AStoreCardReveal_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7CD6D1379
struct AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7CD6D1379_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Released
struct AStoreCardReveal_BP_C_InpTchEvt_Released_Params
{
public:
	enum class ETouchIndex                       FingerIndex;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2509[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x4(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Pressed
struct AStoreCardReveal_BP_C_InpTchEvt_Pressed_Params
{
public:
	enum class ETouchIndex                       FingerIndex;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_250A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x4(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4
struct AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InitiatePinata
struct AStoreCardReveal_BP_C_InitiatePinata_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnStoreStateChanged
struct AStoreCardReveal_BP_C_OnStoreStateChanged_Params
{
public:
	enum class EFortStoreState                   NewStoreState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StartPackOpen
struct AStoreCardReveal_BP_C_StartPackOpen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardEnterStart
struct AStoreCardReveal_BP_C_CardEnterStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PackDestroyStart
struct AStoreCardReveal_BP_C_PackDestroyStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFlipStart
struct AStoreCardReveal_BP_C_CardFlipStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardExitStart
struct AStoreCardReveal_BP_C_CardExitStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOffFastForward
struct AStoreCardReveal_BP_C_TurnOffFastForward_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardBackRevealStart
struct AStoreCardReveal_BP_C_CardBackRevealStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFrontRevealStart
struct AStoreCardReveal_BP_C_CardFrontRevealStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOnFastForward
struct AStoreCardReveal_BP_C_TurnOnFastForward_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableMouseInputOnActor
struct AStoreCardReveal_BP_C_EnableMouseInputOnActor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReceiveBeginPlay
struct AStoreCardReveal_BP_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardPackStoreStart
struct AStoreCardReveal_BP_C_CardPackStoreStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SpecialCardPauseAbort
struct AStoreCardReveal_BP_C_SpecialCardPauseAbort_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PresentChoiceStart
struct AStoreCardReveal_BP_C_PresentChoiceStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ChoiceMadeStart
struct AStoreCardReveal_BP_C_ChoiceMadeStart_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  ButtonPressed;                                     // 0x8(0x18)(Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  ButtonPressed;                                     // 0x8(0x18)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SkipBackRevealForChoicePack
struct AStoreCardReveal_BP_C_SkipBackRevealForChoicePack_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ContinueFinalChoiceCardProcess
struct AStoreCardReveal_BP_C_ContinueFinalChoiceCardProcess_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ConstructCardFront
struct AStoreCardReveal_BP_C_ConstructCardFront_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCA-AmbientAnim
struct AStoreCardReveal_BP_C_StopCCA_AmbientAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.GetReadyToShowCards
struct AStoreCardReveal_BP_C_GetReadyToShowCards_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Stop-CC-HoverAnims
struct AStoreCardReveal_BP_C_Stop_CC_HoverAnims_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardA
struct AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardA_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardA
struct AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardA_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-A
struct AStoreCardReveal_BP_C_HoverStart_CC_A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-A
struct AStoreCardReveal_BP_C_HoverEnd_CC_A_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardB
struct AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardB_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardB
struct AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardB_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-B
struct AStoreCardReveal_BP_C_HoverStart_CC_B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-B
struct AStoreCardReveal_BP_C_HoverEnd_CC_B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CheckHoverStatus
struct AStoreCardReveal_BP_C_CheckHoverStatus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCA-AmbientAnim
struct AStoreCardReveal_BP_C_RestartCCA_AmbientAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCB-AmbientAnim
struct AStoreCardReveal_BP_C_StopCCB_AmbientAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCB-AmbientAnim
struct AStoreCardReveal_BP_C_RestartCCB_AmbientAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableOpenAllPacks
struct AStoreCardReveal_BP_C_EnableOpenAllPacks_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardInPlace
struct AStoreCardReveal_BP_C_CardInPlace_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CompareRarity
struct AStoreCardReveal_BP_C_CompareRarity_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PlayUpgradeAnim
struct AStoreCardReveal_BP_C_PlayUpgradeAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReadyForCardToCome
struct AStoreCardReveal_BP_C_ReadyForCardToCome_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0
struct AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Handle Input Mode Changed
struct AStoreCardReveal_BP_C_Handle_Input_Mode_Changed_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExitPackStore
struct AStoreCardReveal_BP_C_ExitPackStore_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
public:
	enum class ETouchIndex                       FingerIndex;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_250B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
public:
	enum class ETouchIndex                       FingerIndex;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_250C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ResetGamepadInput
struct AStoreCardReveal_BP_C_ResetGamepadInput_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OpenGamepadGate
struct AStoreCardReveal_BP_C_OpenGamepadGate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CloseGamepadGate
struct AStoreCardReveal_BP_C_CloseGamepadGate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EndQuestionMarkAnim
struct AStoreCardReveal_BP_C_EndQuestionMarkAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetCCRarityColor
struct AStoreCardReveal_BP_C_SetCCRarityColor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CCRarityColorReady
struct AStoreCardReveal_BP_C_CCRarityColorReady_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40
struct AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23A8 (0x23A8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExecuteUbergraph_StoreCardReveal_BP
struct AStoreCardReveal_BP_C_ExecuteUbergraph_StoreCardReveal_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue;      // 0x4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue2;     // 0x14(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue3;     // 0x24(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue4;     // 0x34(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue5;     // 0x44(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue6;     // 0x54(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue7;     // 0x64(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue8;     // 0x74(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x84(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Add_ByteByte_ReturnValue;                 // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_250D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue9;     // 0x94(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue10;    // 0xA4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue11;    // 0xB4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12;    // 0xC4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue13;    // 0xD4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue14;    // 0xE4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue15;    // 0xF4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue16;    // 0x104(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue17;    // 0x114(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue18;    // 0x124(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue19;    // 0x134(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue20;    // 0x144(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue21;    // 0x154(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue22;    // 0x164(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue23;    // 0x174(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue24;    // 0x184(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue25;    // 0x194(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue26;    // 0x1A4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue27;    // 0x1B4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue28;    // 0x1C4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue29;    // 0x1D4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue30;    // 0x1E4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue;             // 0x1F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_250E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x1F8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue2;            // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_250F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue31;    // 0x20C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue32;    // 0x21C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue33;    // 0x22C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue34;    // 0x23C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2510[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x250(0x10)(ZeroConstructor, ReferenceParm)
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue35;    // 0x268(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue2;                // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue36;    // 0x288(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue37;    // 0x298(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue38;    // 0x2A8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue39;    // 0x2B8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue40;    // 0x2C8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue41;    // 0x2D8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue42;    // 0x2E8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue43;    // 0x2F8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue44;    // 0x308(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue45;    // 0x318(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue46;    // 0x328(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue47;    // 0x338(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x349(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2511[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_ByteByte_ReturnValue;        // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable2;                // 0x359(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2512[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_TouchedComponent4;      // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_ComponentBoundEvent_ButtonPressed2;         // 0x368(0x18)(HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_TouchedComponent3;      // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_ComponentBoundEvent_ButtonPressed;          // 0x388(0x18)(HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable2;                      // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2513[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue2;                  // 0x3AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable3;                // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x3B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable3;                      // 0x3B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2514[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AStoreCamera_Blueprint_C*>      CallFunc_GetAllActorsOfClass_OutActors2;           // 0x3B8(0x10)(ZeroConstructor, ReferenceParm)
	class AStoreCamera_Blueprint_C*              CallFunc_Array_Get_Item2;                          // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable4;                // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable4;                      // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2515[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue2;         // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x3EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue48;    // 0x3F4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll2;                       // 0x404(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch2;                      // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw2;                        // 0x40C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue49;    // 0x410(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue50;    // 0x420(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x430(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue2;     // 0x43C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue51;    // 0x448(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue52;    // 0x458(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue53;    // 0x468(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue54;    // 0x478(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_TouchedComponent4;              // 0x488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_TouchedComponent3;              // 0x490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_TouchedComponent2;              // 0x498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_TouchedComponent;               // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x4A8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x4B4(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x4C0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location2;                 // 0x4CC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation2;                 // 0x4D8(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale2;                    // 0x4E4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location3;                 // 0x4F0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation3;                 // 0x4FC(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale3;                    // 0x508(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location4;                 // 0x514(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation4;                 // 0x520(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale4;                    // 0x52C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable5;                // 0x538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2516[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x540(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x570(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x5F8(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue;         // 0x604(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue3;     // 0x610(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x61C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x620(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x624(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x628(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue2;     // 0x634(0xC)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue3;     // 0x640(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue2;        // 0x64C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue4;     // 0x658(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X2;                           // 0x664(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y2;                           // 0x668(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z2;                           // 0x66C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue4;     // 0x670(0xC)(IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable5;                      // 0x67C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable6;                // 0x67D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable6;                      // 0x67E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortStoreState                   K2Node_CustomEvent_NewStoreState;                  // 0x67F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue2;      // 0x680(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2517[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue5;     // 0x6B4(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue3;        // 0x6C0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue5;     // 0x6CC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X3;                           // 0x6D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y3;                           // 0x6DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z3;                           // 0x6E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue2;                  // 0x6E4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2; // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2518[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult2;     // 0x6F8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue6;     // 0x780(0xC)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue7;     // 0x78C(0xC)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue8;     // 0x798(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue4;        // 0x7A4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue6;     // 0x7B0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X4;                           // 0x7BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y4;                           // 0x7C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z4;                           // 0x7C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue2;          // 0x7C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3; // 0x7D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2519[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue7;     // 0x7D4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue8;     // 0x7E0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable7;                      // 0x7EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue3;      // 0x7F0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue4;      // 0x820(0x30)(IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable7;                // 0x850(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue9;     // 0x854(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue10;    // 0x860(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable4; // 0x86C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue5;      // 0x870(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue6;      // 0x8A0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue7;      // 0x8D0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue8;      // 0x900(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue9;      // 0x930(0x30)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x960(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location5;                 // 0x964(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation5;                 // 0x970(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale5;                    // 0x97C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll3;                       // 0x988(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch3;                      // 0x98C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw3;                        // 0x990(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X5;                           // 0x994(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y5;                           // 0x998(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z5;                           // 0x99C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue10;     // 0x9A0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location6;                 // 0x9D0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation6;                 // 0x9DC(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale6;                    // 0x9E8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll4;                       // 0x9F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch4;                      // 0x9F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw4;                        // 0x9FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X6;                           // 0xA00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y6;                           // 0xA04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z6;                           // 0xA08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_251D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue11;     // 0xA10(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue12;     // 0xA40(0x30)(IsPlainOldData, NoDestructor)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue;                   // 0xA70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCard                                 CallFunc_GetCard_ResultOut;                        // 0xA78(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue;                      // 0xA90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0xA91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0xA98(0x18)(HasGetValueTypeHash)
	class UFortUIDataConfigurationContext*       CallFunc_GetContext_ReturnValue2;                  // 0xAB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLimitedToES2Features_ReturnValue;       // 0xAB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue3;                  // 0xAC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable;                              // 0xAC8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0xAD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETouchIndex                       Temp_byte_Variable;                                // 0xAD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETouchIndex                       K2Node_InputTouchEvent_FingerIndex;                // 0xAD6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2520[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_InputTouchEvent_Location;                   // 0xAD8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETouchIndex                       K2Node_InputTouchEvent_FingerIndex2;               // 0xAE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2521[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_InputTouchEvent_Location2;                  // 0xAE8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2522[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue4;                  // 0xAF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue2;              // 0xB00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2523[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0xB08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0xB10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB18(0x10)(ZeroConstructor, NoDestructor)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue5;                  // 0xB28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key2;                         // 0xB30(0x18)(HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_ReturnValue;                       // 0xB48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UInterfaceProperty_                          K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface; // 0xB50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2524[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue55;    // 0xB64(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2525[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable2;                             // 0xB78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded2;                        // 0xB80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0xB88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0xB90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2526[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue6;                  // 0xB98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0xBA0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue; // 0xBAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xBB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2527[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_VLerp_ReturnValue2;                       // 0xBB4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0xBC0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_GreaterEqual_ByteByte_ReturnValue2;       // 0xC48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2528[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xC4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xC50(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_2529[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0xC60(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         Temp_bool_Variable;                                // 0xCE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_252A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue3;         // 0xCF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0xCF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0xCF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0xCFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_ByteByte_ReturnValue;           // 0xCFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum3_CmpSuccess;                     // 0xCFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable4;                               // 0xCFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPauseType                        Temp_byte_Variable2;                               // 0xCFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xCFF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0xD00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable5;                               // 0xD01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable6;                               // 0xD02(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable7;                               // 0xD03(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable8;                               // 0xD04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPauseType                        Temp_byte_Variable3;                               // 0xD05(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select2_Default;                            // 0xD06(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_252B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakRotator_Roll5;                       // 0xD08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch5;                      // 0xD0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw5;                        // 0xD10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue2;              // 0xD14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable9;                               // 0xD18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_252C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_MakeRotator_ReturnValue2;                 // 0xD1C(0xC)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult2;   // 0xD28(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         Temp_bool_Variable10;                              // 0xDB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable11;                              // 0xDB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable12;                              // 0xDB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_252D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue9;     // 0xDB4(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue11;    // 0xDC0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_252E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0xDD0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        K2Node_InputAxisEvent_AxisValue2;                  // 0xE58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0xE5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0xE5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPauseType                        Temp_byte_Variable4;                               // 0xE5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable13;                              // 0xE5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select3_Default;                            // 0xE60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable14;                              // 0xE61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable15;                              // 0xE62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bUsingGamepad;                  // 0xE63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable16;                              // 0xE64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPauseType                        Temp_byte_Variable5;                               // 0xE65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select4_Default;                            // 0xE66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_252F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xE68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0xE6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue3;              // 0xE70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue4;              // 0xE74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue5;              // 0xE78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue3;                 // 0xE7C(0xC)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_Add_FloatFloat_ReturnValue6;              // 0xE88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue;                        // 0xE8C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_MakeVector_ReturnValue3;                  // 0xE98(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue3;                       // 0xEA4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xEB0(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult3;     // 0xEE0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue3;         // 0xF68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue7;              // 0xF6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue8;              // 0xF70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue4;         // 0xF74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2530[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_TLerp_ReturnValue;                        // 0xF80(0x30)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_Add_FloatFloat_ReturnValue9;              // 0xFB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2531[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult4;     // 0xFB8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue4;                 // 0x1040(0xC)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_Add_FloatFloat_ReturnValue10;             // 0x104C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue2;                       // 0x1050(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_MakeVector_ReturnValue4;                  // 0x105C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue4;                       // 0x1068(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2532[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue2;               // 0x1080(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult5;     // 0x10B0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue5;                       // 0x1138(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2533[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult2;      // 0x1148(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue6;                       // 0x11D0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable8;                // 0x11DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2534[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_RLerp_ReturnValue3;                       // 0x11E0(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_2535[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x11F0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue5;         // 0x1278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue11;             // 0x127C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue5;                  // 0x1280(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue7;                       // 0x128C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult3;      // 0x1298(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class ETouchIndex                       K2Node_ComponentBoundEvent_FingerIndex2;           // 0x1320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2536[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_TouchedComponent2;      // 0x1328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue4;                       // 0x1330(0xC)(IsPlainOldData, NoDestructor)
	enum class ETouchIndex                       K2Node_ComponentBoundEvent_FingerIndex;            // 0x133C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2537[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_TouchedComponent;       // 0x1340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult2;      // 0x1348(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue8;                       // 0x13D0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue5;                       // 0x13DC(0xC)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult3;      // 0x13E8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Add_FloatFloat_ReturnValue12;             // 0x1470(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue6;                  // 0x1474(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue6;                       // 0x1480(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_VLerp_ReturnValue9;                       // 0x148C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult4;      // 0x1498(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult4;      // 0x1520(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue3;          // 0x15A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x15B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x15B4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue2;                        // 0x15C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue3;                        // 0x15C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue2;        // 0x15C8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue4;                        // 0x15D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue5;                        // 0x15D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue3;        // 0x15DC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue6;                        // 0x15E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue7;                        // 0x15EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue4;        // 0x15F0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue8;                        // 0x15FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x1600(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x1610(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x1620(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x1630(0x10)(ZeroConstructor, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue2;                       // 0x1640(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue3;                       // 0x1670(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult6;     // 0x16A0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult7;     // 0x1728(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue10;                      // 0x17B0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2538[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult5;      // 0x17C0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Lerp_ReturnValue9;                        // 0x1848(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable8;                      // 0x184C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2539[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue10;                       // 0x1850(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_253A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue7;                  // 0x1858(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue8;                  // 0x1860(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCard                                 CallFunc_GetCard_ResultOut2;                       // 0x1868(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue2;                     // 0x1880(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_253B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCard                                 CallFunc_GetCard_ResultOut3;                       // 0x1888(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue3;                     // 0x18A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_253C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCardPackItem*                     K2Node_DynamicCast_AsFort_Card_Pack_Item;          // 0x18A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x18B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_253D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCardPackItem*                     K2Node_DynamicCast_AsFort_Card_Pack_Item2;         // 0x18B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x18C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x18C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x18C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger2_CmpSuccess;                  // 0x18C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_253E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue9;                  // 0x18C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ChoiceResultComplete_ReturnValue;         // 0x18D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_253F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue10;                 // 0x18D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakeChoice_ReturnValue;                   // 0x18E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MakeChoice_ReturnValue2;                  // 0x18E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2540[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue2;   // 0x18E4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue13;             // 0x18F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue5;                 // 0x18F8(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_2541[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult3;   // 0x1908(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum4_CmpSuccess;                     // 0x1990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2542[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x1998(0x80)()
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue11;                 // 0x1A18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable2;                             // 0x1A20(0x18)(HasGetValueTypeHash)
	struct FCard                                 CallFunc_GetCard_ResultOut4;                       // 0x1A38(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue4;                     // 0x1A50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2543[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key3;                         // 0x1A58(0x18)(HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue2;                   // 0x1A70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2544[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key4;                         // 0x1A78(0x18)(HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue7;                       // 0x1A90(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_2545[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult4;   // 0x1AA0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue11;                      // 0x1B28(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2546[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue12;                 // 0x1B38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x1B40(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_CardExitComplete_ReturnValue;             // 0x1BC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2547[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue13;                 // 0x1BD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CardFrontRevealComplete_ReturnValue;      // 0x1BD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2548[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue14;                 // 0x1BE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CardFlipComplete_ReturnValue;             // 0x1BE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2549[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue15;                 // 0x1BF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CardBackRevealComplete_ReturnValue;       // 0x1BF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_254A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue16;                 // 0x1C00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CardEntryComplete_ReturnValue;            // 0x1C08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_254B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x1C10(0x10)(ZeroConstructor, NoDestructor)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue17;                 // 0x1C20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable3;                             // 0x1C28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded3;                        // 0x1C30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue18;                 // 0x1C38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCard                                 CallFunc_GetCard_ResultOut5;                       // 0x1C40(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue5;                     // 0x1C58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_254C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable4;                             // 0x1C60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D2;                  // 0x1C68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess5;                      // 0x1C70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_254D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCardPackItem*                     K2Node_DynamicCast_AsFort_Card_Pack_Item3;         // 0x1C78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess6;                      // 0x1C80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_254E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItemDefinition*>    CallFunc_GetChoices_Choices;                       // 0x1C88(0x10)(ZeroConstructor, ReferenceParm)
	class UObject*                               K2Node_CustomEvent_Loaded4;                        // 0x1C98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSchematicItemDefinition*          K2Node_DynamicCast_AsFort_Schematic_Item_Definition; // 0x1CA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess7;                      // 0x1CA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_254F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPersistentName_ReturnValue;            // 0x1CB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              CallFunc_GetResultWorldItemDefinition_ReturnValue; // 0x1CC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x1CC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2550[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue;         // 0x1CD0(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue2;                    // 0x1CF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue3;                    // 0x1CF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue4;                    // 0x1CF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue5;                    // 0x1CF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue6;                    // 0x1CF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue7;                    // 0x1CF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue8;                    // 0x1CF6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue9;                    // 0x1CF7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue10;                   // 0x1CF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2551[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue2;        // 0x1D00(0x20)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_AssetToObject_ReturnValue;           // 0x1D20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D3;                  // 0x1D28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess8;                      // 0x1D30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2552[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSchematicItemDefinition*          K2Node_DynamicCast_AsFort_Schematic_Item_Definition2; // 0x1D38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess9;                      // 0x1D40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2553[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWorldItemDefinition*              CallFunc_GetResultWorldItemDefinition_ReturnValue2; // 0x1D48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPersistentName_ReturnValue2;           // 0x1D50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue3;        // 0x1D60(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue11;                   // 0x1D80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue12;                   // 0x1D81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue13;                   // 0x1D82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue14;                   // 0x1D83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue15;                   // 0x1D84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue16;                   // 0x1D85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue17;                   // 0x1D86(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue18;                   // 0x1D87(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue19;                   // 0x1D88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue20;                   // 0x1D89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2554[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue4;        // 0x1D90(0x20)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_AssetToObject_ReturnValue2;          // 0x1DB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItemDefinition*            CallFunc_Array_Get_Item3;                          // 0x1DB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D4;                  // 0x1DC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess10;                     // 0x1DC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2555[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItemDefinition*            CallFunc_Array_Get_Item4;                          // 0x1DD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x1DD8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x1DE8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0x1DF8(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2556[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue13;     // 0x1E10(0x30)(IsPlainOldData, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate10;            // 0x1E40(0x10)(ZeroConstructor, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue4;                       // 0x1E50(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location7;                 // 0x1E80(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation7;                 // 0x1E8C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale7;                    // 0x1E98(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2557[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_TLerp_ReturnValue5;                       // 0x1EB0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue6;                       // 0x1EE0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location8;                 // 0x1F10(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation8;                 // 0x1F1C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale8;                    // 0x1F28(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location9;                 // 0x1F34(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation9;                 // 0x1F40(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale9;                    // 0x1F4C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2558[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue3;               // 0x1F60(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue7;                       // 0x1F90(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult8;     // 0x1FC0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_BreakTransform_Location10;                // 0x2048(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation10;                // 0x2054(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale10;                   // 0x2060(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2559[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue4;               // 0x2070(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult9;     // 0x20A0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable9;                // 0x2128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_255A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue12;    // 0x212C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue13;    // 0x2138(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue14;    // 0x2144(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue12;                      // 0x2150(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_255B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult6;      // 0x2160(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue15;    // 0x21E8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_255C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult7;      // 0x21F8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue13;                      // 0x2280(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_255D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult8;      // 0x2290(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult9;      // 0x2318(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         Temp_bool_IsClosed_Variable9;                      // 0x23A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_255E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_InputAxisEvent_AxisValue;                   // 0x23A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
