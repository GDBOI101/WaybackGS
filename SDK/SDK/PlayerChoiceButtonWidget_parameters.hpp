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

// 0x60 (0x60 - 0x0)
// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ConfigureChoice
struct UPlayerChoiceButtonWidget_C_ConfigureChoice_Params
{
public:
	struct FChoiceDataEntry                      Choice;                                            // 0x0(0x50)(Parm)
	int32                                        ChoiceID;                                          // 0x50(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerChoiceWidget_C*                 Owner;                                             // 0x58(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature
struct UPlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature_Params
{
public:
	class UFortBaseButton*                       Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ExecuteUbergraph_PlayerChoiceButtonWidget
struct UPlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChoiceDataEntry                      K2Node_CustomEvent_Choice;                         // 0x8(0x50)()
	int32                                        K2Node_CustomEvent_ChoiceID;                       // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerChoiceWidget_C*                 K2Node_CustomEvent_Owner;                          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortBaseButton*                       K2Node_ComponentBoundEvent_Button;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
