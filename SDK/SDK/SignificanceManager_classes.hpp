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

// 0xC8 (0xF0 - 0x28)
// Class SignificanceManager.SignificanceManager
class USignificanceManager : public UObject
{
public:
	uint8                                        Pad_1C21[0xB8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStringClassReference                 SignificanceManagerClassName;                      // 0xE0(0x10)(Edit, Config, GlobalConfig, NoClear, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SignificanceManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
