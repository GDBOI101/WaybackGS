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

// 0x31 (0x31 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupCameraMode
struct UAthenaSpectatorHUD_C_SetupCameraMode_Params
{
public:
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIManager_C*                          K2Node_DynamicCast_AsUIManager;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFeedback_C*                           K2Node_DynamicCast_AsFeedback;                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.AddTeamMemberIndicator
struct UAthenaSpectatorHUD_C_AddTeamMemberIndicator_Params
{
public:
	class AFortPlayerStateAthena*                Player_State;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Team_Member_Index;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C51[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaTeamMemberIndicator_C*          CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortActorCanvasSlot*                  CallFunc_AddActorIndicator_ReturnValue;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x52 (0x52 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CheckHUDElementVisibility
struct UAthenaSpectatorHUD_C_CheckHUDElementVisibility_Params
{
public:
	struct FGameplayTagContainer                 HiddenHUDElementTags;                              // 0x0(0x20)(Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          HUDElementTagToCheck;                              // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               HUDElement;                                        // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x30(0x20)()
	bool                                         CallFunc_HasAnyTags_ReturnValue;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHUDElementVisibilityChanged
struct UAthenaSpectatorHUD_C_OnHUDElementVisibilityChanged_Params
{
public:
	struct FGameplayTagContainer                 HiddenHUDElementTags;                              // 0x0(0x20)(Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PopContentWidgetInternal
struct UAthenaSpectatorHUD_C_PopContentWidgetInternal_Params
{
public:
	struct FContentPushState                     State;                                             // 0x0(0x3)(Parm, NoDestructor)
	uint8                                        Pad_3C53[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_PopWigdet_ReturnValue;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CreateInterestIndicatorWidget
struct UAthenaSpectatorHUD_C_CreateInterestIndicatorWidget_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInterestIndicatorWidget_C*            CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortActorCanvasSlot*                  CallFunc_AddActorIndicator_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleOnPointOfInterestRemoved
struct UAthenaSpectatorHUD_C_HandleOnPointOfInterestRemoved_Params
{
public:
	class AActor*                                PointOfInterest;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInterestIndicatorWidget_C*            CurrentPointOfInterestWidget;                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Removed;                                           // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C55[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemovePointOfInterest_Removed;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C58[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInterestIndicatorWidget_C*            CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleOnPointOfInterestAdded
struct UAthenaSpectatorHUD_C_HandleOnPointOfInterestAdded_Params
{
public:
	class AActor*                                PointOfInterest;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DisplayText;                                       // 0x8(0x18)(Parm)
	class UTexture2D*                            DisplayImage;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInterestIndicatorWidget_C*            CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowPicker
struct UAthenaSpectatorHUD_C_ShowPicker_Params
{
public:
	enum class EFortPickerMode                   Mode;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InitialOption;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreFirstAccept;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleFocusChat
struct UAthenaSpectatorHUD_C_HandleFocusChat_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleTopLevelMenu
struct UAthenaSpectatorHUD_C_ToggleTopLevelMenu_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleChat
struct UAthenaSpectatorHUD_C_ToggleChat_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetPersistentHUDContentVisibility
struct UAthenaSpectatorHUD_C_SetPersistentHUDContentVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleIndicatorModeChanged
struct UAthenaSpectatorHUD_C_HandleIndicatorModeChanged_Params
{
public:
	bool                                         InidicatorsEnabled;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetCursorModeContent
struct UAthenaSpectatorHUD_C_SetCursorModeContent_Params
{
public:
	class UUserWidget*                           CustomWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ActionName;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CursorWidget;                                      // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnPlayerTargetingChanged
struct UAthenaSpectatorHUD_C_OnPlayerTargetingChanged_Params
{
public:
	bool                                         IsTargeting;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           CallFunc_GetEquippedWeapon_ReturnValue;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeaponRanged*                     K2Node_DynamicCast_AsFort_Weapon_Ranged;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleKeybindsChanged
struct UAthenaSpectatorHUD_C_HandleKeybindsChanged_Params
{
public:
};

// 0x310 (0x310 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHandleAction
struct UAthenaSpectatorHUD_C_OnHandleAction_Params
{
public:
	struct FEventReply                           Result;                                            // 0x0(0xB8)(Parm, OutParm)
	bool                                         bPassThrough;                                      // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HandleAction;                                      // 0xB9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldCloseMenuOnEscape_ReturnValue;      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xD8(0xB8)()
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x198(0xB8)()
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           K2Node_Select_Default;                             // 0x258(0xB8)()
};

// 0x59 (0x59 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCursorModeChanged
struct UAthenaSpectatorHUD_C_HandleCursorModeChanged_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CursorModeContentCustomWidget;                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C61[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortInputMode                    Temp_byte_Variable2;                               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortInputMode                    Temp_byte_Variable3;                               // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortInputMode                    K2Node_Select_Default;                             // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C63[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnDeclined_96D6B69B40224C661B08D9B34525EE86
struct UAthenaSpectatorHUD_C_OnDeclined_96D6B69B40224C661B08D9B34525EE86_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnConfirmed_96D6B69B40224C661B08D9B34525EE86
struct UAthenaSpectatorHUD_C_OnConfirmed_96D6B69B40224C661B08D9B34525EE86_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.QuestsCompleted
struct UAthenaSpectatorHUD_C_QuestsCompleted_Params
{
public:
	TArray<class UFortQuestItem*>                Quests;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnEnterState
struct UAthenaSpectatorHUD_C_OnEnterState_Params
{
public:
	enum class EFortUIState                      PreviousUIState;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Construct
struct UAthenaSpectatorHUD_C_Construct_Params
{
public:
};

// 0xB (0xB - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PushContentWidgetInternal
struct UAthenaSpectatorHUD_C_PushContentWidgetInternal_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                     State;                                             // 0x8(0x3)(Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Destruct
struct UAthenaSpectatorHUD_C_Destruct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleInputMethodChanged
struct UAthenaSpectatorHUD_C_HandleInputMethodChanged_Params
{
public:
	bool                                         UsingGamepad;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
struct UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
struct UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Prepare Game Over
struct UAthenaSpectatorHUD_C_Prepare_Game_Over_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Died
struct UAthenaSpectatorHUD_C_On_Player_Died_Params
{
public:
	struct FFortPlayerDeathReport                DeathReport;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PrepareToShowEndGameUI
struct UAthenaSpectatorHUD_C_PrepareToShowEndGameUI_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Won
struct UAthenaSpectatorHUD_C_On_Player_Won_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnRevived
struct UAthenaSpectatorHUD_C_OnRevived_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleRevived
struct UAthenaSpectatorHUD_C_HandleRevived_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnUnableToPerformAction
struct UAthenaSpectatorHUD_C_OnUnableToPerformAction_Params
{
public:
	struct FGameplayTagContainer                 FailedReason;                                      // 0x0(0x20)(Parm)
	class FText                                  FailureText;                                       // 0x20(0x18)(Parm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Team Won
struct UAthenaSpectatorHUD_C_On_Team_Won_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowGameOverLayer
struct UAthenaSpectatorHUD_C_ShowGameOverLayer_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.GamePhaseChanged
struct UAthenaSpectatorHUD_C_GamePhaseChanged_Params
{
public:
	enum class EAthenaGamePhase                  GamePhase;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x578 (0x578 - 0x0)
// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ExecuteUbergraph_AthenaSpectatorHUD
struct UAthenaSpectatorHUD_C_ExecuteUbergraph_AthenaSpectatorHUD_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue3;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue4;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue5;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x50(0x10)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue6;                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue7;                  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x70(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x80(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x90(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue8;                  // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBuildingInfoIndicator_C*              CallFunc_Create_ReturnValue;                       // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortActorCanvasSlot*                  CallFunc_AddActorIndicator_ReturnValue;            // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortQuestItem*>                K2Node_CustomEvent_Quests;                         // 0xF0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue9;                  // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue10;                 // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractionIndicator_C*               CallFunc_Create_ReturnValue2;                      // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue11;                 // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortActorCanvasSlot*                  CallFunc_AddActorIndicator_ReturnValue2;           // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIState                      K2Node_Event_PreviousUIState;                      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0x150(0x10)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue12;                 // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate10;            // 0x168(0x10)(ZeroConstructor, NoDestructor)
	class UFortPickerContext*                    CallFunc_GetContext_ReturnValue13;                 // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate11;            // 0x180(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x190(0x10)(ZeroConstructor, NoDestructor)
	class UWidget*                               K2Node_Event_Widget;                               // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                     K2Node_Event_State;                                // 0x1A8(0x3)(NoDestructor)
	uint8                                        Pad_3C6A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_Array_Get_Item;                           // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x1B8(0x90)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x248(0x18)()
	bool                                         K2Node_CustomEvent_UsingGamepad;                   // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x268(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x2A8(0x10)(ZeroConstructor, ReferenceParm)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C6C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2C0(0x18)()
	uint8                                        Pad_3C6D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogDescription                K2Node_MakeStruct_FortDialogDescription;           // 0x2E0(0x170)(ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate13;            // 0x450(0x10)(ZeroConstructor, NoDestructor)
	class UFortAsyncAction_TriggerNotification*  CallFunc_TriggerNotification_ReturnValue;          // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPlayerDeathReport                K2Node_CustomEvent_DeathReport;                    // 0x470(0x50)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate14;            // 0x4C0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate15;            // 0x4D0(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTagContainer                 K2Node_CustomEvent_FailedReason;                   // 0x4E0(0x20)()
	class FText                                  K2Node_CustomEvent_FailureText;                    // 0x500(0x18)()
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate16;            // 0x520(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x530(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x534(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C70[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x538(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue14;                 // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaGamePhase                  K2Node_CustomEvent_GamePhase;                      // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAthena_GameState_C*                   K2Node_DynamicCast_AsAthena_Game_State;            // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x561(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C73[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate17;            // 0x568(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
