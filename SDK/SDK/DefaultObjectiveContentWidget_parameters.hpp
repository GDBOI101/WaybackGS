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

// 0x2C (0x2C - 0x0)
// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetHeightEstimate
struct UDefaultObjectiveContentWidget_C_GetHeightEstimate_Params
{
public:
	float                                        Height;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeightEstimate;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_372D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetHeightEstimate_Height;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_372E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionRichText_C*                    CallFunc_GetRichTextBlock_MissionRichTextBlock;    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_372F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetMissionHUDTextLineHeightEstimate_ReturnValue; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue2;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleTimerComponentUpdated
struct UDefaultObjectiveContentWidget_C_HandleTimerComponentUpdated_Params
{
public:
	class UFortMissionTimerComponent*            InTimerComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.CreateRichTextBlock
struct UDefaultObjectiveContentWidget_C_CreateRichTextBlock_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionRichText_C*                    CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.GetRichTextBlock
struct UDefaultObjectiveContentWidget_C_GetRichTextBlock_Params
{
public:
	class UMissionRichText_C*                    MissionRichTextBlock;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionRichText_C*                    FoundTextBlock;                                    // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3730[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionRichText_C*                    K2Node_DynamicCast_AsMission_Rich_Text;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C8 (0x1C8 - 0x0)
// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Update
struct UDefaultObjectiveContentWidget_C_Update_Params
{
public:
	class FText                                  TimerText;                                         // 0x0(0x18)(Edit)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3731[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x78(0x18)()
	class UFortMissionTimerComponent*            CallFunc_GetTimerComponent_ReturnValue;            // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionRichText_C*                    CallFunc_GetRichTextBlock_MissionRichTextBlock;    // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3732[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetTimeText_ReturnValue;                  // 0xA8(0x18)()
	bool                                         CallFunc_IsTimerVisible_ReturnValue;               // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3733[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0xC8(0x40)(HasGetValueTypeHash)
	float                                        CallFunc_GetMissionTimerTimeRemaining_ReturnValue; // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3734[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x110(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3735[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x128(0x18)()
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3736[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetObjectiveDisplayString_ReturnValue;    // 0x148(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData3;             // 0x160(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array2;                           // 0x1A0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue2;                      // 0x1B0(0x18)()
};

// 0x9 (0x9 - 0x0)
// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.Setup
struct UDefaultObjectiveContentWidget_C_Setup_Params
{
public:
	class AFortObjectiveBase*                    Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInConfigureAsHUD;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveStatusChanged
struct UDefaultObjectiveContentWidget_C_HandleObjectiveStatusChanged_Params
{
public:
	class AFortObjectiveBase*                    Objective;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortObjectiveStatus              NewStatus;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleObjectiveVisibilityChanged
struct UDefaultObjectiveContentWidget_C_HandleObjectiveVisibilityChanged_Params
{
public:
	class AFortObjectiveBase*                    Objective;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bNewVisibility;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.HandleUpdate
struct UDefaultObjectiveContentWidget_C_HandleUpdate_Params
{
public:
	class AFortMissionState*                     MissionState;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function DefaultObjectiveContentWidget.DefaultObjectiveContentWidget_C.ExecuteUbergraph_DefaultObjectiveContentWidget
struct UDefaultObjectiveContentWidget_C_ExecuteUbergraph_DefaultObjectiveContentWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3737[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class AFortObjectiveBase*                    K2Node_Event_Objective;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bInConfigureAsHUD;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3738[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x38(0x10)(ZeroConstructor, NoDestructor)
	class AFortObjectiveBase*                    K2Node_CustomEvent_Objective2;                     // 0x48(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortObjectiveStatus              K2Node_CustomEvent_NewStatus;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3739[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortObjectiveBase*                    K2Node_CustomEvent_Objective;                      // 0x58(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bNewVisibility;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_373A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortMissionState*                     K2Node_CustomEvent_MissionState;                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMissionTimerComponent*            CallFunc_GetTimerComponent_ReturnValue;            // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x78(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
