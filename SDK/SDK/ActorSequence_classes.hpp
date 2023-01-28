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

// 0x28 (0x300 - 0x2D8)
// Class ActorSequence.ActorSequence
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FActorSequenceObjectReferenceMap      ObjectReferences;                                  // 0x2E0(0x20)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActorSequence");
		return Clss;
	}

};

// 0x40 (0x130 - 0xF0)
// Class ActorSequence.ActorSequenceComponent
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0xF0(0x28)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UActorSequence*                        Sequence;                                          // 0x118(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActorSequencePlayer*                  SequencePlayer;                                    // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoPlay;                                         // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C1E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActorSequenceComponent");
		return Clss;
	}

};

// 0x0 (0x690 - 0x690)
// Class ActorSequence.ActorSequencePlayer
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActorSequencePlayer");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
