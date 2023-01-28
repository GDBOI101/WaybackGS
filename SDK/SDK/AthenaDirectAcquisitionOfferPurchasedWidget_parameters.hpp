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

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.PopScreen
struct UAthenaDirectAcquisitionOfferPurchasedWidget_C_PopScreen_Params
{
public:
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.HandleBack
struct UAthenaDirectAcquisitionOfferPurchasedWidget_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x120 (0x120 - 0x0)
// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.UpdateFromOffer
struct UAthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer_Params
{
public:
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue2;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue2;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetName_ReturnValue;                      // 0x30(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x48(0x18)()
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue2;                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItemDefinition*            CallFunc_GetFirstGrantItemDefinition_ReturnValue;  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x80(0x80)()
	float                                        CallFunc_BreakColor_R;                             // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x110(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.OnOfferSet
struct UAthenaDirectAcquisitionOfferPurchasedWidget_C_OnOfferSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.OnActivated
struct UAthenaDirectAcquisitionOfferPurchasedWidget_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.Construct
struct UAthenaDirectAcquisitionOfferPurchasedWidget_C_Construct_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget
struct UAthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
