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


// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Get Size Box
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    Size_Box                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlateContentCalloutMenu_C::Get_Size_Box(class USizeBox** Size_Box)
{
	static auto Func = Class->GetFunction("SlateContentCalloutMenu_C", "Get Size Box");

	Params::USlateContentCalloutMenu_C_Get_Size_Box_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Size_Box != nullptr)
		*Size_Box = Parms.Size_Box;

}


// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USlateContentCalloutMenu_C::Construct()
{
	static auto Func = Class->GetFunction("SlateContentCalloutMenu_C", "Construct");

	Params::USlateContentCalloutMenu_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.ExecuteUbergraph_SlateContentCalloutMenu
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlateContentCalloutMenu_C::ExecuteUbergraph_SlateContentCalloutMenu(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SlateContentCalloutMenu_C", "ExecuteUbergraph_SlateContentCalloutMenu");

	Params::USlateContentCalloutMenu_C_ExecuteUbergraph_SlateContentCalloutMenu_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
