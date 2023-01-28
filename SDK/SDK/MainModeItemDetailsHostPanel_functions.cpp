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


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.UpdateDescriptionVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainModeItemDetailsHostPanel_C::UpdateDescriptionVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MainModeItemDetailsHostPanel_C", "UpdateDescriptionVisibility");

	Params::UMainModeItemDetailsHostPanel_C_UpdateDescriptionVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainModeItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static auto Func = Class->GetFunction("MainModeItemDetailsHostPanel_C", "HandleHasItemMarkedForMulchingChanged");

	Params::UMainModeItemDetailsHostPanel_C_HandleHasItemMarkedForMulchingChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainModeItemDetailsHostPanel_C::Construct()
{
	static auto Func = Class->GetFunction("MainModeItemDetailsHostPanel_C", "Construct");

	Params::UMainModeItemDetailsHostPanel_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.ExecuteUbergraph_MainModeItemDetailsHostPanel
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainModeItemDetailsHostPanel_C::ExecuteUbergraph_MainModeItemDetailsHostPanel(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("MainModeItemDetailsHostPanel_C", "ExecuteUbergraph_MainModeItemDetailsHostPanel");

	Params::UMainModeItemDetailsHostPanel_C_ExecuteUbergraph_MainModeItemDetailsHostPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
