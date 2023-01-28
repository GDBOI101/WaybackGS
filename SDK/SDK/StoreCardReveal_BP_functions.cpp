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


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RarityEnumToText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortRarity             InRarity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        OutRarity                                                        (Parm, OutParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::RarityEnumToText(enum class EFortRarity InRarity, class FText* OutRarity, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "RarityEnumToText");

	Params::AStoreCardReveal_BP_C_RarityEnumToText_Params Parms;
	Parms.InRarity = InRarity;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRarity != nullptr)
		*OutRarity = Parms.OutRarity;

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.IsDefender
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition*  Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDefender                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Result                                                           (Parm, OutParm)
// enum class EFortItemType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_RarityEnumToText_OutRarity                              ()
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// class FText                        CallFunc_GetTertiaryCategory_ItemCategoryText                    ()
// struct FSlateBrush                 CallFunc_GetTertiaryCategory_ItemCategoryBrush                   ()
// bool                               CallFunc_GetTertiaryCategory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText                   ()
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush                  ()
// bool                               CallFunc_GetSecondaryCategory_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// enum class EFortItemType           CallFunc_GetType_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable2                                              ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable3                                              ()
// class FText                        Temp_text_Variable4                                              ()
// class FText                        Temp_text_Variable5                                              ()
// class FText                        Temp_text_Variable6                                              ()
// class FText                        Temp_text_Variable7                                              ()
// class FText                        Temp_text_Variable8                                              ()
// class FText                        Temp_text_Variable9                                              ()
// class FText                        Temp_text_Variable10                                             ()
// class FText                        Temp_text_Variable11                                             ()
// class FText                        Temp_text_Variable12                                             ()
// class FText                        Temp_text_Variable13                                             ()
// class FText                        Temp_text_Variable14                                             ()
// class FText                        Temp_text_Variable15                                             ()
// class FText                        Temp_text_Variable16                                             ()
// class FText                        Temp_text_Variable17                                             ()
// class FText                        Temp_text_Variable18                                             ()
// class FText                        Temp_text_Variable19                                             ()
// class FText                        Temp_text_Variable20                                             ()
// class FText                        Temp_text_Variable21                                             ()
// class FText                        Temp_text_Variable22                                             ()
// class FText                        Temp_text_Variable23                                             ()
// class FText                        Temp_text_Variable24                                             ()
// class FText                        Temp_text_Variable25                                             ()
// class FText                        Temp_text_Variable26                                             ()
// class FText                        Temp_text_Variable27                                             ()
// class FText                        Temp_text_Variable28                                             ()
// class FText                        Temp_text_Variable29                                             ()
// class FText                        Temp_text_Variable30                                             ()
// class FText                        Temp_text_Variable31                                             ()
// class FText                        Temp_text_Variable32                                             ()
// class FText                        Temp_text_Variable33                                             ()
// class FText                        Temp_text_Variable34                                             ()
// class FText                        Temp_text_Variable35                                             ()
// class FText                        Temp_text_Variable36                                             ()
// class FText                        Temp_text_Variable37                                             ()
// class FText                        Temp_text_Variable38                                             ()
// class FText                        Temp_text_Variable39                                             ()
// class FText                        Temp_text_Variable40                                             ()
// class FText                        Temp_text_Variable41                                             ()
// class FText                        Temp_text_Variable42                                             ()
// class FText                        Temp_text_Variable43                                             ()
// class FText                        Temp_text_Variable44                                             ()
// class FText                        Temp_text_Variable45                                             ()
// class FText                        Temp_text_Variable46                                             ()
// class FText                        Temp_text_Variable47                                             ()
// class FText                        Temp_text_Variable48                                             ()
// class FText                        Temp_text_Variable49                                             ()
// class FText                        Temp_text_Variable50                                             ()
// class FText                        Temp_text_Variable51                                             ()
// class FText                        Temp_text_Variable52                                             ()
// class FText                        Temp_text_Variable53                                             ()
// class FText                        Temp_text_Variable54                                             ()
// class FText                        Temp_text_Variable55                                             ()
// class FText                        Temp_text_Variable56                                             ()
// class FText                        Temp_text_Variable57                                             ()
// class FText                        Temp_text_Variable58                                             ()
// class FText                        Temp_text_Variable59                                             ()
// class FText                        Temp_text_Variable60                                             ()
// class FText                        Temp_text_Variable61                                             ()
// class FText                        Temp_text_Variable62                                             ()
// class FText                        Temp_text_Variable63                                             ()
// class FText                        Temp_text_Variable64                                             ()
// class FText                        Temp_text_Variable65                                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        K2Node_Select_Default                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData5                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData6                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData7                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData8                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue3                                     ()

