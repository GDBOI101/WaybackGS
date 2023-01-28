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


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetOutpostInventoryNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldShow                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_ItemCard_C::SetOutpostInventoryNotification(bool ShouldShow, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "SetOutpostInventoryNotification");

	Params::URewards_ItemCard_C_SetOutpostInventoryNotification_Params Parms;
	Parms.ShouldShow = ShouldShow;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetOpaque
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewards_ItemCard_C::SetOpaque()
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "SetOpaque");

	Params::URewards_ItemCard_C_SetOpaque_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SkipPopInAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewards_ItemCard_C::SkipPopInAnimation()
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "SkipPopInAnimation");

	Params::URewards_ItemCard_C_SkipPopInAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetTransparent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewards_ItemCard_C::SetTransparent()
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "SetTransparent");

	Params::URewards_ItemCard_C_SetTransparent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySecondaryPopInAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewards_ItemCard_C::PlaySecondaryPopInAnimation()
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "PlaySecondaryPopInAnimation");

	Params::URewards_ItemCard_C_PlaySecondaryPopInAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlayPrimaryPopInAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewards_ItemCard_C::PlayPrimaryPopInAnimation()
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "PlayPrimaryPopInAnimation");

	Params::URewards_ItemCard_C_PlayPrimaryPopInAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.GetDropShadowDepth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              DropShadowDepth                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::GetDropShadowDepth(float* DropShadowDepth, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "GetDropShadowDepth");

	Params::URewards_ItemCard_C_GetDropShadowDepth_Params Parms;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

	if (DropShadowDepth != nullptr)
		*DropShadowDepth = Parms.DropShadowDepth;

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.InitDropShadow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::InitDropShadow(bool CallFunc_ShouldUseNewItemCards_ReturnValue, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "InitDropShadow");

	Params::URewards_ItemCard_C_InitDropShadow_Params Parms;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::SetDropShadowSize(float Scale, bool CallFunc_ShouldUseNewItemCards_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "SetDropShadowSize");

	Params::URewards_ItemCard_C_SetDropShadowSize_Params Parms;
	Parms.Scale = Scale;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetDropShadowDepth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ShadowDepth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::SetDropShadowDepth(float ShadowDepth, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "SetDropShadowDepth");

	Params::URewards_ItemCard_C_SetDropShadowDepth_Params Parms;
	Parms.ShadowDepth = ShadowDepth;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.HideDropShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewards_ItemCard_C::HideDropShadow()
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "HideDropShadow");

	Params::URewards_ItemCard_C_HideDropShadow_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.ShowDropShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ShadowDepth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::ShowDropShadow(float ShadowDepth)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "ShowDropShadow");

	Params::URewards_ItemCard_C_ShowDropShadow_Params Parms;
	Parms.ShadowDepth = ShadowDepth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.StartResizeAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void URewards_ItemCard_C::StartResizeAnimation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "StartResizeAnimation");

	Params::URewards_ItemCard_C_StartResizeAnimation_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SizeUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DropShadowDepth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue2                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDropShadowDepth_DropShadowDepth                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_ItemCard_C::SizeUp(float Duration, float Delay, float DropShadowDepth, bool CallFunc_ShouldUseNewItemCards_ReturnValue, bool CallFunc_ShouldUseNewItemCards_ReturnValue2, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue2, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetDropShadowDepth_DropShadowDepth, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "SizeUp");

	Params::URewards_ItemCard_C_SizeUp_Params Parms;
	Parms.Duration = Duration;
	Parms.Delay = Delay;
	Parms.DropShadowDepth = DropShadowDepth;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue2 = CallFunc_ShouldUseNewItemCards_ReturnValue2;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue2 = CallFunc_GetCardSize_ReturnValue2;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;
	Parms.CallFunc_GetCardDimensions_ReturnValue2 = CallFunc_GetCardDimensions_ReturnValue2;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X2 = CallFunc_BreakVector2D_X2;
	Parms.CallFunc_BreakVector2D_Y2 = CallFunc_BreakVector2D_Y2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDropShadowDepth_DropShadowDepth = CallFunc_GetDropShadowDepth_DropShadowDepth;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.TickResizeAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Ease_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::TickResizeAnimation(float Alpha, float CallFunc_GetGameTimeInSeconds_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, float CallFunc_Ease_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_ShouldUseNewItemCards_ReturnValue, float CallFunc_Ease_ReturnValue2, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "TickResizeAnimation");

	Params::URewards_ItemCard_C_TickResizeAnimation_Params Parms;
	Parms.Alpha = Alpha;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue2 = CallFunc_Ease_ReturnValue2;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SizeDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DropShadowDepth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue2                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue3                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDropShadowDepth_DropShadowDepth                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue4                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_ItemCard_C::SizeDown(float Duration, float Delay, float DropShadowDepth, bool CallFunc_ShouldUseNewItemCards_ReturnValue, bool CallFunc_ShouldUseNewItemCards_ReturnValue2, bool CallFunc_ShouldUseNewItemCards_ReturnValue3, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue2, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue2, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue4, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue3, float CallFunc_BreakVector2D_X3, float CallFunc_BreakVector2D_Y3, float CallFunc_GetDropShadowDepth_DropShadowDepth, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_ShouldUseNewItemCards_ReturnValue4, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue4, float CallFunc_BreakVector2D_X4, float CallFunc_BreakVector2D_Y4, float CallFunc_Divide_FloatFloat_ReturnValue2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "SizeDown");

	Params::URewards_ItemCard_C_SizeDown_Params Parms;
	Parms.Duration = Duration;
	Parms.Delay = Delay;
	Parms.DropShadowDepth = DropShadowDepth;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue2 = CallFunc_ShouldUseNewItemCards_ReturnValue2;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue3 = CallFunc_ShouldUseNewItemCards_ReturnValue3;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue2 = CallFunc_GetCardSize_ReturnValue2;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue3 = CallFunc_GetCardSize_ReturnValue3;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetCardDimensions_ReturnValue2 = CallFunc_GetCardDimensions_ReturnValue2;
	Parms.CallFunc_BreakVector2D_X2 = CallFunc_BreakVector2D_X2;
	Parms.CallFunc_BreakVector2D_Y2 = CallFunc_BreakVector2D_Y2;
	Parms.CallFunc_GetCardSize_ReturnValue4 = CallFunc_GetCardSize_ReturnValue4;
	Parms.CallFunc_GetCardDimensions_ReturnValue3 = CallFunc_GetCardDimensions_ReturnValue3;
	Parms.CallFunc_BreakVector2D_X3 = CallFunc_BreakVector2D_X3;
	Parms.CallFunc_BreakVector2D_Y3 = CallFunc_BreakVector2D_Y3;
	Parms.CallFunc_GetDropShadowDepth_DropShadowDepth = CallFunc_GetDropShadowDepth_DropShadowDepth;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue4 = CallFunc_ShouldUseNewItemCards_ReturnValue4;
	Parms.CallFunc_GetCardDimensions_ReturnValue4 = CallFunc_GetCardDimensions_ReturnValue4;
	Parms.CallFunc_BreakVector2D_X4 = CallFunc_BreakVector2D_X4;
	Parms.CallFunc_BreakVector2D_Y4 = CallFunc_BreakVector2D_Y4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.GetCardSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D URewards_ItemCard_C::GetCardSize(bool CallFunc_ShouldUseNewItemCards_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "GetCardSize");

	Params::URewards_ItemCard_C_GetCardSize_Params Parms;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.GetItemToRepresent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                   ItemToRepresent                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::GetItemToRepresent(class UFortItem** ItemToRepresent)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "GetItemToRepresent");

	Params::URewards_ItemCard_C_GetItemToRepresent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemToRepresent != nullptr)
		*ItemToRepresent = Parms.ItemToRepresent;

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.HandlePopInAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewards_ItemCard_C::HandlePopInAnimationFinished()
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "HandlePopInAnimationFinished");

	Params::URewards_ItemCard_C_HandlePopInAnimationFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetInspectAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void URewards_ItemCard_C::SetInspectAction(const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "SetInspectAction");

	Params::URewards_ItemCard_C_SetInspectAction_Params Parms;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.TickScaleAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)

