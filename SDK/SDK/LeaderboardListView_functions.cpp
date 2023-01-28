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


// Function LeaderboardListView.LeaderboardListView_C.FocusListView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardListView_C::FocusListView(class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("LeaderboardListView_C", "FocusListView");

	Params::ULeaderboardListView_C_FocusListView_Params Parms;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_SetSelectedIndex_ReturnValue = CallFunc_SetSelectedIndex_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
