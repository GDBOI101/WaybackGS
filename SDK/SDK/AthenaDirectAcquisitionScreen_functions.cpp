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


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionScreen_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionScreen_C", "Focus");

	Params::UAthenaDirectAcquisitionScreen_C_Focus_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.GenerateOfferWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StorefrontName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCatalogOffer               Offer                                                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UFortMtxOfferData*           DisplayAsset                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferWidgetBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaDirectAcquisitionOfferWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortDirectAcquisitionOfferWidgetBase* UAthenaDirectAcquisitionScreen_C::GenerateOfferWidget(class FName StorefrontName, struct FCatalogOffer& Offer, class UFortMtxOfferData* DisplayAsset, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_GetChildrenCount_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaDirectAcquisitionOfferWidget_C* CallFunc_Create_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionScreen_C", "GenerateOfferWidget");

	Params::UAthenaDirectAcquisitionScreen_C_GenerateOfferWidget_Params Parms;
	Parms.StorefrontName = StorefrontName;
	Parms.Offer = Offer;
	Parms.DisplayAsset = DisplayAsset;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionScreen_C::NoOffersAvailable()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionScreen_C", "NoOffersAvailable");

	Params::UAthenaDirectAcquisitionScreen_C_NoOffersAvailable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionScreen_C::OnStartReadingOffers()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionScreen_C", "OnStartReadingOffers");

	Params::UAthenaDirectAcquisitionScreen_C_OnStartReadingOffers_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionScreen_C::OnOffersGenerated()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionScreen_C", "OnOffersGenerated");

	Params::UAthenaDirectAcquisitionScreen_C_OnOffersGenerated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionScreen_C", "OnActivated");

	Params::UAthenaDirectAcquisitionScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaDirectAcquisitionScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_GetWeeklyStoreEndDate_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetDailyStoreEndDate_ReturnValue                        (NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionScreen_C::ExecuteUbergraph_AthenaDirectAcquisitionScreen(int32 EntryPoint, bool CallFunc_IsActivated_ReturnValue, const struct FDateTime& CallFunc_GetWeeklyStoreEndDate_ReturnValue, const struct FDateTime& CallFunc_GetDailyStoreEndDate_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionScreen_C", "ExecuteUbergraph_AthenaDirectAcquisitionScreen");

	Params::UAthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetWeeklyStoreEndDate_ReturnValue = CallFunc_GetWeeklyStoreEndDate_ReturnValue;
	Parms.CallFunc_GetDailyStoreEndDate_ReturnValue = CallFunc_GetDailyStoreEndDate_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
