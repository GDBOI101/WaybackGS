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
// BlueprintGeneratedClass BPI_StormShieldinterface.BPI_StormShieldInterface_C
class UBPI_StormShieldInterface_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BPI_StormShieldInterface_C");
		return Clss;
	}

	void GetOutpostReadyState(bool* ReadyToExpand, bool* ReadyToInstallAmplifier);
	void CanLeaveOutpost(bool* AllowedToLeave);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
