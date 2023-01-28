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

// 0x0 (0x358 - 0x358)
// Class AnimGraphRuntime.AnimCustomInstance
class UAnimCustomInstance : public UAnimInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimCustomInstance");
		return Clss;
	}

};

// 0x0 (0x358 - 0x358)
// Class AnimGraphRuntime.AnimSequencerInstance
class UAnimSequencerInstance : public UAnimCustomInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimSequencerInstance");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
