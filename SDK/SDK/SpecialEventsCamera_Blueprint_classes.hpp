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

// 0x8 (0x8C8 - 0x8C0)
// BlueprintGeneratedClass SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C
class ASpecialEventsCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpecialEventsCamera_Blueprint_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_SpecialEventsCamera_Blueprint(int32 EntryPoint, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, class ATVPostProcessBP_C* CallFunc_Array_Get_Item2, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors3, int32 Temp_int_Loop_Counter_Variable2, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item3, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
