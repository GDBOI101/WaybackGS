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

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass AthenaSessionId.AthenaSessionId_C
class UAthenaSessionId_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UTextBlock*                            Text;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSessionId_C");
		return Clss;
	}

	void UpdateSessionId(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetSessionId_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_AthenaSessionId(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
