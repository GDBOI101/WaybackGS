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

// 0x8 (0x48 - 0x40)
// Class AudioMixer.SoundEffectLowPassFilterPreset
class USoundEffectLowPassFilterPreset : public USoundEffectSourcePreset
{
public:
	struct FSoundEffectLowPassFilterSettings     Settings;                                          // 0x40(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundEffectLowPassFilterPreset");
		return Clss;
	}

};

// 0x8 (0x48 - 0x40)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	struct FSubmixEffectReverbSettings           Settings;                                          // 0x40(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectReverbPreset");
		return Clss;
	}

};

// 0x8 (0x48 - 0x40)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0x40(0x1)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectSubmixEQPreset");
		return Clss;
	}

};

// 0x8 (0x48 - 0x40)
// Class AudioMixer.SubmixEffectTestPreset
class USubmixEffectTestPreset : public USoundEffectSubmixPreset
{
public:
	struct FSubmixEffectTestSettings             Settings;                                          // 0x40(0x4)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectTestPreset");
		return Clss;
	}

};

// 0x20 (0x310 - 0x2F0)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	uint8                                        Pad_1FCA[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthSound");
		return Clss;
	}

};

// 0x190 (0x420 - 0x290)
// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent
{
public:
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x290(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x290(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x290(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x290(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_20B : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1FCB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x2A0(0x120)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                           SoundClass;                                        // 0x3C8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USynthSound*                           Synth;                                             // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                       AudioComponent;                                    // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FCD[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthComponent");
		return Clss;
	}

	void Stop();
	void Start();
	bool IsPlaying();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
