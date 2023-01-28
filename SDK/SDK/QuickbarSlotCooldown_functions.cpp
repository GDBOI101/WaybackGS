#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Initialize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemDisplayStyle       QuickbarItemDisplayStyle                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemCooldownType>DesiredCooldownTypesSupported                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// enum class EItemDisplayStyle       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlotCooldown_C::Initialize(enum class EItemDisplayStyle QuickbarItemDisplayStyle, TArray<enum class EFortItemCooldownType>& DesiredCooldownTypesSupported, enum class EItemDisplayStyle Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, class UMaterialInterface* Temp_object_Variable4, class UMaterialInterface* Temp_object_Variable5, class UMaterialInterface* Temp_object_Variable6, class UMaterialInterface* Temp_object_Variable7, class UMaterialInterface* K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlotCooldown_C", "Initialize");

	Params::UQuickbarSlotCooldown_C_Initialize_Params Parms;
	Parms.QuickbarItemDisplayStyle = QuickbarItemDisplayStyle;
	Parms.DesiredCooldownTypesSupported = DesiredCooldownTypesSupported;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Show Countdown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlotCooldown_C::Show_Countdown(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("QuickbarSlotCooldown_C", "Show Countdown");

	Params::UQuickbarSlotCooldown_C_Show_Countdown_Params Parms;
	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortItemCooldownType   CooldownType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlotCooldown_C::OnCooldownStarted(enum class EFortItemCooldownType CooldownType)
{
	static auto Func = Class->GetFunction("QuickbarSlotCooldown_C", "OnCooldownStarted");

	Params::UQuickbarSlotCooldown_C_OnCooldownStarted_Params Parms;
	Parms.CooldownType = CooldownType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortItemCooldownType   CooldownType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlotCooldown_C::OnCooldownStopped(enum class EFortItemCooldownType CooldownType)
{
	static auto Func = Class->GetFunction("QuickbarSlotCooldown_C", "OnCooldownStopped");

	Params::UQuickbarSlotCooldown_C_OnCooldownStopped_Params Parms;
	Parms.CooldownType = CooldownType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.ExecuteUbergraph_QuickbarSlotCooldown
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCooldownType   K2Node_Event_CooldownType                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum4_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCooldownType   K2Node_Event_CooldownType2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum5_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum6_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlotCooldown_C::ExecuteUbergraph_QuickbarSlotCooldown(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortItemCooldownType K2Node_Event_CooldownType, bool K2Node_SwitchEnum2_CmpSuccess, bool K2Node_SwitchEnum3_CmpSuccess, bool K2Node_SwitchEnum4_CmpSuccess, enum class EFortItemCooldownType K2Node_Event_CooldownType2, bool K2Node_SwitchEnum5_CmpSuccess, bool K2Node_SwitchEnum6_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlotCooldown_C", "ExecuteUbergraph_QuickbarSlotCooldown");

	Params::UQuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_CooldownType = K2Node_Event_CooldownType;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.K2Node_SwitchEnum4_CmpSuccess = K2Node_SwitchEnum4_CmpSuccess;
	Parms.K2Node_Event_CooldownType2 = K2Node_Event_CooldownType2;
	Parms.K2Node_SwitchEnum5_CmpSuccess = K2Node_SwitchEnum5_CmpSuccess;
	Parms.K2Node_SwitchEnum6_CmpSuccess = K2Node_SwitchEnum6_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
