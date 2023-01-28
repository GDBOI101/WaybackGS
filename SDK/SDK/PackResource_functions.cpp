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


// Function PackResource.PackResource_C.UpdateType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortResourceType       ResourceType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()

void UPackResource_C::UpdateType(enum class EFortResourceType ResourceType, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue)
{
	static auto Func = Class->GetFunction("PackResource_C", "UpdateType");

	Params::UPackResource_C_UpdateType_Params Parms;
	Parms.ResourceType = ResourceType;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetResourceItemDefinition_ReturnValue = CallFunc_GetResourceItemDefinition_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.UpdateCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ResourceCount                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortResourceItemDefinition* CallFunc_GetCurrentResourceItemDefinition_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResourceCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UPackResource_C::UpdateCount(int32 ResourceCount, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, float Temp_float_Variable, float Temp_float_Variable2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortResourceItemDefinition* CallFunc_GetCurrentResourceItemDefinition_ReturnValue, bool Temp_bool_Variable2, class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UClass* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select2_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("PackResource_C", "UpdateCount");

	Params::UPackResource_C_UpdateCount_Params Parms;
	Parms.ResourceCount = ResourceCount;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentResourceItemDefinition_ReturnValue = CallFunc_GetCurrentResourceItemDefinition_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetResourceItemDefinition_ReturnValue = CallFunc_GetResourceItemDefinition_ReturnValue;
	Parms.CallFunc_GetResourceCount_ReturnValue = CallFunc_GetResourceCount_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPackResource_C::Construct()
{
	static auto Func = Class->GetFunction("PackResource_C", "Construct");

	Params::UPackResource_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.ExecuteUbergraph_PackResource
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPackResource_C::ExecuteUbergraph_PackResource(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("PackResource_C", "ExecuteUbergraph_PackResource");

	Params::UPackResource_C_ExecuteUbergraph_PackResource_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
