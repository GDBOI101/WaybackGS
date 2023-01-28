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

// 0x20 (0x690 - 0x670)
// Class HeadMountedDisplay.MotionControllerComponent
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int32                                        PlayerIndex;                                       // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControllerHand                   Hand;                                              // 0x674(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDisableLowLatencyUpdate : 1;                      // Mask: 0x1, PropSize: 0x10x678(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F7 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1D73[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETrackingStatus                   CurrentTrackingStatus;                             // 0x67C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D74[0x13];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MotionControllerComponent");
		return Clss;
	}

	bool IsTracked();
};

// 0x80 (0x170 - 0xF0)
// Class HeadMountedDisplay.VRNotificationsComponent
class UVRNotificationsComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDTrackingInitializedDelegate;                    // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDRecenteredDelegate;                             // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDLostDelegate;                                   // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDReconnectedDelegate;                            // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDConnectCanceledDelegate;                        // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDPutOnHeadDelegate;                              // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDRemovedFromHeadDelegate;                        // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VRNotificationsComponent");
		return Clss;
	}

	void VRNotificationsDelegate__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
