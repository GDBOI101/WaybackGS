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

// 0xA8 (0x380 - 0x2D8)
// Class LevelSequence.LevelSequence
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap      ObjectReferences;                                  // 0x2E0(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                                  // 0x330(0x50)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequence");
		return Clss;
	}

};

// 0x20 (0x6B0 - 0x690)
// Class LevelSequence.LevelSequencePlayer
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	uint8                                        Pad_1B73[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequencePlayer");
		return Clss;
	}

	class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings);
};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceBurnInInitSettings
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceBurnInInitSettings");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class LevelSequence.LevelSequenceBurnInOptions
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                         bUseBurnIn;                                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStringClassReference                 BurnInClass;                                       // 0x30(0x10)(Edit, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*      Settings;                                          // 0x40(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceBurnInOptions");
		return Clss;
	}

};

// 0x68 (0x3F0 - 0x388)
// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public AActor
{
public:
	uint8                                        Pad_1B78[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAutoPlay;                                         // 0x390(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x398(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x3C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStringAssetReference                 LevelSequence;                                     // 0x3C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInOptions*           BurnInOptions;                                     // 0x3D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x3E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                  BurnInInstance;                                    // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceActor");
		return Clss;
	}

	void SetSequence(class ULevelSequence* InSequence);
	void SetBinding(const struct FMovieSceneObjectBindingPtr& Binding, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingPtr& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor);
	class ULevelSequence* GetSequence(bool Load);
	void AddBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};

// 0x58 (0x288 - 0x230)
// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot          FrameInformation;                                  // 0x230(0x50)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceBurnIn");
		return Clss;
	}

	void SetSettings(class UObject* InSettings);
	TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
