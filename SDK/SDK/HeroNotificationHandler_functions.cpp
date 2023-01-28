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


// Function HeroNotificationHandler.HeroNotificationHandler_C.CreateWidget
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStickyNotification_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UHeroNotificationHandler_C::CreateWidget(class APlayerController* OwningPlayer, class UStickyNotification_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("HeroNotificationHandler_C", "CreateWidget");

	Params::UHeroNotificationHandler_C_CreateWidget_Params Parms;
	Parms.OwningPlayer = OwningPlayer;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
