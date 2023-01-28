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
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.PreConstruct
struct UAthenaCustomizationSlotButtonWrapper_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.Construct
struct UAthenaCustomizationSlotButtonWrapper_C_Construct_Params
{
public:
};

// 0x1B (0x1B - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper
struct UAthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanShowSlotType_ReturnValue;              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotClicked__DelegateSignature
struct UAthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  BannerLabel;                                       // 0x10(0x18)(Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
