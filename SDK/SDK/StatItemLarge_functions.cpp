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


// Function StatItemLarge.StatItemLarge_C.UpdateValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortStatValueDisplayTypeDisplayType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          BuffState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                BuffColor                                                        (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BaseColor                                                        (Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortStatValueDisplayTypeLocalDisplayType                                                 (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          LocalBuffState                                                   (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              LocalCurrentValue                                                (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocalNewValue                                                    (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Base___Buff_Colors_Base                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Base___Buff_Colors_Buff                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuffState          Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable4                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select3_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatItemLarge_C::UpdateValue(float NewValue, float CurrentValue, enum class EFortStatValueDisplayType DisplayType, enum class EFortBuffState BuffState, const struct FLinearColor& BuffColor, const struct FLinearColor& BaseColor, enum class EFortStatValueDisplayType LocalDisplayType, enum class EFortBuffState LocalBuffState, float LocalCurrentValue, float LocalNewValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortBuffState Temp_byte_Variable4, const struct FVector2D& Temp_struct_Variable, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Base, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Buff, const struct FVector2D& Temp_struct_Variable2, const struct FVector2D& Temp_struct_Variable3, enum class EFortBuffState Temp_byte_Variable5, const struct FLinearColor& Temp_struct_Variable4, const struct FVector2D& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select2_Default, enum class EFortBuffState Temp_byte_Variable6, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FLinearColor& K2Node_Select3_Default, bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("StatItemLarge_C", "UpdateValue");

	Params::UStatItemLarge_C_UpdateValue_Params Parms;
	Parms.NewValue = NewValue;
	Parms.CurrentValue = CurrentValue;
	Parms.DisplayType = DisplayType;
	Parms.BuffState = BuffState;
	Parms.BuffColor = BuffColor;
	Parms.BaseColor = BaseColor;
	Parms.LocalDisplayType = LocalDisplayType;
	Parms.LocalBuffState = LocalBuffState;
	Parms.LocalCurrentValue = LocalCurrentValue;
	Parms.LocalNewValue = LocalNewValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Get_Base___Buff_Colors_Base = CallFunc_Get_Base___Buff_Colors_Base;
	Parms.CallFunc_Get_Base___Buff_Colors_Buff = CallFunc_Get_Base___Buff_Colors_Buff;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatItemLarge.StatItemLarge_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatItemLarge_C::UpdateIcon()
{
	static auto Func = Class->GetFunction("StatItemLarge_C", "UpdateIcon");

	Params::UStatItemLarge_C_UpdateIcon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatItemLarge.StatItemLarge_C.UpdateDisplayData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortStatValueDisplayTypeDisplayState                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuffState          BuffState                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewValue                                                         (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (Edit)
// float                              CurrentValue                                                     (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortDisplayAttribute       CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute             ()

void UStatItemLarge_C::UpdateDisplayData(enum class EFortStatValueDisplayType DisplayState, enum class EFortBuffState BuffState, float NewValue, class FText DisplayName, float CurrentValue, const struct FFortDisplayAttribute& CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute)
{
	static auto Func = Class->GetFunction("StatItemLarge_C", "UpdateDisplayData");

	Params::UStatItemLarge_C_UpdateDisplayData_Params Parms;
	Parms.DisplayState = DisplayState;
	Parms.BuffState = BuffState;
	Parms.NewValue = NewValue;
	Parms.DisplayName = DisplayName;
	Parms.CurrentValue = CurrentValue;
	Parms.CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute = CallFunc_GetCurrentAttributeCopy_OutDisplayAttribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatItemLarge.StatItemLarge_C.GetLocalPlayerId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            LocalPlayerNetId                                                 (Parm, OutParm, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            K2Node_DynamicCast_AsFort_Player_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetUniqueID_ReturnValue                                 (HasGetValueTypeHash)

void UStatItemLarge_C::GetLocalPlayerId(struct FUniqueNetIdRepl* LocalPlayerNetId, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue)
{
	static auto Func = Class->GetFunction("StatItemLarge_C", "GetLocalPlayerId");

	Params::UStatItemLarge_C_GetLocalPlayerId_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State = K2Node_DynamicCast_AsFort_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalPlayerNetId != nullptr)
		*LocalPlayerNetId = Parms.LocalPlayerNetId;

}


// Function StatItemLarge.StatItemLarge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStatItemLarge_C::Construct()
{
	static auto Func = Class->GetFunction("StatItemLarge_C", "Construct");

	Params::UStatItemLarge_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatItemLarge.StatItemLarge_C.DisplayAttributeChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UStatItemLarge_C::DisplayAttributeChanged()
{
	static auto Func = Class->GetFunction("StatItemLarge_C", "DisplayAttributeChanged");

	Params::UStatItemLarge_C_DisplayAttributeChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatItemLarge.StatItemLarge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatItemLarge_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("StatItemLarge_C", "PreConstruct");

	Params::UStatItemLarge_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatItemLarge.StatItemLarge_C.PreviewStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UStatItemLarge_C::PreviewStarted()
{
	static auto Func = Class->GetFunction("StatItemLarge_C", "PreviewStarted");

	Params::UStatItemLarge_C_PreviewStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatItemLarge.StatItemLarge_C.PreviewEnded
// (Event, Public, BlueprintEvent)
// Parameters:

void UStatItemLarge_C::PreviewEnded()
{
	static auto Func = Class->GetFunction("StatItemLarge_C", "PreviewEnded");

	Params::UStatItemLarge_C_PreviewEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatItemLarge.StatItemLarge_C.ValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatItemLarge_C::ValueChanged(float Delta)
{
	static auto Func = Class->GetFunction("StatItemLarge_C", "ValueChanged");

	Params::UStatItemLarge_C_ValueChanged_Params Parms;
	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatItemLarge.StatItemLarge_C.ExecuteUbergraph_StatItemLarge
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delta                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatItemLarge_C::ExecuteUbergraph_StatItemLarge(int32 EntryPoint, float K2Node_Event_Delta, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("StatItemLarge_C", "ExecuteUbergraph_StatItemLarge");

	Params::UStatItemLarge_C_ExecuteUbergraph_StatItemLarge_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
