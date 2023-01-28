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


// Function StatusWidget.StatusWidget_C.UpdateLoginStatusText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLoginStatusText_ReturnValue                          ()

class FText UStatusWidget_C::UpdateLoginStatusText(class UFortMcpContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetLoginStatusText_ReturnValue)
{
	static auto Func = Class->GetFunction("StatusWidget_C", "UpdateLoginStatusText");

	Params::UStatusWidget_C_UpdateLoginStatusText_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLoginStatusText_ReturnValue = CallFunc_GetLoginStatusText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StatusWidget.StatusWidget_C.SetStatusText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Status                                                           (Parm)

void UStatusWidget_C::SetStatusText(class FText Status)
{
	static auto Func = Class->GetFunction("StatusWidget_C", "SetStatusText");

	Params::UStatusWidget_C_SetStatusText_Params Parms;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusWidget.StatusWidget_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TitleText                                                        (Parm)

void UStatusWidget_C::SetTitleText(class FText TitleText)
{
	static auto Func = Class->GetFunction("StatusWidget_C", "SetTitleText");

	Params::UStatusWidget_C_SetTitleText_Params Parms;
	Parms.TitleText = TitleText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusWidget.StatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStatusWidget_C::Construct()
{
	static auto Func = Class->GetFunction("StatusWidget_C", "Construct");

	Params::UStatusWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusWidget.StatusWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStatusWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("StatusWidget_C", "Destruct");

	Params::UStatusWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusWidget_C::ExecuteUbergraph_StatusWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("StatusWidget_C", "ExecuteUbergraph_StatusWidget");

	Params::UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