void URewards_ItemCard_C::TickScaleAnimation(float Alpha, float CallFunc_Ease_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Ease_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "TickScaleAnimation");

	Params::URewards_ItemCard_C_TickScaleAnimation_Params Parms;
	Parms.Alpha = Alpha;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue2 = CallFunc_Ease_ReturnValue2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlayScaleAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetScale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DropShadowDepth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDropShadowDepth_DropShadowDepth                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::PlayScaleAnimation(float TargetScale, float Duration, float DropShadowDepth, float CallFunc_GetDropShadowDepth_DropShadowDepth, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "PlayScaleAnimation");

	Params::URewards_ItemCard_C_PlayScaleAnimation_Params Parms;
	Parms.TargetScale = TargetScale;
	Parms.Duration = Duration;
	Parms.DropShadowDepth = DropShadowDepth;
	Parms.CallFunc_GetDropShadowDepth_DropShadowDepth = CallFunc_GetDropShadowDepth_DropShadowDepth;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.StartSlideAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void URewards_ItemCard_C::StartSlideAnimation(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "StartSlideAnimation");

	Params::URewards_ItemCard_C_StartSlideAnimation_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.EndSlideAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewards_ItemCard_C::EndSlideAnimation()
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "EndSlideAnimation");

	Params::URewards_ItemCard_C_EndSlideAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PlaySlideAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   TargetAlignment                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    TargetAnchors                                                    (Parm, NoDestructor)
