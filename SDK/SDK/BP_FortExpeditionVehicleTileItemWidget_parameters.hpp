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

// 0x99 (0x99 - 0x0)
// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Name
struct UBP_FortExpeditionVehicleTileItemWidget_C_Set_Name_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseSquad                        CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad; // 0x10(0x88)()
	bool                                         CallFunc_TryGetHomebaseSquadData_ReturnValue;      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Rating
struct UBP_FortExpeditionVehicleTileItemWidget_C_Set_Rating_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetExpeditionSquadPower_ReturnValue;      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x370 (0x370 - 0x0)
// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Icon
struct UBP_FortExpeditionVehicleTileItemWidget_C_Set_Icon_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseUIContext*                CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                   CallFunc_GetSquadIcon_ReturnValue;                 // 0x10(0x360)()
};

// 0x10 (0x10 - 0x0)
// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.SetData
struct UBP_FortExpeditionVehicleTileItemWidget_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       OwningList;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnClicked
struct UBP_FortExpeditionVehicleTileItemWidget_C_OnClicked_Params
{
public:
};

// 0x21 (0x21 - 0x0)
// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget
struct UBP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_InData;                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       K2Node_Event_OwningList;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVehicleObject_C*                      K2Node_DynamicCast_AsVehicle_Object;               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnVehicleSelected__DelegateSignature
struct UBP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
