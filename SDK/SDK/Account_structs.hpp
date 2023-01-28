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

enum class ECreateAccountResult : uint8
{
	NotStarted                     = 0,
	Pending                        = 1,
	Success                        = 2,
	Console_LoginFailed            = 3,
	Console_DuplicateAuthAssociation = 4,
	DuplicateAccount               = 5,
	GenericError                   = 6,
	ECreateAccountResult_MAX       = 7,
};

enum class ELoginResult : uint8
{
	NotStarted                     = 0,
	Pending                        = 1,
	Success                        = 2,
	Console_LoginFailed            = 3,
	Console_AuthFailed             = 4,
	Console_MissingAuthAssociation = 5,
	Console_DuplicateAuthAssociation = 6,
	Console_AddedAuthAssociation   = 7,
	Console_AuthAssociationFailure = 8,
	Console_NotEntitled            = 9,
	Console_EntitlementCheckFailed = 10,
	Console_PrivilegeCheck         = 11,
	Console_PatchOrUpdateRequired  = 12,
	AuthFailed                     = 13,
	PlatformNotAllowed             = 14,
	NotEntitled                    = 15,
	Banned                         = 16,
	EULACheckFailed                = 17,
	ServiceUnavailable             = 18,
	GenericError                   = 19,
	RejoinCheckFailure             = 20,
	ConnectionFailed               = 21,
	FailedToCreateParty            = 22,
	ProfileQueryFailed             = 23,
	ClientSettingsDownloadFailed   = 24,
	ELoginResult_MAX               = 25,
};

enum class EConsoleAuthLinkState : uint8
{
	NotOnConsole                   = 0,
	ConsoleNotLoggedIn             = 1,
	EpicNotLoggedIn                = 2,
	ThisEpicAccountLinked          = 3,
	OtherEpicAccountLinked         = 4,
	NoEpicAccountLinked            = 5,
	EConsoleAuthLinkState_MAX      = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct Account.WebEnvUrl
struct FWebEnvUrl
{
public:
	class FString                                URL;                                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RedirectUrl;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Environment;                                       // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Account.GiftMessage
struct FGiftMessage
{
public:
	class FString                                GiftCode;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SenderName;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Account.ExchangeAccessParams
struct FExchangeAccessParams
{
public:
	class FString                                EntitlementId;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiptId;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VendorReceipt;                                     // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppStore;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct Account.OnlineAccountTexts_FailedLoginConsole
struct FOnlineAccountTexts_FailedLoginConsole
{
public:
	class FText                                  AgeRestriction;                                    // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Generic;                                           // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  MissingAuthAssociation;                            // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  NeedPremiumAccount;                                // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  OnlinePlayRestriction;                             // 0x60(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PatchAvailable;                                    // 0x78(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PleaseSignIn;                                      // 0x90(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  SystemUpdateAvailable;                             // 0xA8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UI;                                                // 0xC0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnableToComplete;                                  // 0xD8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnableToSignIn;                                    // 0xF0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnableToStartPrivCheck;                            // 0x108(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnexpectedError;                                   // 0x120(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x7B0 (0x7B0 - 0x0)
// ScriptStruct Account.OnlineAccountTexts
struct FOnlineAccountTexts
{
public:
	class FText                                  AllGiftCodesUsed;                                  // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  AssociateConsoleAuth;                              // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  AutoLoginFailed;                                   // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  BannedFromGame;                                    // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CheckEntitledToPlay;                               // 0x60(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CheckingRejoin;                                    // 0x78(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CheckServiceAvailability;                          // 0x90(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ConsolePrivileges;                                 // 0xA8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CreateAccountCompleted;                            // 0xC0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CreateAccountFailure;                              // 0xD8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CreateHeadless;                                    // 0xF0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DoQosPingTests;                                    // 0x108(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DowntimeMinutesWarningText;                        // 0x120(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DowntimeSecondsWarningText;                        // 0x138(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DuplicateAuthAssociaton;                           // 0x150(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  EulaCheck;                                         // 0x168(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ExchangeConsoleGiftsForAccess;                     // 0x180(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ExchangeConsolePurchaseForAccess;                  // 0x198(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedAccountCreate;                               // 0x1B0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedEulaCheck_EulaAcceptanceFailed;              // 0x1C8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedEulaCheck_MustAcceptEula;                    // 0x1E0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginCredentialsMsg;                         // 0x1F8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginLockoutMsg;                             // 0x210(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginMsg;                                    // 0x228(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginTencent_UnableToSignIn;                 // 0x240(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedStartLogin;                                  // 0x258(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FounderChatExitedText;                             // 0x270(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FounderChatJoinedText;                             // 0x288(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  GameDisplayName;                                   // 0x2A0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  GeneralLoginFailure;                               // 0x2B8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  GlobalChatExitedText;                              // 0x2D0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  GlobalChatJoinedText;                              // 0x2E8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  HeadlessAccountFailed;                             // 0x300(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  InMatchShutdownTimeWarningText;                    // 0x318(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  InvalidUser;                                       // 0x330(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggedOutofMCP;                                    // 0x348(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DisconnectedFromMCP;                               // 0x360(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggedOutReturnedToTitle;                          // 0x378(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggedOutSwitchedProfile;                          // 0x390(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggingIn;                                         // 0x3A8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggingInConsoleAuth;                              // 0x3C0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggingOut;                                        // 0x3D8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoginConsole;                                      // 0x3F0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoginFailure;                                      // 0x408(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Logout_Unlink;                                     // 0x420(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LogoutCompleted;                                   // 0x438(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LostConnection;                                    // 0x450(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  MCPTimeout;                                        // 0x468(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  NoPlayEntitlement;                                 // 0x480(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  NoServerAccess;                                    // 0x498(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PlayAccessRevoked;                                 // 0x4B0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PremiumAccountName_Default;                        // 0x4C8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PremiumAccountName_PS4;                            // 0x4E0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PremiumAccountName_Switch;                         // 0x4F8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PremiumAccountName_XboxOne;                        // 0x510(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  RedeemOfflinePurchases;                            // 0x528(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ServiceDowntime;                                   // 0x540(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  SignInCompleting;                                  // 0x558(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  SignIntoConsoleServices;                           // 0x570(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  TokenExpired;                                      // 0x588(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnableToConnect;                                   // 0x5A0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnableToJoinWaitingRoomLoginQueue;                 // 0x5B8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnexpectedConsoleAuthFailure;                      // 0x5D0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnlinkConsoleFailed;                               // 0x5E8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UserLoginFailed;                                   // 0x600(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  WaitingRoom;                                       // 0x618(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  WaitingRoomError;                                  // 0x630(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  WaitingRoomFailure;                                // 0x648(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  WaitingRoomWaiting;                                // 0x660(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FOnlineAccountTexts_FailedLoginConsole FailedLoginConsole;                                // 0x678(0x138)(Edit, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
