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

// 0x88 (0xB0 - 0x28)
// Class MovieScene.MovieSceneSignedObject
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                 Signature;                                         // 0x28(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DC7[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSignedObject");
		return Clss;
	}

};

// 0x80 (0x130 - 0xB0)
// Class MovieScene.MovieScene
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>          Spawnables;                                        // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>        Possessables;                                      // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>            ObjectBindings;                                    // 0xD0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              MasterTracks;                                      // 0xE0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                      CameraCutTrack;                                    // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                           SelectionRange;                                    // 0xF8(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                           PlaybackRange;                                     // 0x108(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bForceFixedFrameIntervalPlayback;                  // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DC8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FixedFrameInterval;                                // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InTime;                                            // 0x120(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        OutTime;                                           // 0x124(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartTime;                                         // 0x128(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EndTime;                                           // 0x12C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBindingOverridesInterface
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingOverridesInterface");
		return Clss;
	}

};

// 0x70 (0x98 - 0x28)
// Class MovieScene.MovieSceneBindingOverrides
class UMovieSceneBindingOverrides : public UObject
{
public:
	uint8                                        Pad_1DC9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneBindingOverrideData> BindingData;                                       // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DCA[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingOverrides");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBindingOwnerInterface
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingOwnerInterface");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class MovieScene.MovieSceneFolder
class UMovieSceneFolder : public UObject
{
public:
	class FName                                  FolderName;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneFolder*>             ChildFolders;                                      // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              ChildMasterTracks;                                 // 0x40(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ChildObjectBindingStrings;                         // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DCB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFolder");
		return Clss;
	}

};

// 0x668 (0x690 - 0x28)
// Class MovieScene.MovieSceneSequencePlayer
class UMovieSceneSequencePlayer : public UObject
{
public:
	uint8                                        Pad_1DCC[0x358];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPlay;                                            // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStop;                                            // 0x390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPause;                                           // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        bIsPlaying : 1;                                    // Mask: 0x1, PropSize: 0x10x3B0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReversePlayback : 1;                              // Mask: 0x2, PropSize: 0x10x3B0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bPendingFirstUpdate : 1;                           // Mask: 0x4, PropSize: 0x10x3B0(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1FF : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   Sequence;                                          // 0x3B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeCursorPosition;                                // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StartTime;                                         // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndTime;                                           // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentNumLoops;                                   // 0x3CC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DCE[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x3E0(0x28)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DCF[0x288];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequencePlayer");
		return Clss;
	}

	void Stop();
	void StartPlayingNextTick();
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void PlayReverse();
	void PlayLooping(int32 NumLoops);
	void Play();
	void Pause();
	bool IsPlaying();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	void ChangePlaybackDirection();
};

// 0x20 (0xD0 - 0xB0)
// Class MovieScene.MovieSceneSection
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions         EvalOptions;                                       // 0xB0(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTime;                                         // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EndTime;                                           // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RowIndex;                                          // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        OverlapPriority;                                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsActive : 1;                                     // Mask: 0x1, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsLocked : 1;                                     // Mask: 0x2, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsInfinite : 1;                                   // Mask: 0x4, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_200 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DD1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrerollTime;                                       // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PostrollTime;                                      // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSection");
		return Clss;
	}

};

// 0x8 (0xB8 - 0xB0)
// Class MovieScene.MovieSceneTrack
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions           EvalOptions;                                       // 0xB0(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTrack");
		return Clss;
	}

};

// 0x228 (0x2D8 - 0xB0)
// Class MovieScene.MovieSceneSequence
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FCachedMovieSceneEvaluationTemplate   EvaluationTemplate;                                // 0xB0(0x220)(NativeAccessSpecifierPublic)
	struct FMovieSceneTrackCompilationParams     TemplateParameters;                                // 0x2D0(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bParentContextsAreSignificant;                     // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DD3[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequence");
		return Clss;
	}

};

// 0x0 (0xB8 - 0xB8)
// Class MovieScene.MovieSceneNameableTrack
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNameableTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
