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


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonDirectAcquisitionScreen_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonDirectAcquisitionScreen_C", "Focus");

	Params::UAthenaSeasonDirectAcquisitionScreen_C_Focus_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.GenerateOfferWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StorefrontName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCatalogOffer               Offer                                                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UFortMtxOfferData*           DisplayAsset                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDirectAcquisitionOfferWidgetBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaDirectAcquisitionOfferWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortDirectAcquisitionOfferWidgetBase* UAthenaSeasonDirectAcquisitionScreen_C::GenerateOfferWidget(class FName StorefrontName, struct FCatalogOffer& Offer, class UFortMtxOfferData* DisplayAsset, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaDirectAcquisitionOfferWidget_C* CallFunc_Create_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonDirectAcquisitionScreen_C", "GenerateOfferWidget");

	Params::UAthenaSeasonDirectAcquisitionScreen_C_GenerateOfferWidget_Params Parms;
	Parms.StorefrontName = StorefrontName;
	Parms.Offer = Offer;
	Parms.DisplayAsset = DisplayAsset;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue2 = CallFunc_GetChildrenCount_ReturnValue2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
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


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonDirectAcquisitionScreen_C::NoOffersAvailable()
{
	static auto Func = Class->GetFunction("AthenaSeasonDirectAcquisitionScreen_C", "NoOffersAvailable");

	Params::UAthenaSeasonDirectAcquisitionScreen_C_NoOffersAvailable_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonDirectAcquisitionScreen_C::OnStartReadingOffers()
{
	static auto Func = Class->GetFunction("AthenaSeasonDirectAcquisitionScreen_C", "OnStartReadingOffers");

	Params::UAthenaSeasonDirectAcquisitionScreen_C_OnStartReadingOffers_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonDirectAcquisitionScreen_C::OnOffersGenerated()
{
	static auto Func = Class->GetFunction("AthenaSeasonDirectAcquisitionScreen_C", "OnOffersGenerated");

	Params::UAthenaSeasonDirectAcquisitionScreen_C_OnOffersGenerated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonDirectAcquisitionScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaSeasonDirectAcquisitionScreen_C", "OnActivated");

	Params::UAthenaSeasonDirectAcquisitionScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonDirectAcquisitionScreen.AthenaSeasonDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetSeasonStoreEndDate_ReturnValue                       (NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonDirectAcquisitionScreen_C::ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen(int32 EntryPoint, bool CallFunc_IsActivated_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, const struct FDateTime& CallFunc_GetSeasonStoreEndDate_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonDirectAcquisitionScreen_C", "ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen");

	Params::UAthenaSeasonDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaSeasonDirectAcquisitionScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetSeasonStoreEndDate_ReturnValue = CallFunc_GetSeasonStoreEndDate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
