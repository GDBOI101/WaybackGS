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


// Function NodeBackground.NodeBackground_C.SetBackgroundColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESkillTreeGroups        Groups                                                           (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillTreeGroups        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetSingleMaterialStyleMID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNodeBackground_C::SetBackgroundColor(enum class ESkillTreeGroups Groups, enum class ESkillTreeGroups Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("NodeBackground_C", "SetBackgroundColor");

	Params::UNodeBackground_C_SetBackgroundColor_Params Parms;
	Parms.Groups = Groups;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetSingleMaterialStyleMID_ReturnValue = CallFunc_GetSingleMaterialStyleMID_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NodeBackground.NodeBackground_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNodeBackground_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("NodeBackground_C", "PreConstruct");

	Params::UNodeBackground_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NodeBackground.NodeBackground_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNodeBackground_C::Construct()
{
	static auto Func = Class->GetFunction("NodeBackground_C", "Construct");

	Params::UNodeBackground_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NodeBackground.NodeBackground_C.ExecuteUbergraph_NodeBackground
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNodeBackground_C::ExecuteUbergraph_NodeBackground(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("NodeBackground_C", "ExecuteUbergraph_NodeBackground");

	Params::UNodeBackground_C_ExecuteUbergraph_NodeBackground_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