void AStoreCardReveal_BP_C::IsDefender(class UFortAccountItemDefinition* Object, bool* IsDefender, class FText* Result, enum class EFortItemType Temp_byte_Variable, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class FText Temp_text_Variable, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_RarityEnumToText_OutRarity, enum class EFortItemType CallFunc_GetType_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, class FText CallFunc_GetDisplayName_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue2, class FText Temp_text_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, class FText Temp_text_Variable26, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, class FText Temp_text_Variable30, class FText Temp_text_Variable31, class FText Temp_text_Variable32, class FText Temp_text_Variable33, class FText Temp_text_Variable34, class FText Temp_text_Variable35, class FText Temp_text_Variable36, class FText Temp_text_Variable37, class FText Temp_text_Variable38, class FText Temp_text_Variable39, class FText Temp_text_Variable40, class FText Temp_text_Variable41, class FText Temp_text_Variable42, class FText Temp_text_Variable43, class FText Temp_text_Variable44, class FText Temp_text_Variable45, class FText Temp_text_Variable46, class FText Temp_text_Variable47, class FText Temp_text_Variable48, class FText Temp_text_Variable49, class FText Temp_text_Variable50, class FText Temp_text_Variable51, class FText Temp_text_Variable52, class FText Temp_text_Variable53, class FText Temp_text_Variable54, class FText Temp_text_Variable55, class FText Temp_text_Variable56, class FText Temp_text_Variable57, class FText Temp_text_Variable58, class FText Temp_text_Variable59, class FText Temp_text_Variable60, class FText Temp_text_Variable61, class FText Temp_text_Variable62, class FText Temp_text_Variable63, class FText Temp_text_Variable64, class FText Temp_text_Variable65, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, class FText CallFunc_Format_ReturnValue3)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "IsDefender");

	Params::AStoreCardReveal_BP_C_IsDefender_Params Parms;
	Parms.Object = Object;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_RarityEnumToText_OutRarity = CallFunc_RarityEnumToText_OutRarity;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = CallFunc_GetTertiaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText = CallFunc_GetSecondaryCategory_ItemCategoryText;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush = CallFunc_GetSecondaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue = CallFunc_GetSecondaryCategory_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue2 = CallFunc_GetType_ReturnValue2;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_text_Variable4 = Temp_text_Variable4;
	Parms.Temp_text_Variable5 = Temp_text_Variable5;
	Parms.Temp_text_Variable6 = Temp_text_Variable6;
	Parms.Temp_text_Variable7 = Temp_text_Variable7;
	Parms.Temp_text_Variable8 = Temp_text_Variable8;
	Parms.Temp_text_Variable9 = Temp_text_Variable9;
	Parms.Temp_text_Variable10 = Temp_text_Variable10;
	Parms.Temp_text_Variable11 = Temp_text_Variable11;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable13 = Temp_text_Variable13;
	Parms.Temp_text_Variable14 = Temp_text_Variable14;
	Parms.Temp_text_Variable15 = Temp_text_Variable15;
	Parms.Temp_text_Variable16 = Temp_text_Variable16;
	Parms.Temp_text_Variable17 = Temp_text_Variable17;
	Parms.Temp_text_Variable18 = Temp_text_Variable18;
	Parms.Temp_text_Variable19 = Temp_text_Variable19;
	Parms.Temp_text_Variable20 = Temp_text_Variable20;
	Parms.Temp_text_Variable21 = Temp_text_Variable21;
	Parms.Temp_text_Variable22 = Temp_text_Variable22;
	Parms.Temp_text_Variable23 = Temp_text_Variable23;
	Parms.Temp_text_Variable24 = Temp_text_Variable24;
	Parms.Temp_text_Variable25 = Temp_text_Variable25;
	Parms.Temp_text_Variable26 = Temp_text_Variable26;
	Parms.Temp_text_Variable27 = Temp_text_Variable27;
	Parms.Temp_text_Variable28 = Temp_text_Variable28;
	Parms.Temp_text_Variable29 = Temp_text_Variable29;
	Parms.Temp_text_Variable30 = Temp_text_Variable30;
	Parms.Temp_text_Variable31 = Temp_text_Variable31;
	Parms.Temp_text_Variable32 = Temp_text_Variable32;
	Parms.Temp_text_Variable33 = Temp_text_Variable33;
	Parms.Temp_text_Variable34 = Temp_text_Variable34;
	Parms.Temp_text_Variable35 = Temp_text_Variable35;
	Parms.Temp_text_Variable36 = Temp_text_Variable36;
	Parms.Temp_text_Variable37 = Temp_text_Variable37;
	Parms.Temp_text_Variable38 = Temp_text_Variable38;
	Parms.Temp_text_Variable39 = Temp_text_Variable39;
	Parms.Temp_text_Variable40 = Temp_text_Variable40;
	Parms.Temp_text_Variable41 = Temp_text_Variable41;
	Parms.Temp_text_Variable42 = Temp_text_Variable42;
	Parms.Temp_text_Variable43 = Temp_text_Variable43;
	Parms.Temp_text_Variable44 = Temp_text_Variable44;
	Parms.Temp_text_Variable45 = Temp_text_Variable45;
	Parms.Temp_text_Variable46 = Temp_text_Variable46;
	Parms.Temp_text_Variable47 = Temp_text_Variable47;
	Parms.Temp_text_Variable48 = Temp_text_Variable48;
	Parms.Temp_text_Variable49 = Temp_text_Variable49;
	Parms.Temp_text_Variable50 = Temp_text_Variable50;
	Parms.Temp_text_Variable51 = Temp_text_Variable51;
	Parms.Temp_text_Variable52 = Temp_text_Variable52;
	Parms.Temp_text_Variable53 = Temp_text_Variable53;
	Parms.Temp_text_Variable54 = Temp_text_Variable54;
	Parms.Temp_text_Variable55 = Temp_text_Variable55;
	Parms.Temp_text_Variable56 = Temp_text_Variable56;
	Parms.Temp_text_Variable57 = Temp_text_Variable57;
	Parms.Temp_text_Variable58 = Temp_text_Variable58;
	Parms.Temp_text_Variable59 = Temp_text_Variable59;
	Parms.Temp_text_Variable60 = Temp_text_Variable60;
	Parms.Temp_text_Variable61 = Temp_text_Variable61;
	Parms.Temp_text_Variable62 = Temp_text_Variable62;
	Parms.Temp_text_Variable63 = Temp_text_Variable63;
	Parms.Temp_text_Variable64 = Temp_text_Variable64;
	Parms.Temp_text_Variable65 = Temp_text_Variable65;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData5 = K2Node_MakeStruct_FormatArgumentData5;
	Parms.K2Node_MakeStruct_FormatArgumentData6 = K2Node_MakeStruct_FormatArgumentData6;
	Parms.K2Node_MakeStruct_FormatArgumentData7 = K2Node_MakeStruct_FormatArgumentData7;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData8 = K2Node_MakeStruct_FormatArgumentData8;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.CallFunc_Format_ReturnValue3 = CallFunc_Format_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDefender != nullptr)
		*IsDefender = Parms.IsDefender;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCB
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CCB_Rarity                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CCB_Text                                                         (Edit)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChoiceCardName_C*           K2Node_DynamicCast_AsChoice_Card_Name                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut                                       (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItemDefinition*>CallFunc_GetChoices_Choices                                      (ZeroConstructor, ReferenceParm)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void AStoreCardReveal_BP_C::SetText_CCB(bool Hide, enum class EFortRarity CCB_Rarity, class FText CCB_Text, bool Temp_bool_Variable, bool Temp_bool_Variable2, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool Temp_bool_Variable3, class UChoiceCardName_C* K2Node_DynamicCast_AsChoice_Card_Name, bool K2Node_DynamicCast_bSuccess, bool K2Node_Select_Default, class UFortStoreContext* CallFunc_GetContext_ReturnValue, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess2, TArray<class UFortAccountItemDefinition*>& CallFunc_GetChoices_Choices, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SetText_CCB");

	Params::AStoreCardReveal_BP_C_SetText_CCB_Params Parms;
	Parms.Hide = Hide;
	Parms.CCB_Rarity = CCB_Rarity;
	Parms.CCB_Text = CCB_Text;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_DynamicCast_AsChoice_Card_Name = K2Node_DynamicCast_AsChoice_Card_Name;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCard_ResultOut = CallFunc_GetCard_ResultOut;
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetChoices_Choices = CallFunc_GetChoices_Choices;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCA
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CCA_Text                                                         (Edit)
// enum class EFortRarity             CCA_Rarity                                                       (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCard                       CallFunc_GetCard_ResultOut                                       (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItemDefinition*>CallFunc_GetChoices_Choices                                      (ZeroConstructor, ReferenceParm)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChoiceCardName_C*           K2Node_DynamicCast_AsChoice_Card_Name                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::SetText_CCA(bool Hide, class FText CCA_Text, enum class EFortRarity CCA_Rarity, class UFortStoreContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, bool Temp_bool_Variable2, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess, enum class EFortRarity CallFunc_GetRarity_ReturnValue, TArray<class UFortAccountItemDefinition*>& CallFunc_GetChoices_Choices, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, bool Temp_bool_Variable3, class FText CallFunc_GetDisplayName_ReturnValue, bool K2Node_Select_Default, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UChoiceCardName_C* K2Node_DynamicCast_AsChoice_Card_Name, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SetText_CCA");

	Params::AStoreCardReveal_BP_C_SetText_CCA_Params Parms;
	Parms.Hide = Hide;
	Parms.CCA_Text = CCA_Text;
	Parms.CCA_Rarity = CCA_Rarity;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCard_ResultOut = CallFunc_GetCard_ResultOut;
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetChoices_Choices = CallFunc_GetChoices_Choices;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsChoice_Card_Name = K2Node_DynamicCast_AsChoice_Card_Name;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue2                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation2                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue3                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue4                     (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue2                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult2                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue14             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue15             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue16             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue17             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::UserConstructionScript(float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue4, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue11, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue13, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue14, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue15, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue16, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue17)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "UserConstructionScript");

	Params::AStoreCardReveal_BP_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue2 = CallFunc_K2_GetComponentToWorld_ReturnValue2;
	Parms.CallFunc_BreakTransform_Location2 = CallFunc_BreakTransform_Location2;
	Parms.CallFunc_BreakTransform_Rotation2 = CallFunc_BreakTransform_Rotation2;
	Parms.CallFunc_BreakTransform_Scale2 = CallFunc_BreakTransform_Scale2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue3 = CallFunc_K2_GetComponentToWorld_ReturnValue3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue4 = CallFunc_K2_GetComponentToWorld_ReturnValue4;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue2 = CallFunc_K2_GetComponentRotation_ReturnValue2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult2 = CallFunc_K2_SetWorldTransform_SweepHitResult2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue10 = CallFunc_CreateDynamicMaterialInstance_ReturnValue10;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue11 = CallFunc_CreateDynamicMaterialInstance_ReturnValue11;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue12;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue2 = CallFunc_K2_GetComponentLocation_ReturnValue2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult2 = CallFunc_K2_SetRelativeRotation_SweepHitResult2;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult2 = CallFunc_K2_SetWorldLocation_SweepHitResult2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue13 = CallFunc_CreateDynamicMaterialInstance_ReturnValue13;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue14 = CallFunc_CreateDynamicMaterialInstance_ReturnValue14;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue15 = CallFunc_CreateDynamicMaterialInstance_ReturnValue15;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue16 = CallFunc_CreateDynamicMaterialInstance_ReturnValue16;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue17 = CallFunc_CreateDynamicMaterialInstance_ReturnValue17;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardExit__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardExit__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CardExit__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardExit__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardExit__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CardExit__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__Proceed__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardExit__Proceed__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardExit__Proceed__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_CardExit__Proceed__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardFlipToFront__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardFlipToFront__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CardFlipToFront__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardFlipToFront__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardFlipToFront__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CardFlipToFront__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardUpgradeFast__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardUpgradeFast__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CardUpgradeFast__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardUpgradeFast__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardUpgradeFast__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CardUpgradeFast__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_Reveal_CC_Choices__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-Reveal-CC-Choices__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_Reveal_CC_Choices__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-Reveal-CC-Choices__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_ClearPostProcessDOFSettings__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-ClearPostProcessDOFSettings__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_ClearPostProcessDOFSettings__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-ClearPostProcessDOFSettings__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_FlareFX__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-FlareFX__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_FlareFX__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_FlareFX__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-FlareFX__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_FlareFX__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CameraFOV__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__CameraFOV__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__CameraFOV__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CameraFOV__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__CC_Phase2_Hide__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2_Hide__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__CC_Phase2__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_A__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_A__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_A__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_A__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_A_End__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A-End__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_A_End__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A-End__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_B__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_B__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_B__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_B__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_B_End__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B-End__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_B_End__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B-End__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCA_Reveal__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-Reveal__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CCA_Reveal__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCA_Reveal__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-Reveal__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CCA_Reveal__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCB_Reveal__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-Reveal__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CCB_Reveal__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCB_Reveal__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-Reveal__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CCB_Reveal__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_QuestionMarkAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-QuestionMarkAnim__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_QuestionMarkAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-QuestionMarkAnim__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCA_AmbientAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-AmbientAnim__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCA_AmbientAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-AmbientAnim__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCB_AmbientAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-AmbientAnim__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCB_AmbientAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-AmbientAnim__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_DataDiskBurns__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-DataDiskBurns__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_DataDiskBurns__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-DataDiskBurns__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__ChangeTexture__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_DataDiskBurns__ChangeTexture__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-DataDiskBurns__ChangeTexture__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__ChangeTexture__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardMoveToScreen__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardMoveToScreen__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CardMoveToScreen__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardMoveToScreen__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardMoveToScreen__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CardMoveToScreen__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6");

	Params::AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7181AC990
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_90006C1C471D136EF3B142B7181AC990(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_90006C1C471D136EF3B142B7181AC990");

	Params::AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7181AC990_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7");

	Params::AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6");

	Params::AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B51198EA0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_EFC62B084995CBCCD64787B51198EA0F(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_EFC62B084995CBCCD64787B51198EA0F");

	Params::AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B51198EA0F_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5");

	Params::AStoreCardReveal_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7CD6D1379
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_90006C1C471D136EF3B142B7CD6D1379(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_90006C1C471D136EF3B142B7CD6D1379");

	Params::AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7CD6D1379_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Released
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpTchEvt_Released(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpTchEvt_Released");

	Params::AStoreCardReveal_BP_C_InpTchEvt_Released_Params Parms;
	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Pressed
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpTchEvt_Pressed(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpTchEvt_Pressed");

	Params::AStoreCardReveal_BP_C_InpTchEvt_Pressed_Params Parms;
	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4");

	Params::AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4_Params Parms;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::InitiatePinata()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InitiatePinata");

	Params::AStoreCardReveal_BP_C_InitiatePinata_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnStoreStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortStoreState         NewStoreState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::OnStoreStateChanged(enum class EFortStoreState NewStoreState)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnStoreStateChanged");

	Params::AStoreCardReveal_BP_C_OnStoreStateChanged_Params Parms;
	Parms.NewStoreState = NewStoreState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StartPackOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::StartPackOpen()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "StartPackOpen");

	Params::AStoreCardReveal_BP_C_StartPackOpen_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardEnterStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardEnterStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardEnterStart");

	Params::AStoreCardReveal_BP_C_CardEnterStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PackDestroyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::PackDestroyStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "PackDestroyStart");

	Params::AStoreCardReveal_BP_C_PackDestroyStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFlipStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardFlipStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardFlipStart");

	Params::AStoreCardReveal_BP_C_CardFlipStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardExitStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardExitStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardExitStart");

	Params::AStoreCardReveal_BP_C_CardExitStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOffFastForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TurnOffFastForward()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TurnOffFastForward");

	Params::AStoreCardReveal_BP_C_TurnOffFastForward_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardBackRevealStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardBackRevealStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardBackRevealStart");

	Params::AStoreCardReveal_BP_C_CardBackRevealStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFrontRevealStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardFrontRevealStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardFrontRevealStart");

	Params::AStoreCardReveal_BP_C_CardFrontRevealStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOnFastForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TurnOnFastForward()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TurnOnFastForward");

	Params::AStoreCardReveal_BP_C_TurnOnFastForward_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableMouseInputOnActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::EnableMouseInputOnActor()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "EnableMouseInputOnActor");

	Params::AStoreCardReveal_BP_C_EnableMouseInputOnActor_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ReceiveBeginPlay");

	Params::AStoreCardReveal_BP_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardPackStoreStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardPackStoreStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardPackStoreStart");

	Params::AStoreCardReveal_BP_C_CardPackStoreStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SpecialCardPauseAbort
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::SpecialCardPauseAbort()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SpecialCardPauseAbort");

	Params::AStoreCardReveal_BP_C_SpecialCardPauseAbort_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PresentChoiceStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::PresentChoiceStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "PresentChoiceStart");

	Params::AStoreCardReveal_BP_C_PresentChoiceStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ChoiceMadeStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ChoiceMadeStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ChoiceMadeStart");

	Params::AStoreCardReveal_BP_C_ChoiceMadeStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params Parms;
	Parms.TouchedComponent = TouchedComponent;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature_Params Parms;
	Parms.TouchedComponent = TouchedComponent;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SkipBackRevealForChoicePack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::SkipBackRevealForChoicePack()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SkipBackRevealForChoicePack");

	Params::AStoreCardReveal_BP_C_SkipBackRevealForChoicePack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ContinueFinalChoiceCardProcess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ContinueFinalChoiceCardProcess()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ContinueFinalChoiceCardProcess");

	Params::AStoreCardReveal_BP_C_ContinueFinalChoiceCardProcess_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ConstructCardFront
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ConstructCardFront()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ConstructCardFront");

	Params::AStoreCardReveal_BP_C_ConstructCardFront_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCA-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::StopCCA_AmbientAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "StopCCA-AmbientAnim");

	Params::AStoreCardReveal_BP_C_StopCCA_AmbientAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.GetReadyToShowCards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::GetReadyToShowCards()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "GetReadyToShowCards");

	Params::AStoreCardReveal_BP_C_GetReadyToShowCards_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Stop-CC-HoverAnims
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::Stop_CC_HoverAnims()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "Stop-CC-HoverAnims");

	Params::AStoreCardReveal_BP_C_Stop_CC_HoverAnims_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnBeginCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnBeginCursorOver_ChoiceCardA");

	Params::AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardA_Params Parms;
	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnEndCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnEndCursorOver_ChoiceCardA");

	Params::AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardA_Params Parms;
	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverStart_CC_A()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverStart-CC-A");

	Params::AStoreCardReveal_BP_C_HoverStart_CC_A_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverEnd_CC_A()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverEnd-CC-A");

	Params::AStoreCardReveal_BP_C_HoverEnd_CC_A_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnBeginCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnBeginCursorOver_ChoiceCardB");

	Params::AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardB_Params Parms;
	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnEndCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnEndCursorOver_ChoiceCardB");

	Params::AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardB_Params Parms;
	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverStart_CC_B()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverStart-CC-B");

	Params::AStoreCardReveal_BP_C_HoverStart_CC_B_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverEnd_CC_B()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverEnd-CC-B");

	Params::AStoreCardReveal_BP_C_HoverEnd_CC_B_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CheckHoverStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CheckHoverStatus()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CheckHoverStatus");

	Params::AStoreCardReveal_BP_C_CheckHoverStatus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCA-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::RestartCCA_AmbientAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "RestartCCA-AmbientAnim");

	Params::AStoreCardReveal_BP_C_RestartCCA_AmbientAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCB-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::StopCCB_AmbientAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "StopCCB-AmbientAnim");

	Params::AStoreCardReveal_BP_C_StopCCB_AmbientAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCB-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::RestartCCB_AmbientAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "RestartCCB-AmbientAnim");

	Params::AStoreCardReveal_BP_C_RestartCCB_AmbientAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableOpenAllPacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::EnableOpenAllPacks()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "EnableOpenAllPacks");

	Params::AStoreCardReveal_BP_C_EnableOpenAllPacks_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardInPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardInPlace()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardInPlace");

	Params::AStoreCardReveal_BP_C_CardInPlace_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CompareRarity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CompareRarity()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CompareRarity");

	Params::AStoreCardReveal_BP_C_CompareRarity_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PlayUpgradeAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::PlayUpgradeAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "PlayUpgradeAnim");

	Params::AStoreCardReveal_BP_C_PlayUpgradeAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReadyForCardToCome
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ReadyForCardToCome()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ReadyForCardToCome");

	Params::AStoreCardReveal_BP_C_ReadyForCardToCome_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0(float AxisValue)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0");

	Params::AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0_Params Parms;
	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Handle Input Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::Handle_Input_Mode_Changed(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "Handle Input Mode Changed");

	Params::AStoreCardReveal_BP_C_Handle_Input_Mode_Changed_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExitPackStore
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ExitPackStore()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ExitPackStore");

	Params::AStoreCardReveal_BP_C_ExitPackStore_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature_Params Parms;
	Parms.FingerIndex = FingerIndex;
	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params Parms;
	Parms.FingerIndex = FingerIndex;
	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ResetGamepadInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ResetGamepadInput()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ResetGamepadInput");

	Params::AStoreCardReveal_BP_C_ResetGamepadInput_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OpenGamepadGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::OpenGamepadGate()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OpenGamepadGate");

	Params::AStoreCardReveal_BP_C_OpenGamepadGate_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CloseGamepadGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CloseGamepadGate()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CloseGamepadGate");

	Params::AStoreCardReveal_BP_C_CloseGamepadGate_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EndQuestionMarkAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::EndQuestionMarkAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "EndQuestionMarkAnim");

	Params::AStoreCardReveal_BP_C_EndQuestionMarkAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetCCRarityColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::SetCCRarityColor()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SetCCRarityColor");

	Params::AStoreCardReveal_BP_C_SetCCRarityColor_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CCRarityColorReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CCRarityColorReady()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CCRarityColorReady");

	Params::AStoreCardReveal_BP_C_CCRarityColorReady_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40(float AxisValue)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40");

	Params::AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40_Params Parms;
	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExecuteUbergraph_StoreCardReveal_BP
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue3                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue4                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue5                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue6                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue7                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue8                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue9                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue10                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue11                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue12                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue13                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue14                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue15                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue16                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue17                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue18                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue19                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue20                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue21                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue22                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue23                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue24                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue25                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue26                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue27                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue28                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue29                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue30                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue31                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue32                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue33                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue34                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue35                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue36                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue37                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue38                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue39                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue40                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue41                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue42                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue43                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue44                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue45                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue46                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue47                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_ComponentBoundEvent_ButtonPressed2                        (HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_ComponentBoundEvent_ButtonPressed                         (HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AStoreCamera_Blueprint_C*>CallFunc_GetAllActorsOfClass_OutActors2                          (ZeroConstructor, ReferenceParm)
// class AStoreCamera_Blueprint_C*    CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue48                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue49                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue50                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue51                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue52                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue53                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue54                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation2                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location3                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation3                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale3                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location4                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation4                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale4                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue3                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue2                    (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue3                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue4                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue4                    (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortStoreState         K2Node_CustomEvent_NewStoreState                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue2                     (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue5                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue3                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue5                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue6                    (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue7                    (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue8                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue4                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue6                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue7                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue8                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue3                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue4                     (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue9                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue10                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable4  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue5                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue6                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue7                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue8                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue9                     (IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location5                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation5                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale5                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue10                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location6                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation6                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale6                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue11                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue12                    (IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut                                       (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLimitedToES2Features_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETouchIndex             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key2                                        (HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue55                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue2                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_ByteByte_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPauseType              Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPauseType              Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue2                                (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult2                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue9                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue11                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              K2Node_InputAxisEvent_AxisValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPauseType              Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable13                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable14                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable15                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable16                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPauseType              Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue3                                (IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue3                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult3                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult4                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue4                                (IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue2                                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue4                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue4                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult5                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue5                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue6                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue3                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue5                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue7                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult3                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class ETouchIndex             K2Node_ComponentBoundEvent_FingerIndex2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue4                                      (IsPlainOldData, NoDestructor)
// enum class ETouchIndex             K2Node_ComponentBoundEvent_FingerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult2                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue8                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue5                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult3                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Add_FloatFloat_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue6                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue6                                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue9                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult4                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult4                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue3                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue4                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue2                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue3                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult6                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult7                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue10                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult5                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Lerp_ReturnValue9                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue10                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut2                                      (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCard                       CallFunc_GetCard_ResultOut3                                      (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger2_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ChoiceResultComplete_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeChoice_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeChoice_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue2                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue5                                (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult3                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum4_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable2                                            (HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut4                                      (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key3                                        (HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key4                                        (HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue7                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult4                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue11                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_CardExitComplete_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardFrontRevealComplete_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardFlipComplete_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardBackRevealComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardEntryComplete_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut5                                      (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItemDefinition*>CallFunc_GetChoices_Choices                                      (ZeroConstructor, ReferenceParm)
// class UObject*                     K2Node_CustomEvent_Loaded4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSchematicItemDefinition*K2Node_DynamicCast_AsFort_Schematic_Item_Definition              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPersistentName_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    CallFunc_GetResultWorldItemDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue                        (HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue2                       (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItemDefinition*K2Node_DynamicCast_AsFort_Schematic_Item_Definition2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition*    CallFunc_GetResultWorldItemDefinition_ReturnValue2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentName_ReturnValue2                          (ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue3                       (HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue4                       (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_AssetToObject_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue13                    (IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue4                                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location7                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation7                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale7                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue5                                      (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue6                                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location8                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation8                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale8                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location9                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation9                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale9                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue3                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue7                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult8                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_BreakTransform_Location10                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation10                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale10                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue4                              (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult9                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Has_Been_Initd_Variable9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue12                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue13                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue14                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue12                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult6                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue15                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult7                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue13                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult8                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult9                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::ExecuteUbergraph_StoreCardReveal_BP(int32 EntryPoint, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue3, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue4, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue5, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue6, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue7, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue8, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue9, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue10, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue11, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue12, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue13, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue14, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue15, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue16, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue17, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue18, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue19, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue20, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue21, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue22, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue23, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue24, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue25, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue26, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue27, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue28, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue29, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue30, bool CallFunc_Greater_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue31, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue32, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue33, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue34, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue35, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue36, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue37, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue38, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue39, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue40, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue41, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue42, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue43, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue44, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue45, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue46, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue47, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent4, const struct FKey& K2Node_ComponentBoundEvent_ButtonPressed2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent3, const struct FKey& K2Node_ComponentBoundEvent_ButtonPressed, bool Temp_bool_IsClosed_Variable2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool Temp_bool_Has_Been_Initd_Variable3, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable3, TArray<class AStoreCamera_Blueprint_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AStoreCamera_Blueprint_C* CallFunc_Array_Get_Item2, bool Temp_bool_Has_Been_Initd_Variable4, bool Temp_bool_IsClosed_Variable4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue48, float CallFunc_BreakRotator_Roll2, float CallFunc_BreakRotator_Pitch2, float CallFunc_BreakRotator_Yaw2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue49, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue50, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue51, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue52, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue53, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue54, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent4, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent3, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent2, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, const struct FVector& CallFunc_BreakTransform_Location4, const struct FRotator& CallFunc_BreakTransform_Rotation4, const struct FVector& CallFunc_BreakTransform_Scale4, bool Temp_bool_Has_Been_Initd_Variable5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue3, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue4, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue4, bool Temp_bool_IsClosed_Variable5, bool Temp_bool_Has_Been_Initd_Variable6, bool Temp_bool_IsClosed_Variable6, enum class EFortStoreState K2Node_CustomEvent_NewStoreState, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue5, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue5, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FVector& CallFunc_MakeVector_ReturnValue2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue6, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue7, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue8, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue6, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue7, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue8, bool Temp_bool_IsClosed_Variable7, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue4, bool Temp_bool_Has_Been_Initd_Variable7, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue9, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue10, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue6, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue7, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue8, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue9, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location5, const struct FRotator& CallFunc_BreakTransform_Rotation5, const struct FVector& CallFunc_BreakTransform_Scale5, float CallFunc_BreakRotator_Roll3, float CallFunc_BreakRotator_Pitch3, float CallFunc_BreakRotator_Yaw3, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_Z5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue10, const struct FVector& CallFunc_BreakTransform_Location6, const struct FRotator& CallFunc_BreakTransform_Rotation6, const struct FVector& CallFunc_BreakTransform_Scale6, float CallFunc_BreakRotator_Roll4, float CallFunc_BreakRotator_Pitch4, float CallFunc_BreakRotator_Yaw4, float CallFunc_BreakVector_X6, float CallFunc_BreakVector_Y6, float CallFunc_BreakVector_Z6, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue11, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue12, class UFortStoreContext* CallFunc_GetContext_ReturnValue, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsLimitedToES2Features_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, const struct FVector& Temp_struct_Variable, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ETouchIndex Temp_byte_Variable, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex, const struct FVector& K2Node_InputTouchEvent_Location, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex2, const struct FVector& K2Node_InputTouchEvent_Location2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsUsingGamepad_ReturnValue2, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue5, const struct FKey& K2Node_InputKeyEvent_Key2, class UUserWidget* CallFunc_Create_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue55, class UObject* Temp_object_Variable2, class UObject* K2Node_CustomEvent_Loaded2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess2, class UFortStoreContext* CallFunc_GetContext_ReturnValue6, const struct FVector& CallFunc_VLerp_ReturnValue, int32 CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_GreaterEqual_ByteByte_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_LessEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum3_CmpSuccess, bool Temp_bool_Variable4, enum class EPauseType Temp_byte_Variable2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Select_Default, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, enum class EPauseType Temp_byte_Variable3, bool K2Node_Select2_Default, float CallFunc_BreakRotator_Roll5, float CallFunc_BreakRotator_Pitch5, float CallFunc_BreakRotator_Yaw5, float CallFunc_Add_FloatFloat_ReturnValue2, bool Temp_bool_Variable9, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult2, bool Temp_bool_Variable10, bool Temp_bool_Variable11, bool Temp_bool_Variable12, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue9, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue11, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, float K2Node_InputAxisEvent_AxisValue2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class EPauseType Temp_byte_Variable4, bool Temp_bool_Variable13, bool K2Node_Select3_Default, bool Temp_bool_Variable14, bool Temp_bool_Variable15, bool K2Node_CustomEvent_bUsingGamepad, bool Temp_bool_Variable16, enum class EPauseType Temp_byte_Variable5, bool K2Node_Select4_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue5, const struct FRotator& CallFunc_MakeRotator_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue6, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FVector& CallFunc_VLerp_ReturnValue3, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult3, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue8, float CallFunc_Multiply_FloatFloat_ReturnValue4, const struct FTransform& CallFunc_TLerp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue9, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult4, const struct FRotator& CallFunc_MakeRotator_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue10, const struct FRotator& CallFunc_RLerp_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue4, const struct FVector& CallFunc_VLerp_ReturnValue4, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult5, const struct FVector& CallFunc_VLerp_ReturnValue5, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult2, const struct FVector& CallFunc_VLerp_ReturnValue6, bool Temp_bool_Has_Been_Initd_Variable8, const struct FRotator& CallFunc_RLerp_ReturnValue3, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue11, const struct FVector& CallFunc_MakeVector_ReturnValue5, const struct FVector& CallFunc_VLerp_ReturnValue7, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult3, enum class ETouchIndex K2Node_ComponentBoundEvent_FingerIndex2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent2, const struct FRotator& CallFunc_RLerp_ReturnValue4, enum class ETouchIndex K2Node_ComponentBoundEvent_FingerIndex, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult2, const struct FVector& CallFunc_VLerp_ReturnValue8, const struct FRotator& CallFunc_RLerp_ReturnValue5, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult3, float CallFunc_Add_FloatFloat_ReturnValue12, const struct FVector& CallFunc_MakeVector_ReturnValue6, const struct FRotator& CallFunc_RLerp_ReturnValue6, const struct FVector& CallFunc_VLerp_ReturnValue9, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult4, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Lerp_ReturnValue2, float CallFunc_Lerp_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, float CallFunc_Lerp_ReturnValue4, float CallFunc_Lerp_ReturnValue5, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, float CallFunc_Lerp_ReturnValue6, float CallFunc_Lerp_ReturnValue7, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue4, float CallFunc_Lerp_ReturnValue8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FTransform& CallFunc_TLerp_ReturnValue2, const struct FTransform& CallFunc_TLerp_ReturnValue3, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult6, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult7, const struct FVector& CallFunc_VLerp_ReturnValue10, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult5, float CallFunc_Lerp_ReturnValue9, bool Temp_bool_IsClosed_Variable8, float CallFunc_Lerp_ReturnValue10, class UFortStoreContext* CallFunc_GetContext_ReturnValue7, class UFortStoreContext* CallFunc_GetContext_ReturnValue8, const struct FCard& CallFunc_GetCard_ResultOut2, bool CallFunc_GetCard_ReturnValue2, const struct FCard& CallFunc_GetCard_ResultOut3, bool CallFunc_GetCard_ReturnValue3, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess3, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item2, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger2_CmpSuccess, class UFortStoreContext* CallFunc_GetContext_ReturnValue9, bool CallFunc_ChoiceResultComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue10, bool CallFunc_MakeChoice_ReturnValue, bool CallFunc_MakeChoice_ReturnValue2, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue13, const struct FRotator& CallFunc_MakeRotator_ReturnValue5, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult3, bool K2Node_SwitchEnum4_CmpSuccess, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue11, const struct FKey& Temp_struct_Variable2, const struct FCard& CallFunc_GetCard_ResultOut4, bool CallFunc_GetCard_ReturnValue4, const struct FKey& K2Node_InputKeyEvent_Key3, enum class EFortRarity CallFunc_GetRarity_ReturnValue2, const struct FKey& K2Node_InputKeyEvent_Key4, const struct FRotator& CallFunc_RLerp_ReturnValue7, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult4, const struct FVector& CallFunc_VLerp_ReturnValue11, class UFortStoreContext* CallFunc_GetContext_ReturnValue12, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_CardExitComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue13, bool CallFunc_CardFrontRevealComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue14, bool CallFunc_CardFlipComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue15, bool CallFunc_CardBackRevealComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue16, bool CallFunc_CardEntryComplete_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortStoreContext* CallFunc_GetContext_ReturnValue17, class UObject* Temp_object_Variable3, class UObject* K2Node_CustomEvent_Loaded3, class UFortStoreContext* CallFunc_GetContext_ReturnValue18, const struct FCard& CallFunc_GetCard_ResultOut5, bool CallFunc_GetCard_ReturnValue5, class UObject* Temp_object_Variable4, class UTexture2D* K2Node_DynamicCast_AsTexture_2D2, bool K2Node_DynamicCast_bSuccess5, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item3, bool K2Node_DynamicCast_bSuccess6, TArray<class UFortAccountItemDefinition*>& CallFunc_GetChoices_Choices, class UObject* K2Node_CustomEvent_Loaded4, class UFortSchematicItemDefinition* K2Node_DynamicCast_AsFort_Schematic_Item_Definition, bool K2Node_DynamicCast_bSuccess7, const class FString& CallFunc_GetPersistentName_ReturnValue, class UFortWorldItemDefinition* CallFunc_GetResultWorldItemDefinition_ReturnValue, bool CallFunc_Contains_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, bool CallFunc_Contains_ReturnValue2, bool CallFunc_Contains_ReturnValue3, bool CallFunc_Contains_ReturnValue4, bool CallFunc_Contains_ReturnValue5, bool CallFunc_Contains_ReturnValue6, bool CallFunc_Contains_ReturnValue7, bool CallFunc_Contains_ReturnValue8, bool CallFunc_Contains_ReturnValue9, bool CallFunc_Contains_ReturnValue10, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue2, class UObject* CallFunc_Conv_AssetToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D3, bool K2Node_DynamicCast_bSuccess8, class UFortSchematicItemDefinition* K2Node_DynamicCast_AsFort_Schematic_Item_Definition2, bool K2Node_DynamicCast_bSuccess9, class UFortWorldItemDefinition* CallFunc_GetResultWorldItemDefinition_ReturnValue2, const class FString& CallFunc_GetPersistentName_ReturnValue2, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue3, bool CallFunc_Contains_ReturnValue11, bool CallFunc_Contains_ReturnValue12, bool CallFunc_Contains_ReturnValue13, bool CallFunc_Contains_ReturnValue14, bool CallFunc_Contains_ReturnValue15, bool CallFunc_Contains_ReturnValue16, bool CallFunc_Contains_ReturnValue17, bool CallFunc_Contains_ReturnValue18, bool CallFunc_Contains_ReturnValue19, bool CallFunc_Contains_ReturnValue20, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue4, class UObject* CallFunc_Conv_AssetToObject_ReturnValue2, class UFortAccountItemDefinition* CallFunc_Array_Get_Item3, class UTexture2D* K2Node_DynamicCast_AsTexture_2D4, bool K2Node_DynamicCast_bSuccess10, class UFortAccountItemDefinition* CallFunc_Array_Get_Item4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, const struct FTransform& CallFunc_TLerp_ReturnValue4, const struct FVector& CallFunc_BreakTransform_Location7, const struct FRotator& CallFunc_BreakTransform_Rotation7, const struct FVector& CallFunc_BreakTransform_Scale7, const struct FTransform& CallFunc_TLerp_ReturnValue5, const struct FTransform& CallFunc_TLerp_ReturnValue6, const struct FVector& CallFunc_BreakTransform_Location8, const struct FRotator& CallFunc_BreakTransform_Rotation8, const struct FVector& CallFunc_BreakTransform_Scale8, const struct FVector& CallFunc_BreakTransform_Location9, const struct FRotator& CallFunc_BreakTransform_Rotation9, const struct FVector& CallFunc_BreakTransform_Scale9, const struct FTransform& CallFunc_MakeTransform_ReturnValue3, const struct FTransform& CallFunc_TLerp_ReturnValue7, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult8, const struct FVector& CallFunc_BreakTransform_Location10, const struct FRotator& CallFunc_BreakTransform_Rotation10, const struct FVector& CallFunc_BreakTransform_Scale10, const struct FTransform& CallFunc_MakeTransform_ReturnValue4, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult9, bool Temp_bool_Has_Been_Initd_Variable9, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue12, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue13, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue14, const struct FVector& CallFunc_VLerp_ReturnValue12, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult6, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue15, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult7, const struct FVector& CallFunc_VLerp_ReturnValue13, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult8, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult9, bool Temp_bool_IsClosed_Variable9, float K2Node_InputAxisEvent_AxisValue)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ExecuteUbergraph_StoreCardReveal_BP");

	Params::AStoreCardReveal_BP_C_ExecuteUbergraph_StoreCardReveal_BP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue2 = CallFunc_GetVectorParameterValue_ReturnValue2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue3 = CallFunc_GetVectorParameterValue_ReturnValue3;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue4 = CallFunc_GetVectorParameterValue_ReturnValue4;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue5 = CallFunc_GetVectorParameterValue_ReturnValue5;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue6 = CallFunc_GetVectorParameterValue_ReturnValue6;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue7 = CallFunc_GetVectorParameterValue_ReturnValue7;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue8 = CallFunc_GetVectorParameterValue_ReturnValue8;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue9 = CallFunc_GetVectorParameterValue_ReturnValue9;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue10 = CallFunc_GetVectorParameterValue_ReturnValue10;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue11 = CallFunc_GetVectorParameterValue_ReturnValue11;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue12 = CallFunc_GetVectorParameterValue_ReturnValue12;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue13 = CallFunc_GetVectorParameterValue_ReturnValue13;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue14 = CallFunc_GetVectorParameterValue_ReturnValue14;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue15 = CallFunc_GetVectorParameterValue_ReturnValue15;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue16 = CallFunc_GetVectorParameterValue_ReturnValue16;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue17 = CallFunc_GetVectorParameterValue_ReturnValue17;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue18 = CallFunc_GetVectorParameterValue_ReturnValue18;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue19 = CallFunc_GetVectorParameterValue_ReturnValue19;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue20 = CallFunc_GetVectorParameterValue_ReturnValue20;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue21 = CallFunc_GetVectorParameterValue_ReturnValue21;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue22 = CallFunc_GetVectorParameterValue_ReturnValue22;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue23 = CallFunc_GetVectorParameterValue_ReturnValue23;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue24 = CallFunc_GetVectorParameterValue_ReturnValue24;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue25 = CallFunc_GetVectorParameterValue_ReturnValue25;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue26 = CallFunc_GetVectorParameterValue_ReturnValue26;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue27 = CallFunc_GetVectorParameterValue_ReturnValue27;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue28 = CallFunc_GetVectorParameterValue_ReturnValue28;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue29 = CallFunc_GetVectorParameterValue_ReturnValue29;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue30 = CallFunc_GetVectorParameterValue_ReturnValue30;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue2 = CallFunc_Greater_ByteByte_ReturnValue2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue31 = CallFunc_GetVectorParameterValue_ReturnValue31;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue32 = CallFunc_GetVectorParameterValue_ReturnValue32;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue33 = CallFunc_GetVectorParameterValue_ReturnValue33;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue34 = CallFunc_GetVectorParameterValue_ReturnValue34;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue35 = CallFunc_GetVectorParameterValue_ReturnValue35;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue2 = CallFunc_SpawnSound2D_ReturnValue2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue36 = CallFunc_GetVectorParameterValue_ReturnValue36;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue37 = CallFunc_GetVectorParameterValue_ReturnValue37;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue38 = CallFunc_GetVectorParameterValue_ReturnValue38;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue39 = CallFunc_GetVectorParameterValue_ReturnValue39;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue40 = CallFunc_GetVectorParameterValue_ReturnValue40;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue41 = CallFunc_GetVectorParameterValue_ReturnValue41;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue42 = CallFunc_GetVectorParameterValue_ReturnValue42;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue43 = CallFunc_GetVectorParameterValue_ReturnValue43;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue44 = CallFunc_GetVectorParameterValue_ReturnValue44;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue45 = CallFunc_GetVectorParameterValue_ReturnValue45;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue46 = CallFunc_GetVectorParameterValue_ReturnValue46;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue47 = CallFunc_GetVectorParameterValue_ReturnValue47;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent4 = K2Node_ComponentBoundEvent_TouchedComponent4;
	Parms.K2Node_ComponentBoundEvent_ButtonPressed2 = K2Node_ComponentBoundEvent_ButtonPressed2;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent3 = K2Node_ComponentBoundEvent_TouchedComponent3;
	Parms.K2Node_ComponentBoundEvent_ButtonPressed = K2Node_ComponentBoundEvent_ButtonPressed;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_bool_Has_Been_Initd_Variable3 = Temp_bool_Has_Been_Initd_Variable3;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_IsClosed_Variable3 = Temp_bool_IsClosed_Variable3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors2 = CallFunc_GetAllActorsOfClass_OutActors2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.Temp_bool_Has_Been_Initd_Variable4 = Temp_bool_Has_Been_Initd_Variable4;
	Parms.Temp_bool_IsClosed_Variable4 = Temp_bool_IsClosed_Variable4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue2 = CallFunc_GetPlayerController_ReturnValue2;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue48 = CallFunc_GetVectorParameterValue_ReturnValue48;
	Parms.CallFunc_BreakRotator_Roll2 = CallFunc_BreakRotator_Roll2;
	Parms.CallFunc_BreakRotator_Pitch2 = CallFunc_BreakRotator_Pitch2;
	Parms.CallFunc_BreakRotator_Yaw2 = CallFunc_BreakRotator_Yaw2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue49 = CallFunc_GetVectorParameterValue_ReturnValue49;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue50 = CallFunc_GetVectorParameterValue_ReturnValue50;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue2 = CallFunc_K2_GetComponentLocation_ReturnValue2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue51 = CallFunc_GetVectorParameterValue_ReturnValue51;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue52 = CallFunc_GetVectorParameterValue_ReturnValue52;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue53 = CallFunc_GetVectorParameterValue_ReturnValue53;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue54 = CallFunc_GetVectorParameterValue_ReturnValue54;
	Parms.K2Node_CustomEvent_TouchedComponent4 = K2Node_CustomEvent_TouchedComponent4;
	Parms.K2Node_CustomEvent_TouchedComponent3 = K2Node_CustomEvent_TouchedComponent3;
	Parms.K2Node_CustomEvent_TouchedComponent2 = K2Node_CustomEvent_TouchedComponent2;
	Parms.K2Node_CustomEvent_TouchedComponent = K2Node_CustomEvent_TouchedComponent;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location2 = CallFunc_BreakTransform_Location2;
	Parms.CallFunc_BreakTransform_Rotation2 = CallFunc_BreakTransform_Rotation2;
	Parms.CallFunc_BreakTransform_Scale2 = CallFunc_BreakTransform_Scale2;
	Parms.CallFunc_BreakTransform_Location3 = CallFunc_BreakTransform_Location3;
	Parms.CallFunc_BreakTransform_Rotation3 = CallFunc_BreakTransform_Rotation3;
	Parms.CallFunc_BreakTransform_Scale3 = CallFunc_BreakTransform_Scale3;
	Parms.CallFunc_BreakTransform_Location4 = CallFunc_BreakTransform_Location4;
	Parms.CallFunc_BreakTransform_Rotation4 = CallFunc_BreakTransform_Rotation4;
	Parms.CallFunc_BreakTransform_Scale4 = CallFunc_BreakTransform_Scale4;
	Parms.Temp_bool_Has_Been_Initd_Variable5 = Temp_bool_Has_Been_Initd_Variable5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue3 = CallFunc_K2_GetComponentLocation_ReturnValue3;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue2 = CallFunc_K2_GetComponentRotation_ReturnValue2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue3 = CallFunc_K2_GetComponentRotation_ReturnValue3;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue2 = CallFunc_K2_GetComponentScale_ReturnValue2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue4 = CallFunc_K2_GetComponentLocation_ReturnValue4;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue4 = CallFunc_K2_GetComponentRotation_ReturnValue4;
	Parms.Temp_bool_IsClosed_Variable5 = Temp_bool_IsClosed_Variable5;
	Parms.Temp_bool_Has_Been_Initd_Variable6 = Temp_bool_Has_Been_Initd_Variable6;
	Parms.Temp_bool_IsClosed_Variable6 = Temp_bool_IsClosed_Variable6;
	Parms.K2Node_CustomEvent_NewStoreState = K2Node_CustomEvent_NewStoreState;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue2 = CallFunc_K2_GetComponentToWorld_ReturnValue2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue5 = CallFunc_K2_GetComponentRotation_ReturnValue5;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue3 = CallFunc_K2_GetComponentScale_ReturnValue3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue5 = CallFunc_K2_GetComponentLocation_ReturnValue5;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult2 = CallFunc_K2_SetWorldTransform_SweepHitResult2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue6 = CallFunc_K2_GetComponentRotation_ReturnValue6;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue7 = CallFunc_K2_GetComponentRotation_ReturnValue7;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue8 = CallFunc_K2_GetComponentRotation_ReturnValue8;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue4 = CallFunc_K2_GetComponentScale_ReturnValue4;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue6 = CallFunc_K2_GetComponentLocation_ReturnValue6;
	Parms.CallFunc_BreakVector_X4 = CallFunc_BreakVector_X4;
	Parms.CallFunc_BreakVector_Y4 = CallFunc_BreakVector_Y4;
	Parms.CallFunc_BreakVector_Z4 = CallFunc_BreakVector_Z4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue2 = CallFunc_SpawnSoundAttached_ReturnValue2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue7 = CallFunc_K2_GetComponentLocation_ReturnValue7;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue8 = CallFunc_K2_GetComponentLocation_ReturnValue8;
	Parms.Temp_bool_IsClosed_Variable7 = Temp_bool_IsClosed_Variable7;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue3 = CallFunc_K2_GetComponentToWorld_ReturnValue3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue4 = CallFunc_K2_GetComponentToWorld_ReturnValue4;
	Parms.Temp_bool_Has_Been_Initd_Variable7 = Temp_bool_Has_Been_Initd_Variable7;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue9 = CallFunc_K2_GetComponentLocation_ReturnValue9;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue10 = CallFunc_K2_GetComponentLocation_ReturnValue10;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable4 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable4;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue5 = CallFunc_K2_GetComponentToWorld_ReturnValue5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue6 = CallFunc_K2_GetComponentToWorld_ReturnValue6;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue7 = CallFunc_K2_GetComponentToWorld_ReturnValue7;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue8 = CallFunc_K2_GetComponentToWorld_ReturnValue8;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue9 = CallFunc_K2_GetComponentToWorld_ReturnValue9;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_BreakTransform_Location5 = CallFunc_BreakTransform_Location5;
	Parms.CallFunc_BreakTransform_Rotation5 = CallFunc_BreakTransform_Rotation5;
	Parms.CallFunc_BreakTransform_Scale5 = CallFunc_BreakTransform_Scale5;
	Parms.CallFunc_BreakRotator_Roll3 = CallFunc_BreakRotator_Roll3;
	Parms.CallFunc_BreakRotator_Pitch3 = CallFunc_BreakRotator_Pitch3;
	Parms.CallFunc_BreakRotator_Yaw3 = CallFunc_BreakRotator_Yaw3;
	Parms.CallFunc_BreakVector_X5 = CallFunc_BreakVector_X5;
	Parms.CallFunc_BreakVector_Y5 = CallFunc_BreakVector_Y5;
	Parms.CallFunc_BreakVector_Z5 = CallFunc_BreakVector_Z5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue10 = CallFunc_K2_GetComponentToWorld_ReturnValue10;
	Parms.CallFunc_BreakTransform_Location6 = CallFunc_BreakTransform_Location6;
	Parms.CallFunc_BreakTransform_Rotation6 = CallFunc_BreakTransform_Rotation6;
	Parms.CallFunc_BreakTransform_Scale6 = CallFunc_BreakTransform_Scale6;
	Parms.CallFunc_BreakRotator_Roll4 = CallFunc_BreakRotator_Roll4;
	Parms.CallFunc_BreakRotator_Pitch4 = CallFunc_BreakRotator_Pitch4;
	Parms.CallFunc_BreakRotator_Yaw4 = CallFunc_BreakRotator_Yaw4;
	Parms.CallFunc_BreakVector_X6 = CallFunc_BreakVector_X6;
	Parms.CallFunc_BreakVector_Y6 = CallFunc_BreakVector_Y6;
	Parms.CallFunc_BreakVector_Z6 = CallFunc_BreakVector_Z6;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue11 = CallFunc_K2_GetComponentToWorld_ReturnValue11;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue12 = CallFunc_K2_GetComponentToWorld_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCard_ResultOut = CallFunc_GetCard_ResultOut;
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsLimitedToES2Features_ReturnValue = CallFunc_IsLimitedToES2Features_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_InputTouchEvent_FingerIndex = K2Node_InputTouchEvent_FingerIndex;
	Parms.K2Node_InputTouchEvent_Location = K2Node_InputTouchEvent_Location;
	Parms.K2Node_InputTouchEvent_FingerIndex2 = K2Node_InputTouchEvent_FingerIndex2;
	Parms.K2Node_InputTouchEvent_Location2 = K2Node_InputTouchEvent_Location2;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_IsUsingGamepad_ReturnValue2 = CallFunc_IsUsingGamepad_ReturnValue2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.K2Node_InputKeyEvent_Key2 = K2Node_InputKeyEvent_Key2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface = K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue55 = CallFunc_GetVectorParameterValue_ReturnValue55;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.K2Node_CustomEvent_Loaded2 = K2Node_CustomEvent_Loaded2;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue = CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue2 = CallFunc_VLerp_ReturnValue2;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue2 = CallFunc_GreaterEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue3 = CallFunc_GetPlayerController_ReturnValue3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_LessEqual_ByteByte_ReturnValue = CallFunc_LessEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_BreakRotator_Roll5 = CallFunc_BreakRotator_Roll5;
	Parms.CallFunc_BreakRotator_Pitch5 = CallFunc_BreakRotator_Pitch5;
	Parms.CallFunc_BreakRotator_Yaw5 = CallFunc_BreakRotator_Yaw5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.CallFunc_MakeRotator_ReturnValue2 = CallFunc_MakeRotator_ReturnValue2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult2 = CallFunc_K2_SetRelativeRotation_SweepHitResult2;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue9 = CallFunc_K2_GetComponentRotation_ReturnValue9;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue11 = CallFunc_K2_GetComponentLocation_ReturnValue11;
	Parms.CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult = CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;
	Parms.K2Node_InputAxisEvent_AxisValue2 = K2Node_InputAxisEvent_AxisValue2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable13 = Temp_bool_Variable13;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_bool_Variable14 = Temp_bool_Variable14;
	Parms.Temp_bool_Variable15 = Temp_bool_Variable15;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.Temp_bool_Variable16 = Temp_bool_Variable16;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue5 = CallFunc_Add_FloatFloat_ReturnValue5;
	Parms.CallFunc_MakeRotator_ReturnValue3 = CallFunc_MakeRotator_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue6 = CallFunc_Add_FloatFloat_ReturnValue6;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_VLerp_ReturnValue3 = CallFunc_VLerp_ReturnValue3;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult3 = CallFunc_K2_SetWorldTransform_SweepHitResult3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue7 = CallFunc_Add_FloatFloat_ReturnValue7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue8 = CallFunc_Add_FloatFloat_ReturnValue8;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue4;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue9 = CallFunc_Add_FloatFloat_ReturnValue9;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult4 = CallFunc_K2_SetWorldTransform_SweepHitResult4;
	Parms.CallFunc_MakeRotator_ReturnValue4 = CallFunc_MakeRotator_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue10 = CallFunc_Add_FloatFloat_ReturnValue10;
	Parms.CallFunc_RLerp_ReturnValue2 = CallFunc_RLerp_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue4 = CallFunc_MakeVector_ReturnValue4;
	Parms.CallFunc_VLerp_ReturnValue4 = CallFunc_VLerp_ReturnValue4;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult5 = CallFunc_K2_SetWorldTransform_SweepHitResult5;
	Parms.CallFunc_VLerp_ReturnValue5 = CallFunc_VLerp_ReturnValue5;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult2 = CallFunc_K2_SetWorldLocation_SweepHitResult2;
	Parms.CallFunc_VLerp_ReturnValue6 = CallFunc_VLerp_ReturnValue6;
	Parms.Temp_bool_Has_Been_Initd_Variable8 = Temp_bool_Has_Been_Initd_Variable8;
	Parms.CallFunc_RLerp_ReturnValue3 = CallFunc_RLerp_ReturnValue3;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue5 = CallFunc_Multiply_FloatFloat_ReturnValue5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue11 = CallFunc_Add_FloatFloat_ReturnValue11;
	Parms.CallFunc_MakeVector_ReturnValue5 = CallFunc_MakeVector_ReturnValue5;
	Parms.CallFunc_VLerp_ReturnValue7 = CallFunc_VLerp_ReturnValue7;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult3 = CallFunc_K2_SetWorldLocation_SweepHitResult3;
	Parms.K2Node_ComponentBoundEvent_FingerIndex2 = K2Node_ComponentBoundEvent_FingerIndex2;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent2 = K2Node_ComponentBoundEvent_TouchedComponent2;
	Parms.CallFunc_RLerp_ReturnValue4 = CallFunc_RLerp_ReturnValue4;
	Parms.K2Node_ComponentBoundEvent_FingerIndex = K2Node_ComponentBoundEvent_FingerIndex;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent = K2Node_ComponentBoundEvent_TouchedComponent;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult2 = CallFunc_K2_SetWorldRotation_SweepHitResult2;
	Parms.CallFunc_VLerp_ReturnValue8 = CallFunc_VLerp_ReturnValue8;
	Parms.CallFunc_RLerp_ReturnValue5 = CallFunc_RLerp_ReturnValue5;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult3 = CallFunc_K2_SetWorldRotation_SweepHitResult3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12 = CallFunc_Add_FloatFloat_ReturnValue12;
	Parms.CallFunc_MakeVector_ReturnValue6 = CallFunc_MakeVector_ReturnValue6;
	Parms.CallFunc_RLerp_ReturnValue6 = CallFunc_RLerp_ReturnValue6;
	Parms.CallFunc_VLerp_ReturnValue9 = CallFunc_VLerp_ReturnValue9;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult4 = CallFunc_K2_SetWorldRotation_SweepHitResult4;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult4 = CallFunc_K2_SetWorldLocation_SweepHitResult4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue3 = CallFunc_SpawnSoundAttached_ReturnValue3;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue2 = CallFunc_Lerp_ReturnValue2;
	Parms.CallFunc_Lerp_ReturnValue3 = CallFunc_Lerp_ReturnValue3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue2;
	Parms.CallFunc_Lerp_ReturnValue4 = CallFunc_Lerp_ReturnValue4;
	Parms.CallFunc_Lerp_ReturnValue5 = CallFunc_Lerp_ReturnValue5;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue3 = CallFunc_Multiply_VectorFloat_ReturnValue3;
	Parms.CallFunc_Lerp_ReturnValue6 = CallFunc_Lerp_ReturnValue6;
	Parms.CallFunc_Lerp_ReturnValue7 = CallFunc_Lerp_ReturnValue7;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue4 = CallFunc_Multiply_VectorFloat_ReturnValue4;
	Parms.CallFunc_Lerp_ReturnValue8 = CallFunc_Lerp_ReturnValue8;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_TLerp_ReturnValue2 = CallFunc_TLerp_ReturnValue2;
	Parms.CallFunc_TLerp_ReturnValue3 = CallFunc_TLerp_ReturnValue3;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult6 = CallFunc_K2_SetWorldTransform_SweepHitResult6;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult7 = CallFunc_K2_SetWorldTransform_SweepHitResult7;
	Parms.CallFunc_VLerp_ReturnValue10 = CallFunc_VLerp_ReturnValue10;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult5 = CallFunc_K2_SetWorldLocation_SweepHitResult5;
	Parms.CallFunc_Lerp_ReturnValue9 = CallFunc_Lerp_ReturnValue9;
	Parms.Temp_bool_IsClosed_Variable8 = Temp_bool_IsClosed_Variable8;
	Parms.CallFunc_Lerp_ReturnValue10 = CallFunc_Lerp_ReturnValue10;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_GetCard_ResultOut2 = CallFunc_GetCard_ResultOut2;
	Parms.CallFunc_GetCard_ReturnValue2 = CallFunc_GetCard_ReturnValue2;
	Parms.CallFunc_GetCard_ResultOut3 = CallFunc_GetCard_ResultOut3;
	Parms.CallFunc_GetCard_ReturnValue3 = CallFunc_GetCard_ReturnValue3;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item2 = K2Node_DynamicCast_AsFort_Card_Pack_Item2;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger2_CmpSuccess = K2Node_SwitchInteger2_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.CallFunc_ChoiceResultComplete_ReturnValue = CallFunc_ChoiceResultComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.CallFunc_MakeChoice_ReturnValue = CallFunc_MakeChoice_ReturnValue;
	Parms.CallFunc_MakeChoice_ReturnValue2 = CallFunc_MakeChoice_ReturnValue2;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue2 = CallFunc_Multiply_LinearColorFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue13 = CallFunc_Add_FloatFloat_ReturnValue13;
	Parms.CallFunc_MakeRotator_ReturnValue5 = CallFunc_MakeRotator_ReturnValue5;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult3 = CallFunc_K2_SetRelativeRotation_SweepHitResult3;
	Parms.K2Node_SwitchEnum4_CmpSuccess = K2Node_SwitchEnum4_CmpSuccess;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue11 = CallFunc_GetContext_ReturnValue11;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_GetCard_ResultOut4 = CallFunc_GetCard_ResultOut4;
	Parms.CallFunc_GetCard_ReturnValue4 = CallFunc_GetCard_ReturnValue4;
	Parms.K2Node_InputKeyEvent_Key3 = K2Node_InputKeyEvent_Key3;
	Parms.CallFunc_GetRarity_ReturnValue2 = CallFunc_GetRarity_ReturnValue2;
	Parms.K2Node_InputKeyEvent_Key4 = K2Node_InputKeyEvent_Key4;
	Parms.CallFunc_RLerp_ReturnValue7 = CallFunc_RLerp_ReturnValue7;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult4 = CallFunc_K2_SetRelativeRotation_SweepHitResult4;
	Parms.CallFunc_VLerp_ReturnValue11 = CallFunc_VLerp_ReturnValue11;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_CardExitComplete_ReturnValue = CallFunc_CardExitComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue13 = CallFunc_GetContext_ReturnValue13;
	Parms.CallFunc_CardFrontRevealComplete_ReturnValue = CallFunc_CardFrontRevealComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue14 = CallFunc_GetContext_ReturnValue14;
	Parms.CallFunc_CardFlipComplete_ReturnValue = CallFunc_CardFlipComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue15 = CallFunc_GetContext_ReturnValue15;
	Parms.CallFunc_CardBackRevealComplete_ReturnValue = CallFunc_CardBackRevealComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue16 = CallFunc_GetContext_ReturnValue16;
	Parms.CallFunc_CardEntryComplete_ReturnValue = CallFunc_CardEntryComplete_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_GetContext_ReturnValue17 = CallFunc_GetContext_ReturnValue17;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.K2Node_CustomEvent_Loaded3 = K2Node_CustomEvent_Loaded3;
	Parms.CallFunc_GetContext_ReturnValue18 = CallFunc_GetContext_ReturnValue18;
	Parms.CallFunc_GetCard_ResultOut5 = CallFunc_GetCard_ResultOut5;
	Parms.CallFunc_GetCard_ReturnValue5 = CallFunc_GetCard_ReturnValue5;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.K2Node_DynamicCast_AsTexture_2D2 = K2Node_DynamicCast_AsTexture_2D2;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item3 = K2Node_DynamicCast_AsFort_Card_Pack_Item3;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.CallFunc_GetChoices_Choices = CallFunc_GetChoices_Choices;
	Parms.K2Node_CustomEvent_Loaded4 = K2Node_CustomEvent_Loaded4;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item_Definition = K2Node_DynamicCast_AsFort_Schematic_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_GetPersistentName_ReturnValue = CallFunc_GetPersistentName_ReturnValue;
	Parms.CallFunc_GetResultWorldItemDefinition_ReturnValue = CallFunc_GetResultWorldItemDefinition_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue = CallFunc_GetLargePreviewImage_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue2 = CallFunc_Contains_ReturnValue2;
	Parms.CallFunc_Contains_ReturnValue3 = CallFunc_Contains_ReturnValue3;
	Parms.CallFunc_Contains_ReturnValue4 = CallFunc_Contains_ReturnValue4;
	Parms.CallFunc_Contains_ReturnValue5 = CallFunc_Contains_ReturnValue5;
	Parms.CallFunc_Contains_ReturnValue6 = CallFunc_Contains_ReturnValue6;
	Parms.CallFunc_Contains_ReturnValue7 = CallFunc_Contains_ReturnValue7;
	Parms.CallFunc_Contains_ReturnValue8 = CallFunc_Contains_ReturnValue8;
	Parms.CallFunc_Contains_ReturnValue9 = CallFunc_Contains_ReturnValue9;
	Parms.CallFunc_Contains_ReturnValue10 = CallFunc_Contains_ReturnValue10;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue2 = CallFunc_GetLargePreviewImage_ReturnValue2;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue = CallFunc_Conv_AssetToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D3 = K2Node_DynamicCast_AsTexture_2D3;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item_Definition2 = K2Node_DynamicCast_AsFort_Schematic_Item_Definition2;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_GetResultWorldItemDefinition_ReturnValue2 = CallFunc_GetResultWorldItemDefinition_ReturnValue2;
	Parms.CallFunc_GetPersistentName_ReturnValue2 = CallFunc_GetPersistentName_ReturnValue2;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue3 = CallFunc_GetLargePreviewImage_ReturnValue3;
	Parms.CallFunc_Contains_ReturnValue11 = CallFunc_Contains_ReturnValue11;
	Parms.CallFunc_Contains_ReturnValue12 = CallFunc_Contains_ReturnValue12;
	Parms.CallFunc_Contains_ReturnValue13 = CallFunc_Contains_ReturnValue13;
	Parms.CallFunc_Contains_ReturnValue14 = CallFunc_Contains_ReturnValue14;
	Parms.CallFunc_Contains_ReturnValue15 = CallFunc_Contains_ReturnValue15;
	Parms.CallFunc_Contains_ReturnValue16 = CallFunc_Contains_ReturnValue16;
	Parms.CallFunc_Contains_ReturnValue17 = CallFunc_Contains_ReturnValue17;
	Parms.CallFunc_Contains_ReturnValue18 = CallFunc_Contains_ReturnValue18;
	Parms.CallFunc_Contains_ReturnValue19 = CallFunc_Contains_ReturnValue19;
	Parms.CallFunc_Contains_ReturnValue20 = CallFunc_Contains_ReturnValue20;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue4 = CallFunc_GetLargePreviewImage_ReturnValue4;
	Parms.CallFunc_Conv_AssetToObject_ReturnValue2 = CallFunc_Conv_AssetToObject_ReturnValue2;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.K2Node_DynamicCast_AsTexture_2D4 = K2Node_DynamicCast_AsTexture_2D4;
	Parms.K2Node_DynamicCast_bSuccess10 = K2Node_DynamicCast_bSuccess10;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue13 = CallFunc_K2_GetComponentToWorld_ReturnValue13;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.CallFunc_TLerp_ReturnValue4 = CallFunc_TLerp_ReturnValue4;
	Parms.CallFunc_BreakTransform_Location7 = CallFunc_BreakTransform_Location7;
	Parms.CallFunc_BreakTransform_Rotation7 = CallFunc_BreakTransform_Rotation7;
	Parms.CallFunc_BreakTransform_Scale7 = CallFunc_BreakTransform_Scale7;
	Parms.CallFunc_TLerp_ReturnValue5 = CallFunc_TLerp_ReturnValue5;
	Parms.CallFunc_TLerp_ReturnValue6 = CallFunc_TLerp_ReturnValue6;
	Parms.CallFunc_BreakTransform_Location8 = CallFunc_BreakTransform_Location8;
	Parms.CallFunc_BreakTransform_Rotation8 = CallFunc_BreakTransform_Rotation8;
	Parms.CallFunc_BreakTransform_Scale8 = CallFunc_BreakTransform_Scale8;
	Parms.CallFunc_BreakTransform_Location9 = CallFunc_BreakTransform_Location9;
	Parms.CallFunc_BreakTransform_Rotation9 = CallFunc_BreakTransform_Rotation9;
	Parms.CallFunc_BreakTransform_Scale9 = CallFunc_BreakTransform_Scale9;
	Parms.CallFunc_MakeTransform_ReturnValue3 = CallFunc_MakeTransform_ReturnValue3;
	Parms.CallFunc_TLerp_ReturnValue7 = CallFunc_TLerp_ReturnValue7;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult8 = CallFunc_K2_SetWorldTransform_SweepHitResult8;
	Parms.CallFunc_BreakTransform_Location10 = CallFunc_BreakTransform_Location10;
	Parms.CallFunc_BreakTransform_Rotation10 = CallFunc_BreakTransform_Rotation10;
	Parms.CallFunc_BreakTransform_Scale10 = CallFunc_BreakTransform_Scale10;
	Parms.CallFunc_MakeTransform_ReturnValue4 = CallFunc_MakeTransform_ReturnValue4;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult9 = CallFunc_K2_SetWorldTransform_SweepHitResult9;
	Parms.Temp_bool_Has_Been_Initd_Variable9 = Temp_bool_Has_Been_Initd_Variable9;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue12 = CallFunc_K2_GetComponentLocation_ReturnValue12;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue13 = CallFunc_K2_GetComponentLocation_ReturnValue13;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue14 = CallFunc_K2_GetComponentLocation_ReturnValue14;
	Parms.CallFunc_VLerp_ReturnValue12 = CallFunc_VLerp_ReturnValue12;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult6 = CallFunc_K2_SetWorldLocation_SweepHitResult6;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue15 = CallFunc_K2_GetComponentLocation_ReturnValue15;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult7 = CallFunc_K2_SetWorldLocation_SweepHitResult7;
	Parms.CallFunc_VLerp_ReturnValue13 = CallFunc_VLerp_ReturnValue13;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult8 = CallFunc_K2_SetWorldLocation_SweepHitResult8;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult9 = CallFunc_K2_SetWorldLocation_SweepHitResult9;
	Parms.Temp_bool_IsClosed_Variable9 = Temp_bool_IsClosed_Variable9;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
