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


// Function Results_BonusXpType.Results_BonusXpType_C.setInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InXPAmount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        PlayerName                                                       (Parm)
// class FName                        InType                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Type                                                             (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Source_Player_Name                                               (Edit)
// int32                              XPAmount                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Bonus_Type                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TypeBackground                                                   (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TypeText                                                         (Edit)
// struct FVector2D                   TypeScale                                                        (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UResults_BonusXpType_C::SetInformation(int32 InXPAmount, class FText PlayerName, class FName InType, class FName Type, class FText Source_Player_Name, int32 XPAmount, uint8 Bonus_Type, const struct FLinearColor& TypeBackground, class FText TypeText, const struct FVector2D& TypeScale, bool K2Node_SwitchName_CmpSuccess, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_BonusXpType_C", "setInformation");

	Params::UResults_BonusXpType_C_SetInformation_Params Parms;
	Parms.InXPAmount = InXPAmount;
	Parms.PlayerName = PlayerName;
	Parms.InType = InType;
	Parms.Type = Type;
	Parms.Source_Player_Name = Source_Player_Name;
	Parms.XPAmount = XPAmount;
	Parms.Bonus_Type = Bonus_Type;
	Parms.TypeBackground = TypeBackground;
	Parms.TypeText = TypeText;
	Parms.TypeScale = TypeScale;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BonusXpType.Results_BonusXpType_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResults_BonusXpType_C::Construct()
{
	static auto Func = Class->GetFunction("Results_BonusXpType_C", "Construct");

	Params::UResults_BonusXpType_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BonusXpType.Results_BonusXpType_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_BonusXpType_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Results_BonusXpType_C", "PreConstruct");

	Params::UResults_BonusXpType_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_BonusXpType.Results_BonusXpType_C.ExecuteUbergraph_Results_BonusXpType
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_BonusXpType_C::ExecuteUbergraph_Results_BonusXpType(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2)
{
	static auto Func = Class->GetFunction("Results_BonusXpType_C", "ExecuteUbergraph_Results_BonusXpType");

	Params::UResults_BonusXpType_C_ExecuteUbergraph_Results_BonusXpType_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue2 = CallFunc_GetDynamicMaterial_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
