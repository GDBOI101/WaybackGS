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
// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.Focus
struct UAthenaSeasonDirectAcquisitionScreen_C_Focus_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x228 (0x228 - 0x0)
// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.GenerateOfferWidget
struct UAthenaSeasonDirectAcquisitionScreen_C_GenerateOfferWidget_Params
{
public:
	class FName                                  StorefrontName;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCatalogOffer                         Offer;                                             // 0x8(0x1D0)(ConstParm, Parm, OutParm, ReferenceParm)
	class UFortMtxOfferData*                     DisplayAsset;                                      // 0x1D8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferWidgetBase* ReturnValue;                                       // 0x1E0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue2;            // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaDirectAcquisitionOfferWidget_C* CallFunc_Create_ReturnValue;                       // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue;               // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.NoOffersAvailable
struct UAthenaSeasonDirectAcquisitionScreen_C_NoOffersAvailable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnStartReadingOffers
struct UAthenaSeasonDirectAcquisitionScreen_C_OnStartReadingOffers_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnOffersGenerated
struct UAthenaSeasonDirectAcquisitionScreen_C_OnOffersGenerated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnActivated
struct UAthenaSeasonDirectAcquisitionScreen_C_OnActivated_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen
struct UAthenaSeasonDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             CallFunc_GetSeasonStoreEndDate_ReturnValue;        // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
