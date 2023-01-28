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

// 0xA0 (0xA0 - 0x0)
// Function Results_BonusXpType.Results_BonusXpType_C.setInformation
struct UResults_BonusXpType_C_SetInformation_Params
{
public:
	int32                                        InXPAmount;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PlayerName;                                        // 0x8(0x18)(Parm)
	class FName                                  InType;                                            // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Type;                                              // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Source_Player_Name;                                // 0x30(0x18)(Edit)
	int32                                        XPAmount;                                          // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Bonus_Type;                                        // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TypeBackground;                                    // 0x50(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TypeText;                                          // 0x60(0x18)(Edit)
	struct FVector2D                             TypeScale;                                         // 0x78(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x88(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function Results_BonusXpType.Results_BonusXpType_C.Construct
struct UResults_BonusXpType_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Results_BonusXpType.Results_BonusXpType_C.PreConstruct
struct UResults_BonusXpType_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function Results_BonusXpType.Results_BonusXpType_C.ExecuteUbergraph_Results_BonusXpType
struct UResults_BonusXpType_C_ExecuteUbergraph_Results_BonusXpType_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue2;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
