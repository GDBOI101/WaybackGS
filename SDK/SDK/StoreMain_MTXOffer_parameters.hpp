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

// 0x18 (0x18 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ShowDetails
struct UStoreMain_MTXOffer_C_ShowDetails_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStoreMain_OfferDetails_C*             CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x208 (0x208 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer
struct UStoreMain_MTXOffer_C_InitOffer_Params
{
public:
	class FText                                  SalePrice;                                         // 0x0(0x18)(Edit)
	bool                                         bIsOnSale;                                         // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_301B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LocalSalePrice;                                    // 0x20(0x18)(Edit)
	class FText                                  BonusMTX;                                          // 0x38(0x18)(Edit)
	class FText                                  BaseMtx;                                           // 0x50(0x18)(Edit)
	class UMaterial*                             OfferMaterial;                                     // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_301C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetBonusQuantity_ReturnValue;             // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortMtxStoreOfferType            CallFunc_GetStoreOfferType_ReturnValue;            // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_301D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMtxGradient                      CallFunc_GetGradient_ReturnValue;                  // 0x80(0x20)(NoDestructor)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetBackground_ReturnValue;                // 0xA8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetTileImage_ReturnValue;                 // 0xB8(0x90)()
	class FText                                  CallFunc_GetName_ReturnValue;                      // 0x148(0x18)()
	int32                                        CallFunc_GetBonusQuantity_ReturnValue2;            // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_301E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x168(0x18)()
	int32                                        CallFunc_GetBaseQuantity_ReturnValue;              // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_301F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetNormalPrice_ReturnValue;               // 0x188(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0x1A0(0x18)()
	class FText                                  CallFunc_GetNormalPrice_ReturnValue2;              // 0x1B8(0x18)()
	class FText                                  CallFunc_GetSalePrice_SalePrice;                   // 0x1D0(0x18)()
	bool                                         CallFunc_GetSalePrice_ReturnValue;                 // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3020[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select2_Default;                            // 0x1F0(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.Construct
struct UStoreMain_MTXOffer_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnClick
struct UStoreMain_MTXOffer_C_OnClick_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnHovered
struct UStoreMain_MTXOffer_C_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUnhovered
struct UStoreMain_MTXOffer_C_OnUnhovered_Params
{
public:
};

// 0x24 (0x24 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer
struct UStoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3021[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_CustomEvent_Button;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	enum class EFortMtxStoreOfferType            CallFunc_GetStoreOfferType_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortMtxStoreOfferType            CallFunc_GetStoreOfferType_ReturnValue2;           // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature
struct UStoreMain_MTXOffer_C_AboutToShowDetails__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
