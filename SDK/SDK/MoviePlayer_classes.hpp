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

// 0x18 (0x40 - 0x28)
// Class MoviePlayer.MoviePlayerSettings
class UMoviePlayerSettings : public UObject
{
public:
	bool                                         bWaitForMoviesToComplete;                          // 0x28(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoviesAreSkippable;                               // 0x29(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        StartupMovies;                                     // 0x30(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MoviePlayerSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
