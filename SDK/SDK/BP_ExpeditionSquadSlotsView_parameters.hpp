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

// 0xC0 (0xC0 - 0x0)
// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.CreateAndAddSquadSlotButton
struct UBP_ExpeditionSquadSlotsView_C_CreateAndAddSquadSlotButton_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3311[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHomebaseSquadSlot                    SquadSlotDefinition;                               // 0x8(0x60)(ConstParm, Parm, OutParm, ReferenceParm)
	class UWidget*                               OutSquadSlotButtonHost;                            // 0x68(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSquadSlotSelectorButton*          ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3312[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExpeditionSquadSlotButton_C*          CallFunc_Create_ReturnValue;                       // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       K2Node_MakeArray_Array;                            // 0x90(0x10)(ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0xB0(0x10)(ZeroConstructor, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotSelected
struct UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotSelected_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.PreConstruct
struct UBP_ExpeditionSquadSlotsView_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotOpened
struct UBP_ExpeditionSquadSlotsView_C_HandleSquadSlotOpened_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.ExecuteUbergraph_BP_ExpeditionSquadSlotsView
struct UBP_ExpeditionSquadSlotsView_C_ExecuteUbergraph_BP_ExpeditionSquadSlotsView_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3313[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_SquadSlotIndex;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotOpened__DelegateSignature
struct UBP_ExpeditionSquadSlotsView_C_OnSquadSlotOpened__DelegateSignature_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotSelected__DelegateSignature
struct UBP_ExpeditionSquadSlotsView_C_OnSquadSlotSelected__DelegateSignature_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
