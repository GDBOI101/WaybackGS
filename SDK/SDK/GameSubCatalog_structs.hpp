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

enum class ECatalogRequirementType : uint8
{
	RequireFulfillment             = 0,
	DenyOnFulfillment              = 1,
	RequireItemOwnership           = 2,
	DenyOnItemOwnership            = 3,
	ECatalogRequirementType_MAX    = 4,
};

enum class ECatalogOfferType : uint8
{
	StaticPrice                    = 0,
	DynamicBundle                  = 1,
	ECatalogOfferType_MAX          = 2,
};

enum class ECatalogSaleType : uint8
{
	NotOnSale                      = 0,
	UndecoratedNewPrice            = 1,
	AmountOff                      = 2,
	PercentOff                     = 3,
	PercentOn                      = 4,
	Strikethrough                  = 5,
	MAX                            = 6,
	ECatalogSaleType_MAX           = 7,
};

enum class EAppStore : uint8
{
	DebugStore                     = 0,
	EpicPurchasingService          = 1,
	IOSAppStore                    = 2,
	WeChatAppStore                 = 3,
	GooglePlayAppStore             = 4,
	KindleStore                    = 5,
	PlayStationStore               = 6,
	XboxLiveStore                  = 7,
	MAX                            = 8,
	EAppStore_MAX                  = 9,
};

enum class EStoreCurrencyType : uint8
{
	RealMoney                      = 0,
	MtxCurrency                    = 1,
	GameItem                       = 2,
	Other                          = 3,
	MAX                            = 4,
	EStoreCurrencyType_MAX         = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct GameSubCatalog.CatalogPurchaseNotification
struct FCatalogPurchaseNotification
{
public:
	struct FMcpLootResult                        LootResult;                                        // 0x0(0x20)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameSubCatalog.CatalogKeyValue
struct FCatalogKeyValue
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GameSubCatalog.ItemQuantity
struct FItemQuantity
{
public:
	class FString                                TemplateId;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_238B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FJsonObjectWrapper                    Attributes;                                        // 0x18(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GameSubCatalog.CatalogDynamicBundleItem
struct FCatalogDynamicBundleItem
{
public:
	struct FItemQuantity                         Item;                                              // 0x0(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bCanOwnMultiple;                                   // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_238C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RegularPrice;                                      // 0x3C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DiscountedPrice;                                   // 0x40(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AlreadyOwnedPriceReduction;                        // 0x44(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x48(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x60(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameSubCatalog.CatalogDynamicBundle
struct FCatalogDynamicBundle
{
public:
	int32                                        BasePrice;                                         // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStoreCurrencyType                CurrencyType;                                      // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_238D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencySubType;                                   // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECatalogSaleType                  DisplayType;                                       // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_238E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCatalogDynamicBundleItem>     BundleItems;                                       // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameSubCatalog.CatalogItemPrice
struct FCatalogItemPrice
{
public:
	enum class EStoreCurrencyType                CurrencyType;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_238F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencySubType;                                   // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RegularPrice;                                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FinalPrice;                                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PriceTextOverride;                                 // 0x20(0x18)(NativeAccessSpecifierPublic)
	enum class ECatalogSaleType                  SaleType;                                          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2390[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             SaleExpiration;                                    // 0x40(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameSubCatalog.CatalogMetaAssetInfo
struct FCatalogMetaAssetInfo
{
public:
	class FString                                StructName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Payload;                                           // 0x10(0x20)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameSubCatalog.CatalogOfferRequirement
struct FCatalogOfferRequirement
{
public:
	enum class ECatalogRequirementType           RequirementType;                                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2391[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinQuantity;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RequiredId;                                        // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// ScriptStruct GameSubCatalog.CatalogOffer
struct FCatalogOffer
{
public:
	class FString                                OfferId;                                           // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCatalogKeyValue>              MetaInfo;                                          // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ECatalogOfferType                 OfferType;                                         // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2392[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCatalogItemPrice>             Prices;                                            // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCatalogDynamicBundle                 DynamicBundleInfo;                                 // 0x38(0x30)(Edit, NativeAccessSpecifierPublic)
	int32                                        DailyLimit;                                        // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WeeklyLimit;                                       // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Categories;                                        // 0x70(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                CatalogGroup;                                      // 0x80(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CatalogGroupPriority;                              // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortPriority;                                      // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x98(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ShortDescription;                                  // 0xB0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0xC8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FString                                AppStoreId;                                        // 0xE0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2393[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCatalogMetaAssetInfo                 MetaAssetInfo;                                     // 0x160(0x30)(NativeAccessSpecifierPublic)
	class FString                                DisplayAssetPath;                                  // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemQuantity>                 ItemGrants;                                        // 0x1A0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCatalogOfferRequirement>      Requirements;                                      // 0x1B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        DenyItemTemplateIds;                               // 0x1C0(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameSubCatalog.Storefront
struct FStorefront
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCatalogOffer>                 CatalogEntries;                                    // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameSubCatalog.CatalogDownload
struct FCatalogDownload
{
public:
	int32                                        RefreshIntervalHrs;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DailyPurchaseHrs;                                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Expiration;                                        // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStorefront>                   Storefronts;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameSubCatalog.CatalogItemSalePrice
struct FCatalogItemSalePrice
{
public:
	int32                                        SalePrice;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECatalogSaleType                  SaleType;                                          // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2394[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             StartTime;                                         // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             EndTime;                                           // 0x10(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameSubCatalog.CatalogPurchaseInfo
struct FCatalogPurchaseInfo
{
public:
	class FString                                OfferId;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurchaseQuantity;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStoreCurrencyType                Currency;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2395[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencySubType;                                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExpectedPrice;                                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2396[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameSubCatalog.CatalogReceiptInfo
struct FCatalogReceiptInfo
{
public:
	enum class EAppStore                         AppStore;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2397[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AppStoreId;                                        // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiptId;                                         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiptInfo;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PurchaseCorrelationId;                             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
