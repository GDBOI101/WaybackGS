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
// Function NewsEntry.NewsEntry_C.SetFocus
struct UNewsEntry_C_SetFocus_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NewsEntry.NewsEntry_C.Construct
struct UNewsEntry_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function NewsEntry.NewsEntry_C.BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature
struct UNewsEntry_C_BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function NewsEntry.NewsEntry_C.ExecuteUbergraph_NewsEntry
struct UNewsEntry_C_ExecuteUbergraph_NewsEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function NewsEntry.NewsEntry_C.HandleEntrySelected__DelegateSignature
struct UNewsEntry_C_HandleEntrySelected__DelegateSignature_Params
{
public:
	class FText                                  BodyText;                                          // 0x0(0x18)(Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
