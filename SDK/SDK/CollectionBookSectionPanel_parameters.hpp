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

// 0x1A (0x1A - 0x0)
// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnInspectItem
struct UCollectionBookSectionPanel_C_OnInspectItem_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowItemModifications;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsTemporaryItem;                                   // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3187[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSlotItemConfirm
struct UCollectionBookSectionPanel_C_OnSlotItemConfirm_Params
{
public:
	class UFortItem*                             ItemToSlot;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryCommitSelectedItem_ReturnValue;        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ShowItemDetail
struct UCollectionBookSectionPanel_C_ShowItemDetail_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.Construct
struct UCollectionBookSectionPanel_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSectionChanged
struct UCollectionBookSectionPanel_C_OnSectionChanged_Params
{
public:
	class UFortCollectionBookSection*            Section;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnActivated
struct UCollectionBookSectionPanel_C_OnActivated_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ExecuteUbergraph_CollectionBookSectionPanel
struct UCollectionBookSectionPanel_C_ExecuteUbergraph_CollectionBookSectionPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3188[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UFortCollectionBookSection*            K2Node_Event_Section;                              // 0x38(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
