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

// 0x8 (0xFD0 - 0xFC8)
// BlueprintGeneratedClass PBWA_W1_BalconyI.PBWA_W1_BalconyI_C
class APBWA_W1_BalconyI_C : public ABuildingFloor
{
public:
	uint8                                        Pad_3080[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PBWA_W1_BalconyI_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
