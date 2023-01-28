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


// Function AthenaMainStatTile.AthenaMainStatTile_C.SetStatValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatValueAsText                                                  (Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UAthenaMainStatTile_C::SetStatValue(class FText StatValueAsText, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMainStatTile_C", "SetStatValue");

	Params::UAthenaMainStatTile_C_SetStatValue_Params Parms;
	Parms.StatValueAsText = StatValueAsText;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMainStatTile.AthenaMainStatTile_C.SetTagAndDisplayName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Tag                                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UAthenaMainStatTile_C::SetTagAndDisplayName(const class FString& Tag, class FText DisplayName, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMainStatTile_C", "SetTagAndDisplayName");

	Params::UAthenaMainStatTile_C_SetTagAndDisplayName_Params Parms;
	Parms.Tag = Tag;
	Parms.DisplayName = DisplayName;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMainStatTile.AthenaMainStatTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMainStatTile_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaMainStatTile_C", "PreConstruct");

	Params::UAthenaMainStatTile_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMainStatTile.AthenaMainStatTile_C.ExecuteUbergraph_AthenaMainStatTile
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMainStatTile_C::ExecuteUbergraph_AthenaMainStatTile(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaMainStatTile_C", "ExecuteUbergraph_AthenaMainStatTile");

	Params::UAthenaMainStatTile_C_ExecuteUbergraph_AthenaMainStatTile_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
