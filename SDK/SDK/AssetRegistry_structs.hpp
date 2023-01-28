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

// 0x28 (0x28 - 0x0)
// ScriptStruct AssetRegistry.AssetBundleEntry
struct FAssetBundleEntry
{
public:
	struct FPrimaryAssetId                       BundleScope;                                       // 0x0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BundleName;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStringAssetReference>         BundleAssets;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AssetRegistry.AssetBundleData
struct FAssetBundleData
{
public:
	TArray<struct FAssetBundleEntry>             Bundles;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
