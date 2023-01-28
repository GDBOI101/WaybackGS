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


// Function ItemOrWidget.ItemOrWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemOrWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ItemOrWidget_C", "Construct");

	Params::UItemOrWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOrWidget.ItemOrWidget_C.ExecuteUbergraph_ItemOrWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemOrWidget_C::ExecuteUbergraph_ItemOrWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemOrWidget_C", "ExecuteUbergraph_ItemOrWidget");

	Params::UItemOrWidget_C_ExecuteUbergraph_ItemOrWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
