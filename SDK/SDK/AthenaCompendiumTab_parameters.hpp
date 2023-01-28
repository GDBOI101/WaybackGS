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

// 0x48 (0x48 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.HandleTabButtonCreated
struct UAthenaCompendiumTab_C_HandleTabButtonCreated_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         LocalTab;                                          // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LocalTabId;                                        // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                      K2Node_DynamicCast_AsIcon_Tab_Button;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x30(0x18)()
};

// 0x10 (0x10 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.HandleTabSelected
struct UAthenaCompendiumTab_C_HandleTabSelected_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetActiveTab_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.ResetTabs
struct UAthenaCompendiumTab_C_ResetTabs_Params
{
public:
};

// 0xF8 (0xF8 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.CreateTab
struct UAthenaCompendiumTab_C_CreateTab_Params
{
public:
	class UFortCompendiumBundleDefinition*       CompendiumBundleDefinition;                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               ContentWidget;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x10(0x18)()
	class FString                                CallFunc_GetPersistentName_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFortTabButtonLabelInfo               K2Node_MakeStruct_FortTabButtonLabelInfo;          // 0x38(0xA8)()
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RegisterFortTab_ReturnValue;              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F5A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.UpdateCompendiumViews
struct UAthenaCompendiumTab_C_UpdateCompendiumViews_Params
{
public:
	TArray<class UFortCompendiumBundle*>         CompendiumBundles;                                 // 0x0(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable2;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCompendiumBundleDefinition*       CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCompendiumBundleUpsellPage_C*         CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCompendiumBundle*                 CallFunc_Array_Get_Item2;                          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortCompendiumBundleDefinition*       CallFunc_GetCompendiumBundleDefinitionBP_ReturnValue; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue2;                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable2;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue2;                 // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F5C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue2;                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCompendiumBundle_C*                   CallFunc_Create_ReturnValue2;                      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortCompendiumBundle*>         CallFunc_GetCompendiumBundles_OutActiveBundles;    // 0x70(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class UFortCompendiumBundleDefinition*> CallFunc_GetCompendiumBundles_OutUnlockableBundles; // 0x80(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.HandleCompendiumChanged
struct UAthenaCompendiumTab_C_HandleCompendiumChanged_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.RegisterEventListeners
struct UAthenaCompendiumTab_C_RegisterEventListeners_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.Construct
struct UAthenaCompendiumTab_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.OnActivated
struct UAthenaCompendiumTab_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.OnDeactivated
struct UAthenaCompendiumTab_C_OnDeactivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_45_OnTabSelected__DelegateSignature
struct UAthenaCompendiumTab_C_BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_45_OnTabSelected__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_56_OnTabButtonCreated__DelegateSignature
struct UAthenaCompendiumTab_C_BndEvt__CompendiumBundleTabList_K2Node_ComponentBoundEvent_56_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCompendiumTab.AthenaCompendiumTab_C.ExecuteUbergraph_AthenaCompendiumTab
struct UAthenaCompendiumTab_C_ExecuteUbergraph_AthenaCompendiumTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_TabId2;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_TabButton;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