// float                              TargetScale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TargetOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TargetAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StaggerDelay                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TargetTranslation                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     CallFunc_GetOffsets_ReturnValue                                  (NoDestructor)
// struct FAnchors                    CallFunc_GetAnchors_ReturnValue                                  (NoDestructor)
// struct FVector2D                   CallFunc_GetAlignment_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::PlaySlideAnimation(const struct FVector2D& TargetAlignment, const struct FAnchors& TargetAnchors, float TargetScale, float TargetOffset, float TargetAngle, float Duration, float StaggerDelay, const struct FVector2D& TargetTranslation, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& CallFunc_GetOffsets_ReturnValue, const struct FAnchors& CallFunc_GetAnchors_ReturnValue, const struct FVector2D& CallFunc_GetAlignment_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "PlaySlideAnimation");

	Params::URewards_ItemCard_C_PlaySlideAnimation_Params Parms;
	Parms.TargetAlignment = TargetAlignment;
	Parms.TargetAnchors = TargetAnchors;
	Parms.TargetScale = TargetScale;
	Parms.TargetOffset = TargetOffset;
	Parms.TargetAngle = TargetAngle;
	Parms.Duration = Duration;
	Parms.StaggerDelay = StaggerDelay;
	Parms.TargetTranslation = TargetTranslation;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOffsets_ReturnValue = CallFunc_GetOffsets_ReturnValue;
	Parms.CallFunc_GetAnchors_ReturnValue = CallFunc_GetAnchors_ReturnValue;
	Parms.CallFunc_GetAlignment_ReturnValue = CallFunc_GetAlignment_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.TickSlideAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            CanvasSlot                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Alpha                                                            (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetOffsets_ReturnValue                                  (NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue2                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue3                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// float                              CallFunc_Ease_ReturnValue8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// float                              CallFunc_Ease_ReturnValue9                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue4                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)
// float                              CallFunc_BreakVector2D_X8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue10                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue11                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue5                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_ItemCard_C::TickSlideAnimation(class UCanvasPanelSlot* CanvasSlot, float Alpha, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, const struct FMargin& CallFunc_GetOffsets_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, float CallFunc_Ease_ReturnValue2, float CallFunc_Ease_ReturnValue3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X3, float CallFunc_BreakVector2D_Y3, float CallFunc_BreakVector2D_X4, float CallFunc_BreakVector2D_Y4, float CallFunc_BreakVector2D_X5, float CallFunc_BreakVector2D_Y5, float CallFunc_BreakVector2D_X6, float CallFunc_BreakVector2D_Y6, float CallFunc_Ease_ReturnValue4, float CallFunc_Ease_ReturnValue5, float CallFunc_Ease_ReturnValue6, float CallFunc_Ease_ReturnValue7, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue3, const struct FAnchors& K2Node_MakeStruct_Anchors, float CallFunc_Ease_ReturnValue8, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Ease_ReturnValue9, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue4, float CallFunc_BreakVector2D_X7, float CallFunc_BreakVector2D_Y7, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, float CallFunc_BreakVector2D_X8, float CallFunc_BreakVector2D_Y8, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue10, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue11, float CallFunc_FMin_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue5, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "TickSlideAnimation");

	Params::URewards_ItemCard_C_TickSlideAnimation_Params Parms;
	Parms.CanvasSlot = CanvasSlot;
	Parms.Alpha = Alpha;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X2 = CallFunc_BreakVector2D_X2;
	Parms.CallFunc_BreakVector2D_Y2 = CallFunc_BreakVector2D_Y2;
	Parms.CallFunc_GetOffsets_ReturnValue = CallFunc_GetOffsets_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue2 = CallFunc_Ease_ReturnValue2;
	Parms.CallFunc_Ease_ReturnValue3 = CallFunc_Ease_ReturnValue3;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X3 = CallFunc_BreakVector2D_X3;
	Parms.CallFunc_BreakVector2D_Y3 = CallFunc_BreakVector2D_Y3;
	Parms.CallFunc_BreakVector2D_X4 = CallFunc_BreakVector2D_X4;
	Parms.CallFunc_BreakVector2D_Y4 = CallFunc_BreakVector2D_Y4;
	Parms.CallFunc_BreakVector2D_X5 = CallFunc_BreakVector2D_X5;
	Parms.CallFunc_BreakVector2D_Y5 = CallFunc_BreakVector2D_Y5;
	Parms.CallFunc_BreakVector2D_X6 = CallFunc_BreakVector2D_X6;
	Parms.CallFunc_BreakVector2D_Y6 = CallFunc_BreakVector2D_Y6;
	Parms.CallFunc_Ease_ReturnValue4 = CallFunc_Ease_ReturnValue4;
	Parms.CallFunc_Ease_ReturnValue5 = CallFunc_Ease_ReturnValue5;
	Parms.CallFunc_Ease_ReturnValue6 = CallFunc_Ease_ReturnValue6;
	Parms.CallFunc_Ease_ReturnValue7 = CallFunc_Ease_ReturnValue7;
	Parms.CallFunc_MakeVector2D_ReturnValue2 = CallFunc_MakeVector2D_ReturnValue2;
	Parms.CallFunc_MakeVector2D_ReturnValue3 = CallFunc_MakeVector2D_ReturnValue3;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Ease_ReturnValue8 = CallFunc_Ease_ReturnValue8;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Ease_ReturnValue9 = CallFunc_Ease_ReturnValue9;
	Parms.CallFunc_MakeVector2D_ReturnValue4 = CallFunc_MakeVector2D_ReturnValue4;
	Parms.CallFunc_BreakVector2D_X7 = CallFunc_BreakVector2D_X7;
	Parms.CallFunc_BreakVector2D_Y7 = CallFunc_BreakVector2D_Y7;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;
	Parms.CallFunc_BreakVector2D_X8 = CallFunc_BreakVector2D_X8;
	Parms.CallFunc_BreakVector2D_Y8 = CallFunc_BreakVector2D_Y8;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue10 = CallFunc_Ease_ReturnValue10;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue11 = CallFunc_Ease_ReturnValue11;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue5 = CallFunc_MakeVector2D_ReturnValue5;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "SetItemToRepresent");

	Params::URewards_ItemCard_C_SetItemToRepresent_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.InitDesignView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         TempItemDefinition                                               (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::InitDesignView(class UFortItemDefinition* TempItemDefinition, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "InitDesignView");

	Params::URewards_ItemCard_C_InitDesignView_Params Parms;
	Parms.TempItemDefinition = TempItemDefinition;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_ItemCard_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "PreConstruct");

	Params::URewards_ItemCard_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::URewards_ItemCard_C_BndEvt__ButtonInspect_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URewards_ItemCard_C::Construct()
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "Construct");

	Params::URewards_ItemCard_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.ExecuteUbergraph_Rewards_ItemCard
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_ItemCard_C::ExecuteUbergraph_Rewards_ItemCard(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "ExecuteUbergraph_Rewards_ItemCard");

	Params::URewards_ItemCard_C_ExecuteUbergraph_Rewards_ItemCard_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnPopInAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewards_ItemCard_C::OnPopInAnimationFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "OnPopInAnimationFinished__DelegateSignature");

	Params::URewards_ItemCard_C_OnPopInAnimationFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnResizeAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         RewardsItemCard                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::OnResizeAnimationFinished__DelegateSignature(class URewards_ItemCard_C* RewardsItemCard)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "OnResizeAnimationFinished__DelegateSignature");

	Params::URewards_ItemCard_C_OnResizeAnimationFinished__DelegateSignature_Params Parms;
	Parms.RewardsItemCard = RewardsItemCard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnInspectClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         Card                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::OnInspectClicked__DelegateSignature(class URewards_ItemCard_C* Card)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "OnInspectClicked__DelegateSignature");

	Params::URewards_ItemCard_C_OnInspectClicked__DelegateSignature_Params Parms;
	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rewards_ItemCard.Rewards_ItemCard_C.OnSlideAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewards_ItemCard_C*         RewardsItemCard                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_ItemCard_C::OnSlideAnimationFinished__DelegateSignature(class URewards_ItemCard_C* RewardsItemCard)
{
	static auto Func = Class->GetFunction("Rewards_ItemCard_C", "OnSlideAnimationFinished__DelegateSignature");

	Params::URewards_ItemCard_C_OnSlideAnimationFinished__DelegateSignature_Params Parms;
	Parms.RewardsItemCard = RewardsItemCard;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
