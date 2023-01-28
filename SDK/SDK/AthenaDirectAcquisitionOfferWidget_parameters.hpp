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

// 0x51 (0x51 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateShortDescription
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateShortDescription_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F1E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLockedByRequirement_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetShortDescription_ReturnValue;          // 0x18(0x18)()
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_HasRequirement_RequirementText;           // 0x38(0x18)()
	bool                                         CallFunc_HasRequirement_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateName
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateName_Params
{
public:
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetName_ReturnValue;                      // 0x8(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x20(0x18)()
	bool                                         CallFunc_IsLockedByRequirement_ReturnValue;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.LargeImageLoaded
struct UAthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded_Params
{
public:
	class UObject*                               LoadedObject;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupPrice
struct UAthenaDirectAcquisitionOfferWidget_C_SetupPrice_Params
{
public:
	int32                                        PriceIndex;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F21[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemCount_C*                          PriceWidget;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPriceItem_RequiredItemCount;           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItemDefinition*            CallFunc_GetPriceItem_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x198 (0x198 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_Params
{
public:
	class UBorderSlot*                           K2Node_DynamicCast_AsBorder_Slot;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBorderSlot*                           K2Node_DynamicCast_AsBorder_Slot2;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x1C(0x10)(NoDestructor)
	uint8                                        Pad_3F25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin2;                         // 0x38(0x10)(NoDestructor)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItemDefinition*            CallFunc_GetFirstGrantItemDefinition_ReturnValue;  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x60(0x80)()
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue2;          // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue3;          // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicFontMaterial_ReturnValue2;      // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x100(0x90)()
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue4;          // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateOwnedState
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateOwnedState_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F27[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable2;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F28[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOfferId_ReturnValue;                   // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOwned_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF1 (0xF1 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OfferSet
struct UAthenaDirectAcquisitionOfferWidget_C_OfferSet_Params
{
public:
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsExclusive_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F2B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue2;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetTileImage_ReturnValue;                 // 0x30(0x90)()
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItemDefinition*            CallFunc_GetFirstGrantItemDefinition_ReturnValue;  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue;         // 0xD0(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_HasDisplayAsset_ReturnValue;              // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferSet
struct UAthenaDirectAcquisitionOfferWidget_C_OnOfferSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnClicked
struct UAthenaDirectAcquisitionOfferWidget_C_OnClicked_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.HandleOfferPurchaseComplete
struct UAthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnHovered
struct UAthenaDirectAcquisitionOfferWidget_C_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnUnhovered
struct UAthenaDirectAcquisitionOfferWidget_C_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnUpdateStatus
struct UAthenaDirectAcquisitionOfferWidget_C_OnUpdateStatus_Params
{
public:
};

// 0x41 (0x41 - 0x0)
// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget
struct UAthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaDirectAcquisitionOfferDetailsWidget_C* CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
