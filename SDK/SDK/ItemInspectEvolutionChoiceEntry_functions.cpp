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


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SelectEvolutionChoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectEvolutionChoiceEntry_C::SelectEvolutionChoice()
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "SelectEvolutionChoice");

	Params::UItemInspectEvolutionChoiceEntry_C_SelectEvolutionChoice_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.DoDesignTimeRandomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionChoiceEntry_C::DoDesignTimeRandomization(int32 Temp_int_Variable, class UFortItemDefinition* Temp_object_Variable, class UFortItemDefinition* Temp_object_Variable2, class UFortItemDefinition* Temp_object_Variable3, class UFortItemDefinition* Temp_object_Variable4, int32 CallFunc_RandomInteger_ReturnValue, class UFortItemDefinition* K2Node_Select_Default, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "DoDesignTimeRandomization");

	Params::UItemInspectEvolutionChoiceEntry_C_DoDesignTimeRandomization_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SetItemToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnabledChoice                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        DisableReasonText                                                (Edit)

void UItemInspectEvolutionChoiceEntry_C::SetItemToRepresent(class UFortItem* Item, int32 RecipeIndex, bool EnabledChoice, class FText DisableReasonText)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "SetItemToRepresent");

	Params::UItemInspectEvolutionChoiceEntry_C_SetItemToRepresent_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;
	Parms.EnabledChoice = EnabledChoice;
	Parms.DisableReasonText = DisableReasonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectEvolutionChoiceEntry_C::OnSelected()
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "OnSelected");

	Params::UItemInspectEvolutionChoiceEntry_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolutionChoiceEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "PreConstruct");

	Params::UItemInspectEvolutionChoiceEntry_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.ExecuteUbergraph_ItemInspectEvolutionChoiceEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolutionChoiceEntry_C::ExecuteUbergraph_ItemInspectEvolutionChoiceEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "ExecuteUbergraph_ItemInspectEvolutionChoiceEntry");

	Params::UItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "OnEvolutionChoiceSelected__DelegateSignature");

	Params::UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceUnhovered__DelegateSignature(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "OnEvolutionChoiceUnhovered__DelegateSignature");

	Params::UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceUnhovered__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolutionChoiceEntry_C::OnEvolutionChoiceHovered__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectEvolutionChoiceEntry_C", "OnEvolutionChoiceHovered__DelegateSignature");

	Params::UItemInspectEvolutionChoiceEntry_C_OnEvolutionChoiceHovered__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
