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

enum class ETouchIndex : uint8
{
	Touch1                         = 0,
	Touch2                         = 1,
	Touch3                         = 2,
	Touch4                         = 3,
	Touch5                         = 4,
	Touch6                         = 5,
	Touch7                         = 6,
	Touch8                         = 7,
	Touch9                         = 8,
	Touch10                        = 9,
	ETouchIndex_MAX                = 10,
};

enum class ETouchType : uint8
{
	Began                          = 0,
	Moved                          = 1,
	Stationary                     = 2,
	Ended                          = 3,
	NumTypes                       = 4,
	ETouchType_MAX                 = 5,
};

enum class EConsoleForGamepadLabels : uint8
{
	None                           = 0,
	XBoxOne                        = 1,
	PS4                            = 2,
	EConsoleForGamepadLabels_MAX   = 3,
};

enum class EControllerHand : uint8
{
	Left                           = 0,
	Right                          = 1,
	Pad                            = 2,
	ExternalCamera                 = 3,
	Gun                            = 4,
	Special_1                      = 5,
	Special_2                      = 6,
	Special_3                      = 7,
	Special_4                      = 8,
	Special_5                      = 9,
	Special_6                      = 10,
	Special_7                      = 11,
	Special_8                      = 12,
	Special_9                      = 13,
	EControllerHand_MAX            = 14,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct InputCore.Key
struct FKey
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B95[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
