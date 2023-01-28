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
// Function InfoWindow.InfoWindow_C.Initialize
struct UInfoWindow_C_Initialize_Params
{
public:
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function InfoWindow.InfoWindow_C.AddInfo
struct UInfoWindow_C_AddInfo_Params
{
public:
	TArray<class UFortItemDefinition*>           Info_Items;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                  Title;                                             // 0x10(0x18)(Parm)
	TArray<class UFortItemDefinition*>           NewLocalVar_0;                                     // 0x28(0x10)(Edit, ZeroConstructor)
	class UObject*                               CallFunc_GetItemAt_ReturnValue;                    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   K2Node_DynamicCast_AsFort_Item_Definition;         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function InfoWindow.InfoWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
struct UInfoWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function InfoWindow.InfoWindow_C.Construct
struct UInfoWindow_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InfoWindow.InfoWindow_C.Destruct
struct UInfoWindow_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature
struct UInfoWindow_C_BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature
struct UInfoWindow_C_BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InfoWindow.InfoWindow_C.OnBeginOutro
struct UInfoWindow_C_OnBeginOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InfoWindow.InfoWindow_C.OnBeginIntro
struct UInfoWindow_C_OnBeginIntro_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function InfoWindow.InfoWindow_C.BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature
struct UInfoWindow_C_BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InfoWindow.InfoWindow_C.Set Info
struct UInfoWindow_C_Set_Info_Params
{
public:
	class UFortItemDefinition*                   Entry_Item_Definition;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function InfoWindow.InfoWindow_C.ExecuteUbergraph_InfoWindow
struct UInfoWindow_C_ExecuteUbergraph_InfoWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_249C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UUserWidget*                           K2Node_ComponentBoundEvent_Widget;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInfoEntry_C*                          K2Node_DynamicCast_AsInfo_Entry;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_249D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   K2Node_CustomEvent_Entry_Item_Definition;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetItemAt_ReturnValue;                    // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetListWidget_ReturnValue;                // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
