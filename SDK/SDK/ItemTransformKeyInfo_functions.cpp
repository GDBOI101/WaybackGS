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


// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.SetKeyToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue2                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData3                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData4                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array3                                          (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array4                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue3                                     ()
// class FText                        CallFunc_Format_ReturnValue4                                     ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData5                            (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array5                                          (ZeroConstructor, ReferenceParm)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue5                                     ()

void UItemTransformKeyInfo_C::SetKeyToRepresent(class UFortItem* Key, class FText CallFunc_GetDescription_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array4, class FText CallFunc_Format_ReturnValue3, class FText CallFunc_Format_ReturnValue4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array5, bool K2Node_SwitchString_CmpSuccess, class FText CallFunc_Format_ReturnValue5)
{
	static auto Func = Class->GetFunction("ItemTransformKeyInfo_C", "SetKeyToRepresent");

	Params::UItemTransformKeyInfo_C_SetKeyToRepresent_Params Parms;
	Parms.Key = Key;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue2 = CallFunc_Format_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData3 = K2Node_MakeStruct_FormatArgumentData3;
	Parms.K2Node_MakeStruct_FormatArgumentData4 = K2Node_MakeStruct_FormatArgumentData4;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.CallFunc_Format_ReturnValue3 = CallFunc_Format_ReturnValue3;
	Parms.CallFunc_Format_ReturnValue4 = CallFunc_Format_ReturnValue4;
	Parms.K2Node_MakeStruct_FormatArgumentData5 = K2Node_MakeStruct_FormatArgumentData5;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeArray_Array5 = K2Node_MakeArray_Array5;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Format_ReturnValue5 = CallFunc_Format_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemTransformKeyInfo_C::Construct()
{
	static auto Func = Class->GetFunction("ItemTransformKeyInfo_C", "Construct");

	Params::UItemTransformKeyInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.ExecuteUbergraph_ItemTransformKeyInfo
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyInfo_C::ExecuteUbergraph_ItemTransformKeyInfo(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemTransformKeyInfo_C", "ExecuteUbergraph_ItemTransformKeyInfo");

	Params::UItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
