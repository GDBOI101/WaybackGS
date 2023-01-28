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


// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Set Canvas Material Scale and Position
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Position                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Screen_Position                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Screen_Size                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DFloat_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue2                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue3                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URenderToTextureFunctionLibrary_C::Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& Position, float Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue2, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue2, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue)
{
	static auto Func = Class->GetFunction("RenderToTextureFunctionLibrary_C", "Set Canvas Material Scale and Position");

	Params::URenderToTextureFunctionLibrary_C_Set_Canvas_Material_Scale_and_Position_Params Parms;
	Parms.Size = Size;
	Parms.Position = Position;
	Parms.Scale = Scale;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DFloat_ReturnValue = CallFunc_Subtract_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue2 = CallFunc_Multiply_Vector2DFloat_ReturnValue2;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue2 = CallFunc_Conv_Vector2DToVector_ReturnValue2;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue3 = CallFunc_Multiply_Vector2DFloat_ReturnValue3;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Screen_Position != nullptr)
		*Screen_Position = Parms.Screen_Position;

	if (Screen_Size != nullptr)
		*Screen_Size = Parms.Screen_Size;

}


// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Array to HLSL Int Array
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EIntTypes               Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Variable_Name                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      Int                                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>           Int2                                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             Int3                                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>        Int4                                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                     __WorldContext                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Curstring                                                        (Edit, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue2                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue3                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue4                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue3                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue4                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue5                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue6                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue7                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue8                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue9                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue10                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue11                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue13                             (ZeroConstructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item2                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item3                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue2                           ()
// class FText                        CallFunc_Conv_FloatToText_ReturnValue3                           ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue3                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue4                           ()
// class FText                        CallFunc_Conv_FloatToText_ReturnValue5                           ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue5                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue6                           ()
// class FString                      CallFunc_Concat_StrStr_ReturnValue14                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue6                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue15                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue16                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue17                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue18                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue19                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue20                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue21                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue22                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Array_Get_Item4                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue7                           ()
// class FText                        CallFunc_Conv_FloatToText_ReturnValue8                           ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue7                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue8                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue9                           ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue9                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue23                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue24                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue25                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue26                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue27                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue28                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue29                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue30                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue31                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue32                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue33                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue34                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select2_Default                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue5                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_BuildString_Int_ReturnValue6                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select3_Default                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select4_Default                                           (ZeroConstructor, HasGetValueTypeHash)

void URenderToTextureFunctionLibrary_C::Array_to_HLSL_Int_Array(enum class EIntTypes Type, class FString& Variable_Name, TArray<int32>& Int, TArray<struct FVector2D>& Int2, TArray<struct FVector>& Int3, TArray<struct FLinearColor>& Int4, class UObject* __WorldContext, class FString* String, const class FString& Curstring, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue3, const class FString& CallFunc_BuildString_Int_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue4, int32 CallFunc_Array_Length_ReturnValue5, const class FString& CallFunc_BuildString_Int_ReturnValue2, int32 CallFunc_Array_LastIndex_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue6, int32 CallFunc_Array_Length_ReturnValue7, const class FString& CallFunc_BuildString_Int_ReturnValue3, int32 CallFunc_Array_LastIndex_ReturnValue4, int32 CallFunc_Array_Length_ReturnValue8, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue5, const class FString& CallFunc_Concat_StrStr_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue7, const class FString& CallFunc_Concat_StrStr_ReturnValue8, const class FString& CallFunc_Concat_StrStr_ReturnValue9, const class FString& CallFunc_Concat_StrStr_ReturnValue10, const class FString& CallFunc_Concat_StrStr_ReturnValue11, const class FString& CallFunc_Concat_StrStr_ReturnValue12, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable2, int32 Temp_int_Loop_Counter_Variable3, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable2, bool CallFunc_EqualEqual_IntInt_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue13, const struct FVector2D& CallFunc_Array_Get_Item2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 Temp_int_Array_Index_Variable3, class FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue3, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item3, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, class FText CallFunc_Conv_FloatToText_ReturnValue2, class FText CallFunc_Conv_FloatToText_ReturnValue3, const class FString& CallFunc_Conv_TextToString_ReturnValue2, const class FString& CallFunc_Conv_TextToString_ReturnValue3, class FText CallFunc_Conv_FloatToText_ReturnValue4, class FText CallFunc_Conv_FloatToText_ReturnValue5, const class FString& CallFunc_Conv_TextToString_ReturnValue4, const class FString& CallFunc_Conv_TextToString_ReturnValue5, class FText CallFunc_Conv_FloatToText_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue14, const class FString& CallFunc_Conv_TextToString_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue15, bool Temp_bool_Variable2, const class FString& CallFunc_Concat_StrStr_ReturnValue16, const class FString& CallFunc_Concat_StrStr_ReturnValue17, const class FString& CallFunc_Concat_StrStr_ReturnValue18, const class FString& CallFunc_Concat_StrStr_ReturnValue19, const class FString& CallFunc_Concat_StrStr_ReturnValue20, const class FString& CallFunc_Concat_StrStr_ReturnValue21, const class FString& CallFunc_Concat_StrStr_ReturnValue22, int32 Temp_int_Loop_Counter_Variable4, const class FString& K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue4, int32 Temp_int_Array_Index_Variable4, bool Temp_bool_Variable3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, const struct FVector& CallFunc_Array_Get_Item4, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class FText CallFunc_Conv_FloatToText_ReturnValue7, class FText CallFunc_Conv_FloatToText_ReturnValue8, const class FString& CallFunc_Conv_TextToString_ReturnValue7, const class FString& CallFunc_Conv_TextToString_ReturnValue8, class FText CallFunc_Conv_FloatToText_ReturnValue9, const class FString& CallFunc_Conv_TextToString_ReturnValue9, const class FString& CallFunc_Concat_StrStr_ReturnValue23, const class FString& CallFunc_Concat_StrStr_ReturnValue24, const class FString& CallFunc_Concat_StrStr_ReturnValue25, const class FString& CallFunc_Concat_StrStr_ReturnValue26, const class FString& CallFunc_Concat_StrStr_ReturnValue27, const class FString& CallFunc_Concat_StrStr_ReturnValue28, const class FString& CallFunc_Concat_StrStr_ReturnValue29, const class FString& CallFunc_Concat_StrStr_ReturnValue30, const class FString& CallFunc_Concat_StrStr_ReturnValue31, const class FString& CallFunc_Concat_StrStr_ReturnValue32, const class FString& CallFunc_Concat_StrStr_ReturnValue33, const class FString& CallFunc_Concat_StrStr_ReturnValue34, const class FString& K2Node_Select2_Default, const class FString& CallFunc_BuildString_Int_ReturnValue5, bool Temp_bool_Variable4, const class FString& CallFunc_BuildString_Int_ReturnValue6, const class FString& K2Node_Select3_Default, const class FString& K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("RenderToTextureFunctionLibrary_C", "Array to HLSL Int Array");

	Params::URenderToTextureFunctionLibrary_C_Array_to_HLSL_Int_Array_Params Parms;
	Parms.Type = Type;
	Parms.Variable_Name = Variable_Name;
	Parms.Int = Int;
	Parms.Int2 = Int2;
	Parms.Int3 = Int3;
	Parms.Int4 = Int4;
	Parms.__WorldContext = __WorldContext;
	Parms.Curstring = Curstring;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue2 = CallFunc_Array_LastIndex_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_Array_Length_ReturnValue5 = CallFunc_Array_Length_ReturnValue5;
	Parms.CallFunc_BuildString_Int_ReturnValue2 = CallFunc_BuildString_Int_ReturnValue2;
	Parms.CallFunc_Array_LastIndex_ReturnValue3 = CallFunc_Array_LastIndex_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue6 = CallFunc_Array_Length_ReturnValue6;
	Parms.CallFunc_Array_Length_ReturnValue7 = CallFunc_Array_Length_ReturnValue7;
	Parms.CallFunc_BuildString_Int_ReturnValue3 = CallFunc_BuildString_Int_ReturnValue3;
	Parms.CallFunc_Array_LastIndex_ReturnValue4 = CallFunc_Array_LastIndex_ReturnValue4;
	Parms.CallFunc_Array_Length_ReturnValue8 = CallFunc_Array_Length_ReturnValue8;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BuildString_Int_ReturnValue4 = CallFunc_BuildString_Int_ReturnValue4;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue3 = CallFunc_Concat_StrStr_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue4 = CallFunc_Concat_StrStr_ReturnValue4;
	Parms.CallFunc_Concat_StrStr_ReturnValue5 = CallFunc_Concat_StrStr_ReturnValue5;
	Parms.CallFunc_Concat_StrStr_ReturnValue6 = CallFunc_Concat_StrStr_ReturnValue6;
	Parms.CallFunc_Concat_StrStr_ReturnValue7 = CallFunc_Concat_StrStr_ReturnValue7;
	Parms.CallFunc_Concat_StrStr_ReturnValue8 = CallFunc_Concat_StrStr_ReturnValue8;
	Parms.CallFunc_Concat_StrStr_ReturnValue9 = CallFunc_Concat_StrStr_ReturnValue9;
	Parms.CallFunc_Concat_StrStr_ReturnValue10 = CallFunc_Concat_StrStr_ReturnValue10;
	Parms.CallFunc_Concat_StrStr_ReturnValue11 = CallFunc_Concat_StrStr_ReturnValue11;
	Parms.CallFunc_Concat_StrStr_ReturnValue12 = CallFunc_Concat_StrStr_ReturnValue12;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.Temp_int_Loop_Counter_Variable3 = Temp_int_Loop_Counter_Variable3;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue3 = CallFunc_Less_IntInt_ReturnValue3;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue13 = CallFunc_Concat_StrStr_ReturnValue13;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.Temp_int_Array_Index_Variable3 = Temp_int_Array_Index_Variable3;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue3 = CallFunc_EqualEqual_IntInt_ReturnValue3;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_Conv_FloatToText_ReturnValue2 = CallFunc_Conv_FloatToText_ReturnValue2;
	Parms.CallFunc_Conv_FloatToText_ReturnValue3 = CallFunc_Conv_FloatToText_ReturnValue3;
	Parms.CallFunc_Conv_TextToString_ReturnValue2 = CallFunc_Conv_TextToString_ReturnValue2;
	Parms.CallFunc_Conv_TextToString_ReturnValue3 = CallFunc_Conv_TextToString_ReturnValue3;
	Parms.CallFunc_Conv_FloatToText_ReturnValue4 = CallFunc_Conv_FloatToText_ReturnValue4;
	Parms.CallFunc_Conv_FloatToText_ReturnValue5 = CallFunc_Conv_FloatToText_ReturnValue5;
	Parms.CallFunc_Conv_TextToString_ReturnValue4 = CallFunc_Conv_TextToString_ReturnValue4;
	Parms.CallFunc_Conv_TextToString_ReturnValue5 = CallFunc_Conv_TextToString_ReturnValue5;
	Parms.CallFunc_Conv_FloatToText_ReturnValue6 = CallFunc_Conv_FloatToText_ReturnValue6;
	Parms.CallFunc_Concat_StrStr_ReturnValue14 = CallFunc_Concat_StrStr_ReturnValue14;
	Parms.CallFunc_Conv_TextToString_ReturnValue6 = CallFunc_Conv_TextToString_ReturnValue6;
	Parms.CallFunc_Concat_StrStr_ReturnValue15 = CallFunc_Concat_StrStr_ReturnValue15;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Concat_StrStr_ReturnValue16 = CallFunc_Concat_StrStr_ReturnValue16;
	Parms.CallFunc_Concat_StrStr_ReturnValue17 = CallFunc_Concat_StrStr_ReturnValue17;
	Parms.CallFunc_Concat_StrStr_ReturnValue18 = CallFunc_Concat_StrStr_ReturnValue18;
	Parms.CallFunc_Concat_StrStr_ReturnValue19 = CallFunc_Concat_StrStr_ReturnValue19;
	Parms.CallFunc_Concat_StrStr_ReturnValue20 = CallFunc_Concat_StrStr_ReturnValue20;
	Parms.CallFunc_Concat_StrStr_ReturnValue21 = CallFunc_Concat_StrStr_ReturnValue21;
	Parms.CallFunc_Concat_StrStr_ReturnValue22 = CallFunc_Concat_StrStr_ReturnValue22;
	Parms.Temp_int_Loop_Counter_Variable4 = Temp_int_Loop_Counter_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_IntInt_ReturnValue4 = CallFunc_Less_IntInt_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.Temp_int_Array_Index_Variable4 = Temp_int_Array_Index_Variable4;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue4 = CallFunc_EqualEqual_IntInt_ReturnValue4;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Conv_FloatToText_ReturnValue7 = CallFunc_Conv_FloatToText_ReturnValue7;
	Parms.CallFunc_Conv_FloatToText_ReturnValue8 = CallFunc_Conv_FloatToText_ReturnValue8;
	Parms.CallFunc_Conv_TextToString_ReturnValue7 = CallFunc_Conv_TextToString_ReturnValue7;
	Parms.CallFunc_Conv_TextToString_ReturnValue8 = CallFunc_Conv_TextToString_ReturnValue8;
	Parms.CallFunc_Conv_FloatToText_ReturnValue9 = CallFunc_Conv_FloatToText_ReturnValue9;
	Parms.CallFunc_Conv_TextToString_ReturnValue9 = CallFunc_Conv_TextToString_ReturnValue9;
	Parms.CallFunc_Concat_StrStr_ReturnValue23 = CallFunc_Concat_StrStr_ReturnValue23;
	Parms.CallFunc_Concat_StrStr_ReturnValue24 = CallFunc_Concat_StrStr_ReturnValue24;
	Parms.CallFunc_Concat_StrStr_ReturnValue25 = CallFunc_Concat_StrStr_ReturnValue25;
	Parms.CallFunc_Concat_StrStr_ReturnValue26 = CallFunc_Concat_StrStr_ReturnValue26;
	Parms.CallFunc_Concat_StrStr_ReturnValue27 = CallFunc_Concat_StrStr_ReturnValue27;
	Parms.CallFunc_Concat_StrStr_ReturnValue28 = CallFunc_Concat_StrStr_ReturnValue28;
	Parms.CallFunc_Concat_StrStr_ReturnValue29 = CallFunc_Concat_StrStr_ReturnValue29;
	Parms.CallFunc_Concat_StrStr_ReturnValue30 = CallFunc_Concat_StrStr_ReturnValue30;
	Parms.CallFunc_Concat_StrStr_ReturnValue31 = CallFunc_Concat_StrStr_ReturnValue31;
	Parms.CallFunc_Concat_StrStr_ReturnValue32 = CallFunc_Concat_StrStr_ReturnValue32;
	Parms.CallFunc_Concat_StrStr_ReturnValue33 = CallFunc_Concat_StrStr_ReturnValue33;
	Parms.CallFunc_Concat_StrStr_ReturnValue34 = CallFunc_Concat_StrStr_ReturnValue34;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_BuildString_Int_ReturnValue5 = CallFunc_BuildString_Int_ReturnValue5;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_BuildString_Int_ReturnValue6 = CallFunc_BuildString_Int_ReturnValue6;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = Parms.String;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
