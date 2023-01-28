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

// 0x23 (0x23 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Tab List Title
struct UItemTransformKeyScreen_C_Determine_Tab_List_Title_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x8(0x18)(Parm, OutParm)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue2;         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue3;         // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Key Types to See
struct UItemTransformKeyScreen_C_Determine_Key_Types_to_See_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EConversionControlKeyRequest      RequestType;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue2;         // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue3;         // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToFirstItem
struct UItemTransformKeyScreen_C_NavigateToFirstItem_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToSelectedItem
struct UItemTransformKeyScreen_C_NavigateToSelectedItem_Params
{
public:
	class UFortItem*                             InItem;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Get Selected Item
struct UItemTransformKeyScreen_C_Get_Selected_Item_Params
{
public:
	class UFortItem*                             SelectedKey;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetSelectedKey_SelectedKey;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ResetScreen
struct UItemTransformKeyScreen_C_ResetScreen_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleItemSelected
struct UItemTransformKeyScreen_C_HandleItemSelected_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.SetupKeyList
struct UItemTransformKeyScreen_C_SetupKeyList_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.RebuildKeyList
struct UItemTransformKeyScreen_C_RebuildKeyList_Params
{
public:
	enum class EConversionControlKeyRequest      RequestType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetActiveTab_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Determine_Tab_List_Title_Text;            // 0x10(0x18)()
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAccountItem*>              CallFunc_GetTransformKeys_TransformKeys;           // 0x30(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Construct
struct UItemTransformKeyScreen_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature
struct UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature
struct UItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleHomebaseInventoryChanged
struct UItemTransformKeyScreen_C_HandleHomebaseInventoryChanged_Params
{
public:
};

// 0x32 (0x32 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ExecuteUbergraph_ItemTransformKeyScreen
struct UItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UHomeBaseContext*                      CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_ComponentBoundEvent_SelectedItem;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EConversionControlKeyRequest      CallFunc_Determine_Key_Types_to_See_RequestType;   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EConversionControlKeyRequest      CallFunc_Determine_Key_Types_to_See_RequestType2;  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeyConfirmed__DelegateSignature
struct UItemTransformKeyScreen_C_OnKeyConfirmed__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeySelected__DelegateSignature
struct UItemTransformKeyScreen_C_OnKeySelected__DelegateSignature_Params
{
public:
	class UFortItem*                             Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
