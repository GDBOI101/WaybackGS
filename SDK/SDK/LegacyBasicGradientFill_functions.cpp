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


// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Brush Size
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Brush_Size                                                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void ULegacyBasicGradientFill_C::Set_Brush_Size(const struct FVector2D& Brush_Size, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("LegacyBasicGradientFill_C", "Set Brush Size");

	Params::ULegacyBasicGradientFill_C_Set_Brush_Size_Params Parms;
	Parms.Brush_Size = Brush_Size;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.Set Fill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color_1                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color_2                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rotation__0___1_                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyBasicGradientFill_C::Set_Fill(const struct FLinearColor& Color_1, const struct FLinearColor& Color_2, float Rotation__0___1_, float CallFunc_FClamp_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LegacyBasicGradientFill_C", "Set Fill");

	Params::ULegacyBasicGradientFill_C_Set_Fill_Params Parms;
	Parms.Color_1 = Color_1;
	Parms.Color_2 = Color_2;
	Parms.Rotation__0___1_ = Rotation__0___1_;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyBasicGradientFill_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("LegacyBasicGradientFill_C", "PreConstruct");

	Params::ULegacyBasicGradientFill_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LegacyBasicGradientFill.LegacyBasicGradientFill_C.ExecuteUbergraph_LegacyBasicGradientFill
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyBasicGradientFill_C::ExecuteUbergraph_LegacyBasicGradientFill(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("LegacyBasicGradientFill_C", "ExecuteUbergraph_LegacyBasicGradientFill");

	Params::ULegacyBasicGradientFill_C_ExecuteUbergraph_LegacyBasicGradientFill_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
