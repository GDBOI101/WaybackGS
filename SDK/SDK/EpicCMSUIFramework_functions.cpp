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


// Function EpicCMSUIFramework.EpicCMSTileBase.Launch
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UEpicCMSTileBase::Launch()
{
	static auto Func = Class->GetFunction("EpicCMSTileBase", "Launch");

	Params::UEpicCMSTileBase_Launch_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function EpicCMSUIFramework.EpicCMSTileBase.DynamicHandleIconLoadingStateChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsLoading                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileBase::DynamicHandleIconLoadingStateChanged(bool bIsLoading)
{
	static auto Func = Class->GetFunction("EpicCMSTileBase", "DynamicHandleIconLoadingStateChanged");

	Params::UEpicCMSTileBase_DynamicHandleIconLoadingStateChanged_Params Parms;
	Parms.bIsLoading = bIsLoading;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              PageIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::SetCurrentPageByIndex(int32 PageIndex)
{
	static auto Func = Class->GetFunction("EpicCMSTileCarousel", "SetCurrentPageByIndex");

	Params::UEpicCMSTileCarousel_SetCurrentPageByIndex_Params Parms;
	Parms.PageIndex = PageIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UEpicCMSTileCarousel::PreviousPage()
{
	static auto Func = Class->GetFunction("EpicCMSTileCarousel", "PreviousPage");

	Params::UEpicCMSTileCarousel_PreviousPage_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UEpicCMSTileCarousel::NextPage()
{
	static auto Func = Class->GetFunction("EpicCMSTileCarousel", "NextPage");

	Params::UEpicCMSTileCarousel_NextPage_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowNavigation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::NavigationVisibilityChanged(bool bShowNavigation)
{
	static auto Func = Class->GetFunction("EpicCMSTileCarousel", "NavigationVisibilityChanged");

	Params::UEpicCMSTileCarousel_NavigationVisibilityChanged_Params Parms;
	Parms.bShowNavigation = bShowNavigation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     TileWidget                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::HandleTilePageAdded(class UWidget* TileWidget)
{
	static auto Func = Class->GetFunction("EpicCMSTileCarousel", "HandleTilePageAdded");

	Params::UEpicCMSTileCarousel_HandleTilePageAdded_Params Parms;
	Parms.TileWidget = TileWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEpicCMSTileCarousel::GetCurrentPageIndex()
{
	static auto Func = Class->GetFunction("EpicCMSTileCarousel", "GetCurrentPageIndex");

	Params::UEpicCMSTileCarousel_GetCurrentPageIndex_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
