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


// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.OnGamePhaseStepChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaGamePhaseWidget_C::OnGamePhaseStepChanged(enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseWidget_C", "OnGamePhaseStepChanged");

	Params::UAthenaGamePhaseWidget_C_OnGamePhaseStepChanged_Params Parms;
	Parms.GamePhaseStep = GamePhaseStep;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseWidget.AthenaGamePhaseWidget_C.ExecuteUbergraph_AthenaGamePhaseWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGamePhaseStep    K2Node_Event_GamePhaseStep                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaGamePhaseStep    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGamePhaseWidget_C::ExecuteUbergraph_AthenaGamePhaseWidget(int32 EntryPoint, enum class EAthenaGamePhaseStep K2Node_Event_GamePhaseStep, enum class EAthenaGamePhaseStep Temp_byte_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, class UMaterialInterface* Temp_object_Variable4, class UMaterialInterface* Temp_object_Variable5, class UMaterialInterface* Temp_object_Variable6, class UMaterialInterface* Temp_object_Variable7, class UMaterialInterface* Temp_object_Variable8, class UMaterialInterface* Temp_object_Variable9, class UMaterialInterface* Temp_object_Variable10, class UMaterialInterface* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseWidget_C", "ExecuteUbergraph_AthenaGamePhaseWidget");

	Params::UAthenaGamePhaseWidget_C_ExecuteUbergraph_AthenaGamePhaseWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_GamePhaseStep = K2Node_Event_GamePhaseStep;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_object_Variable10 = Temp_object_Variable10;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
