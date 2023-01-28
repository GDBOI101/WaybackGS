#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1F0 - 0x1F0)
// BlueprintGeneratedClass HeroNotificationHandler.HeroNotificationHandler_C
class UHeroNotificationHandler_C : public UFortHeroNotificationHandler
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeroNotificationHandler_C");
		return Clss;
	}

	class UUserWidget* CreateWidget(class APlayerController* OwningPlayer, class UStickyNotification_C* CallFunc_Create_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
