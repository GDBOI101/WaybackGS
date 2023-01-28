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
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectFirstWidget
struct UAthenaCustomizationTab_C_SelectFirstWidget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowThrobber
struct UAthenaCustomizationTab_C_ShowThrobber_Params
{
public:
	class UFortUIManagerWidget_NUI*              UIManager;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(ConstParm)
	class FText                                  Temp_text_Variable2;                               // 0x20(0x18)(ConstParm)
	struct FSlateBrush                           CallFunc_NoResourceBrush_ReturnValue;              // 0x38(0x90)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2431[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                CallFunc_Create_ReturnValue;                       // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RefreshInputActions
struct UAthenaCustomizationTab_C_RefreshInputActions_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable2;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2432[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x8(0x10)(NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectInitialWidgetForGamepad
struct UAthenaCustomizationTab_C_SelectInitialWidgetForGamepad_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.EndPickingCustomization
struct UAthenaCustomizationTab_C_EndPickingCustomization_Params
{
public:
	bool                                         RestoreFocus;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2433[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BeginPickingCustomization
struct UAthenaCustomizationTab_C_BeginPickingCustomization_Params
{
public:
	enum class EAthenaCustomizationCategory      Category;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2434[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               WidgetToReturnFocusTo;                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  HeaderText;                                        // 0x10(0x18)(Parm)
	enum class EAthenaCustomizationCategory      NewLocalVar_0;                                     // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterInputActions
struct UAthenaCustomizationTab_C_RegisterInputActions_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterCancel
struct UAthenaCustomizationTab_C_RegisterCancel_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleCancel
struct UAthenaCustomizationTab_C_HandleCancel_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnActivated
struct UAthenaCustomizationTab_C_OnActivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnInputModeChanged
struct UAthenaCustomizationTab_C_OnInputModeChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnDeactivated
struct UAthenaCustomizationTab_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.Construct
struct UAthenaCustomizationTab_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__LoadScreenSlot_K2Node_ComponentBoundEvent_40_OnSlotClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__LoadScreenSlot_K2Node_ComponentBoundEvent_40_OnSlotClicked__DelegateSignature_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2435[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BannerLabel;                                       // 0x10(0x18)(Parm)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__HatSlot_K2Node_ComponentBoundEvent_335_OnSlotClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__HatSlot_K2Node_ComponentBoundEvent_335_OnSlotClicked__DelegateSignature_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2436[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BannerLabel;                                       // 0x10(0x18)(Parm)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__BackpackSlot_K2Node_ComponentBoundEvent_344_OnSlotClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__BackpackSlot_K2Node_ComponentBoundEvent_344_OnSlotClicked__DelegateSignature_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2437[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BannerLabel;                                       // 0x10(0x18)(Parm)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__BattleBusSlot_K2Node_ComponentBoundEvent_354_OnSlotClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__BattleBusSlot_K2Node_ComponentBoundEvent_354_OnSlotClicked__DelegateSignature_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2438[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BannerLabel;                                       // 0x10(0x18)(Parm)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__DanceSlot_K2Node_ComponentBoundEvent_365_OnSlotClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__DanceSlot_K2Node_ComponentBoundEvent_365_OnSlotClicked__DelegateSignature_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2439[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BannerLabel;                                       // 0x10(0x18)(Parm)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__TauntSlot_K2Node_ComponentBoundEvent_377_OnSlotClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__TauntSlot_K2Node_ComponentBoundEvent_377_OnSlotClicked__DelegateSignature_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BannerLabel;                                       // 0x10(0x18)(Parm)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__VictoryPoseSlot_K2Node_ComponentBoundEvent_390_OnSlotClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__VictoryPoseSlot_K2Node_ComponentBoundEvent_390_OnSlotClicked__DelegateSignature_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BannerLabel;                                       // 0x10(0x18)(Parm)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__GliderSlot_K2Node_ComponentBoundEvent_540_OnSlotClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__GliderSlot_K2Node_ComponentBoundEvent_540_OnSlotClicked__DelegateSignature_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BannerLabel;                                       // 0x10(0x18)(Parm)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_785_OnSlotClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__CharacterSlot_K2Node_ComponentBoundEvent_785_OnSlotClicked__DelegateSignature_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BannerLabel;                                       // 0x10(0x18)(Parm)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__HarvestToolSlot_K2Node_ComponentBoundEvent_800_OnSlotClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__HarvestToolSlot_K2Node_ComponentBoundEvent_800_OnSlotClicked__DelegateSignature_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BannerLabel;                                       // 0x10(0x18)(Parm)
};

// 0x1C8 (0x1C8 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ExecuteUbergraph_AthenaCustomizationTab
struct UAthenaCustomizationTab_C_ExecuteUbergraph_AthenaCustomizationTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaCustomizationCategory      K2Node_ComponentBoundEvent_CustomizationType;      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_BannerLabel;            // 0x10(0x18)()
	bool                                         K2Node_Event_bUsingGamepad;                        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2440[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue2;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaBannerSelectModal_C*            CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button11;               // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaCustomizationCategory      K2Node_ComponentBoundEvent_CustomizationType10;    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2441[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button10;               // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_BannerLabel10;          // 0x70(0x18)()
	enum class EAthenaCustomizationCategory      K2Node_ComponentBoundEvent_CustomizationType9;     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2442[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button9;                // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_BannerLabel9;           // 0x98(0x18)()
	enum class EAthenaCustomizationCategory      K2Node_ComponentBoundEvent_CustomizationType8;     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2443[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button8;                // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_BannerLabel8;           // 0xC0(0x18)()
	enum class EAthenaCustomizationCategory      K2Node_ComponentBoundEvent_CustomizationType7;     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2444[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button7;                // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_BannerLabel7;           // 0xE8(0x18)()
	enum class EAthenaCustomizationCategory      K2Node_ComponentBoundEvent_CustomizationType6;     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2445[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button6;                // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_BannerLabel6;           // 0x110(0x18)()
	enum class EAthenaCustomizationCategory      K2Node_ComponentBoundEvent_CustomizationType5;     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2446[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button5;                // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_BannerLabel5;           // 0x138(0x18)()
	enum class EAthenaCustomizationCategory      K2Node_ComponentBoundEvent_CustomizationType4;     // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2447[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button4;                // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_BannerLabel4;           // 0x160(0x18)()
	enum class EAthenaCustomizationCategory      K2Node_ComponentBoundEvent_CustomizationType3;     // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2448[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button3;                // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_BannerLabel3;           // 0x188(0x18)()
	enum class EAthenaCustomizationCategory      K2Node_ComponentBoundEvent_CustomizationType2;     // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2449[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_BannerLabel2;           // 0x1B0(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
