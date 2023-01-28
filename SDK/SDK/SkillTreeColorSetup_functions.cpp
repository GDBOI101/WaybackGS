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


// Function SkillTreeColorSetup.SkillTreeColorSetup_C.SkillTreeBGSetup
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillTreePageColors        Page_Color                                                       (Parm, HasGetValueTypeHash)
// enum class ESkillTreePages         Pages                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillTreePages         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillTreePages         Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillTreePages         Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select3_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeColorSetup_C::SkillTreeBGSetup(const struct FSkillTreePageColors& Page_Color, enum class ESkillTreePages Pages, class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext, enum class ESkillTreePages Temp_byte_Variable, enum class ESkillTreePages Temp_byte_Variable2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select2_Default, enum class ESkillTreePages Temp_byte_Variable3, const struct FLinearColor& K2Node_Select3_Default)
{
	static auto Func = Class->GetFunction("SkillTreeColorSetup_C", "SkillTreeBGSetup");

	Params::USkillTreeColorSetup_C_SkillTreeBGSetup_Params Parms;
	Parms.Page_Color = Page_Color;
	Parms.Pages = Pages;
	Parms.Mid = Mid;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
