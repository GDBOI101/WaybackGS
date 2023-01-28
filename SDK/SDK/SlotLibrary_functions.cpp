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


// Function SlotLibrary.SlotLibrary_C.Get Attribute Modifier Header Text
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAttributeInfo          Attribute_Info                                                   (Parm)
// struct FGameplayTagContainer       Required_Tags                                                    (Parm)
// class FText                        Required_Gameplay_Tags_Description                               (Parm)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetAttributeDisplayName_ReturnValue                     ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        K2Node_Select2_Default                                           ()

class FText USlotLibrary_C::Get_Attribute_Modifier_Header_Text(const struct FFortAttributeInfo& Attribute_Info, const struct FGameplayTagContainer& Required_Tags, class FText Required_Gameplay_Tags_Description, class UObject* __WorldContext, bool Temp_bool_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetAttributeDisplayName_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, bool CallFunc_TextIsEmpty_ReturnValue2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable2, class FText K2Node_Select_Default, class FText K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("SlotLibrary_C", "Get Attribute Modifier Header Text");

	Params::USlotLibrary_C_Get_Attribute_Modifier_Header_Text_Params Parms;
	Parms.Attribute_Info = Attribute_Info;
	Parms.Required_Tags = Required_Tags;
	Parms.Required_Gameplay_Tags_Description = Required_Gameplay_Tags_Description;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetAttributeDisplayName_ReturnValue = CallFunc_GetAttributeDisplayName_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_TextIsEmpty_ReturnValue2 = CallFunc_TextIsEmpty_ReturnValue2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SlotLibrary.SlotLibrary_C.Create Attribute Modifier Tool Tip
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Owning_Player                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortAttributeInfo          Attribute_Info                                                   (Parm)
// struct FGameplayTagContainer       Required_Gameplay_Tags                                           (Parm)
// class FText                        Required_Gameplay_Tags_Description                               (Parm)
// class FText                        Modifier_Source                                                  (Parm)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAttributeDescription_ReturnValue                     ()
// class FText                        CallFunc_Get_Attribute_Modifier_Header_Text_ReturnValue          ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// TArray<class FText>                K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// class FText                        Temp_text_Variable2                                              ()
// TArray<class FText>                K2Node_Select2_Default                                           (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select3_Default                                           ()
// class UUserWidget*                 CallFunc_Create_Basic_Multi_Line_Tooltip_Output                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlotLibrary_C::Create_Attribute_Modifier_Tool_Tip(class APlayerController* Owning_Player, const struct FFortAttributeInfo& Attribute_Info, const struct FGameplayTagContainer& Required_Gameplay_Tags, class FText Required_Gameplay_Tags_Description, class FText Modifier_Source, class UObject* __WorldContext, class UWidget** Result, class FText Temp_text_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetAttributeDescription_ReturnValue, class FText CallFunc_Get_Attribute_Modifier_Header_Text_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_TextIsEmpty_ReturnValue3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable2, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array2, TArray<class FText>& K2Node_MakeArray_Array3, class FText Temp_text_Variable2, TArray<class FText>& K2Node_Select2_Default, bool Temp_bool_Variable3, class FText K2Node_Select3_Default, class UUserWidget* CallFunc_Create_Basic_Multi_Line_Tooltip_Output)
{
	static auto Func = Class->GetFunction("SlotLibrary_C", "Create Attribute Modifier Tool Tip");

	Params::USlotLibrary_C_Create_Attribute_Modifier_Tool_Tip_Params Parms;
	Parms.Owning_Player = Owning_Player;
	Parms.Attribute_Info = Attribute_Info;
	Parms.Required_Gameplay_Tags = Required_Gameplay_Tags;
	Parms.Required_Gameplay_Tags_Description = Required_Gameplay_Tags_Description;
	Parms.Modifier_Source = Modifier_Source;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAttributeDescription_ReturnValue = CallFunc_GetAttributeDescription_ReturnValue;
	Parms.CallFunc_Get_Attribute_Modifier_Header_Text_ReturnValue = CallFunc_Get_Attribute_Modifier_Header_Text_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue2 = CallFunc_TextIsEmpty_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_TextIsEmpty_ReturnValue3 = CallFunc_TextIsEmpty_ReturnValue3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Create_Basic_Multi_Line_Tooltip_Output = CallFunc_Create_Basic_Multi_Line_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SlotLibrary.SlotLibrary_C.Get Traits Of Workers
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UFortWorker*>         Workers                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Chief_Personality                                                (Parm, OutParm)
// struct FGameplayTagContainer       Crew_Personalities                                               (Parm, OutParm)
// struct FGameplayTagContainer       Crew_Set_Bonuses                                                 (Parm, OutParm)
// TArray<struct FGameplayTag>        Crew_Personalities_Result                                        (Edit, ZeroConstructor)
// TArray<struct FGameplayTag>        Crew_Set_Bonuses_Result                                          (Edit, ZeroConstructor)
// TArray<struct FGameplayTag>        Chief_Personalities_Result                                       (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorker*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ZeroConstructor, ReferenceParm)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags2                 (ZeroConstructor, ReferenceParm)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorkerType*             K2Node_DynamicCast_AsFort_Worker_Type                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           ()
// TArray<struct FGameplayTag>        K2Node_Select_Default                                            (ZeroConstructor, ReferenceParm)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue2          ()
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue3          ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlotLibrary_C::Get_Traits_Of_Workers(TArray<class UFortWorker*>& Workers, class UObject* __WorldContext, struct FGameplayTagContainer* Chief_Personality, struct FGameplayTagContainer* Crew_Personalities, struct FGameplayTagContainer* Crew_Set_Bonuses, const TArray<struct FGameplayTag>& Crew_Personalities_Result, const TArray<struct FGameplayTag>& Crew_Set_Bonuses_Result, const TArray<struct FGameplayTag>& Chief_Personalities_Result, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortWorker* CallFunc_Array_Get_Item, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags2, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortWorkerType* K2Node_DynamicCast_AsFort_Worker_Type, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, TArray<struct FGameplayTag>& K2Node_Select_Default, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue2, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("SlotLibrary_C", "Get Traits Of Workers");

	Params::USlotLibrary_C_Get_Traits_Of_Workers_Params Parms;
	Parms.Workers = Workers;
	Parms.__WorldContext = __WorldContext;
	Parms.Crew_Personalities_Result = Crew_Personalities_Result;
	Parms.Crew_Set_Bonuses_Result = Crew_Set_Bonuses_Result;
	Parms.Chief_Personalities_Result = Chief_Personalities_Result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags2 = CallFunc_BreakGameplayTagContainer_GameplayTags2;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Worker_Type = K2Node_DynamicCast_AsFort_Worker_Type;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue2 = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue2;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue3 = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Chief_Personality != nullptr)
		*Chief_Personality = Parms.Chief_Personality;

	if (Crew_Personalities != nullptr)
		*Crew_Personalities = Parms.Crew_Personalities;

	if (Crew_Set_Bonuses != nullptr)
		*Crew_Set_Bonuses = Parms.Crew_Set_Bonuses;

}


// Function SlotLibrary.SlotLibrary_C.Calculate Current Pulsing Highlight Color
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Base_Color                                                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Hightlight_Color                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Current_Color                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_H                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_S                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_V                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RGBToHSV_A                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Sin_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_CInterpTo_ReturnValue                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlotLibrary_C::Calculate_Current_Pulsing_Highlight_Color(const struct FLinearColor& Base_Color, const struct FLinearColor& Hightlight_Color, class UObject* __WorldContext, struct FLinearColor* Current_Color, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Sin_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FLinearColor& CallFunc_CInterpTo_ReturnValue)
{
	static auto Func = Class->GetFunction("SlotLibrary_C", "Calculate Current Pulsing Highlight Color");

	Params::USlotLibrary_C_Calculate_Current_Pulsing_Highlight_Color_Params Parms;
	Parms.Base_Color = Base_Color;
	Parms.Hightlight_Color = Hightlight_Color;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_RGBToHSV_H = CallFunc_RGBToHSV_H;
	Parms.CallFunc_RGBToHSV_S = CallFunc_RGBToHSV_S;
	Parms.CallFunc_RGBToHSV_V = CallFunc_RGBToHSV_V;
	Parms.CallFunc_RGBToHSV_A = CallFunc_RGBToHSV_A;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Sin_ReturnValue = CallFunc_Sin_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_CInterpTo_ReturnValue = CallFunc_CInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Color != nullptr)
		*Current_Color = Parms.Current_Color;

}


