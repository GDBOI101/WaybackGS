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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct SocialTypes.ChatChromeColorScheme
struct FChatChromeColorScheme
{
public:
	struct FLinearColor                          ChatEntryBackgroundColor;                          // 0x0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NoneActiveTabColor;                                // 0x10(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TabFontColor;                                      // 0x20(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TabFontColorInverted;                              // 0x30(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ChatBackgroundColor;                               // 0x40(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x64 (0x64 - 0x0)
// ScriptStruct SocialTypes.ChatChromeMargins
struct FChatChromeMargins
{
public:
	float                                        TabWidth;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TabPadding;                                        // 0x4(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatWindowPadding;                                 // 0x14(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatWindowToEntryMargin;                           // 0x24(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatChannelPadding;                                // 0x34(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               UserListButtonPadding;                             // 0x44(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               UserListIconPadding;                               // 0x54(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x850 (0x850 - 0x0)
// ScriptStruct SocialTypes.ChatChromeStyle
struct FChatChromeStyle
{
public:
	struct FSlateBrush                           UserListBrush;                                     // 0x0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChatBackgroundBrush;                               // 0x90(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChatEntryBackgroundBrush;                          // 0x120(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChannelBackgroundBrush;                            // 0x1B0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TabBackgroundBrush;                                // 0x240(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          TabSelectorButtonStyle;                            // 0x2D0(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               TabOptionPadding;                                  // 0x578(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TabContentPadding;                                 // 0x588(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TabClosePadding;                                   // 0x598(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FButtonStyle                          UserListButtonStyle;                               // 0x5A8(0x2A8)(Edit, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct SocialTypes.ChatColorScheme
struct FChatColorScheme
{
public:
	struct FLinearColor                          TimeStampColor;                                    // 0x0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultChatColor;                                  // 0x10(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WhisperChatColor;                                  // 0x20(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlobalChatColor;                                   // 0x30(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FounderChatColor;                                  // 0x40(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameChatColor;                                     // 0x50(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TeamChatColor;                                     // 0x60(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PartyChatColor;                                    // 0x70(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AdminChatColor;                                    // 0x80(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameAdminChatColor;                                // 0x90(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WhisperHyperlinkChatColor;                         // 0xA0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlobalHyperlinkChatColor;                          // 0xB0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FounderHyperlinkChatColor;                         // 0xC0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameHyperlinkChatColor;                            // 0xD0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TeamHyperlinkChatColor;                            // 0xE0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PartyHyperlinkChatColor;                           // 0xF0(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EnemyColor;                                        // 0x100(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FriendlyColor;                                     // 0x110(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x670 (0x670 - 0x0)
// ScriptStruct SocialTypes.ChatMarkupStyle
struct FChatMarkupStyle
{
public:
	struct FButtonStyle                          MarkupButtonStyle;                                 // 0x0(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       MarkupTextStyle;                                   // 0x2A8(0x208)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MarkupBackground;                                  // 0x4B0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonColor;                                       // 0x540(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonHoverColor;                                  // 0x568(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           TipColor;                                          // 0x590(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SeperatorBrush;                                    // 0x5B8(0x90)(Edit, NativeAccessSpecifierPublic)
	float                                        SeperatorThickness;                                // 0x648(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               MarkupPadding;                                     // 0x64C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x65C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_242B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1490 (0x1490 - 0x0)
// ScriptStruct SocialTypes.ChatStyle
struct FChatStyle
{
public:
	struct FEditableTextBoxStyle                 ChatEntryTextStyle;                                // 0x0(0x870)(Edit, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 ChatDisplayTextStyle;                              // 0x870(0x870)(Edit, NativeAccessSpecifierPublic)
	struct FScrollBoxStyle                       ScrollBorderStyle;                                 // 0x10E0(0x248)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MessageNotificationBrush;                          // 0x1328(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               ChatEntryPadding;                                  // 0x13B8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ChatEntryHeight;                                   // 0x13C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_242C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ChatMenuBackgroundBrush;                           // 0x13D0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionPadding;                               // 0x1460(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionHeaderPadding;                         // 0x1470(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionStatusMargin;                          // 0x1480(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2A0 (0x2A0 - 0x0)
// ScriptStruct SocialTypes.SocialFontStyle
struct FSocialFontStyle
{
public:
	struct FSlateFontInfo                        FontSmall;                                         // 0x0(0x68)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontSmallBold;                                     // 0x68(0x68)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontNormal;                                        // 0xD0(0x68)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontNormalBold;                                    // 0x138(0x68)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontLarge;                                         // 0x1A0(0x68)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontLargeBold;                                     // 0x208(0x68)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultFontColor;                                  // 0x270(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InvertedFontColor;                                 // 0x280(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultDullFontColor;                              // 0x290(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x200 (0x200 - 0x0)
// ScriptStruct SocialTypes.SocialListMargins
struct FSocialListMargins
{
public:
	struct FVector2D                             UserPresenceImageSize;                             // 0x0(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderButtonMargin;                                // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListMargin;                                 // 0x18(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListNoFriendsMargin;                        // 0x28(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListHeaderMargin;                           // 0x38(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListHeaderCountMargin;                      // 0x48(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderButtonContentMargin;                         // 0x58(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemMargin;                                  // 0x68(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemStatusMargin;                            // 0x78(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipStatusMargin;                             // 0x88(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemPresenceMargin;                          // 0x98(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemPlatformMargin;                          // 0xA8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemTextScrollerMargin;                      // 0xB8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationBorderMargin;                          // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationButtonMargin;                          // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationButtonContentMargin;                   // 0xE8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               NoneFriendContentMargin;                           // 0xF8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        NoneFriendContentHeight;                           // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoneFriendIconWidth;                               // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuBackIconMargin;                             // 0x110(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuPageIconMargin;                             // 0x120(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               RadioSettingTitleMargin;                           // 0x130(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSearchIconMargin;                           // 0x140(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSearchTextMargin;                           // 0x150(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuBackButtonMargin;                           // 0x160(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSettingButtonMargin;                        // 0x170(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuListMargin;                                 // 0x180(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SubMenuSeperatorThickness;                         // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PresenceSeperatorThickness;                        // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipMargin;                                   // 0x198(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipPresenceMargin;                           // 0x1A8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipSeperatorMargin;                          // 0x1B8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ToolTipMargin;                                     // 0x1C8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TipStatusMargin;                                   // 0x1D8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               AddButtonMargin;                                   // 0x1E8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             AddButtonSpacing;                                  // 0x1F8(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2870 (0x2870 - 0x0)
// ScriptStruct SocialTypes.SocialListStyle
struct FSocialListStyle
{
public:
	struct FButtonStyle                          GlobalChatButtonStyle;                             // 0x0(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GlobalChatIcon;                                    // 0x2A8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          FriendItemButtonStyle;                             // 0x338(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ConfirmButtonStyle;                                // 0x5E0(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CancelButtonStyle;                                 // 0x888(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonContentColor;                                // 0xB30(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonHoverContentColor;                           // 0xB58(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActionMenuArrowBrush;                              // 0xB80(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActionMenuArrowRightBrush;                         // 0xC10(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ActionMenuBackgroundColor;                         // 0xCA0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ToolTipArrowBrush;                                 // 0xCC8(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          BackButtonStyle;                                   // 0xD58(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          HeaderButtonStyle;                                 // 0x1000(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          FriendListActionButtonStyle;                       // 0x12A8(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AddFriendButtonContentBrush;                       // 0x1550(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           StatusIconBrush;                                   // 0x15E0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PCIconBrush;                                       // 0x1670(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ConsoleIconBrush;                                  // 0x1700(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EpicIconBrush;                                     // 0x1790(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendImageBrush;                                  // 0x1820(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OfflineBrush;                                      // 0x18B0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OnlineBrush;                                       // 0x1940(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AwayBrush;                                         // 0x19D0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SpectateBrush;                                     // 0x1A60(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendsContainerBackground;                        // 0x1AF0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendsListBackground;                             // 0x1B80(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 AddFriendEditableTextStyle;                        // 0x1C10(0x870)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackBrush;                                         // 0x2480(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedOptionBrush;                               // 0x2510(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SettingsBrush;                                     // 0x25A0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SeperatorBrush;                                    // 0x2630(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PresenceSeperatorBrush;                            // 0x26C0(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FontSizeBrush;                                     // 0x2750(0x90)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SearchBrush;                                       // 0x27E0(0x90)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SocialTypes.ProfanityData
struct FProfanityData
{
public:
	class FString                                CountryCode;                                       // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfanityList;                                     // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WhiteList;                                         // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAdd;                                          // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_242D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SocialTypes.SocialSoundSchema
struct FSocialSoundSchema
{
public:
	struct FSlateSound                           MessageReceivedSound;                              // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PartyInviteReceivedSound;                          // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           FriendInviteReceivedSound;                         // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x6DE0 (0x6DE0 - 0x0)
// ScriptStruct SocialTypes.SocialStyle
struct FSocialStyle
{
public:
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x0(0x518)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ActionButtonStyle;                                 // 0x518(0x2A8)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      SmallFontStyle;                                    // 0x7C0(0x2A0)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      NormalFontStyle;                                   // 0xA60(0x2A0)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      LargeFontStyle;                                    // 0xD00(0x2A0)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      ChatFontStyle;                                     // 0xFA0(0x2A0)(Edit, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        CheckBoxStyle;                                     // 0x1240(0x5E0)(Edit, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        RadioBoxStyle;                                     // 0x1820(0x5E0)(Edit, NativeAccessSpecifierPublic)
	struct FSocialListStyle                      SocialListStyle;                                   // 0x1E00(0x2870)(Edit, NativeAccessSpecifierPublic)
	struct FSocialListMargins                    SocialListMargins;                                 // 0x4670(0x200)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatStyle                            ChatStyle;                                         // 0x4870(0x1490)(Edit, NativeAccessSpecifierPublic)
	struct FChatColorScheme                      ChatColorScheme;                                   // 0x5D00(0x120)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatChromeStyle                      ChatChromeStyle;                                   // 0x5E20(0x850)(Edit, NativeAccessSpecifierPublic)
	struct FChatChromeMargins                    ChatChromeMargins;                                 // 0x6670(0x64)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatChromeColorScheme                ChatChromeColorScheme;                             // 0x66D4(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_242E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChatMarkupStyle                      ChatMarkupStyle;                                   // 0x6728(0x670)(Edit, NativeAccessSpecifierPublic)
	struct FSocialSoundSchema                    SoundSchema;                                       // 0x6D98(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
