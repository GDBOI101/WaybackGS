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


// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.PopScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferPurchasedWidget_C::PopScreen(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedWidget_C", "PopScreen");

	Params::UAthenaDirectAcquisitionOfferPurchasedWidget_C_PopScreen_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOfferPurchasedWidget_C::HandleBack(bool* PassThrough)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedWidget_C", "HandleBack");

	Params::UAthenaDirectAcquisitionOfferPurchasedWidget_C_HandleBack_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.UpdateFromOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetName_ReturnValue                                     ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// class UFortDirectAcquisitionOfferInfo*CallFunc_GetOfferInfo_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetFirstGrantItemDefinition_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferPurchasedWidget_C::UpdateFromOffer(class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, class FText CallFunc_GetName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_MakeColor_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedWidget_C", "UpdateFromOffer");

	Params::UAthenaDirectAcquisitionOfferPurchasedWidget_C_UpdateFromOffer_Params Parms;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue2 = CallFunc_MakeLiteralName_ReturnValue2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue = CallFunc_GetOfferInfo_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue2 = CallFunc_GetDynamicMaterial_ReturnValue2;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetOfferInfo_ReturnValue2 = CallFunc_GetOfferInfo_ReturnValue2;
	Parms.CallFunc_GetFirstGrantItemDefinition_ReturnValue = CallFunc_GetFirstGrantItemDefinition_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.OnOfferSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedWidget_C::OnOfferSet()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedWidget_C", "OnOfferSet");

	Params::UAthenaDirectAcquisitionOfferPurchasedWidget_C_OnOfferSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedWidget_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedWidget_C", "OnActivated");

	Params::UAthenaDirectAcquisitionOfferPurchasedWidget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferPurchasedWidget_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedWidget_C", "Construct");

	Params::UAthenaDirectAcquisitionOfferPurchasedWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaDirectAcquisitionOfferPurchasedWidget_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferPurchasedWidget_C", "ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget");

	Params::UAthenaDirectAcquisitionOfferPurchasedWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
