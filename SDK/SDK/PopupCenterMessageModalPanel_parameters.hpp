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
// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.LeaveZone
struct UPopupCenterMessageModalPanel_C_LeaveZone_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimerText
struct UPopupCenterMessageModalPanel_C_UpdateMatchTimerText_Params
{
public:
	bool                                         StopTimer;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentCount;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x10(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x68(0x18)()
	class AFortGameStatePvP*                     K2Node_DynamicCast_AsFort_Game_State_Pv_P;         // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetStartMatchDelayTimer_ReturnValue;      // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateState
struct UPopupCenterMessageModalPanel_C_UpdateState_Params
{
public:
	enum class ECenterPopupMessageStateEnum      NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CurrentMessage;                                    // 0x8(0x18)(Edit)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_UpdateMatchTimerText_StopTimer;           // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.UpdateMatchTimer
struct UPopupCenterMessageModalPanel_C_UpdateMatchTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.StartMatchTimer
struct UPopupCenterMessageModalPanel_C_StartMatchTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.OnActivated
struct UPopupCenterMessageModalPanel_C_OnActivated_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C.ExecuteUbergraph_PopupCenterMessageModalPanel
struct UPopupCenterMessageModalPanel_C_ExecuteUbergraph_PopupCenterMessageModalPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DF2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_UpdateMatchTimerText_StopTimer;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
