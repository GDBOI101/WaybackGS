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

// 0x0 (0x0 - 0x0)
// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterPermissionsWidget
struct UOutpostScreenStormShield_C_CenterPermissionsWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CenterStormShieldWidget
struct UOutpostScreenStormShield_C_CenterStormShieldWidget_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function OutpostScreenStormShield.OutpostScreenStormShield_C.HandleBack
struct UOutpostScreenStormShield_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A18[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function OutpostScreenStormShield.OutpostScreenStormShield_C.AddInputHandlers
struct UOutpostScreenStormShield_C_AddInputHandlers_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function OutpostScreenStormShield.OutpostScreenStormShield_C.SetCoreBuilding
struct UOutpostScreenStormShield_C_SetCoreBuilding_Params
{
public:
	class AFortOutpostBuilding*                  NewCoreBuilding;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue2;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOutpostScreenStormShieldContent_C*    K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOutpostScreenStormShieldPermissions_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OutpostScreenStormShield.OutpostScreenStormShield_C.Construct
struct UOutpostScreenStormShield_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
struct UOutpostScreenStormShield_C_BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function OutpostScreenStormShield.OutpostScreenStormShield_C.BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature
struct UOutpostScreenStormShield_C_BndEvt__ContentOrPermissionsTab_K2Node_ComponentBoundEvent_36_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function OutpostScreenStormShield.OutpostScreenStormShield_C.ExecuteUbergraph_OutpostScreenStormShield
struct UOutpostScreenStormShield_C_ExecuteUbergraph_OutpostScreenStormShield_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_TabId2;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue2;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOutpostScreenStormShieldPermissions_C* K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Permissions; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOutpostScreenStormShieldContent_C*    K2Node_DynamicCast_AsOutpost_Screen_Storm_Shield_Content; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_TabButton;              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                      K2Node_DynamicCast_AsIcon_Tab_Button;              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OutpostScreenStormShield.OutpostScreenStormShield_C.CloseOutpostScreen__DelegateSignature
struct UOutpostScreenStormShield_C_CloseOutpostScreen__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
