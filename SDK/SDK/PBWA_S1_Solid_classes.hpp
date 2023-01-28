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

// 0x28 (0x10E8 - 0x10C0)
// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
class APBWA_S1_Solid_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10C0(0x8)(Transient, DuplicateTransient)
	int32                                        GnomeWallChance;                                   // 0x10C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GnomeWallMax;                                      // 0x10CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Gnomed;                                            // 0x10D0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_338A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceConstant*             GnomeMaterial;                                     // 0x10D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           GnomeWall;                                         // 0x10E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PBWA_S1_Solid_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PBWA_S1_Solid(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
