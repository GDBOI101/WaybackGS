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

// 0x30 (0x58 - 0x28)
// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
class UFortMediaSubtitlesPlayer : public UObject
{
public:
	uint8                                        Pad_1C5E[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlays*                             SourceSubtitles;                                   // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMediaSubtitlesPlayer");
		return Clss;
	}

	void Stop();
	void SetSubtitles(class UOverlays* Subtitles);
	void Play();
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
};

// 0x2B0 (0x3C8 - 0x118)
// Class SubtitlesWidgets.SubtitleDisplay
class USubtitleDisplay : public UWidget
{
public:
	struct FSlateFontInfo                        FontInfo;                                          // 0x118(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WrapTextAt;                                        // 0x190(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C60[0x234];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubtitleDisplay");
		return Clss;
	}

	bool HasSubtitles();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
