#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMediaPlayerTrack : uint8
{
	Audio                          = 0,
	Binary                         = 1,
	Caption                        = 2,
	Script                         = 3,
	Subtitle                       = 4,
	Text                           = 5,
	Video                          = 6,
	EMediaPlayerTrack_MAX          = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct MediaAssets.MediaPlayerOverlay
struct FMediaPlayerOverlay
{
public:
	bool                                         HasPosition;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Position;                                          // 0x4(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x10(0x18)(NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
