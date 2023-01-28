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
// BlueprintGeneratedClass PBWA_BG_BalconyO.PBWA_BG_BalconyO_C
class APBWA_BG_BalconyO_C : public ABuildingFloor
{
public:
	uint8                                        Pad_27F2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PBWA_BG_BalconyO_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
