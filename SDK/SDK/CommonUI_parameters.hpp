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

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonUserWidget.SetConsumePointerInput
struct UCommonUserWidget_SetConsumePointerInput_Params
{
public:
	bool                                         bInConsumePointerInput;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonButton.SetTriggeredInputAction
struct UCommonButton_SetTriggeredInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UCommonActivatablePanel*               OldPanel;                                          // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButton.SetStyle
struct UCommonButton_SetStyle_Params
{
public:
	TSubclassOf<class UCommonButtonStyle>        InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButton.SetShouldSelectUponReceivingFocus
struct UCommonButton_SetShouldSelectUponReceivingFocus_Params
{
public:
	bool                                         bInShouldSelectUponReceivingFocus;                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function CommonUI.CommonButton.SetSelectedInternal
struct UCommonButton_SetSelectedInternal_Params
{
public:
	bool                                         bInSelected;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSound;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBroadcast;                                        // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButton.SetMinDimensions
struct UCommonButton_SetMinDimensions_Params
{
public:
	int32                                        InMinWidth;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InMinHeight;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButton.SetIsToggleable
struct UCommonButton_SetIsToggleable_Params
{
public:
	bool                                         bInIsToggleable;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CommonUI.CommonButton.SetIsSelected
struct UCommonButton_SetIsSelected_Params
{
public:
	bool                                         InSelected;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGiveClickFeedback;                                // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButton.SetIsSelectable
struct UCommonButton_SetIsSelectable_Params
{
public:
	bool                                         bInIsSelectable;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButton.SetIsInteractionEnabled
struct UCommonButton_SetIsInteractionEnabled_Params
{
public:
	bool                                         bInIsInteractionEnabled;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonButton.SetInputActionProgressMaterial
struct UCommonButton_SetInputActionProgressMaterial_Params
{
public:
	struct FSlateBrush                           InProgressMaterialBrush;                           // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  InProgressMaterialParam;                           // 0x90(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.OnUnhovered
struct UCommonButton_OnUnhovered_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButton.OnTriggeredInputActionChanged
struct UCommonButton_OnTriggeredInputActionChanged_Params
{
public:
	struct FDataTableRowHandle                   NewTriggeredAction;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.OnSelected
struct UCommonButton_OnSelected_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButton.OnInputMethodChanged
struct UCommonButton_OnInputMethodChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.OnHovered
struct UCommonButton_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.OnEnabled
struct UCommonButton_OnEnabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.OnDoubleClicked
struct UCommonButton_OnDoubleClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.OnDisabled
struct UCommonButton_OnDisabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.OnDeselected
struct UCommonButton_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.OnCurrentTextStyleChanged
struct UCommonButton_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.OnClicked
struct UCommonButton_OnClicked_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButton.OnActionProgress
struct UCommonButton_OnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.OnActionComplete
struct UCommonButton_OnActionComplete_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButton.NativeOnActionProgress
struct UCommonButton_NativeOnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.NativeOnActionComplete
struct UCommonButton_NativeOnActionComplete_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButton.IsPressed
struct UCommonButton_IsPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButton.IsInteractionEnabled
struct UCommonButton_IsInteractionEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButton.IsHovered
struct UCommonButton_IsHovered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButton.HandleTriggeringActionCommited
struct UCommonButton_HandleTriggeringActionCommited_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.HandleFocusReceived
struct UCommonButton_HandleFocusReceived_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.HandleButtonReleased
struct UCommonButton_HandleButtonReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.HandleButtonPressed
struct UCommonButton_HandleButtonPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.HandleButtonDoubleClicked
struct UCommonButton_HandleButtonDoubleClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.HandleButtonClicked
struct UCommonButton_HandleButtonClicked_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButton.GetStyle
struct UCommonButton_GetStyle_Params
{
public:
	class UCommonButtonStyle*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButton.GetSingleMaterialStyleMID
struct UCommonButton_GetSingleMaterialStyleMID_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButton.GetShouldSelectUponReceivingFocus
struct UCommonButton_GetShouldSelectUponReceivingFocus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButton.GetSelected
struct UCommonButton_GetSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonButton.GetInputAction
struct UCommonButton_GetInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButton.GetCurrentTextStyleClass
struct UCommonButton_GetCurrentTextStyleClass_Params
{
public:
	TSubclassOf<class UCommonTextStyle>          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButton.GetCurrentTextStyle
struct UCommonButton_GetCurrentTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButton.GetCurrentCustomPadding
struct UCommonButton_GetCurrentCustomPadding_Params
{
public:
	struct FMargin                               OutCustomPadding;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButton.GetCurrentButtonPadding
struct UCommonButton_GetCurrentButtonPadding_Params
{
public:
	struct FMargin                               OutButtonPadding;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.EnableButton
struct UCommonButton_EnableButton_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonButton.DisableButtonWithReason
struct UCommonButton_DisableButtonWithReason_Params
{
public:
	class FText                                  DisabledReason;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.DisableButton
struct UCommonButton_DisableButton_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButton.ClearSelection
struct UCommonButton_ClearSelection_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgress
struct UCommonActivatablePanel_SetInputActionHandlerWithProgress_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ProgressEvent;                                     // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonUI.CommonActivatablePanel.SetInputActionHandler
struct UCommonActivatablePanel_SetInputActionHandler_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateWithDisabledCommitEvent
struct UCommonActivatablePanel_SetActionHandlerStateWithDisabledCommitEvent_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           DisabledCommitEvent;                               // 0x18(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandleWithDisabledCommitEvent
struct UCommonActivatablePanel_SetActionHandlerStateFromHandleWithDisabledCommitEvent_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           DisabledCommitEvent;                               // 0x18(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandle
struct UCommonActivatablePanel_SetActionHandlerStateFromHandle_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonActivatablePanel.SetActionHandlerState
struct UCommonActivatablePanel_SetActionHandlerState_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonActivatablePanel.RemoveInputActionHandler
struct UCommonActivatablePanel_RemoveInputActionHandler_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatablePanel.RemoveAllInputActionHandlers
struct UCommonActivatablePanel_RemoveAllInputActionHandlers_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatablePanel.PopPanel
struct UCommonActivatablePanel_PopPanel_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonActivatablePanel.OnInputModeChanged
struct UCommonActivatablePanel_OnInputModeChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatablePanel.OnDeactivated
struct UCommonActivatablePanel_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatablePanel.OnBeginOutro
struct UCommonActivatablePanel_OnBeginOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatablePanel.OnBeginIntro
struct UCommonActivatablePanel_OnBeginIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatablePanel.OnActivated
struct UCommonActivatablePanel_OnActivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonActivatablePanel.IsIntroed
struct UCommonActivatablePanel_IsIntroed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonActivatablePanel.IsActivated
struct UCommonActivatablePanel_IsActivated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonActivatablePanel.HasInputActionHandler
struct UCommonActivatablePanel_HasInputActionHandler_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonActivatablePanel.GetInputActions
struct UCommonActivatablePanel_GetInputActions_Params
{
public:
	TArray<struct FCommonInputActionHandlerData> InputActionDataRows;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatablePanel.EndOutro
struct UCommonActivatablePanel_EndOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatablePanel.EndIntro
struct UCommonActivatablePanel_EndIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatablePanel.BeginOutro
struct UCommonActivatablePanel_BeginOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatablePanel.BeginIntro
struct UCommonActivatablePanel_BeginIntro_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonActivatablePanel.AddInputActionNoHandler
struct UCommonActivatablePanel_AddInputActionNoHandler_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgress
struct UCommonActivatablePanel_AddInputActionHandlerWithProgress_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ProgressEvent;                                     // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonUI.CommonActivatablePanel.AddInputActionHandler
struct UCommonActivatablePanel_AddInputActionHandler_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonListView.SetSimulateDoubleClickOnSelectedItemClick
struct UCommonListView_SetSimulateDoubleClickOnSelectedItemClick_Params
{
public:
	bool                                         bInSimulateDoubleClick;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonListView.SetSelectionMode
struct UCommonListView_SetSelectionMode_Params
{
public:
	enum class ESelectionMode                    SelectionMode;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonListView.SetSelectedItem
struct UCommonListView_SetSelectedItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaitIfPendingRefresh;                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonListView.SetSelectedIndex
struct UCommonListView_SetSelectedIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonListView.SetItemSelection
struct UCommonListView_SetItemSelection_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelected;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonListView.SetItemHeight
struct UCommonListView_SetItemHeight_Params
{
public:
	float                                        NewHeight;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonListView.SetDesiredItemPadding
struct UCommonListView_SetDesiredItemPadding_Params
{
public:
	struct FMargin                               DesiredPadding;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonListView.SetDataProvider
struct UCommonListView_SetDataProvider_Params
{
public:
	TArray<class UObject*>                       InDataProvider;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonListView.ScrollIntoView
struct UCommonListView_ScrollIntoView_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NavigateOnScrollIntoView;                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonListView.IsRefreshPending
struct UCommonListView_IsRefreshPending_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonListView.IsItemVisible
struct UCommonListView_IsItemVisible_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonListView.GetSelectionModeBP
struct UCommonListView_GetSelectionModeBP_Params
{
public:
	enum class ESelectionMode                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonListView.GetSelectedItems
struct UCommonListView_GetSelectedItems_Params
{
public:
	TArray<class UObject*>                       Items;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonListView.GetSelectedItem
struct UCommonListView_GetSelectedItem_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonListView.GetNumItemsSelected
struct UCommonListView_GetNumItemsSelected_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonListView.GetNumItems
struct UCommonListView_GetNumItems_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonListView.GetItemAt
struct UCommonListView_GetItemAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonListView.GetIndexForItem
struct UCommonListView_GetIndexForItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonListView.DynamicHandleItemUnhoveredCommonButton
struct UCommonListView_DynamicHandleItemUnhoveredCommonButton_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonListView.DynamicHandleItemHoveredCommonButton
struct UCommonListView_DynamicHandleItemHoveredCommonButton_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonListView.DynamicHandleItemDoubleClickedCommonButton
struct UCommonListView_DynamicHandleItemDoubleClickedCommonButton_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonListView.DynamicHandleItemClickedUserWidget
struct UCommonListView_DynamicHandleItemClickedUserWidget_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonListView.DynamicHandleItemClickedCommonButton
struct UCommonListView_DynamicHandleItemClickedCommonButton_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonListView.ClearSelection
struct UCommonListView_ClearSelection_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonListView.Clear
struct UCommonListView_Clear_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonListView.CancelScrollIntoView
struct UCommonListView_CancelScrollIntoView_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonListView.AddItem
struct UCommonListView_AddItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTileView.SetItemWidth
struct UCommonTileView_SetItemWidth_Params
{
public:
	float                                        NewWidth;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidget.SetTabVisibility
struct UCommonTabListWidget_SetTabVisibility_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  NewVisibility;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidget.SetTabEnabled
struct UCommonTabListWidget_SetTabEnabled_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTabListWidget.SetListeningForInput
struct UCommonTabListWidget_SetListeningForInput_Params
{
public:
	bool                                         bShouldListen;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTabListWidget.SetLinkedSwitcher
struct UCommonTabListWidget_SetLinkedSwitcher_Params
{
public:
	class UCommonWidgetSwitcher*                 CommonSwitcher;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidget.SelectTabByID
struct UCommonTabListWidget_SelectTabByID_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressClickFeedback;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD4[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidget.RemoveTab
struct UCommonTabListWidget_RemoveTab_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonTabListWidget.RemoveAllTabs
struct UCommonTabListWidget_RemoveAllTabs_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function CommonUI.CommonTabListWidget.RegisterTab
struct UCommonTabListWidget_RegisterTab_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonButton>             ButtonWidgetType;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ContentWidget;                                     // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CommonUI.CommonTabListWidget.OnTabSelected__DelegateSignature
struct UCommonTabListWidget_OnTabSelected__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonRemoved__DelegateSignature
struct UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonCreated__DelegateSignature
struct UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidget.HandleTabRemoved
struct UCommonTabListWidget_HandleTabRemoved_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidget.HandleTabCreated
struct UCommonTabListWidget_HandleTabCreated_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidget.HandleTabButtonSelected
struct UCommonTabListWidget_HandleTabButtonSelected_Params
{
public:
	class UCommonButton*                         SelectedTabButton;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTabListWidget.HandlePreviousTabInputAction
struct UCommonTabListWidget_HandlePreviousTabInputAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonTabListWidget.HandlePreLinkedSwitcherChanged_BP
struct UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonTabListWidget.HandlePostLinkedSwitcherChanged_BP
struct UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTabListWidget.HandleNextTabInputAction
struct UCommonTabListWidget_HandleNextTabInputAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTabListWidget.GetTabCount
struct UCommonTabListWidget_GetTabCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidget.GetTabButtonByID
struct UCommonTabListWidget_GetTabButtonByID_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                         ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTabListWidget.GetLinkedSwitcher
struct UCommonTabListWidget_GetLinkedSwitcher_Params
{
public:
	class UCommonWidgetSwitcher*                 ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTabListWidget.GetActiveTab
struct UCommonTabListWidget_GetActiveTab_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonUI.CommonTabListWidget.DisableTabWithReason
struct UCommonTabListWidget_DisableTabWithReason_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Reason;                                            // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
struct UCommonWidgetGroupBase_RemoveWidget_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetGroupBase.RemoveAll
struct UCommonWidgetGroupBase_RemoveAll_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetGroupBase.AddWidget
struct UCommonWidgetGroupBase_AddWidget_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroup.SetSelectionRequired
struct UCommonButtonGroup_SetSelectionRequired_Params
{
public:
	bool                                         bRequireSelection;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroup.SelectPreviousButton
struct UCommonButtonGroup_SelectPreviousButton_Params
{
public:
	bool                                         bAllowWrap;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroup.SelectNextButton
struct UCommonButtonGroup_SelectNextButton_Params
{
public:
	bool                                         bAllowWrap;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonGroup.SelectButtonAtIndex
struct UCommonButtonGroup_SelectButtonAtIndex_Params
{
public:
	int32                                        ButtonIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonGroup.OnSelectionStateChanged
struct UCommonButtonGroup_OnSelectionStateChanged_Params
{
public:
	class UCommonButton*                         BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelected;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroup.OnHandleButtonDoubleClicked
struct UCommonButtonGroup_OnHandleButtonDoubleClicked_Params
{
public:
	class UCommonButton*                         BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroup.OnHandleButtonClicked
struct UCommonButtonGroup_OnHandleButtonClicked_Params
{
public:
	class UCommonButton*                         BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroup.OnButtonUnhovered
struct UCommonButtonGroup_OnButtonUnhovered_Params
{
public:
	class UCommonButton*                         BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroup.OnButtonHovered
struct UCommonButtonGroup_OnButtonHovered_Params
{
public:
	class UCommonButton*                         BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroup.HasAnyButtons
struct UCommonButtonGroup_HasAnyButtons_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonGroup.GetSelectedButtonIndex
struct UCommonButtonGroup_GetSelectedButtonIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonGroup.GetButtonAtIndex
struct UCommonButtonGroup_GetButtonAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonGroup.FindButtonIndex
struct UCommonButtonGroup_FindButtonIndex_Params
{
public:
	class UCommonButton*                         ButtonToFind;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonGroup.DeselectAll
struct UCommonButtonGroup_DeselectAll_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTextBlock.SetWrapTextWidth
struct UCommonTextBlock_SetWrapTextWidth_Params
{
public:
	int32                                        InWrapTextAt;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTextBlock.SetStyle
struct UCommonTextBlock_SetStyle_Params
{
public:
	TSubclassOf<class UCommonTextStyle>          InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTextBlock.SetScrollStyle
struct UCommonTextBlock_SetScrollStyle_Params
{
public:
	TSubclassOf<class UCommonTextScrollStyle>    InScrollStyle;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextBlock.SetProperties
struct UCommonTextBlock_SetProperties_Params
{
public:
	TSubclassOf<class UCommonTextStyle>          InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextScrollStyle>    InScrollStyle;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonTextBlock.ResetScrollState
struct UCommonTextBlock_ResetScrollState_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
struct UCommonNumericTextBlock_SetCurrentValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
struct UCommonNumericTextBlock_OnOutro__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HadCompleted;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
struct UCommonNumericTextBlock_IsInterpolatingNumericValue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
struct UCommonNumericTextBlock_InterpolateToValue_Params
{
public:
	float                                        TargetValue;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumInterpolationDuration;                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumChangeRate;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutroOffset;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonNumericTextBlock.GetTargetValue
struct UCommonNumericTextBlock_GetTargetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonLazyImage.ShowDefaultImage
struct UCommonLazyImage_ShowDefaultImage_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
struct UCommonLazyImage_SetBrushFromLazyTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             LazyTexture;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchSize;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
struct UCommonLazyImage_SetBrushFromLazyMaterial_Params
{
public:
	TSoftObjectPtr<class UMaterialInterface>     LazyMaterial;                                      // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
struct UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params
{
public:
	TSoftObjectPtr<class UObject>                LazyObject;                                        // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchTextureSize;                                 // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLazyImage.IsLoading
struct UCommonLazyImage_IsLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLazyImage.ForwardLoadingStateChanged
struct UCommonLazyImage_ForwardLoadingStateChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonActionWidget.SetInputAction
struct UCommonActionWidget_SetInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
struct UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonActionWidget.IsHeldAction
struct UCommonActionWidget_IsHeldAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CommonUI.CommonActionWidget.GetIcon
struct UCommonActionWidget_GetIcon_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonActionWidget.GetDisplayText
struct UCommonActionWidget_GetDisplayText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
struct UCommonBorderStyle_GetBackgroundBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonBorder.SetStyle
struct UCommonBorder_SetStyle_Params
{
public:
	TSubclassOf<class UCommonBorderStyle>        InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
struct UCommonButtonStyle_GetSelectedTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
struct UCommonButtonStyle_GetSelectedPressedBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
struct UCommonButtonStyle_GetSelectedHoveredTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
struct UCommonButtonStyle_GetSelectedHoveredBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
struct UCommonButtonStyle_GetSelectedBaseBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
struct UCommonButtonStyle_GetNormalTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
struct UCommonButtonStyle_GetNormalPressedBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
struct UCommonButtonStyle_GetNormalHoveredTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
struct UCommonButtonStyle_GetNormalHoveredBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
struct UCommonButtonStyle_GetNormalBaseBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CommonUI.CommonButtonStyle.GetMaterialBrush
struct UCommonButtonStyle_GetMaterialBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
struct UCommonButtonStyle_GetDisabledTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function CommonUI.CommonButtonStyle.GetDisabledBrush
struct UCommonButtonStyle_GetDisabledBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonStyle.GetCustomPadding
struct UCommonButtonStyle_GetCustomPadding_Params
{
public:
	struct FMargin                               OutCustomPadding;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonStyle.GetButtonPadding
struct UCommonButtonStyle_GetButtonPadding_Params
{
public:
	struct FMargin                               OutButtonPadding;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// DelegateFunction CommonUI.CommonCustomNavigation.OnCustomNavigationEvent__DelegateSignature
struct UCommonCustomNavigation_OnCustomNavigationEvent__DelegateSignature_Params
{
public:
	enum class EUINavigation                     NavigationType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonInputManager.SuspendStartingOperationProcessing
struct UCommonInputManager_SuspendStartingOperationProcessing_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function CommonUI.CommonInputManager.StopListeningForExistingHeldAction
struct UCommonInputManager_StopListeningForExistingHeldAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionDataRow;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           CompleteEvent;                                     // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ProgressEvent;                                     // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function CommonUI.CommonInputManager.StartListeningForExistingHeldAction
struct UCommonInputManager_StartListeningForExistingHeldAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionDataRow;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           CompleteEvent;                                     // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ProgressEvent;                                     // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonInputManager.SetGlobalInputHandlerPriorityFilter
struct UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Params
{
public:
	int32                                        InFilterPriority;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonInputManager.ResumeStartingOperationProcessing
struct UCommonInputManager_ResumeStartingOperationProcessing_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonInputManager.PushActivatablePanel
struct UCommonInputManager_PushActivatablePanel_Params
{
public:
	class UCommonActivatablePanel*               ActivatablePanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntroPanel;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutroPanelBelow;                                  // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF0[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonInputManager.PopActivatablePanel
struct UCommonInputManager_PopActivatablePanel_Params
{
public:
	class UCommonActivatablePanel*               ActivatablePanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonInputManager.IsPanelOnStack
struct UCommonInputManager_IsPanelOnStack_Params
{
public:
	class UCommonActivatablePanel*               InPanel;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonInputManager.IsInputSuspended
struct UCommonInputManager_IsInputSuspended_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonInputManager.GetGlobalInputHandlerPriorityFilter
struct UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonInputManager.GetAvailableInputActions
struct UCommonInputManager_GetAvailableInputActions_Params
{
public:
	TArray<struct FCommonInputActionHandlerData> AvailableInputActions;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonLoadGuard.SetLoadingText
struct UCommonLoadGuard_SetLoadingText_Params
{
public:
	class FText                                  InLoadingText;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLoadGuard.SetIsLoading
struct UCommonLoadGuard_SetIsLoading_Params
{
public:
	bool                                         bInIsLoading;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
struct UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLoadGuard.IsLoading
struct UCommonLoadGuard_IsLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
struct UCommonLoadGuard_BP_GuardAndLoadAsset_Params
{
public:
	TSoftObjectPtr<class UObject>                InLazyAsset;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnAssetLoaded;                                     // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTreeView.SetSelection
struct UCommonTreeView_SetSelection_Params
{
public:
	class UObject*                               InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTreeView.SetItemExpansion
struct UCommonTreeView_SetItemExpansion_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InShouldExpandItem;                                // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonTreeView.RequestRefresh
struct UCommonTreeView_RequestRefresh_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTreeView.DynamicHandleItemClickedCommonButton
struct UCommonTreeView_DynamicHandleItemClickedCommonButton_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
struct UCommonPoolableWidgetInterface_OnReleaseToPool_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
struct UCommonPoolableWidgetInterface_OnAcquireFromPool_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonListItem.ToggleExpansion
struct UCommonListItem_ToggleExpansion_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonListItem.SetSelected
struct UCommonListItem_SetSelected_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonListItem.SetIndexInList
struct UCommonListItem_SetIndexInList_Params
{
public:
	int32                                        InIndexInList;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonListItem.SetExpanded
struct UCommonListItem_SetExpanded_Params
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonListItem.RegisterOnClicked
struct UCommonListItem_RegisterOnClicked_Params
{
public:
	UDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonListItem.Private_OnExpanderArrowShiftClicked
struct UCommonListItem_Private_OnExpanderArrowShiftClicked_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonListItem.IsItemExpanded
struct UCommonListItem_IsItemExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonListItem.GetIndentLevel
struct UCommonListItem_GetIndentLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonListItem.DoesItemHaveChildren
struct UCommonListItem_DoesItemHaveChildren_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonObjectListItem.SetData
struct UCommonObjectListItem_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonListView*                       OwningList;                                        // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonObjectListItem.Reset
struct UCommonObjectListItem_Reset_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonObjectListItem.GetData
struct UCommonObjectListItem_GetData_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTextStyle.GetShadowOffset
struct UCommonTextStyle_GetShadowOffset_Params
{
public:
	struct FVector2D                             OutShadowOffset;                                   // 0x0(0x8)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextStyle.GetShadowColor
struct UCommonTextStyle_GetShadowColor_Params
{
public:
	struct FLinearColor                          OutColor;                                          // 0x0(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextStyle.GetMargin
struct UCommonTextStyle_GetMargin_Params
{
public:
	struct FMargin                               OutMargin;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
struct UCommonTextStyle_GetLineHeightPercentage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function CommonUI.CommonTextStyle.GetFont
struct UCommonTextStyle_GetFont_Params
{
public:
	struct FSlateFontInfo                        OutFont;                                           // 0x0(0x68)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextStyle.GetColor
struct UCommonTextStyle_GetColor_Params
{
public:
	struct FLinearColor                          OutColor;                                          // 0x0(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
struct UCommonDateTimeTextBlock_SetTimespanValue_Params
{
public:
	struct FTimespan                             InTimespan;                                        // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
struct UCommonDateTimeTextBlock_SetDateTimeValue_Params
{
public:
	struct FDateTime                             InDateTime;                                        // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowAsCountdown;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
struct UCommonDateTimeTextBlock_GetDateTime_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonUIContext.SetGamepadInputType
struct UCommonUIContext_SetGamepadInputType_Params
{
public:
	enum class ECommonInputType                  InGamepadInputType;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonUIContext.IsUsingTouch
struct UCommonUIContext_IsUsingTouch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonUIContext.IsUsingPointerInput
struct UCommonUIContext_IsUsingPointerInput_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonUIContext.IsUsingGamepad
struct UCommonUIContext_IsUsingGamepad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction CommonUI.CommonUIContext.InputSuspensionChanged__DelegateSignature
struct UCommonUIContext_InputSuspensionChanged__DelegateSignature_Params
{
public:
	bool                                         bInputSuspended;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction CommonUI.CommonUIContext.InputMethodChangedDelegate__DelegateSignature
struct UCommonUIContext_InputMethodChangedDelegate__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonUIContext.GetInputManager
struct UCommonUIContext_GetInputManager_Params
{
public:
	class UCommonInputManager*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function CommonUI.CommonUIContext.GetInputActionButtonIcon
struct UCommonUIContext_GetInputActionButtonIcon_Params
{
public:
	struct FDataTableRowHandle                   InputActionRowHandle;                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECommonInputType                  InputType;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ReturnValue;                                       // 0x18(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonUIContext.GetCurrentInputType
struct UCommonUIContext_GetCurrentInputType_Params
{
public:
	enum class ECommonInputType                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
struct UCommonUILibrary_FindParentWidgetOfType_Params
{
public:
	class UWidget*                               StartingWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWidget>                   Type;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonRotator.ShiftTextRight
struct UCommonRotator_ShiftTextRight_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonRotator.ShiftTextLeft
struct UCommonRotator_ShiftTextLeft_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonRotator.SetSelectedItem
struct UCommonRotator_SetSelectedItem_Params
{
public:
	int32                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonRotator.PopulateTextLabels
struct UCommonRotator_PopulateTextLabels_Params
{
public:
	TArray<class FText>                          Labels;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonRotator.GetSelectedText
struct UCommonRotator_GetSelectedText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonRotator.GetSelectedIndex
struct UCommonRotator_GetSelectedIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonUI.CommonInputReflector.OnButtonAdded
struct UCommonInputReflector_OnButtonAdded_Params
{
public:
	class UCommonButton*                         AddedButton;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCommonInputActionHandlerData         Data;                                              // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonInputReflector.ClearButtons
struct UCommonInputReflector_ClearButtons_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetSwitcher.SetActiveWidgetIndex_Advanced
struct UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttemptActivationChange;                           // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C06[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonWidgetSwitcher.SetActiveWidget_Advanced
struct UCommonWidgetSwitcher_SetActiveWidget_Advanced_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttemptActivationChange;                           // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C07[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonWidgetSwitcher.HasWidgets
struct UCommonWidgetSwitcher_HasWidgets_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetSwitcher.HandleActiveWidgetDeactivated
struct UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Params
{
public:
	class UCommonActivatablePanel*               DeactivatedPanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetSwitcher.DeactivateWidget
struct UCommonWidgetSwitcher_DeactivateWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetSwitcher.ActivateWidget
struct UCommonWidgetSwitcher_ActivateWidget_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonWidgetSwitcher.ActivatePreviousWidget
struct UCommonWidgetSwitcher_ActivatePreviousWidget_Params
{
public:
	bool                                         bCanWrap;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonWidgetSwitcher.ActivateNextWidget
struct UCommonWidgetSwitcher_ActivateNextWidget_Params
{
public:
	bool                                         bCanWrap;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
struct UCommonWidgetCarousel_SetActiveWidgetIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
struct UCommonWidgetCarousel_SetActiveWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetCarousel.PreviousPage
struct UCommonWidgetCarousel_PreviousPage_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetCarousel.NextPage
struct UCommonWidgetCarousel_NextPage_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
struct UCommonWidgetCarousel_GetWidgetAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
struct UCommonWidgetCarousel_GetActiveWidgetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
struct UCommonWidgetCarousel_EndAutoScrolling_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
struct UCommonWidgetCarousel_BeginAutoScrolling_Params
{
public:
	float                                        ScrollInterval;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetStack.PushWidget
struct UCommonWidgetStack_PushWidget_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetStack.PopWigdet
struct UCommonWidgetStack_PopWigdet_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetStack.DeactivateWidget
struct UCommonWidgetStack_DeactivateWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetStack.ActivateWidget
struct UCommonWidgetStack_ActivateWidget_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
