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
// BlueprintGeneratedClass MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C
class UMissionObjectiveContentWidgetInterface_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionObjectiveContentWidgetInterface_C");
		return Clss;
	}

	void GetHeightEstimate(float* Height);
	void Setup(class AFortObjectiveBase* Objective, bool bInConfigureAsHUD);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
