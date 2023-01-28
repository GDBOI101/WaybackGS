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

enum class EBeaconConnectionState : uint8
{
	Invalid                        = 0,
	Closed                         = 1,
	Pending                        = 2,
	Open                           = 3,
	EBeaconConnectionState_MAX     = 4,
};

enum class EPartyReservationResult : uint8
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	PartyLimitReached              = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_Banned       = 10,
	ReservationRequestCanceled     = 11,
	ReservationInvalid             = 12,
	BadSessionId                   = 13,
	ReservationDenied_ContainsExistingPlayers = 14,
	EPartyReservationResult_MAX    = 15,
};

enum class EClientRequestType : uint8
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	EClientRequestType_MAX         = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xB8 - 0x0)
// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
struct FBlueprintSessionResult
{
public:
	uint8                                        Pad_1B70[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PlayerReservation
struct FPlayerReservation
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x0(0x18)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValidationStr;                                     // 0x18(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ElapsedTime;                                       // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B71[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PartyReservation
struct FPartyReservation
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      PartyLeader;                                       // 0x8(0x18)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>            PartyMembers;                                      // 0x20(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
struct FPIELoginSettingsInternal
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Token;                                             // 0x10(0x10)(Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Type;                                              // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                TokenBytes;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
