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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C
class UMissionObjectiveWidgetProviderInterface_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionObjectiveWidgetProviderInterface_C");
		return Clss;
	}

	void GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon);
	void GetObjectiveContentWidgetClass(class UClass** Objective_WIdget_Class);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
