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


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Category Navigation Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        LocalVisibility                                                  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_Select_Default                                            (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Update_Category_Navigation_Visibility(enum class ESlateVisibility LocalVisibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable2, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, TArray<class FName>& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Update Category Navigation Visibility");

	Params::UBP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility_Params Parms;
	Parms.LocalVisibility = LocalVisibility;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Color Category Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::Reset_Color_Category_Index(int32 CallFunc_Array_Find_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Reset Color Category Index");

	Params::UBP_LocalPlayerBannerEditor_C_Reset_Color_Category_Index_Params Parms;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Icon Category Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::Reset_Icon_Category_Index(int32 CallFunc_Array_Find_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Reset Icon Category Index");

	Params::UBP_LocalPlayerBannerEditor_C_Reset_Icon_Category_Index_Params Parms;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Color Category Button Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextIndex                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUnseen                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Next_Color_Category_Index_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    CallFunc_GetBannerColorsForCategory_BannerColors                 (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Update_Right_Color_Category_Button_Bang_State(int32 NextIndex, bool bUnseen, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Get_Next_Color_Category_Index_ReturnValue, class FName CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class UFortAccountItem*>& CallFunc_GetBannerColorsForCategory_BannerColors, int32 CallFunc_Array_Length_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Update Right Color Category Button Bang State");

	Params::UBP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State_Params Parms;
	Parms.NextIndex = NextIndex;
	Parms.bUnseen = bUnseen;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Next_Color_Category_Index_ReturnValue = CallFunc_Get_Next_Color_Category_Index_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBannerColorsForCategory_BannerColors = CallFunc_GetBannerColorsForCategory_BannerColors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Color Category Button Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrevIndex                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUnseen                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Prev_Color_Category_Index_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    CallFunc_GetBannerColorsForCategory_BannerColors                 (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Update_Left_Color_Category_Button_Bang_State(int32 PrevIndex, bool bUnseen, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Get_Prev_Color_Category_Index_ReturnValue, class FName CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class UFortAccountItem*>& CallFunc_GetBannerColorsForCategory_BannerColors, int32 CallFunc_Array_Length_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Update Left Color Category Button Bang State");

	Params::UBP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State_Params Parms;
	Parms.PrevIndex = PrevIndex;
	Parms.bUnseen = bUnseen;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Prev_Color_Category_Index_ReturnValue = CallFunc_Get_Prev_Color_Category_Index_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBannerColorsForCategory_BannerColors = CallFunc_GetBannerColorsForCategory_BannerColors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Icon Category Button Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextIndex                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUnseen                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Next_Icon_Category_Index_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    CallFunc_GetBannerIconsForCategory_BannerIcons                   (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Update_Right_Icon_Category_Button_Bang_State(int32 NextIndex, bool bUnseen, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Get_Next_Icon_Category_Index_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FName CallFunc_Array_Get_Item, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class UFortAccountItem*>& CallFunc_GetBannerIconsForCategory_BannerIcons, int32 CallFunc_Array_Length_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Update Right Icon Category Button Bang State");

	Params::UBP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State_Params Parms;
	Parms.NextIndex = NextIndex;
	Parms.bUnseen = bUnseen;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Next_Icon_Category_Index_ReturnValue = CallFunc_Get_Next_Icon_Category_Index_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBannerIconsForCategory_BannerIcons = CallFunc_GetBannerIconsForCategory_BannerIcons;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Icon Category Button Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrevIndex                                                        (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUnseen                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Prev_Icon_Category_Index_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    CallFunc_GetBannerIconsForCategory_BannerIcons                   (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Update_Left_Icon_Category_Button_Bang_State(int32 PrevIndex, bool bUnseen, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Get_Prev_Icon_Category_Index_ReturnValue, class FName CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, TArray<class UFortAccountItem*>& CallFunc_GetBannerIconsForCategory_BannerIcons, int32 CallFunc_Array_Length_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Update Left Icon Category Button Bang State");

	Params::UBP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State_Params Parms;
	Parms.PrevIndex = PrevIndex;
	Parms.bUnseen = bUnseen;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Prev_Icon_Category_Index_ReturnValue = CallFunc_Get_Prev_Icon_Category_Index_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBannerIconsForCategory_BannerIcons = CallFunc_GetBannerIconsForCategory_BannerIcons;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Color Category Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_LocalPlayerBannerEditor_C::Get_Prev_Color_Category_Index(bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Get Prev Color Category Index");

	Params::UBP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Color Category Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_LocalPlayerBannerEditor_C::Get_Next_Color_Category_Index(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Get Next Color Category Index");

	Params::UBP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Icon Category Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_LocalPlayerBannerEditor_C::Get_Prev_Icon_Category_Index(bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Get Prev Icon Category Index");

	Params::UBP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Icon Category Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_LocalPlayerBannerEditor_C::Get_Next_Icon_Category_Index(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Get Next Icon Category Index");

	Params::UBP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Color Button Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUnseen                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByType_Items                             (ZeroConstructor, ReferenceParm)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Update_Color_Button_Bang_State(bool bUnseen, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items, class UFortAccountItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Update Color Button Bang State");

	Params::UBP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State_Params Parms;
	Parms.bUnseen = bUnseen;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemsByType_Items = CallFunc_GetAccountItemsByType_Items;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Icon Button Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUnseen                                                          (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByType_Items                             (ZeroConstructor, ReferenceParm)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Update_Icon_Button_Bang_State(bool bUnseen, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items, class UFortAccountItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Update Icon Button Bang State");

	Params::UBP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State_Params Parms;
	Parms.bUnseen = bUnseen;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemsByType_Items = CallFunc_GetAccountItemsByType_Items;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Bang States
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerBannerEditor_C::Update_Bang_States()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Update Bang States");

	Params::UBP_LocalPlayerBannerEditor_C_Update_Bang_States_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.FoundsPackTextUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFrontEndFeatureStateCallFunc_GetFeatureState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::FoundsPackTextUpdate(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "FoundsPackTextUpdate");

	Params::UBP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_ReturnValue = CallFunc_GetFeatureState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Pickers and Views
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerBannerEditor_C::Reset_Pickers_and_Views()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Reset Pickers and Views");

	Params::UBP_LocalPlayerBannerEditor_C_Reset_Pickers_and_Views_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset for Keyboard and Mouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerBannerEditor_C::Reset_for_Keyboard_and_Mouse()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Reset for Keyboard and Mouse");

	Params::UBP_LocalPlayerBannerEditor_C_Reset_for_Keyboard_and_Mouse_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Temp State On Item Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseBannerColorItem*K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetRowNameForBannerColorItem_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRowNameForBannerIconItem_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::Update_Temp_State_On_Item_Selected(class UObject* Item, class UFortHomebaseBannerColorItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item, bool K2Node_DynamicCast_bSuccess, class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item, bool K2Node_DynamicCast_bSuccess2, class FName CallFunc_GetRowNameForBannerColorItem_ReturnValue, class FName CallFunc_GetRowNameForBannerIconItem_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Update Temp State On Item Selected");

	Params::UBP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected_Params Parms;
	Parms.Item = Item;
	Parms.K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item = K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item = K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetRowNameForBannerColorItem_ReturnValue = CallFunc_GetRowNameForBannerColorItem_ReturnValue;
	Parms.CallFunc_GetRowNameForBannerIconItem_ReturnValue = CallFunc_GetRowNameForBannerIconItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Refresh Apply Button State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Refresh_Apply_Button_State(bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Refresh Apply Button State");

	Params::UBP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State_Params Parms;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue2 = CallFunc_NotEqual_NameName_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Apply Chosen Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerBannerEditor_C::Apply_Chosen_Item()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Apply Chosen Item");

	Params::UBP_LocalPlayerBannerEditor_C_Apply_Chosen_Item_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Picking Tile State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPickingTile                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        K2Node_Select_Default                                            ()

void UBP_LocalPlayerBannerEditor_C::Set_Picking_Tile_State(bool bPickingTile, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable2, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Set Picking Tile State");

	Params::UBP_LocalPlayerBannerEditor_C_Set_Picking_Tile_State_Params Parms;
	Parms.bPickingTile = bPickingTile;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Attempt Leave Picker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Left                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LeftPicker                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_DynamicCast_AsCommon_Button                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Attempt_Leave_Picker(bool* Left, bool LeftPicker, bool Temp_bool_Variable, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UWidget* K2Node_Select_Default, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Attempt Leave Picker");

	Params::UBP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker_Params Parms;
	Parms.LeftPicker = LeftPicker;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsCommon_Button = K2Node_DynamicCast_AsCommon_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Left != nullptr)
		*Left = Parms.Left;

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseBannerColorItem*CallFunc_GetBannerColorItemFromRowName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Navigate_to_Chosen_Color(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortHomebaseBannerColorItem* CallFunc_GetBannerColorItemFromRowName_ReturnValue, bool CallFunc_SetSelectedItem_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Navigate to Chosen Color");

	Params::UBP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBannerColorItemFromRowName_ReturnValue = CallFunc_GetBannerColorItemFromRowName_ReturnValue;
	Parms.CallFunc_SetSelectedItem_ReturnValue = CallFunc_SetSelectedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseBannerIconItem* CallFunc_GetBannerIconItemFromRowName_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Navigate_to_Chosen_Icon(class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortHomebaseBannerIconItem* CallFunc_GetBannerIconItemFromRowName_ReturnValue, bool CallFunc_SetSelectedItem_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Navigate to Chosen Icon");

	Params::UBP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBannerIconItemFromRowName_ReturnValue = CallFunc_GetBannerIconItemFromRowName_ReturnValue;
	Parms.CallFunc_SetSelectedItem_ReturnValue = CallFunc_SetSelectedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetDeactivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerBannerEditor_C::OnWidgetDeactivated()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "OnWidgetDeactivated");

	Params::UBP_LocalPlayerBannerEditor_C_OnWidgetDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Icon Tileview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentCategory                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::Update_Banner_Icon_Tileview(class FName CurrentCategory)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Update Banner Icon Tileview");

	Params::UBP_LocalPlayerBannerEditor_C_Update_Banner_Icon_Tileview_Params Parms;
	Parms.CurrentCategory = CurrentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Color Tileview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentCategory                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::Update_Banner_Color_Tileview(class FName CurrentCategory)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Update Banner Color Tileview");

	Params::UBP_LocalPlayerBannerEditor_C_Update_Banner_Color_Tileview_Params Parms;
	Parms.CurrentCategory = CurrentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Color Category Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Get_Next_Color_Category_Index_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::Increment_Color_Category_Index(int32 CallFunc_Get_Next_Color_Category_Index_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Increment Color Category Index");

	Params::UBP_LocalPlayerBannerEditor_C_Increment_Color_Category_Index_Params Parms;
	Parms.CallFunc_Get_Next_Color_Category_Index_ReturnValue = CallFunc_Get_Next_Color_Category_Index_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Icon Category Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Get_Next_Icon_Category_Index_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::Increment_Icon_Category_Index(int32 CallFunc_Get_Next_Icon_Category_Index_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Increment Icon Category Index");

	Params::UBP_LocalPlayerBannerEditor_C_Increment_Icon_Category_Index_Params Parms;
	Parms.CallFunc_Get_Next_Icon_Category_Index_ReturnValue = CallFunc_Get_Next_Icon_Category_Index_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Color Category Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Get_Prev_Color_Category_Index_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::Decrement_Color_Category_Index(int32 CallFunc_Get_Prev_Color_Category_Index_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Decrement Color Category Index");

	Params::UBP_LocalPlayerBannerEditor_C_Decrement_Color_Category_Index_Params Parms;
	Parms.CallFunc_Get_Prev_Color_Category_Index_ReturnValue = CallFunc_Get_Prev_Color_Category_Index_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Icon Category Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Get_Prev_Icon_Category_Index_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::Decrement_Icon_Category_Index(int32 CallFunc_Get_Prev_Icon_Category_Index_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Decrement Icon Category Index");

	Params::UBP_LocalPlayerBannerEditor_C_Decrement_Icon_Category_Index_Params Parms;
	Parms.CallFunc_Get_Prev_Icon_Category_Index_ReturnValue = CallFunc_Get_Prev_Icon_Category_Index_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Previous Category
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::Previous_Category(class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item2)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Previous Category");

	Params::UBP_LocalPlayerBannerEditor_C_Previous_Category_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Next Category
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::Next_Category(class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item2)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Next Category");

	Params::UBP_LocalPlayerBannerEditor_C_Next_Category_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Current Category
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentCategory                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CategoryDisplayName                                              (Edit)
// class FText                        CallFunc_GetBannerIconCategoryName_ReturnValue                   ()
// class FText                        CallFunc_GetBannerColorCategoryName_ReturnValue                  ()

void UBP_LocalPlayerBannerEditor_C::Set_Current_Category(class FName CurrentCategory, class FText CategoryDisplayName, class FText CallFunc_GetBannerIconCategoryName_ReturnValue, class FText CallFunc_GetBannerColorCategoryName_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Set Current Category");

	Params::UBP_LocalPlayerBannerEditor_C_Set_Current_Category_Params Parms;
	Parms.CurrentCategory = CurrentCategory;
	Parms.CategoryDisplayName = CategoryDisplayName;
	Parms.CallFunc_GetBannerIconCategoryName_ReturnValue = CallFunc_GetBannerIconCategoryName_ReturnValue;
	Parms.CallFunc_GetBannerColorCategoryName_ReturnValue = CallFunc_GetBannerColorCategoryName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Colorswatches
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CategoryRowName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseBannerColorItem*CallFunc_GetBannerColorItemFromRowName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    CallFunc_GetBannerColorsForCategory_BannerColors                 (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Setup_Tileview_For_Colorswatches(class FName& CategoryRowName, class UObject* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortHomebaseBannerColorItem* CallFunc_GetBannerColorItemFromRowName_ReturnValue, bool CallFunc_SetSelectedItem_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess2, TArray<class UFortAccountItem*>& CallFunc_GetBannerColorsForCategory_BannerColors, bool CallFunc_Array_Contains_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Setup Tileview For Colorswatches");

	Params::UBP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches_Params Parms;
	Parms.CategoryRowName = CategoryRowName;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.CallFunc_SetSelectedIndex_ReturnValue = CallFunc_SetSelectedIndex_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetBannerColorItemFromRowName_ReturnValue = CallFunc_GetBannerColorItemFromRowName_ReturnValue;
	Parms.CallFunc_SetSelectedItem_ReturnValue = CallFunc_SetSelectedItem_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller2 = K2Node_DynamicCast_AsFort_Player_Controller2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetBannerColorsForCategory_BannerColors = CallFunc_GetBannerColorsForCategory_BannerColors;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Icons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CategoryRowName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetSelectedIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHomebaseBannerIconItem* CallFunc_GetBannerIconItemFromRowName_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetBannerIconsForCategory_BannerIcons                   (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_SetSelectedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::Setup_Tileview_For_Icons(class FName& CategoryRowName, class UObject* CallFunc_GetSelectedItem_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess2, class UFortHomebaseBannerIconItem* CallFunc_GetBannerIconItemFromRowName_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetBannerIconsForCategory_BannerIcons, bool CallFunc_SetSelectedItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Setup Tileview For Icons");

	Params::UBP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons_Params Parms;
	Parms.CategoryRowName = CategoryRowName;
	Parms.CallFunc_GetSelectedItem_ReturnValue = CallFunc_GetSelectedItem_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_SetSelectedIndex_ReturnValue = CallFunc_SetSelectedIndex_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue2 = CallFunc_GetOwningPlayer_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller2 = K2Node_DynamicCast_AsFort_Player_Controller2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetBannerIconItemFromRowName_ReturnValue = CallFunc_GetBannerIconItemFromRowName_ReturnValue;
	Parms.CallFunc_GetBannerIconsForCategory_BannerIcons = CallFunc_GetBannerIconsForCategory_BannerIcons;
	Parms.CallFunc_SetSelectedItem_ReturnValue = CallFunc_SetSelectedItem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::OnWidgetActivated(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "OnWidgetActivated");

	Params::UBP_LocalPlayerBannerEditor_C_OnWidgetActivated_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerBannerEditor_C::Construct()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Construct");

	Params::UBP_LocalPlayerBannerEditor_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditIconButton_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::BndEvt__EditIconButton_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BndEvt__EditIconButton_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_BndEvt__EditIconButton_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditColorButton_K2Node_ComponentBoundEvent_319_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::BndEvt__EditColorButton_K2Node_ComponentBoundEvent_319_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BndEvt__EditColorButton_K2Node_ComponentBoundEvent_319_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_BndEvt__EditColorButton_K2Node_ComponentBoundEvent_319_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditIconButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::BndEvt__EditIconButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BndEvt__EditIconButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_BndEvt__EditIconButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditColorButton_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::BndEvt__EditColorButton_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BndEvt__EditColorButton_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_BndEvt__EditColorButton_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CloseEditorButton_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::BndEvt__CloseEditorButton_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BndEvt__CloseEditorButton_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_BndEvt__CloseEditorButton_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.RefreshBannerEditor
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerBannerEditor_C::RefreshBannerEditor()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "RefreshBannerEditor");

	Params::UBP_LocalPlayerBannerEditor_C_RefreshBannerEditor_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "HandleInputMethodChanged");

	Params::UBP_LocalPlayerBannerEditor_C_HandleInputMethodChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BndEvt__ApplyButton_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature(class UObject* Item)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BannerTileBangUpdated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerBannerEditor_C::BannerTileBangUpdated_Event_0()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "BannerTileBangUpdated_Event_0");

	Params::UBP_LocalPlayerBannerEditor_C_BannerTileBangUpdated_Event_0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Handle Bang State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LocalPlayerBannerEditor_C::Handle_Bang_State_Changed()
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "Handle Bang State Changed");

	Params::UBP_LocalPlayerBannerEditor_C_Handle_Bang_State_Changed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.ExecuteUbergraph_BP_LocalPlayerBannerEditor
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Attempt_Leave_Picker_Left                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BannerEditorTile_C*      K2Node_DynamicCast_AsBP_Banner_Editor_Tile                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LocalPlayerBannerEditor_C::ExecuteUbergraph_BP_LocalPlayerBannerEditor(int32 EntryPoint, bool Temp_bool_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button8, bool Temp_bool_Variable2, class UCommonButton* K2Node_ComponentBoundEvent_Button7, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UObject* K2Node_ComponentBoundEvent_Item2, bool K2Node_ComponentBoundEvent_bIsSelected, bool Temp_bool_Variable3, class UCommonUIContext* CallFunc_GetContext_ReturnValue3, bool K2Node_CustomEvent_bUsingGamepad, bool CallFunc_IsUsingGamepad_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue4, bool K2Node_Select_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue2, class UWidget* K2Node_Select2_Default, class UCommonUIContext* CallFunc_GetContext_ReturnValue5, bool CallFunc_IsUsingGamepad_ReturnValue4, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UObject* K2Node_ComponentBoundEvent_Item, class UCommonUIContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_IsUsingGamepad_ReturnValue5, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Attempt_Leave_Picker_Left, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UBP_BannerEditorTile_C* K2Node_DynamicCast_AsBP_Banner_Editor_Tile, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "ExecuteUbergraph_BP_LocalPlayerBannerEditor");

	Params::UBP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue2 = CallFunc_IsUsingGamepad_ReturnValue2;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button8 = K2Node_ComponentBoundEvent_Button8;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_ComponentBoundEvent_Button7 = K2Node_ComponentBoundEvent_Button7;
	Parms.K2Node_ComponentBoundEvent_Button6 = K2Node_ComponentBoundEvent_Button6;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Item2 = K2Node_ComponentBoundEvent_Item2;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.CallFunc_IsUsingGamepad_ReturnValue3 = CallFunc_IsUsingGamepad_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUINavigationManager_ReturnValue2 = CallFunc_GetUINavigationManager_ReturnValue2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_IsUsingGamepad_ReturnValue4 = CallFunc_IsUsingGamepad_ReturnValue4;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_IsUsingGamepad_ReturnValue5 = CallFunc_IsUsingGamepad_ReturnValue5;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Attempt_Leave_Picker_Left = CallFunc_Attempt_Leave_Picker_Left;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_DynamicCast_AsBP_Banner_Editor_Tile = K2Node_DynamicCast_AsBP_Banner_Editor_Tile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.CloseBannerEditor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        IconId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ColorId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LocalPlayerBannerEditor_C::CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId)
{
	static auto Func = Class->GetFunction("BP_LocalPlayerBannerEditor_C", "CloseBannerEditor__DelegateSignature");

	Params::UBP_LocalPlayerBannerEditor_C_CloseBannerEditor__DelegateSignature_Params Parms;
	Parms.IconId = IconId;
	Parms.ColorId = ColorId;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
