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
// Class BlueprintContext.BlueprintContextBase
class UBlueprintContextBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlueprintContextBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class BlueprintContext.BlueprintContextLibrary
class UBlueprintContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlueprintContextLibrary");
		return Clss;
	}

	class UBlueprintContextBase* GetContext(class UObject* ContextObject, TSubclassOf<class UBlueprintContextBase> Class);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
