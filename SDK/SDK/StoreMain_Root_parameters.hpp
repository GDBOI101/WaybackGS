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

// 0x10 (0x10 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.HandleBack
struct UStoreMain_Root_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.AboutToEnterChat
struct UStoreMain_Root_C_AboutToEnterChat_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.AboutToPushDetails
struct UStoreMain_Root_C_AboutToPushDetails_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.IsOffersScrollBoxActive
struct UStoreMain_Root_C_IsOffersScrollBoxActive_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.SetFocus
struct UStoreMain_Root_C_SetFocus_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.AddOffer
struct UStoreMain_Root_C_AddOffer_Params
{
public:
	class UFortMtxStoreOfferBase*                MtxOffer;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x8(0x10)(NoDestructor)
	class UStoreMain_MTXOffer_C*                 K2Node_DynamicCast_AsStore_Main_MTXOffer;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScrollBoxSlot*                        K2Node_DynamicCast_AsScroll_Box_Slot;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable
struct UStoreMain_Root_C_NoOffersAvailable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.OnActivated
struct UStoreMain_Root_C_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.OnMtxOfferGenerated
struct UStoreMain_Root_C_OnMtxOfferGenerated_Params
{
public:
	class UFortMtxStoreOfferBase*                MtxOffer;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated
struct UStoreMain_Root_C_OnOffersGenerated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers
struct UStoreMain_Root_C_OnStartReadingOffers_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.OnDeactivated
struct UStoreMain_Root_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.Destruct
struct UStoreMain_Root_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.Construct
struct UStoreMain_Root_C_Construct_Params
{
public:
};

// 0x99 (0x99 - 0x0)
// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
struct UStoreMain_Root_C_ExecuteUbergraph_StoreMain_Root_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFrontEndCamera                   Temp_byte_Variable3;                               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFrontEndCamera                   Temp_byte_Variable4;                               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFrontEndCamera                   K2Node_Select_Default;                             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMtxStoreOfferBase*                K2Node_Event_MtxOffer;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AreOffersLoaded_ReturnValue;              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOffersScrollBoxActive_Return_Value;     // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIStateWidget_NUI*                CallFunc_GetCurrentUIStateWidget_ReturnValue;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x58(0x10)(NoDestructor)
	class UFrontEnd_C*                           K2Node_DynamicCast_AsFront_End;                    // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x78(0x10)(ZeroConstructor, NoDestructor)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue3;                  // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue4;                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
