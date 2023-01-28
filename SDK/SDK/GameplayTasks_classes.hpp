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

// 0x70 (0x160 - 0xF0)
// Class GameplayTasks.GameplayTasksComponent
class UGameplayTasksComponent : public UActorComponent
{
public:
	uint8                                        Pad_1A44[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsNetDirty;                                       // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayTask*>                 SimulatedTasks;                                    // 0x100(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                 TaskPriorityQueue;                                 // 0x110(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A46[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayTask*>                 TickingTasks;                                      // 0x130(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A47[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnClaimedResourcesChange;                          // 0x148(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A48[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTasksComponent");
		return Clss;
	}

	void OnRep_SimulatedTasks();
	enum class EGameplayTaskRunResult K2_RunGameplayTask(UInterfaceProperty_ TaskOwner, class UGameplayTask* Task, uint8 Priority, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalRequiredResources, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalClaimedResources);
};

// 0x40 (0x68 - 0x28)
// Class GameplayTasks.GameplayTask
class UGameplayTask : public UObject
{
public:
	uint8                                        Pad_1A49[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InstanceName;                                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A4A[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTask*                         ChildTask;                                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask");
		return Clss;
	}

	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};

// 0x0 (0x28 - 0x28)
// Class GameplayTasks.GameplayTaskOwnerInterface
class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTaskOwnerInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class GameplayTasks.GameplayTaskResource
class UGameplayTaskResource : public UObject
{
public:
	int32                                        ManualResourceID;                                  // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8                                         AutoResourceID;                                    // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bManuallySetID : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTaskResource");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class GameplayTasks.GameplayTask_ClaimResource
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_ClaimResource");
		return Clss;
	}

	class UGameplayTask_ClaimResource* ClaimResources(UInterfaceProperty_ InTaskOwner, const TArray<TSubclassOf<class UGameplayTaskResource>>& ResourceClasses, uint8 Priority, class FName TaskInstanceName);
	class UGameplayTask_ClaimResource* ClaimResource(UInterfaceProperty_ InTaskOwner, TSubclassOf<class UGameplayTaskResource> ResourceClass, uint8 Priority, class FName TaskInstanceName);
};

// 0x40 (0xA8 - 0x68)
// Class GameplayTasks.GameplayTask_SpawnActor
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	UMulticastDelegateProperty_                  Success;                                           // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  DidNotSpawn;                                       // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A51[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    ClassToSpawn;                                      // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_SpawnActor");
		return Clss;
	}

	class UGameplayTask_SpawnActor* SpawnActor(UInterfaceProperty_ TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, TSubclassOf<class AActor> Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
};

// 0x18 (0x80 - 0x68)
// Class GameplayTasks.GameplayTask_WaitDelay
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	UMulticastDelegateProperty_                  OnFinish;                                          // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A53[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_WaitDelay");
		return Clss;
	}

	class UGameplayTask_WaitDelay* TaskWaitDelay(UInterfaceProperty_ TaskOwner, float Time, uint8 Priority);
	void TaskDelayDelegate__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
