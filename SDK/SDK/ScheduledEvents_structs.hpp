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

// 0x18 (0x18 - 0x0)
// ScriptStruct ScheduledEvents.EventRecord
struct FEventRecord
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ActiveUntil;                                       // 0x10(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ScheduledEvents.EventChannelState
struct FEventChannelState
{
public:
	struct FDateTime                             ValidFrom;                                         // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventRecord>                  ActiveEvents;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    State;                                             // 0x18(0x20)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ScheduledEvents.EventsTimeline
struct FEventsTimeline
{
public:
	struct FDateTime                             CacheExpire;                                       // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventChannelState>            States;                                            // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ScheduledEvents.CalendarDownload
struct FCalendarDownload
{
public:
	struct FDateTime                             CurrentTime;                                       // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FEventsTimeline>  Channels;                                          // 0x8(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