// Function SlotLibrary.SlotLibrary_C.EnsureIconBrush
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortMultiSizeBrush         Multi_size_Brush                                                 (Parm)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 Brush                                                            (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            ()

void USlotLibrary_C::EnsureIconBrush(const struct FFortMultiSizeBrush& Multi_size_Brush, class UObject* __WorldContext, struct FSlateBrush* Brush, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SlotLibrary_C", "EnsureIconBrush");

	Params::USlotLibrary_C_EnsureIconBrush_Params Parms;
	Parms.Multi_size_Brush = Multi_size_Brush;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Brush != nullptr)
		*Brush = Parms.Brush;

}


// Function SlotLibrary.SlotLibrary_C.InitItemWidget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemWidget*             Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Create_Item_Tooltip_Return_Value                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlotLibrary_C::InitItemWidget(class UFortItemWidget* Widget, class UFortItem* Item, class UObject* __WorldContext, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWidget* CallFunc_Create_Item_Tooltip_Return_Value)
{
	static auto Func = Class->GetFunction("SlotLibrary_C", "InitItemWidget");

	Params::USlotLibrary_C_InitItemWidget_Params Parms;
	Parms.Widget = Widget;
	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_Item_Tooltip_Return_Value = CallFunc_Create_Item_Tooltip_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
