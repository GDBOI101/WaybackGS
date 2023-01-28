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


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionDetailsModifierRow_C::PlayIntroAnimation()
{
	static auto Func = Class->GetFunction("MissionDetailsModifierRow_C", "PlayIntroAnimation");

	Params::UMissionDetailsModifierRow_C_PlayIntroAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ModifierName                                                     (Parm)
// class FText                        ModifierDescription                                              (Parm)
// class UTexture2D*                  ModifierIcon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      TextStyle                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Show_Description                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseSmallIcon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   NormalSize                                                       (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   SmallSize                                                        (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionDetailsModifierRow_C::Init(class FText ModifierName, class FText ModifierDescription, class UTexture2D* ModifierIcon, class UClass* TextStyle, bool Show_Description, bool UseSmallIcon, const struct FVector2D& NormalSize, const struct FVector2D& SmallSize, bool Temp_bool_Variable, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, float K2Node_Select_Default, float K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("MissionDetailsModifierRow_C", "Init");

	Params::UMissionDetailsModifierRow_C_Init_Params Parms;
	Parms.ModifierName = ModifierName;
	Parms.ModifierDescription = ModifierDescription;
	Parms.ModifierIcon = ModifierIcon;
	Parms.TextStyle = TextStyle;
	Parms.Show_Description = Show_Description;
	Parms.UseSmallIcon = UseSmallIcon;
	Parms.NormalSize = NormalSize;
	Parms.SmallSize = SmallSize;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X2 = CallFunc_BreakVector2D_X2;
	Parms.CallFunc_BreakVector2D_Y2 = CallFunc_BreakVector2D_Y2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionDetailsModifierRow_C::Construct()
{
	static auto Func = Class->GetFunction("MissionDetailsModifierRow_C", "Construct");

	Params::UMissionDetailsModifierRow_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionDetailsModifierRow_C::ExecuteUbergraph_MissionDetailsModifierRow(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MissionDetailsModifierRow_C", "ExecuteUbergraph_MissionDetailsModifierRow");

	Params::UMissionDetailsModifierRow_C_ExecuteUbergraph_MissionDetailsModifierRow_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
