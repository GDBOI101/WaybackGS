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

// 0x120 (0x148 - 0x28)
// Class SocialDefaults.ChatColorSchemeDataAsset
class UChatColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatColorScheme                      ChatColorData;                                     // 0x28(0x120)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChatColorSchemeDataAsset");
		return Clss;
	}

};

// 0x2A8 (0x2D0 - 0x28)
// Class SocialDefaults.SocialActionButtonStyleDataAsset
class USocialActionButtonStyleDataAsset : public UDataAsset
{
public:
	struct FButtonStyle                          Style;                                             // 0x28(0x2A8)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialActionButtonStyleDataAsset");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class SocialDefaults.SocialChatChromeColorSchemeDataAsset
class USocialChatChromeColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatChromeColorScheme                Style;                                             // 0x28(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatChromeColorSchemeDataAsset");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class SocialDefaults.SocialChatChromeMarginsDataAsset
class USocialChatChromeMarginsDataAsset : public UDataAsset
{
public:
	struct FChatChromeMargins                    Style;                                             // 0x28(0x64)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatChromeMarginsDataAsset");
		return Clss;
	}

};

// 0x850 (0x878 - 0x28)
// Class SocialDefaults.SocialChatChromeStyleDataAsset
class USocialChatChromeStyleDataAsset : public UDataAsset
{
public:
	struct FChatChromeStyle                      Style;                                             // 0x28(0x850)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatChromeStyleDataAsset");
		return Clss;
	}

};

// 0x670 (0x698 - 0x28)
// Class SocialDefaults.SocialChatMarkupStyleDataAsset
class USocialChatMarkupStyleDataAsset : public UDataAsset
{
public:
	struct FChatMarkupStyle                      Style;                                             // 0x28(0x670)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatMarkupStyleDataAsset");
		return Clss;
	}

};

// 0x1490 (0x14B8 - 0x28)
// Class SocialDefaults.SocialChatStyleDataAsset
class USocialChatStyleDataAsset : public UDataAsset
{
public:
	struct FChatStyle                            Style;                                             // 0x28(0x1490)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatStyleDataAsset");
		return Clss;
	}

};

// 0x5E0 (0x608 - 0x28)
// Class SocialDefaults.SocialCheckBoxStyleDataAsset
class USocialCheckBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                        Style;                                             // 0x28(0x5E0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialCheckBoxStyleDataAsset");
		return Clss;
	}

};

// 0x2A0 (0x2C8 - 0x28)
// Class SocialDefaults.SocialFontStyleDataAsset
class USocialFontStyleDataAsset : public UDataAsset
{
public:
	struct FSocialFontStyle                      Style;                                             // 0x28(0x2A0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialFontStyleDataAsset");
		return Clss;
	}

};

// 0x200 (0x228 - 0x28)
// Class SocialDefaults.SocialListMarginsDataAsset
class USocialListMarginsDataAsset : public UDataAsset
{
public:
	struct FSocialListMargins                    Style;                                             // 0x28(0x200)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialListMarginsDataAsset");
		return Clss;
	}

};

// 0x2870 (0x2898 - 0x28)
// Class SocialDefaults.SocialListStyleDataAsset
class USocialListStyleDataAsset : public UDataAsset
{
public:
	struct FSocialListStyle                      Style;                                             // 0x28(0x2870)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialListStyleDataAsset");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class SocialDefaults.SocialProfanityDataAsset
class USocialProfanityDataAsset : public UDataAsset
{
public:
	TArray<struct FProfanityData>                ProfanityData;                                     // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialProfanityDataAsset");
		return Clss;
	}

};

// 0x5E0 (0x608 - 0x28)
// Class SocialDefaults.SocialRadioBoxStyleDataAsset
class USocialRadioBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                        Style;                                             // 0x28(0x5E0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialRadioBoxStyleDataAsset");
		return Clss;
	}

};

// 0x518 (0x540 - 0x28)
// Class SocialDefaults.SocialScrollBarStyleDataAsset
class USocialScrollBarStyleDataAsset : public UDataAsset
{
public:
	struct FScrollBarStyle                       Style;                                             // 0x28(0x518)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialScrollBarStyleDataAsset");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class SocialDefaults.SocialSoundSchemaDataAsset
class USocialSoundSchemaDataAsset : public UDataAsset
{
public:
	struct FSocialSoundSchema                    SoundSchema;                                       // 0x28(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialSoundSchemaDataAsset");
		return Clss;
	}

};

// 0x6E70 (0x6E98 - 0x28)
// Class SocialDefaults.SocialStyleDataAsset
class USocialStyleDataAsset : public UDataAsset
{
public:
	class USocialFontStyleDataAsset*             SmallFontStyle;                                    // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             NormalFontStyle;                                   // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             LargeFontStyle;                                    // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             ChatFontStyle;                                     // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListStyleDataAsset*             SocialListStyle;                                   // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListMarginsDataAsset*           SocialListMargins;                                 // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatStyleDataAsset*             ChatStyle;                                         // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeStyleDataAsset*       ChatChromeStyle;                                   // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeMarginsDataAsset*     ChatChromeMargins;                                 // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeColorSchemeDataAsset* ChatChromeColorScheme;                             // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChatColorSchemeDataAsset*             ChatColorScheme;                                   // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialSoundSchemaDataAsset*           SoundSchema;                                       // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialActionButtonStyleDataAsset*     ActionButtonStyle;                                 // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialCheckBoxStyleDataAsset*         CheckBoxStyle;                                     // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialRadioBoxStyleDataAsset*         RadioBoxStyle;                                     // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialScrollBarStyleDataAsset*        ScrollBoxStyle;                                    // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatMarkupStyleDataAsset*       MarkupStyle;                                       // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialProfanityDataAsset*             ProfanityDataAsset;                                // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD0[0x6DE0];                                  // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialStyleDataAsset");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
