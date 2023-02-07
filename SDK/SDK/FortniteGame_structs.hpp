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

enum class EFortAIDirectorEvent : uint8
{
	PlayerAIEnemies                = 0,
	PlayerTakeDamage               = 1,
	PlayerHealth                   = 2,
	PlayerDeath                    = 3,
	PlayerLookAtAIEnemy            = 4,
	PlayerDamageAIEnemy            = 5,
	PlayerKillAIEnemy              = 6,
	PlayerHealingPotential         = 7,
	PlayerAmmoLight                = 8,
	PlayerAmmoMedium               = 9,
	PlayerAmmoHeavy                = 10,
	PlayerAmmoShells               = 11,
	PlayerAmmoEnergy               = 12,
	PlayerAINear                   = 13,
	PlayerMovement                 = 14,
	ObjectiveTakeDamage            = 15,
	ObjectiveHealth                = 16,
	ObjectiveDestroyed             = 17,
	TrapFired                      = 18,
	TrapDamagedAIEnemy             = 19,
	ObjectivePathCost              = 20,
	PlayerPathCost                 = 21,
	ObjectiveNearbyBuildingDamaged = 22,
	Max_None                       = 23,
	EFortAIDirectorEvent_MAX       = 24,
};

enum class EKeepDefenseState : uint8
{
	Inactive                       = 0,
	Warmup                         = 1,
	Defense                        = 2,
	LastAlive                      = 3,
	Max                            = 4,
	EKeepDefenseState_MAX          = 5,
};

enum class EFortDayPhase : uint8
{
	Morning                        = 0,
	Day                            = 1,
	Evening                        = 2,
	Night                          = 3,
	NumPhases                      = 4,
	EFortDayPhase_MAX              = 5,
};

enum class EFortInventoryType : uint8
{
	World                          = 0,
	Account                        = 1,
	Outpost                        = 2,
	MAX                            = 3,
	EFortInventoryType_MAX         = 4,
};

enum class EOfferPurchaseError : uint8
{
	NoError                        = 0,
	PendingServerConfirmation      = 1,
	CannotAffordItem               = 2,
	InvalidOfferID                 = 3,
	InvalidPriceIndex              = 4,
	NoneLeft                       = 5,
	PurchaseAlreadyPending         = 6,
	NoConnection                   = 7,
	EOfferPurchaseError_MAX        = 8,
};

enum class EFortAlteration : uint8
{
	AttributeSlot                  = 0,
	GameplaySlot                   = 1,
	ComplexCosmeticSlot            = 2,
	ColorSlot                      = 3,
	HeroSpecializationTier1Slot    = 4,
	HeroSpecializationTier2Slot    = 5,
	HeroSpecializationTier3Slot    = 6,
	HeroSpecializationTier4Slot    = 7,
	HeroSpecializationTier5Slot    = 8,
	EFortAlteration_MAX            = 9,
};

enum class EFortItemType : uint8
{
	WorldItem                      = 0,
	Ammo                           = 1,
	Badge                          = 2,
	BackpackPickup                 = 3,
	BuildingPiece                  = 4,
	CharacterPart                  = 5,
	Consumable                     = 6,
	Deco                           = 7,
	EditTool                       = 8,
	Ingredient                     = 9,
	Food                           = 10,
	Gadget                         = 11,
	HomebaseGadget                 = 12,
	HeroAbility                    = 13,
	MissionItem                    = 14,
	Trap                           = 15,
	Weapon                         = 16,
	WeaponMelee                    = 17,
	WeaponRanged                   = 18,
	WeaponHarvest                  = 19,
	WorldResource                  = 20,
	AccountItem                    = 21,
	AccountResource                = 22,
	CollectedResource              = 23,
	Alteration                     = 24,
	CardPack                       = 25,
	CharacterCosmetic              = 26,
	Currency                       = 27,
	Hero                           = 28,
	Schematic                      = 29,
	Worker                         = 30,
	Token                          = 31,
	DailyRewardScheduleToken       = 32,
	CodeToken                      = 33,
	Buff                           = 34,
	BuffCredit                     = 35,
	Quest                          = 36,
	Compendium                     = 37,
	CompendiumBundle               = 38,
	GameplayModifier               = 39,
	Outpost                        = 40,
	HomebaseNode                   = 41,
	Defender                       = 42,
	ConversionControl              = 43,
	DeployableBaseCloudSave        = 44,
	ConsumableAccountItem          = 45,
	Quota                          = 46,
	Expedition                     = 47,
	HomebaseBannerIcon             = 48,
	HomebaseBannerColor            = 49,
	AthenaGlider                   = 50,
	AthenaPickaxe                  = 51,
	AthenaHat                      = 52,
	AthenaBackpack                 = 53,
	AthenaCharacter                = 54,
	AthenaDance                    = 55,
	AthenaConsumableEmote          = 56,
	AthenaLoadingScreen            = 57,
	AthenaBattleBus                = 58,
	AthenaVictoryPose              = 59,
	AthenaMedal                    = 60,
	SpecialItem                    = 61,
	Emote                          = 62,
	Stack                          = 63,
	CollectionBookPage             = 64,
	Profile                        = 65,
	Max_None                       = 66,
	EFortItemType_MAX              = 67,
};

enum class EFortTeam : uint8
{
	HumanCampaign                  = 0,
	Monster                        = 1,
	HumanPvP_Team1                 = 2,
	HumanPvP_Team2                 = 3,
	HumanPvP_Team3                 = 4,
	HumanPvP_Team4                 = 5,
	HumanPvP_Team5                 = 6,
	HumanPvP_Team6                 = 7,
	HumanPvP_Team7                 = 8,
	HumanPvP_Team8                 = 9,
	HumanPvP_Team9                 = 10,
	HumanPvP_Team10                = 11,
	HumanPvP_Team11                = 12,
	HumanPvP_Team12                = 13,
	HumanPvP_Team13                = 14,
	HumanPvP_Team14                = 15,
	HumanPvP_Team15                = 16,
	HumanPvP_Team16                = 17,
	HumanPvP_Team17                = 18,
	HumanPvP_Team18                = 19,
	HumanPvP_Team19                = 20,
	HumanPvP_Team20                = 21,
	HumanPvP_Team21                = 22,
	HumanPvP_Team22                = 23,
	HumanPvP_Team23                = 24,
	HumanPvP_Team24                = 25,
	HumanPvP_Team25                = 26,
	HumanPvP_Team26                = 27,
	HumanPvP_Team27                = 28,
	HumanPvP_Team28                = 29,
	HumanPvP_Team29                = 30,
	HumanPvP_Team30                = 31,
	HumanPvP_Team31                = 32,
	HumanPvP_Team32                = 33,
	HumanPvP_Team33                = 34,
	HumanPvP_Team34                = 35,
	HumanPvP_Team35                = 36,
	HumanPvP_Team36                = 37,
	HumanPvP_Team37                = 38,
	HumanPvP_Team38                = 39,
	HumanPvP_Team39                = 40,
	HumanPvP_Team40                = 41,
	HumanPvP_Team41                = 42,
	HumanPvP_Team42                = 43,
	HumanPvP_Team43                = 44,
	HumanPvP_Team44                = 45,
	HumanPvP_Team45                = 46,
	HumanPvP_Team46                = 47,
	HumanPvP_Team47                = 48,
	HumanPvP_Team48                = 49,
	HumanPvP_Team49                = 50,
	HumanPvP_Team50                = 51,
	HumanPvP_Team51                = 52,
	HumanPvP_Team52                = 53,
	HumanPvP_Team53                = 54,
	HumanPvP_Team54                = 55,
	HumanPvP_Team55                = 56,
	HumanPvP_Team56                = 57,
	HumanPvP_Team57                = 58,
	HumanPvP_Team58                = 59,
	HumanPvP_Team59                = 60,
	HumanPvP_Team60                = 61,
	HumanPvP_Team61                = 62,
	HumanPvP_Team62                = 63,
	HumanPvP_Team63                = 64,
	HumanPvP_Team64                = 65,
	HumanPvP_Team65                = 66,
	HumanPvP_Team66                = 67,
	HumanPvP_Team67                = 68,
	HumanPvP_Team68                = 69,
	HumanPvP_Team69                = 70,
	HumanPvP_Team70                = 71,
	HumanPvP_Team71                = 72,
	HumanPvP_Team72                = 73,
	HumanPvP_Team73                = 74,
	HumanPvP_Team74                = 75,
	HumanPvP_Team75                = 76,
	HumanPvP_Team76                = 77,
	HumanPvP_Team77                = 78,
	HumanPvP_Team78                = 79,
	HumanPvP_Team79                = 80,
	HumanPvP_Team80                = 81,
	HumanPvP_Team81                = 82,
	HumanPvP_Team82                = 83,
	HumanPvP_Team83                = 84,
	HumanPvP_Team84                = 85,
	HumanPvP_Team85                = 86,
	HumanPvP_Team86                = 87,
	HumanPvP_Team87                = 88,
	HumanPvP_Team88                = 89,
	HumanPvP_Team89                = 90,
	HumanPvP_Team90                = 91,
	HumanPvP_Team91                = 92,
	HumanPvP_Team92                = 93,
	HumanPvP_Team93                = 94,
	HumanPvP_Team94                = 95,
	HumanPvP_Team95                = 96,
	HumanPvP_Team96                = 97,
	HumanPvP_Team97                = 98,
	HumanPvP_Team98                = 99,
	HumanPvP_Team99                = 100,
	HumanPvP_Team100               = 101,
	HumanPvP_Team101               = 102,
	Spectator                      = 103,
	MAX                            = 104,
	EFortTeam_MAX                  = 105,
};

enum class EFortCustomPartType : uint8
{
	Head                           = 0,
	Body                           = 1,
	Hat                            = 2,
	Backpack                       = 3,
	Charm                          = 4,
	Face                           = 5,
	NumTypes                       = 6,
	EFortCustomPartType_MAX        = 7,
};

enum class EFortReportDayPhase : uint8
{
	Dawn                           = 0,
	Dusk                           = 1,
	ZoneFinished                   = 2,
	PlayerLogout                   = 3,
	EFortReportDayPhase_MAX        = 4,
};

enum class EAthenaGamePhase : uint8
{
	None                           = 0,
	Setup                          = 1,
	Warmup                         = 2,
	Aircraft                       = 3,
	SafeZones                      = 4,
	EndGame                        = 5,
	EAthenaGamePhase_MAX           = 6,
};

enum class EAthenaGamePhaseStep : uint8
{
	None                           = 0,
	Setup                          = 1,
	Warmup                         = 2,
	GetReady                       = 3,
	BusLocked                      = 4,
	BusFlying                      = 5,
	StormForming                   = 6,
	StormHolding                   = 7,
	StormShrinking                 = 8,
	EndGame                        = 9,
	EAthenaGamePhaseStep_MAX       = 10,
};

enum class ECaptureState : uint8
{
	CS_Idle                        = 0,
	CS_Capturing                   = 1,
	CS_Contested                   = 2,
	CS_Resetting                   = 3,
	CS_Captured                    = 4,
	CS_Reset                       = 5,
	CS_MAX                         = 6,
};

enum class EFOBIOStatus : uint8
{
	Saving                         = 0,
	Loading                        = 1,
	Free                           = 2,
	EFOBIOStatus_MAX               = 3,
};

enum class ECollectionBookRewardType : uint8
{
	Uninitialized                  = 0,
	Book                           = 1,
	Page                           = 2,
	Section                        = 3,
	ECollectionBookRewardType_MAX  = 4,
};

enum class EFortObjectiveStatus : uint8
{
	Created                        = 0,
	InProgress                     = 1,
	Succeeded                      = 2,
	Failed                         = 3,
	NeutralCompletion              = 4,
	Max_None                       = 5,
	EFortObjectiveStatus_MAX       = 6,
};

enum class EFortMissionVisibilityOverride : uint8
{
	Visible                        = 0,
	Invisible                      = 1,
	Max_None                       = 2,
	EFortMissionVisibilityOverride_MAX = 3,
};

enum class EFortPrototypingStatus : uint8
{
	Unknown                        = 0,
	Disabled                       = 1,
	Enabled                        = 2,
	EFortPrototypingStatus_MAX     = 3,
};

enum class EMatchmakingCompleteResult : uint8
{
	NotStarted                     = 0,
	UpdateNeeded                   = 1,
	OutpostNotFound                = 2,
	Cancelled                      = 3,
	NoResults                      = 4,
	Failure                        = 5,
	CreateFailure                  = 6,
	Success                        = 7,
	EMatchmakingCompleteResult_MAX = 8,
};

enum class EMatchmakingState : uint8
{
	NotMatchmaking                 = 0,
	CancelingMatchmaking           = 1,
	ReleasingLock                  = 2,
	AcquiringLock                  = 3,
	LockAcquistionFailure          = 4,
	FindingEmptyServer             = 5,
	FindingExistingSession         = 6,
	TestingEmptyServers            = 7,
	TestingExistingSessions        = 8,
	JoiningExistingSession         = 9,
	NoMatchesAvailable             = 10,
	CleaningUpExisting             = 11,
	HandlingFailure                = 12,
	JoinSuccess                    = 13,
	EMatchmakingState_MAX          = 14,
};

enum class EFortPartyRestriction : uint8
{
	Invalid                        = 0,
	PartyCreatePending             = 1,
	AlreadyInParty                 = 2,
	PartyFull                      = 3,
	GameFull                       = 4,
	Private                        = 5,
	CurrentlyNotAvailable          = 6,
	NotPlayingThisGame             = 7,
	GameModeRestricted             = 8,
	Max                            = 9,
	EFortPartyRestriction_MAX      = 10,
};

enum class EFortFriendRequestStatus : uint8
{
	None                           = 0,
	Accepted                       = 1,
	PendingReceived                = 2,
	PendingSent                    = 3,
	EFortFriendRequestStatus_MAX   = 4,
};

enum class EFortPartyMemberLocation : uint8
{
	PreLobby                       = 0,
	ConnectingToLobby              = 1,
	Lobby                          = 2,
	JoiningGame                    = 3,
	ProcessingRejoin               = 4,
	InGame                         = 5,
	ReturningToFrontEnd            = 6,
	EFortPartyMemberLocation_MAX   = 7,
};

enum class EFortAthenaPlaylist : uint8
{
	AthenaSolo                     = 0,
	AthenaDuo                      = 1,
	AthenaSquad                    = 2,
	AthenaFiftyFifty               = 3,
	EFortAthenaPlaylist_MAX        = 4,
};

enum class EFortPartyState : uint8
{
	Undetermined                   = 0,
	WorldView                      = 1,
	TheaterView                    = 2,
	Matchmaking                    = 3,
	PostMatchmaking                = 4,
	ReturningToFrontEnd            = 5,
	BattleRoyaleView               = 6,
	BattleRoyalePreloading         = 7,
	BattleRoyaleMatchmaking        = 8,
	BattleRoyalePostMatchmaking    = 9,
	EFortPartyState_MAX            = 10,
};

enum class EFortPartyMemberDisplayState : uint8
{
	Open                           = 0,
	Connecting                     = 1,
	Connected                      = 2,
	Max                            = 3,
	EFortPartyMemberDisplayState_MAX = 4,
};

enum class EFortPartyTransition : uint8
{
	Idle                           = 0,
	Joining                        = 1,
	Leaving                        = 2,
	Max                            = 3,
	EFortPartyTransition_MAX       = 4,
};

enum class EFortSocialItemHeaderType : uint8
{
	PartyInvites                   = 0,
	Friends                        = 1,
	None                           = 2,
	EFortSocialItemHeaderType_MAX  = 3,
};

enum class EFortDialogFeedbackType : uint8
{
	FriendRequestSent              = 0,
	FriendRequestReceived          = 1,
	FriendRequestAccepted          = 2,
	Default                        = 3,
	EFortDialogFeedbackType_MAX    = 4,
};

enum class EFortEncounterDirection : uint8
{
	North                          = 0,
	NorthEast                      = 1,
	East                           = 2,
	SouthEast                      = 3,
	South                          = 4,
	SouthWest                      = 5,
	West                           = 6,
	NorthWest                      = 7,
	Max_None                       = 8,
	EFortEncounterDirection_MAX    = 9,
};

enum class EAIHotSpotSlot : uint8
{
	Free                           = 0,
	Claimed                        = 1,
	Occupied                       = 2,
	Blocked                        = 3,
	Disabled                       = 4,
	EAIHotSpotSlot_MAX             = 5,
};

enum class EAIHotSpotAssignmentFilter : uint8
{
	All                            = 0,
	WithSlots                      = 1,
	WaitingList                    = 2,
	EAIHotSpotAssignmentFilter_MAX = 3,
};

enum class EAIHotSpotSlotFilter : uint8
{
	All                            = 0,
	AvailableOnly                  = 1,
	UnavailableOnly                = 2,
	EAIHotSpotSlotFilter_MAX       = 3,
};

enum class EFortGliderType : uint8
{
	Glider                         = 0,
	Umbrella                       = 1,
	EFortGliderType_MAX            = 2,
};

enum class EFortMissionAlertCategory : uint8
{
	General                        = 0,
	Storm                          = 1,
	Horde                          = 2,
	StormLow                       = 3,
	Halloween                      = 4,
	Total                          = 5,
	EFortMissionAlertCategory_MAX  = 6,
};

enum class EItemTileViewDisplayType : uint8
{
	World                          = 0,
	Outpost                        = 1,
	Account                        = 2,
	DeployableBase                 = 3,
	Max                            = 4,
	EItemTileViewDisplayType_MAX   = 5,
};

enum class EOutpostBuildings : uint8
{
	StormShield                    = 0,
	CraftingTable                  = 1,
	Fabricator                     = 2,
	HarvestingOptimizer            = 3,
	StorageVault                   = 4,
	POST                           = 5,
	EOutpostBuildings_MAX          = 6,
};

enum class EFortClientAnnouncementQueueType : uint8
{
	Toasts                         = 0,
	Stickies                       = 1,
	Max                            = 2,
	EFortClientAnnouncementQueueType_MAX = 3,
};

enum class EFortNotificationQueueType : uint8
{
	Toasts                         = 0,
	Stickies                       = 1,
	Messages                       = 2,
	Max                            = 3,
	EFortNotificationQueueType_MAX = 4,
};

enum class EFortDialogResult : uint8
{
	Confirmed                      = 0,
	Declined                       = 1,
	Ignored                        = 2,
	Killed                         = 3,
	TimedOut                       = 4,
	Unknown                        = 5,
	EFortDialogResult_MAX          = 6,
};

enum class EFortBangType : uint8
{
	Invalid                        = 0,
	Custom                         = 1,
	PlayTab                        = 2,
	HeroesTab                      = 3,
	VaultTab                       = 4,
	StoreTab                       = 5,
	FriendsButton                  = 6,
	PartyInviteButton              = 7,
	SubGameAccessChanged           = 8,
	DailyRewardsButton             = 9,
	QuestsButton                   = 10,
	CompletedExpeditions           = 11,
	MainMenu                       = 12,
	VaultSchematics                = 13,
	VaultLeadSurvivors             = 14,
	VaultSurvivors                 = 15,
	VaultHeroes                    = 16,
	VaultDefenders                 = 17,
	VaultResources                 = 18,
	VaultMelee                     = 19,
	VaultRanged                    = 20,
	VaultConsumables               = 21,
	VaultIngredients               = 22,
	VaultTraps                     = 23,
	PlayerBanners                  = 24,
	EFortBangType_MAX              = 25,
};

enum class EFortEventNameType : uint8
{
	Mission                        = 0,
	Client                         = 1,
	EFortEventNameType_MAX         = 2,
};

enum class EFortCraftFailCause : uint8
{
	Unknown                        = 0,
	NotEnoughResources             = 1,
	InventoryFull                  = 2,
	InsufficientTeamLevel          = 3,
	CraftingQueueFull              = 4,
	CurrentlyLocked                = 5,
	OverflowSchematic              = 6,
	EFortCraftFailCause_MAX        = 7,
};

enum class EKeepContainerType : uint8
{
	Base                           = 0,
	Storeroom                      = 1,
	FirstAid                       = 2,
	Armory                         = 3,
	Workshop                       = 4,
	AmmoStash                      = 5,
	Max                            = 6,
	EKeepContainerType_MAX         = 7,
};

enum class EFortIndicatorState : uint8
{
	Hidden                         = 0,
	OnlyFriendsVisible             = 1,
	Visible                        = 2,
	EFortIndicatorState_MAX        = 3,
};

enum class EReadyCheckState : uint8
{
	CheckStarted                   = 0,
	Ready                          = 1,
	NotReady                       = 2,
	EReadyCheckState_MAX           = 3,
};

enum class ERichPresenceStateChange : uint8
{
	AutoUpdate                     = 0,
	Idle                           = 1,
	Active                         = 2,
	Busy                           = 3,
	NotBusy                        = 4,
	ERichPresenceStateChange_MAX   = 5,
};

enum class EFortTeamAffiliation : uint8
{
	Friendly                       = 0,
	Neutral                        = 1,
	Hostile                        = 2,
	EFortTeamAffiliation_MAX       = 3,
};

enum class EFortAIUtility : uint8
{
	KillPlayersMelee               = 0,
	KillPlayersRanged              = 1,
	KillPlayersArtillery           = 2,
	DestroyBuildingsMelee          = 3,
	DestroyBuildingsRanged         = 4,
	DestroyBuildingsArtillery      = 5,
	DestroyTraps                   = 6,
	Tank                           = 7,
	Infiltrate                     = 8,
	Mob                            = 9,
	Support                        = 10,
	Kiting                         = 11,
	AreaOfDenial                   = 12,
	DisableTraps                   = 13,
	Dormant                        = 14,
	Assassin                       = 15,
	MAX                            = 16,
	EFortAIUtility_MAX             = 17,
};

enum class EFortTileEdgeType : uint8
{
	Undefined                      = 0,
	Outer_1                        = 1,
	Transition_2                   = 2,
	Inner_3                        = 3,
	Border_4                       = 4,
	BorderTransitionSingle_5       = 5,
	BorderTransitionDouble_6       = 6,
	MAX                            = 7,
	EFortTileEdgeType_MAX          = 8,
};

enum class EFortRequestedGameplayAction : uint8
{
	ContinuePlaying                = 0,
	StartPlaying                   = 1,
	StopPlaying                    = 2,
	EnterZone                      = 3,
	LeaveZone                      = 4,
	ReturnToMainMenu               = 5,
	QuitGame                       = 6,
	Invalid                        = 7,
	EFortRequestedGameplayAction_MAX = 8,
};

enum class EFortGameplayState : uint8
{
	NormalGameplay                 = 0,
	WaitingToStart                 = 1,
	EndOfZone                      = 2,
	EnteringZone                   = 3,
	LeavingZone                    = 4,
	Invalid                        = 5,
	EFortGameplayState_MAX         = 6,
};

enum class EFortMovementUrgency : uint8
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	NumLevels                      = 4,
	EFortMovementUrgency_MAX       = 5,
};

enum class EFortMovementStyle : uint8
{
	Running                        = 0,
	Walking                        = 1,
	Charging                       = 2,
	Sprinting                      = 3,
	EFortMovementStyle_MAX         = 4,
};

enum class EFortWeaponTriggerType : uint8
{
	OnPress                        = 0,
	Automatic                      = 1,
	OnRelease                      = 2,
	OnPressAndRelease              = 3,
	EFortWeaponTriggerType_MAX     = 4,
};

enum class EFortJumpStaminaCost : uint8
{
	None                           = 0,
	Trigger                        = 1,
	SprintTrigger                  = 2,
	SprintAir                      = 3,
	EFortJumpStaminaCost_MAX       = 4,
};

enum class EFortDayPhasePrio : uint8
{
	Default                        = 0,
	DailySummary                   = 1,
	EFortDayPhasePrio_MAX          = 2,
};

enum class EFortCustomBodyType : uint8
{
	Small                          = 1,
	Medium                         = 2,
	MediumAndSmall                 = 3,
	Large                          = 4,
	LargeAndSmall                  = 5,
	LargeAndMedium                 = 6,
	All                            = 7,
	Deprecated                     = 8,
	EFortCustomBodyType_MAX        = 9,
};

enum class EFortDisplayGender : uint8
{
	Unknown                        = 0,
	Male                           = 1,
	Female                         = 2,
	NumTypes                       = 3,
	EFortDisplayGender_MAX         = 4,
};

enum class EFortCustomGender : uint8
{
	Invalid                        = 0,
	Male                           = 1,
	Female                         = 2,
	Both                           = 3,
	EFortCustomGender_MAX          = 4,
};

enum class EFortCompletionResult : uint8
{
	Win                            = 0,
	Loss                           = 1,
	Draw                           = 2,
	Undefined                      = 3,
	EFortCompletionResult_MAX      = 4,
};

enum class EFortPvPGameResult : uint8
{
	Win                            = 0,
	Loss                           = 1,
	Draw                           = 2,
	EFortPvPGameResult_MAX         = 3,
};

enum class EFortItemTier : uint8
{
	No_Tier                        = 0,
	I                              = 1,
	II                             = 2,
	III                            = 3,
	IV                             = 4,
	V                              = 5,
	VI                             = 6,
	VII                            = 7,
	VIII                           = 8,
	IX                             = 9,
	X                              = 10,
	NumItemTierValues              = 11,
	EFortItemTier_MAX              = 12,
};

enum class EFortQuality : uint8
{
	Common                         = 0,
	Uncommon                       = 1,
	Rare                           = 2,
	NumQualityValues               = 3,
	EFortQuality_MAX               = 4,
};

enum class EFortRarity : uint8
{
	Handmade                       = 0,
	Ordinary                       = 1,
	Sturdy                         = 2,
	Quality                        = 3,
	Fine                           = 4,
	Elegant                        = 5,
	Masterwork                     = 6,
	Epic                           = 7,
	Badass                         = 8,
	Legendary                      = 9,
	NumRarityValues                = 10,
	EFortRarity_MAX                = 11,
};

enum class EFortTargetSelectionFilter : uint8
{
	Damageable                     = 0,
	Everything                     = 1,
	Pawns                          = 2,
	Buildings                      = 3,
	Walls                          = 4,
	Traps                          = 5,
	Players                        = 6,
	AIPawns                        = 7,
	Instigator                     = 8,
	WeakSpots                      = 9,
	World                          = 10,
	Max                            = 11,
	EFortTargetSelectionFilter_MAX = 12,
};

enum class EFortTargetSelectionTestType : uint8
{
	Overlap                        = 0,
	Swept                          = 1,
	Ballistic                      = 2,
	EFortTargetSelectionTestType_MAX = 3,
};

enum class EFortTargetSelectionShape : uint8
{
	Sphere                         = 0,
	Cone                           = 1,
	Box                            = 2,
	Capsule                        = 3,
	Line                           = 4,
	Custom                         = 5,
	EFortTargetSelectionShape_MAX  = 6,
};

enum class EFortBrushSize : uint8
{
	VeryVerySmall                  = 0,
	VerySmall                      = 1,
	Small                          = 2,
	Medium                         = 3,
	Large                          = 4,
	VeryLarge                      = 5,
	EFortBrushSize_MAX             = 6,
};

enum class EInventoryContentSortType : uint8
{
	ByName                         = 0,
	ByRating                       = 1,
	ByLevel                        = 2,
	ByCategory                     = 3,
	ByRarity                       = 4,
	ByLocation                     = 5,
	ByPersonality                  = 6,
	ByBonus                        = 7,
	BySubtype                      = 8,
	EInventoryContentSortType_MAX  = 9,
};

enum class EFortFrontendInventoryFilter : uint8
{
	Schematics                     = 0,
	WorldItems                     = 1,
	WorldItemsInGame               = 2,
	WorldItemsStorage              = 3,
	WorldItemsTransfer             = 4,
	ConsumablesAndAccountResources = 5,
	Heroes                         = 6,
	Defenders                      = 7,
	Survivors                      = 8,
	Invisible                      = 9,
	Max_None                       = 10,
	EFortFrontendInventoryFilter_MAX = 11,
};

enum class EFortInventoryFilter : uint8
{
	WeaponMelee                    = 0,
	WeaponRanged                   = 1,
	Ammo                           = 2,
	Traps                          = 3,
	Consumables                    = 4,
	Ingredients                    = 5,
	Gadget                         = 6,
	Decorations                    = 7,
	Badges                         = 8,
	Heroes                         = 9,
	LeadSurvivors                  = 10,
	Survivors                      = 11,
	Defenders                      = 12,
	Resources                      = 13,
	ConversionControl              = 14,
	AthenaCosmetics                = 15,
	Invisible                      = 16,
	Max_None                       = 17,
	EFortInventoryFilter_MAX       = 18,
};

enum class EFortItemCategoryOrdinal : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	EFortItemCategoryOrdinal_MAX   = 3,
};

enum class ESubGameMatchmakingStatus : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	ESubGameMatchmakingStatus_MAX  = 2,
};

enum class ESubGameAccessStatus : uint8
{
	Disabled                       = 0,
	LimitedAccess                  = 1,
	OpenAccess                     = 2,
	ESubGameAccessStatus_MAX       = 3,
};

enum class ESubGame : uint8
{
	Campaign                       = 0,
	Athena                         = 1,
	Invalid                        = 2,
	ESubGame_MAX                   = 3,
};

enum class ENavigationObstacleOverride : uint8
{
	UseMeshSettings                = 0,
	ForceEnabled                   = 1,
	ForceDisabled                  = 2,
	ENavigationObstacleOverride_MAX = 3,
};

enum class EFortPartialPathUsage : uint8
{
	Always                         = 0,
	OnlyGoalsOnDestructible        = 1,
	Never                          = 2,
	EFortPartialPathUsage_MAX      = 3,
};

enum class EHotspotTypeConfigMode : uint8
{
	AlwaysAdd                      = 0,
	WhenNotDefined                 = 1,
	WhenNotValid                   = 2,
	EHotspotTypeConfigMode_MAX     = 3,
};

enum class EFortHotSpotPreview : uint8
{
	None                           = 0,
	Smashing                       = 1,
	Shooting                       = 2,
	EFortHotSpotPreview_MAX        = 3,
};

enum class EFortHotSpotDirection : uint8
{
	PositiveX                      = 0,
	NegativeX                      = 1,
	PositiveY                      = 2,
	NegativeY                      = 3,
	PositiveZ                      = 4,
	NegativeZ                      = 5,
	Any                            = 6,
	EFortHotSpotDirection_MAX      = 7,
};

enum class EFortHotSpotSlot : uint8
{
	Melee                          = 0,
	MeleeHuge                      = 1,
	Ranged                         = 2,
	None                           = 3,
	EFortHotSpotSlot_MAX           = 4,
};

enum class EBuildingFloorRailing : uint8
{
	None                           = 0,
	Balcony                        = 1,
	EBuildingFloorRailing_MAX      = 2,
};

enum class EBuildingStairsRailing : uint8
{
	None                           = 0,
	Partial                        = 1,
	Full                           = 2,
	EBuildingStairsRailing_MAX     = 3,
};

enum class EBuildingWallArea : uint8
{
	Regular                        = 0,
	Flat                           = 1,
	Special                        = 2,
	EBuildingWallArea_MAX          = 3,
};

enum class EAssignmentType : uint8
{
	Invalid                        = 0,
	Encounter                      = 1,
	World                          = 2,
	Enemy                          = 3,
	NumAssignmentTypes             = 4,
	EAssignmentType_MAX            = 5,
};

enum class EFortAILODLevel : uint8
{
	Invalid                        = 0,
	Lowest                         = 1,
	Lower                          = 2,
	BelowNormal                    = 3,
	Normal                         = 4,
	AboveNormal                    = 5,
	EFortAILODLevel_MAX            = 6,
};

enum class EFortItemEntryState : uint8
{
	NoneState                      = 0,
	NewItemCount                   = 1,
	ShouldShowItemToast            = 2,
	DurabilityInitialized          = 3,
	DoNotShowSpawnParticles        = 4,
	FromRecoveredBackpack          = 5,
	FromGift                       = 6,
	PendingUpgradeCriteriaProgress = 7,
	OwnerBuildingHandle            = 8,
	FromDroppedPickup              = 9,
	CraftAndSlotTarget             = 10,
	EFortItemEntryState_MAX        = 11,
};

enum class EFortBounceType : uint8
{
	Hit                            = 0,
	Interact                       = 1,
	EditPlaced                     = 2,
	EFortBounceType_MAX            = 3,
};

enum class EBuildingHighlightType : uint8
{
	Primary                        = 0,
	Interact                       = 1,
	WillBeDestroyed                = 2,
	MAX                            = 3,
	EBuildingHighlightType_MAX     = 4,
};

enum class EFortConnectivityCubeFace : uint8
{
	Front                          = 0,
	Left                           = 1,
	Back                           = 2,
	Right                          = 3,
	Upper                          = 4,
	Lower                          = 5,
	MAX                            = 6,
	EFortConnectivityCubeFace_MAX  = 7,
};

enum class EFortDecoPlacementQueryResults : uint8
{
	CanAdd                         = 0,
	ExistingTrap                   = 1,
	ExistingObject                 = 2,
	Obstructed                     = 3,
	NoLocation                     = 4,
	WrongType                      = 5,
	WrongShape                     = 6,
	BeingModified                  = 7,
	WrongTeam                      = 8,
	BlueprintFailure               = 9,
	AbilityFailure                 = 10,
	RequiresPlayerBuildableActor   = 11,
	NoEditPermission               = 12,
	EFortDecoPlacementQueryResults_MAX = 13,
};

enum class EFortStructuralGridQueryResults : uint8
{
	CanAdd                         = 0,
	ExistingActor                  = 1,
	Obstructed                     = 2,
	NoStructuralSupport            = 3,
	InvalidActor                   = 4,
	ReachedLimit                   = 5,
	NoEditPermission               = 6,
	PatternNotPermittedByLayoutRequirement = 7,
	ResourceTypeNotPermittedByLayoutRequirement = 8,
	BuildingAtRequirementsDisabled = 9,
	BuildingOtherThanRequirementsDisabled = 10,
	EFortStructuralGridQueryResults_MAX = 11,
};

enum class EFortCostInfoTypes : uint8
{
	Placement                      = 0,
	Repair                         = 1,
	Conversion                     = 2,
	Ability                        = 3,
	None                           = 4,
	EFortCostInfoTypes_MAX         = 5,
};

enum class EFortBuildingInitializationReason : uint8
{
	StaticallyPlaced               = 0,
	Spawned                        = 1,
	Replaced                       = 2,
	LoadedFromSave                 = 3,
	DynamicBuilderPlaced           = 4,
	PlacementTool                  = 5,
	TrapTool                       = 6,
	None                           = 7,
	EFortBuildingInitializationReason_MAX = 8,
};

enum class EFortBuildingPersistentState : uint8
{
	Default                        = 0,
	New                            = 1,
	Constructed                    = 2,
	Destroyed                      = 3,
	Searched                       = 4,
	None                           = 5,
	EFortBuildingPersistentState_MAX = 6,
};

enum class EFortBuildingState : uint8
{
	Placement                      = 0,
	EditMode                       = 1,
	None                           = 2,
	EFortBuildingState_MAX         = 3,
};

enum class EFortResourceLevel : uint8
{
	First                          = 0,
	Second                         = 1,
	Third                          = 2,
	Fourth                         = 3,
	Fifth                          = 4,
	Sixth                          = 5,
	NumLevels                      = 6,
	Invalid                        = 7,
	EFortResourceLevel_MAX         = 8,
};

enum class EFortResourceType : uint8
{
	Wood                           = 0,
	Stone                          = 1,
	Metal                          = 2,
	Permanite                      = 3,
	None                           = 4,
	EFortResourceType_MAX          = 5,
};

enum class EFortTextureDataSlot : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Fourth                         = 3,
	NumSlots                       = 4,
	EFortTextureDataSlot_MAX       = 5,
};

enum class EFortTextureDataType : uint8
{
	Any                            = 0,
	OuterWall                      = 1,
	InnerWall                      = 2,
	Corner                         = 3,
	Floor                          = 4,
	Ceiling                        = 5,
	Trim                           = 6,
	Roof                           = 7,
	Pillar                         = 8,
	Shingle                        = 9,
	None                           = 10,
	EFortTextureDataType_MAX       = 11,
};

enum class EBuildingAttachmentType : uint8
{
	ATTACH_Floor                   = 0,
	ATTACH_Wall                    = 1,
	ATTACH_Ceiling                 = 2,
	ATTACH_Corner                  = 3,
	ATTACH_All                     = 4,
	ATTACH_WallThenFloor           = 5,
	ATTACH_None                    = 6,
	ATTACH_MAX                     = 7,
};

enum class EFortBuildingType : uint8
{
	Wall                           = 0,
	Floor                          = 1,
	Corner                         = 2,
	Deco                           = 3,
	Prop                           = 4,
	Stairs                         = 5,
	Roof                           = 6,
	Pillar                         = 7,
	SpawnedItem                    = 8,
	Container                      = 9,
	Trap                           = 10,
	GenericCenterCellActor         = 11,
	None                           = 12,
	EFortBuildingType_MAX          = 13,
};

enum class EFortMissionAudibility : uint8
{
	UseVisibility                  = 0,
	Audible                        = 1,
	Inaudible                      = 2,
	EFortMissionAudibility_MAX     = 3,
};

enum class EFortMissionType : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Max_None                       = 2,
	EFortMissionType_MAX           = 3,
};

enum class EFortObjectiveRequirement : uint8
{
	Optional                       = 0,
	Required                       = 1,
	RequiredButCanFail             = 2,
	EFortObjectiveRequirement_MAX  = 3,
};

enum class EFortMissionStatus : uint8
{
	Created                        = 0,
	InProgress                     = 1,
	Succeeded                      = 2,
	Failed                         = 3,
	NeutralCompletion              = 4,
	Quit                           = 5,
	Max_None                       = 6,
	EFortMissionStatus_MAX         = 7,
};

enum class EMissionGenerationCategory : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Survivor                       = 3,
	Max_None                       = 4,
	EMissionGenerationCategory_MAX = 5,
};

enum class ETInteractionType : uint8
{
	IT_NoInteraction               = 0,
	IT_Simple                      = 1,
	IT_LongPress                   = 2,
	IT_BuildingEdit                = 3,
	IT_BuildingImprovement         = 4,
	IT_TrapPlacement               = 5,
	IT_MAX                         = 6,
};

enum class EFortPIDValueGraphElements : uint8
{
	Proportional                   = 0,
	Integral                       = 1,
	Max_None                       = 2,
	EFortPIDValueGraphElements_MAX = 3,
};

enum class EFortIntensityGraphElements : uint8
{
	ActualIntensity                = 0,
	DesiredIntensity               = 1,
	Max_None                       = 2,
	EFortIntensityGraphElements_MAX = 3,
};

enum class EFortContributionGraphElements : uint8
{
	ProportionalLine               = 0,
	IntegralLine                   = 1,
	TotalLine                      = 2,
	PendingLine                    = 3,
	ActionLine                     = 4,
	Max_None                       = 5,
	EFortContributionGraphElements_MAX = 6,
};

enum class EFortFactorContributionType : uint8
{
	CurrentValue_Direct            = 0,
	CurrentValue_Inverse           = 1,
	AverageValue_Direct            = 2,
	AverageValue_Inverse           = 3,
	EFortFactorContributionType_MAX = 4,
};

enum class EFortAIDirectorFactor : uint8
{
	PlayerDamageThreat             = 0,
	ObjectiveDamageThreat          = 1,
	ObjectivePathCost              = 2,
	PlayerPathCost                 = 3,
	PlayerMovement                 = 4,
	TrapsEffective                 = 5,
	PlayerWander                   = 6,
	NearbyEnemyPresence            = 7,
	OffensiveResources             = 8,
	DefensiveResources             = 9,
	Boredom                        = 10,
	ArtilleryVulnerability         = 11,
	Max_None                       = 12,
	EFortAIDirectorFactor_MAX      = 13,
};

enum class EFortCombatFactors : uint8
{
	PlayerDamageThreat             = 0,
	ObjectiveDamageThreat          = 1,
	ObjectivePathCost              = 2,
	PlayerPathCost                 = 3,
	PlayerMovement                 = 4,
	TrapsEffective                 = 5,
	PlayerWander                   = 6,
	NearbyEnemyPresence            = 7,
	OffensiveResources             = 8,
	DefensiveResources             = 9,
	Boredom                        = 10,
	ArtilleryVulnerability         = 11,
	Max_None                       = 12,
	EFortCombatFactors_MAX         = 13,
};

enum class EFortCombatEvents : uint8
{
	HuskFollowing                  = 0,
	SmasherFollowing               = 1,
	TrollFollowing                 = 2,
	TakerFollowing                 = 3,
	PlayerTakeDamage               = 4,
	PlayerHealth                   = 5,
	PlayerLookAtEnemy              = 6,
	PlayerDamageEnemy              = 7,
	PlayerKilledEnemy              = 8,
	AtlasTakeDamage                = 9,
	AtlasHealth                    = 10,
	AtlasDestroyed                 = 11,
	TrapFiring                     = 12,
	BuildingTakeDamage             = 13,
	FoodHealingPotential           = 14,
	PlayerAmmo                     = 15,
	EnemiesNear                    = 16,
	PlayerMovement                 = 17,
	BuildingDamagedNearObjective   = 18,
	TrapDamageEnemy                = 19,
	ObjectivePathCost              = 20,
	PlayerPathCost                 = 21,
	Max_None                       = 22,
	EFortCombatEvents_MAX          = 23,
};

enum class EFortAIDirectorEventParticipant : uint8
{
	Target                         = 0,
	Source                         = 1,
	Either                         = 2,
	Max_None                       = 3,
	EFortAIDirectorEventParticipant_MAX = 4,
};

enum class EFortCombatThresholds : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Extreme                        = 3,
	Max_None                       = 4,
	EFortCombatThresholds_MAX      = 5,
};

enum class EFortElementalDamageType : uint8
{
	None                           = 0,
	Fire                           = 1,
	Ice                            = 2,
	Lightning                      = 3,
	MAX                            = 4,
	EFortElementalDamageType_MAX   = 5,
};

enum class EFortDamageZone : uint8
{
	Light                          = 0,
	Normal                         = 1,
	Critical                       = 2,
	Vulnerability                  = 3,
	Max                            = 4,
	EFortDamageZone_MAX            = 5,
};

enum class EFortBaseWeaponDamage : uint8
{
	Combat                         = 0,
	Environmental                  = 1,
	EFortBaseWeaponDamage_MAX      = 2,
};

enum class EFortWeaponCoreAnimation : uint8
{
	Melee                          = 0,
	Pistol                         = 1,
	Shotgun                        = 2,
	PaperBlueprint                 = 3,
	Rifle                          = 4,
	MeleeOneHand                   = 5,
	MachinePistol                  = 6,
	RocketLauncher                 = 7,
	GrenadeLauncher                = 8,
	GoingCommando                  = 9,
	AssaultRifle                   = 10,
	TacticalShotgun                = 11,
	SniperRifle                    = 12,
	TrapPlacement                  = 13,
	ShoulderLauncher               = 14,
	AbilityDecoTool                = 15,
	EFortWeaponCoreAnimation_MAX   = 16,
};

enum class EFortReloadFXState : uint8
{
	ReloadStart                    = 0,
	ReloadCartridge                = 1,
	ReloadEnd                      = 2,
	Max_None                       = 3,
	EFortReloadFXState_MAX         = 4,
};

enum class EFortWeaponSoundState : uint8
{
	Normal                         = 0,
	LowAmmo                        = 1,
	Degraded                       = 2,
	Max_None                       = 3,
	EFortWeaponSoundState_MAX      = 4,
};

enum class EFortMontageInputType : uint8
{
	WindowClickOrHold              = 0,
	WindowHoldOnly                 = 1,
	InstantClick                   = 2,
	EFortMontageInputType_MAX      = 3,
};

enum class EFortAbilityTargetingSource : uint8
{
	Camera                         = 0,
	PawnForward                    = 1,
	PawnTowardsFocus               = 2,
	WeaponForward                  = 3,
	WeaponTowardsFocus             = 4,
	Custom                         = 5,
	Max_None                       = 6,
	EFortAbilityTargetingSource_MAX = 7,
};

enum class EFortAmmoType : uint8
{
	Pistol                         = 0,
	Shotgun                        = 1,
	Assault                        = 2,
	Sniper                         = 3,
	Energy                         = 4,
	EFortAmmoType_MAX              = 5,
};

enum class EAbilitySystemComponentCreationPolicy : uint8
{
	Never                          = 0,
	Lazy                           = 1,
	Always                         = 2,
	EAbilitySystemComponentCreationPolicy_MAX = 3,
};

enum class EAttributeInitLevelSource : uint8
{
	WorldDifficulty                = 0,
	PlayerBuildingSkill            = 1,
	EAttributeInitLevelSource_MAX  = 2,
};

enum class EDynamicBuildingPlacementType : uint8
{
	CountsTowardsBounds            = 0,
	DestroyIfColliding             = 1,
	DestroyAnythingThatCollides    = 2,
	EDynamicBuildingPlacementType_MAX = 3,
};

enum class ELootQuotaLevel : uint8
{
	Unlimited                      = 0,
	Level1                         = 1,
	Level2                         = 2,
	Level3                         = 3,
	Level4                         = 4,
	Level5                         = 5,
	Level6                         = 6,
	Level7                         = 7,
	Level8                         = 8,
	Level9                         = 9,
	Level10                        = 10,
	Level11                        = 11,
	Level12                        = 12,
	Level13                        = 13,
	Level14                        = 14,
	Level15                        = 15,
	Level16                        = 16,
	Level17                        = 17,
	NumLevels                      = 18,
	ELootQuotaLevel_MAX            = 19,
};

enum class EBuildingNavObstacleType : uint8
{
	UnwalkableAll                  = 0,
	UnwalkableHuskOnly             = 1,
	SmashWhenLowHeight             = 2,
	SmashOnlyLowHeight             = 3,
	SmashSmasherOnly               = 4,
	SmashAll                       = 5,
	EBuildingNavObstacleType_MAX   = 6,
};

enum class EFortDamageVisualsState : uint8
{
	UnDamaged                      = 0,
	DamagedAndAnimating            = 1,
	DamagedAndStatic               = 2,
	EFortDamageVisualsState_MAX    = 3,
};

enum class EStructuralSupportCheck : uint8
{
	Stable                         = 0,
	Unstable                       = 1,
	Max_None                       = 2,
	EStructuralSupportCheck_MAX    = 3,
};

enum class EBuildingReplacementType : uint8
{
	BRT_None                       = 0,
	BRT_Edited                     = 1,
	BRT_Conversion                 = 2,
	BRT_MAX                        = 3,
};

enum class EPlacementType : uint8
{
	Free                           = 0,
	Grid                           = 1,
	None                           = 2,
	EPlacementType_MAX             = 3,
};

enum class EBuildingAttachmentSide : uint8
{
	Front                          = 0,
	Back                           = 1,
	Any                            = 2,
	EBuildingAttachmentSide_MAX    = 3,
};

enum class EBuildingAttachmentSlot : uint8
{
	SLOT_Floor                     = 0,
	SLOT_Wall                      = 1,
	SLOT_Ceiling                   = 2,
	SLOT_None                      = 3,
	SLOT_MAX                       = 4,
};

enum class EBuildingAnim : uint8
{
	EBA_None                       = 0,
	EBA_Building                   = 1,
	EBA_Breaking                   = 2,
	EBA_Destruction                = 3,
	EBA_Placement                  = 4,
	EBA_DynamicLOD                 = 5,
	EBA_DynamicShrink              = 6,
	EBA_MAX                        = 7,
};

enum class EBoundingBoxSlotDirectionCalculation : uint8
{
	Auto                           = 0,
	FaceWall                       = 1,
	FaceAwayFromWall               = 2,
	FaceCenter                     = 3,
	EBoundingBoxSlotDirectionCalculation_MAX = 4,
};

enum class EFortProximityBasedGEApplicationType : uint8
{
	ApplyOnProximityPulse          = 0,
	ApplyOnProximityTouch          = 1,
	ApplyOnlyDuringProximityTouch  = 2,
	EFortProximityBasedGEApplicationType_MAX = 3,
};

enum class EFortDeliveryInfoBuildingActorSpecification : uint8
{
	All                            = 0,
	PlayerBuildable                = 1,
	NonPlayerBuildable             = 2,
	EFortDeliveryInfoBuildingActorSpecification_MAX = 3,
};

enum class EUnlockRules : uint8
{
	UR_Reset                       = 0,
	UR_MaintainState               = 1,
	UR_ResetDeactivate             = 2,
	UR_MAX                         = 3,
};

enum class EContentionRules : uint8
{
	CR_MajorityWins                = 0,
	CR_OneTeamOnlyWins             = 1,
	CR_MAX                         = 2,
};

enum class EFortIsFinalXpUpdate : uint8
{
	Uninitialized                  = 0,
	NotFinal                       = 1,
	Final                          = 2,
	EFortIsFinalXpUpdate_MAX       = 3,
};

enum class EFortRewardType : uint8
{
	Default                        = 0,
	Missed                         = 1,
	Max_None                       = 2,
	EFortRewardType_MAX            = 3,
};

enum class EFortRewardActivityType : uint8
{
	General                        = 0,
	MissionPrimary                 = 1,
	MissionSecondary               = 2,
	AccountLevelUp                 = 3,
	Max_None                       = 4,
	EFortRewardActivityType_MAX    = 5,
};

enum class EStatCategory : uint8
{
	Combat                         = 0,
	Building                       = 1,
	Utility                        = 2,
	Max_None                       = 3,
	EStatCategory_MAX              = 4,
};

enum class EFortReplicatedStat : uint8
{
	MonsterKills                   = 0,
	MonsterDamagePoints            = 1,
	PlayerKills                    = 2,
	WoodGathered                   = 3,
	StoneGathered                  = 4,
	MetalGathered                  = 5,
	Deaths                         = 6,
	BuildingsBuilt                 = 7,
	BuildingsBuilt_Wood            = 8,
	BuildingsBuilt_Stone           = 9,
	BuildingsBuilt_Metal           = 10,
	BuildingsUpgraded_Wood2        = 11,
	BuildingsUpgraded_Wood3        = 12,
	BuildingsUpgraded_Stone2       = 13,
	BuildingsUpgraded_Stone3       = 14,
	BuildingsUpgraded_Metal2       = 15,
	BuildingsUpgraded_Metal3       = 16,
	BuildingsDestroyed             = 17,
	Repair_Wood                    = 18,
	Repair_Stone                   = 19,
	Repair_Metal                   = 20,
	FlagsCaptured                  = 21,
	FlagsReturned                  = 22,
	ContainersLooted               = 23,
	CraftingPoints                 = 24,
	TrapPlacementPoints            = 25,
	TrapActivationPoints           = 26,
	TotalScore                     = 27,
	OldTotalScore                  = 28,
	CombatScore                    = 29,
	BuildingScore                  = 30,
	UtilityScore                   = 31,
	BadgesScore                    = 32,
	None                           = 33,
	MAX                            = 34,
	EFortReplicatedStat_MAX        = 35,
};

enum class EFortReplenishmentType : uint8
{
	Restricted                     = 0,
	ClampMin                       = 1,
	Add                            = 2,
	Ability                        = 3,
	EFortReplenishmentType_MAX     = 4,
};

enum class EFortTemplateAccess : uint8
{
	Normal                         = 0,
	Trusted                        = 1,
	Private                        = 2,
	EFortTemplateAccess_MAX        = 3,
};

enum class EItemEvolutionRestrictionReason : uint8
{
	NoEvolutions                   = 0,
	BelowMaximumLevel              = 1,
	VaultOverflow                  = 2,
	MissingCatalyst                = 3,
	MissingCosts                   = 4,
	EItemEvolutionRestrictionReason_MAX = 5,
};

enum class EItemUpgradeRestrictionReason : uint8
{
	NoAdditionalLevels             = 0,
	MaximumLevelAchieved           = 1,
	VaultOverflow                  = 2,
	EItemUpgradeRestrictionReason_MAX = 3,
};

enum class EFortQuickBars : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Max_None                       = 2,
	EFortQuickBars_MAX             = 3,
};

enum class EFOBFileHeaderStatus : uint8
{
	NoExistingFile                 = 0,
	HasExistingFile                = 1,
	UnableToDetermine              = 2,
	EFOBFileHeaderStatus_MAX       = 3,
};

enum class EFOBInitStatus : uint8
{
	Successful                     = 0,
	Failure_CloudStorageDisabled   = 1,
	Failure_PreviouslyInitialized  = 2,
	Failure_DataOwner              = 3,
	Failure_CloudStorageError      = 4,
	Failure_MissingFileName        = 5,
	Failure_Generic                = 6,
	EFOBInitStatus_MAX             = 7,
};

enum class EFOBMode : uint8
{
	Uninitialized                  = 0,
	Creation                       = 1,
	Deployment                     = 2,
	EFOBMode_MAX                   = 3,
};

enum class EFortItemCollectorBehavior : uint8
{
	FirstToGoal                    = 0,
	FreeForAll                     = 1,
	TugOfWar                       = 2,
	EFortItemCollectorBehavior_MAX = 3,
};

enum class EFortItemCollectorState : uint8
{
	CanInteract                    = 0,
	Active                         = 1,
	Inactive                       = 2,
	Captured                       = 3,
	Invalid                        = 4,
	EFortItemCollectorState_MAX    = 5,
};

enum class EDeployableBaseConstructionStatus : uint8
{
	Constructing                   = 0,
	Destroying                     = 1,
	Finished                       = 2,
	EDeployableBaseConstructionStatus_MAX = 3,
};

enum class EDeployableBaseBuildingState : uint8
{
	Empty                          = 0,
	Built                          = 1,
	Unoccupied                     = 2,
	WaitingToBuild                 = 3,
	Building                       = 4,
	WaitingToDestroy               = 5,
	Destroying                     = 6,
	WaitingToReset                 = 7,
	Resetting                      = 8,
	EDeployableBaseBuildingState_MAX = 9,
};

enum class EDeployableBaseBoxType : uint8
{
	BuildSpace                     = 0,
	SaveSpace                      = 1,
	PlotSpace                      = 2,
	NumSpaceTypes                  = 3,
	EDeployableBaseBoxType_MAX     = 4,
};

enum class EFortMiniMapIconRotation : uint8
{
	EFMMIR_None                    = 0,
	EFMMIR_Absolute                = 1,
	EFMMIR_Relative                = 2,
	EFMMIR_MAX                     = 3,
};

enum class EFortMiniMapContext : uint8
{
	EFMC_MiniMap                   = 0,
	EFMC_FullScreenMap             = 1,
	EFMC_MAX                       = 2,
};

enum class EFortMiniMapHeight : uint8
{
	EFMH_Equal                     = 0,
	EFMH_Below                     = 1,
	EFMH_Above                     = 2,
	EFMH_MAX                       = 3,
};

enum class EFortAbilityTargetSelectionUsage : uint8
{
	BothTargetingAndCanHit         = 0,
	OnlyTargeting                  = 1,
	OnlyCanHit                     = 2,
	EFortAbilityTargetSelectionUsage_MAX = 3,
};

enum class EFortAbilityCostSource : uint8
{
	Stamina                        = 0,
	Durability                     = 1,
	AmmoMagazine                   = 2,
	AmmoPrimary                    = 3,
	Item                           = 4,
	EFortAbilityCostSource_MAX     = 5,
};

enum class EFortGameplayAbilityActivation : uint8
{
	Passive                        = 0,
	Triggered                      = 1,
	Active                         = 2,
	EFortGameplayAbilityActivation_MAX = 3,
};

enum class EFortAIWeaponUsage : uint8
{
	NoWeaponUsage                  = 0,
	UsesRangedWeapon               = 1,
	UsesMeleeWeapon                = 2,
	EFortAIWeaponUsage_MAX         = 3,
};

enum class EFortGameplayAbilityMontageSectionToPlay : uint8
{
	FirstSection                   = 0,
	RandomSection                  = 1,
	TestedRandomSection            = 2,
	EFortGameplayAbilityMontageSectionToPlay_MAX = 3,
};

enum class EFortStrategicBuildingLevelCriteriaDisplayRepresentation : uint8
{
	Integer                        = 0,
	Float                          = 1,
	EFortStrategicBuildingLevelCriteriaDisplayRepresentation_MAX = 2,
};

enum class EFortStrategicBuildingCategory : uint8
{
	Defensive                      = 0,
	Offensive                      = 1,
	Utility                        = 2,
	EFortStrategicBuildingCategory_MAX = 3,
};

enum class EFortRiftSlotStatus : uint8
{
	Reserved                       = 0,
	Occupied                       = 1,
	Max_None                       = 2,
	EFortRiftSlotStatus_MAX        = 3,
};

enum class EFortDisplayTier : uint8
{
	Invalid                        = 0,
	Handmade                       = 1,
	Copper                         = 2,
	Silver                         = 3,
	Malachite                      = 4,
	Obsidian                       = 5,
	Brightcore                     = 6,
	Spectrolite                    = 7,
	Shadowshard                    = 8,
	Sunbeam                        = 9,
	Moonglow                       = 10,
	EFortDisplayTier_MAX           = 11,
};

enum class ETrackVerticality : uint8
{
	Floor                          = 0,
	Ramp                           = 1,
	GradualRamp                    = 2,
	Max_None                       = 3,
	ETrackVerticality_MAX          = 4,
};

enum class ETrackIncline : uint8
{
	NoNeighbor                     = 0,
	Flat                           = 1,
	Up                             = 2,
	Down                           = 3,
	GradualUp                      = 4,
	GradualDown                    = 5,
	Max_None                       = 6,
	ETrackIncline_MAX              = 7,
};

enum class ETrackPieceType : uint8
{
	None                           = 0,
	Straight                       = 1,
	Turn                           = 2,
	TShape                         = 3,
	Cross                          = 4,
	Max_None                       = 5,
	ETrackPieceType_MAX            = 6,
};

enum class ETrackDirection : uint8
{
	YNegative                      = 0,
	XPositive                      = 1,
	YPositive                      = 2,
	XNegative                      = 3,
	Max_None                       = 4,
	ETrackDirection_MAX            = 5,
};

enum class EFortAccountLinkingUIConfig : uint8
{
	Disabled                       = 0,
	Default                        = 1,
	ExternalViewerOnly             = 2,
	FullExternal                   = 3,
	EFortAccountLinkingUIConfig_MAX = 4,
};

enum class EFortThreatDeactivationType : uint8
{
	Off                            = 0,
	Dormant                        = 1,
	EFortThreatDeactivationType_MAX = 2,
};

enum class EMusicChannel : uint8
{
	A                              = 0,
	B                              = 1,
	Stinger                        = 2,
	Max_None                       = 3,
	EMusicChannel_MAX              = 4,
};

enum class EMusicFadeStyles : uint8
{
	CrossFade                      = 0,
	FadeOutThenIn                  = 1,
	Max_None                       = 2,
	EMusicFadeStyles_MAX           = 3,
};

enum class EBuildingFoundationType : uint8
{
	BFT_3x3                        = 0,
	BFT_5x5                        = 1,
	BFT_5x10                       = 2,
	BFT_None                       = 3,
	BFT_MAX                        = 4,
};

enum class ELayoutRequirementStatus : uint8
{
	Inactive_Invisible             = 0,
	Active_Invisible               = 1,
	Active_Visible                 = 2,
	ELayoutRequirementStatus_MAX   = 3,
};

enum class EFortDefenderInteractionError : uint8
{
	None                           = 0,
	Obstructed                     = 1,
	NoEditPermission               = 2,
	UsedByAnotherPlayer            = 3,
	EFortDefenderInteractionError_MAX = 4,
};

enum class EFDynamicBuildOrder : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	None                           = 3,
	FDynamicBuildOrder_MAX         = 4,
};

enum class EBinaryToggleValues : uint8
{
	BTV_Active                     = 0,
	BTV_Inactive                   = 1,
	BTV_Either                     = 2,
	BTV_MAX                        = 3,
};

enum class EAuxIndicatorStates : uint8
{
	AIS_GuidingArrow               = 0,
	AIS_ConfirmedArrow             = 1,
	AIS_Inactive                   = 2,
	AIS_Active                     = 3,
	AIS_MAX                        = 4,
};

enum class EColorSwatchType : uint8
{
	EColorSwatchType_Skin          = 0,
	EColorSwatchType_Hair          = 1,
	EColorSwatchType_BodyAccessory = 2,
	EColorSwatchType_Accessory     = 3,
	EColorSwatchType_NumTypes      = 4,
	EColorSwatchType_MAX           = 5,
};

enum class ECharacterColorSwatchType : uint8
{
	ECharacterColorSwatchType_Skin = 0,
	ECharacterColorSwatchType_Hair = 1,
	ECharacterColorSwatchType_NumTypes = 2,
	ECharacterColorSwatchType_MAX  = 3,
};

enum class EAccessoryColorName : uint8
{
	EAccessoryColorName_AccessoryColor1 = 0,
	EAccessoryColorName_AccessoryColor2 = 1,
	EAccessoryColorName_AccessoryColor3 = 2,
	EAccessoryColorName_NumTypes   = 3,
	EAccessoryColorName_MAX        = 4,
};

enum class ECustomHatType : uint8
{
	ECustomHatType_None            = 0,
	ECustomHatType_Cap             = 1,
	ECustomHatType_Helmet          = 2,
	ECustomHatType_Mask            = 3,
	ECustomHatType_Hat             = 4,
	ECustomHatType_HeadReplacement = 5,
	ECustomHatType_MAX             = 6,
};

enum class EClothingColorName : uint8
{
	EClothingColorName_AccessoryColor1 = 0,
	EClothingColorName_AccessoryColor2 = 1,
	EClothingColorName_NumTypes    = 2,
	EClothingColorName_MAX         = 3,
};

enum class EFortAttributeDisplay : uint8
{
	BasicInt                       = 0,
	NegativeImpliesInfiniteInt     = 1,
	BasicFloat                     = 2,
	NegativeImpliesInfiniteFloat   = 3,
	BasicString                    = 4,
	NormalizedPercentage           = 5,
	StringArray                    = 6,
	SlateBrush                     = 7,
	DoNotDisplay                   = 8,
	None_Max                       = 9,
	EFortAttributeDisplay_MAX      = 10,
};

enum class EFortStatDisplayType : uint8
{
	Category                       = 0,
	Buff                           = 1,
	Debuff                         = 2,
	Neutral                        = 3,
	DoNotDisplay                   = 4,
	EFortStatDisplayType_MAX       = 5,
};

enum class EFortDirectedMovementSpace : uint8
{
	WorldSpace                     = 0,
	ActorLocRelative               = 1,
	ActorLocRotRelative            = 2,
	CameraRelative                 = 3,
	EFortDirectedMovementSpace_MAX = 4,
};

enum class EPathUndermineEvent : uint8
{
	Predicted                      = 0,
	Started                        = 1,
	Finished                       = 2,
	EPathUndermineEvent_MAX        = 3,
};

enum class EPathObstacleAction : uint8
{
	Melee                          = 0,
	Ignore                         = 1,
	AbortMoveAsFailed              = 2,
	FinishMoveAsSucceeded          = 3,
	EPathObstacleAction_MAX        = 4,
};

enum class EFortFeedbackBroadcastFilter : uint8
{
	FFBF_Speaker                   = 0,
	FFBF_SpeakerTeam               = 1,
	FFBF_SpeakerAdressee           = 2,
	FFBF_HumanPvP_Team1            = 3,
	FFBF_HumanPvP_Team2            = 4,
	FFBF_None_Max                  = 5,
	FFBF_MAX                       = 6,
};

enum class EFortFeedbackSelectionMethod : uint8
{
	FFSM_Instigator                = 0,
	FFSM_Recipient                 = 1,
	FFSM_TeamWitness               = 2,
	FFSM_EnemyWitness              = 3,
	FFSM_Random                    = 4,
	FFSM_Priority_IRTE             = 5,
	FFSM_AllPawns                  = 6,
	FFSM_Announcer                 = 7,
	FFSM_MAX                       = 8,
};

enum class EFortFeedbackAddressee : uint8
{
	FFA_Instigator                 = 0,
	FFA_Recipient                  = 1,
	FFA_All                        = 2,
	FFA_MAX                        = 3,
};

enum class EFortFeedbackContext : uint8
{
	FFC_Instigator                 = 0,
	FFC_Recipient                  = 1,
	FFC_TeamWitness                = 2,
	FFC_EnemyWitness               = 3,
	FFC_AllPawns                   = 4,
	FFC_Announcer                  = 5,
	FFC_None_Max                   = 6,
	FFC_MAX                        = 7,
};

enum class EFortSentenceAudioPreference : uint8
{
	AudioAsset                     = 0,
	FeedbackBank                   = 1,
	EFortSentenceAudioPreference_MAX = 2,
};

enum class EFortPickupTossState : uint8
{
	NotTossed                      = 0,
	InProgress                     = 1,
	AtRest                         = 2,
	EFortPickupTossState_MAX       = 3,
};

enum class EFortControlRecoveryBehavior : uint8
{
	DefaultControl                 = 0,
	LimitedControl                 = 1,
	ChainControl                   = 2,
	EFortControlRecoveryBehavior_MAX = 3,
};

enum class EFortPawnPushSize : uint8
{
	FFPS_Normal                    = 0,
	FPPS_Player                    = 1,
	FPPS_Large                     = 2,
	FPPS_SuperLarge                = 3,
	EFortPawnPushSize_MAX          = 4,
};

enum class EFortAIPawnGender : uint8
{
	FAPG_Default                   = 0,
	FAPG_Female                    = 1,
	FAPG_Male                      = 2,
	FAPG_MAX                       = 3,
};

enum class EFortAILevelRatingDisplayType : uint8
{
	DisplayRatingBasedOnDifficulty = 0,
	DisplayAIDifficultyAsRating    = 1,
	DontDisplayRating              = 2,
	EFortAILevelRatingDisplayType_MAX = 3,
};

enum class EFortressAIType : uint8
{
	FAT_Dormant                    = 0,
	FAT_Cleaner                    = 1,
	FAT_DayWanderer                = 2,
	FAT_NightWanderer              = 3,
	FAT_DebugOnly                  = 4,
	FAT_Encounter                  = 5,
	FAT_MAX                        = 6,
};

enum class EFortEncounterSpawnLimitType : uint8
{
	NoLimit                        = 0,
	NumPawnsLimit                  = 1,
	SpawnPointLimit                = 2,
	UserDefined                    = 3,
	MAX                            = 4,
	EFortEncounterSpawnLimitType_MAX = 5,
};

enum class EFortEncounterUtilitiesMode : uint8
{
	LockedOnly                     = 0,
	LockedAndFree                  = 1,
	EFortEncounterUtilitiesMode_MAX = 2,
};

enum class EFortEncounterSpawnLocationPlacementMode : uint8
{
	Directional                    = 0,
	Ring                           = 1,
	Volume                         = 2,
	Custom                         = 3,
	Max_None                       = 4,
	EFortEncounterSpawnLocationPlacementMode_MAX = 5,
};

enum class EFortEncounterPacingMode : uint8
{
	SpawnPointsPercentageCurve     = 0,
	IntensityCurve                 = 1,
	Burst                          = 2,
	EFortEncounterPacingMode_MAX   = 3,
};

enum class EWardAffectType : uint8
{
	AffectsBothStartAndEndPoints   = 0,
	AffectsOnlyStartPoints         = 1,
	AffectsOnlyEndPoints           = 2,
	EWardAffectType_MAX            = 3,
};

enum class EFortEncounterUtilityDesire : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	VeryHigh                       = 3,
	Max_None                       = 4,
	EFortEncounterUtilityDesire_MAX = 5,
};

enum class EFortAIDirectorFactorContribution : uint8
{
	Direct                         = 0,
	Inverse                        = 1,
	EFortAIDirectorFactorContribution_MAX = 2,
};

enum class EFortAIDirectorEventContribution : uint8
{
	Increment                      = 0,
	Set                            = 1,
	EFortAIDirectorEventContribution_MAX = 2,
};

enum class ETagGoalScoringCategory : uint8
{
	Ignore                         = 0,
	HighInterest                   = 1,
	NumCategories                  = 2,
	ETagGoalScoringCategory_MAX    = 3,
};

enum class EFortIntensityCurveSequenceType : uint8
{
	Sequence                       = 0,
	Loop                           = 1,
	Random                         = 2,
	Max_None                       = 3,
	EFortIntensityCurveSequenceType_MAX = 4,
};

enum class EFortAIWaveProgressSection : uint8
{
	SectionOne                     = 0,
	SectionTwo                     = 1,
	Max_None                       = 2,
	EFortAIWaveProgressSection_MAX = 3,
};

enum class EFortEncounterState : uint8
{
	Uninitialized                  = 0,
	InitializingProperties         = 1,
	InitializingRiftManager        = 2,
	AwaitingActivation             = 3,
	Active                         = 4,
	Max_None                       = 5,
	EFortEncounterState_MAX        = 6,
};

enum class EFortEncounterPacingState : uint8
{
	Ramp                           = 0,
	Peak                           = 1,
	Fade                           = 2,
	Rest                           = 3,
	Max_None                       = 4,
	EFortEncounterPacingState_MAX  = 5,
};

enum class EFortEncounterSequenceResult : uint8
{
	Success                        = 0,
	FailedEncounterInProgress      = 1,
	EFortEncounterSequenceResult_MAX = 2,
};

enum class EAssignmentCreationResult : uint8
{
	AssignmentNotFoundOrCreated    = 0,
	AssignmentCreated              = 1,
	AssignmentFound                = 2,
	EAssignmentCreationResult_MAX  = 3,
};

enum class ECorePerceptionTypes : uint8
{
	Sight                          = 0,
	Hearing                        = 1,
	Damage                         = 2,
	Touch                          = 3,
	Team                           = 4,
	Prediction                     = 5,
	MAX                            = 6,
	ECorePerceptionTypes_MAX       = 7,
};

enum class EFortHuskAnimType : uint8
{
	Basic                          = 0,
	Dwarf                          = 1,
	BlasterBig                     = 2,
	Weak                           = 3,
	TinyHead                       = 4,
	Beehive                        = 5,
	Husky                          = 6,
	Sploder                        = 7,
	EFortHuskAnimType_MAX          = 8,
};

enum class EFortSupportBonusType : uint8
{
	Normal                         = 0,
	Tactical                       = 1,
	Max_None                       = 2,
	EFortSupportBonusType_MAX      = 3,
};

enum class ESpecializationType : uint8
{
	Tier1                          = 0,
	Tier2                          = 1,
	Tier3                          = 2,
	Tier4                          = 3,
	NumTiers                       = 4,
	ESpecializationType_MAX        = 5,
};

enum class EFortPawnStasisMode : uint8
{
	None                           = 0,
	NoMovement                     = 1,
	NoMovementOrTurning            = 2,
	EFortPawnStasisMode_MAX        = 3,
};

enum class EFortAnnouncementDisplayPreference : uint8
{
	Default_HUD                    = 0,
	QuestIntroduction              = 1,
	QuestJournal                   = 2,
	EFortAnnouncementDisplayPreference_MAX = 3,
};

enum class EFortAnnouncementChannel : uint8
{
	Primary                        = 0,
	Conversation                   = 1,
	Tutorial                       = 2,
	Max_None                       = 3,
	EFortAnnouncementChannel_MAX   = 4,
};

enum class EFortAnnouncementDelivery : uint8
{
	Created                        = 0,
	Received                       = 1,
	Ignored                        = 2,
	Active                         = 3,
	Stopped                        = 4,
	Max_None                       = 5,
	EFortAnnouncementDelivery_MAX  = 6,
};

enum class EStatRecordingPeriod : uint8
{
	Minute                         = 0,
	Life                           = 1,
	Map                            = 2,
	Campaign                       = 3,
	Persistent                     = 4,
	Max                            = 5,
	EStatRecordingPeriod_MAX       = 6,
};

enum class EStatMod : uint8
{
	Delta                          = 0,
	Set                            = 1,
	Maximum                        = 2,
	EStatMod_MAX                   = 3,
};

enum class EFortEventConditionType : uint8
{
	EFEC_StatCompare               = 0,
	EFEC_CanCraft                  = 1,
	EFEC_MAX                       = 2,
};

enum class EFortCompare : uint8
{
	EFC_LessThan                   = 0,
	EFC_LessThanOrEqual            = 1,
	EFC_GreaterThan                = 2,
	EFC_GreaterThanOrEqual         = 3,
	EFC_Equals                     = 4,
	EFC_MAX                        = 5,
};

enum class EFortEventRepeat : uint8
{
	EFER_Inactive                  = 0,
	EFER_Always                    = 1,
	EFER_OncePerPlayer             = 2,
	EFER_OncePerCampaign           = 3,
	EFER_OncePerMap                = 4,
	EFER_MAX                       = 5,
};

enum class EPrereqNodeType : uint8
{
	Invalid                        = 0,
	SkillPoint                     = 1,
	ResearchPoint                  = 2,
	All                            = 3,
	EPrereqNodeType_MAX            = 4,
};

enum class EFortHomebaseNodeActionType : uint8
{
	None                           = 0,
	DrillDown                      = 1,
	CollectResources               = 2,
	Max_None                       = 3,
	EFortHomebaseNodeActionType_MAX = 4,
};

enum class EFortHomebaseNodeMagnitude : uint8
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	Max_None                       = 3,
	EFortHomebaseNodeMagnitude_MAX = 4,
};

enum class EFortHomebaseNodeDisplayType : uint8
{
	Stat                           = 0,
	SquadSlot                      = 1,
	Gadget                         = 2,
	Inventory                      = 3,
	Hero                           = 4,
	ExitNode                       = 5,
	Max_None                       = 6,
	EFortHomebaseNodeDisplayType_MAX = 7,
};

enum class EFortHomebaseSquadSlotType : uint8
{
	GroundSlot                     = 0,
	SupportSlot                    = 1,
	TacticalSlot                   = 2,
	Max_None                       = 3,
	EFortHomebaseSquadSlotType_MAX = 4,
};

enum class EFortHomebaseSquadType : uint8
{
	AttributeSquad                 = 0,
	CombatSquad                    = 1,
	DefenderSquad                  = 2,
	ExpeditionSquad                = 3,
	Max_None                       = 4,
	EFortHomebaseSquadType_MAX     = 5,
};

enum class EFortNotificationPriority : uint8
{
	Friend                         = 0,
	BoostedXP                      = 1,
	TwitchHigh                     = 2,
	GeneralSendNotification        = 3,
	TwitchLow                      = 10,
	Max                            = 11,
	EFortNotificationPriority_MAX  = 12,
};

enum class EFortNotificationType : uint8
{
	Default                        = 0,
	Power                          = 1,
	EFortNotificationType_MAX      = 2,
};

enum class EFortHexTileAdjacency : uint8
{
	North                          = 0,
	NorthEast                      = 1,
	SouthEast                      = 2,
	South                          = 3,
	SouthWest                      = 4,
	NorthWest                      = 5,
	Max_None                       = 6,
	EFortHexTileAdjacency_MAX      = 7,
};

enum class EFortTheaterType : uint8
{
	Standard                       = 0,
	Elder                          = 1,
	PvP                            = 2,
	PvP2                           = 3,
	Tutorial                       = 4,
	TutorialGate                   = 5,
	Test                           = 6,
	Max_None                       = 7,
	EFortTheaterType_MAX           = 8,
};

enum class EFortTheaterMapTileType : uint8
{
	Normal                         = 0,
	CriticalMission                = 1,
	AlwaysActive                   = 2,
	Outpost                        = 3,
	NonMission                     = 4,
	PvPFOB                         = 5,
	EFortTheaterMapTileType_MAX    = 6,
};

enum class EFortOptionGenerationResult : uint8
{
	NoOptionsGenerated             = 0,
	NewOptionsGenerated            = 1,
	ExistingOptionsGenerated       = 2,
	EFortOptionGenerationResult_MAX = 3,
};

enum class EFortQuestState : uint8
{
	Inactive                       = 0,
	Active                         = 1,
	Completed                      = 2,
	Claimed                        = 3,
	EFortQuestState_MAX            = 4,
};

enum class EFortMissionQuestValidityResult : uint8
{
	Invalid                        = 0,
	InvalidNotPlayable             = 1,
	ValidLinked                    = 2,
	ValidObjectiveCondition        = 3,
	ValidFallback                  = 4,
	EFortMissionQuestValidityResult_MAX = 5,
};

enum class EWaveRules : uint8
{
	KillAllEnemies                 = 0,
	Timed                          = 1,
	KillPoints                     = 2,
	EWaveRules_MAX                 = 3,
};

enum class EFriendFeedbackType : uint8
{
	FriendRequestSent              = 0,
	FriendRequestReceived          = 1,
	FriendRequestAccepted          = 2,
	Default                        = 3,
	EFriendFeedbackType_MAX        = 4,
};

enum class EClampType : uint8
{
	Minimum                        = 0,
	Maximum                        = 1,
	EClampType_MAX                 = 2,
};

enum class EDeployableBaseUseType : uint8
{
	Neighborhood                   = 0,
	PvECombat                      = 1,
	EDeployableBaseUseType_MAX     = 2,
};

enum class EFortZoneType : uint8
{
	PVE                            = 0,
	PVP                            = 1,
	Keep                           = 2,
	SingleZone                     = 3,
	Max_None                       = 4,
	EFortZoneType_MAX              = 5,
};

enum class EFortMtxPlatform : uint8
{
	Epic                           = 0,
	PSN                            = 1,
	Live                           = 2,
	Shared                         = 3,
	EFortMtxPlatform_MAX           = 4,
};

enum class EAthenaProgressiveCosmeticType : uint8
{
	None                           = 0,
	AllTimeWins                    = 1,
	EAthenaProgressiveCosmeticType_MAX = 2,
};

enum class EAthenaCustomizationCategory : uint8
{
	None                           = 0,
	Glider                         = 1,
	Pickaxe                        = 2,
	Hat                            = 3,
	Backpack                       = 4,
	Character                      = 5,
	LoadingScreen                  = 6,
	BattleBus                      = 7,
	Dance                          = 8,
	ConsumableEmote                = 9,
	VictoryPose                    = 10,
	EAthenaCustomizationCategory_MAX = 11,
};

enum class EMontageInterrupt : uint8
{
	Any                            = 0,
	RootMotionOnly                 = 1,
	None                           = 2,
	EMontageInterrupt_MAX          = 3,
};

enum class ECameraOrigin : uint8
{
	ViewTargetTransform            = 0,
	BoneTransform                  = 1,
	ECameraOrigin_MAX              = 2,
};

enum class EFortVisibilityBehavior : uint8
{
	Proximity                      = 0,
	OnceSeenAlwaysSeen             = 1,
	Invalid                        = 2,
	EFortVisibilityBehavior_MAX    = 3,
};

enum class EFortSafeZoneState : uint8
{
	None                           = 0,
	Starting                       = 1,
	Holding                        = 2,
	Shrinking                      = 3,
	EFortSafeZoneState_MAX         = 4,
};

enum class ECollectionSelectionMethod : uint8
{
	TierAsIndex                    = 0,
	TierAsIndexOverflowToLastValid = 1,
	Modulo                         = 2,
	Random                         = 3,
	None                           = 4,
	ECollectionSelectionMethod_MAX = 5,
};

enum class ETargetDistanceComparisonType : uint8
{
	TwoDimensions                  = 0,
	ThreeDimensions                = 1,
	CollisionHalfHeightMultiplier  = 2,
	ETargetDistanceComparisonType_MAX = 3,
};

enum class EFortSocialItemPresenceStatus : uint8
{
	Offline                        = 0,
	InGame                         = 1,
	Away                           = 2,
	Unknown                        = 3,
	EFortSocialItemPresenceStatus_MAX = 4,
};

enum class EFortSocialItemType : uint8
{
	Header                         = 0,
	Friend                         = 1,
	PartyInvite                    = 2,
	RecentPlayer                   = 3,
	Max                            = 4,
	EFortSocialItemType_MAX        = 5,
};

enum class EMcpLeaderboardTimeWindow : uint8
{
	Daily                          = 0,
	Weekly                         = 1,
	Monthly                        = 2,
	AllTime                        = 3,
	EMcpLeaderboardTimeWindow_MAX  = 4,
};

enum class EFortDamageNumberType : uint8
{
	None                           = 0,
	Pawn                           = 1,
	Building                       = 2,
	Player                         = 3,
	Shield                         = 4,
	Score                          = 5,
	DBNO                           = 6,
	EFortDamageNumberType_MAX      = 7,
};

enum class EFortCollectionBookState : uint8
{
	Active                         = 0,
	Completed                      = 1,
	Claimed                        = 2,
	EFortCollectionBookState_MAX   = 3,
};

enum class ETimespanAsTextFormat : uint8
{
	DaysHoursMinutesSeconds        = 0,
	Colons                         = 1,
	ETimespanAsTextFormat_MAX      = 2,
};

enum class EHordeTierStartStatus : uint8
{
	ReadyToStart                   = 0,
	WaitingForPlayer               = 1,
	WaitingForDBM                  = 2,
	GenericNotReadyToStart         = 3,
	EHordeTierStartStatus_MAX      = 4,
};

enum class EFortUserCloudRequestResult : uint8
{
	Success                        = 0,
	Failure_CloudStorageDisabled   = 1,
	Failure_CloudStorageError      = 2,
	Failure_FileNotFoundInUserFileList = 3,
	Failure_SavingNotAllowedForSpecifiedUser = 4,
	EFortUserCloudRequestResult_MAX = 5,
};

enum class EFortUserCloudRequestType : uint8
{
	LoadCloudFile                  = 0,
	SaveCloudFile                  = 1,
	EFortUserCloudRequestType_MAX  = 2,
};

enum class ETeamChatRoomState : uint8
{
	NotCreated                     = 0,
	Creating                       = 1,
	Created                        = 2,
	Timeout                        = 3,
	ETeamChatRoomState_MAX         = 4,
};

enum class EFortWorldManagerState : uint8
{
	WMS_Created                    = 0,
	WMS_QueryingWorld              = 1,
	WMS_WorldQueryComplete         = 2,
	WMS_CreatingNewWorld           = 3,
	WMS_LoadingExistingWorld       = 4,
	WMS_Running                    = 5,
	WMS_Failed                     = 6,
	WMS_MAX                        = 7,
};

enum class EFortLevelStreamingState : uint8
{
	LSS_Unloaded                   = 0,
	LSS_Loaded                     = 1,
	LSS_UnconditionalFoundationsUpdated = 2,
	LSS_AllFoundationsUpdated      = 3,
	LSS_NewActorsCreatedButNotUpdated = 4,
	LSS_AllUpdated                 = 5,
	LSS_Ready                      = 6,
	LSS_MAX                        = 7,
};

enum class EFortQueuedActionUserStatus : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	WaitingForCloudRequest         = 2,
	WaitingForProfileSave          = 3,
	EFortQueuedActionUserStatus_MAX = 4,
};

enum class EFortWorldRecordState : uint8
{
	StartProcessing                = 0,
	WaitingForResponse             = 1,
	RetrievingTheaterInformation   = 2,
	RetrievingZoneInformation      = 3,
	LoadingWorldRecord             = 4,
	LoadingZoneRecord              = 5,
	SavingZoneRecord               = 6,
	SavingPlayerProfiles           = 7,
	SavingPlayerDeployableBases    = 8,
	Succeeded                      = 9,
	Failed                         = 10,
	Max_None                       = 11,
	EFortWorldRecordState_MAX      = 12,
};

enum class EFortWorldRecordAction : uint8
{
	LoadWorldOnly                  = 0,
	SaveWorldOnly                  = 1,
	SaveZoneAndWorld               = 2,
	LoadZoneAndWorld               = 3,
	SaveDeployableBasesAndWorld    = 4,
	Max_None                       = 5,
	EFortWorldRecordAction_MAX     = 6,
};

enum class EHordeWaveStingerType : uint8
{
	WaveSuccess                    = 0,
	WaveFailure                    = 1,
	WaveIncoming                   = 2,
	WaveStarted                    = 3,
	EHordeWaveStingerType_MAX      = 4,
};

enum class EQueueActionType : uint8
{
	Plot                           = 0,
	ZoneCleanup                    = 1,
	EnvironmentActorRestoration    = 2,
	EQueueActionType_MAX           = 3,
};

enum class EAthenaPIEStartupMode : uint8
{
	UseDefaults                    = 0,
	Warmup                         = 1,
	WarmupPaused                   = 2,
	Aircraft                       = 3,
	AircraftPaused                 = 4,
	Gameplay                       = 5,
	EAthenaPIEStartupMode_MAX      = 6,
};

enum class EPvPGameEndReasons : uint8
{
	PVPGER_TeamScoreLimit          = 0,
	PVPGER_LastManStanding         = 1,
	PVPGER_TimeExpired             = 2,
	PVPGER_MissionCompletion       = 3,
	PVPGER_MAX                     = 4,
};

enum class EFortInputActionGroup : uint8
{
	AllModes                       = 0,
	Combat                         = 1,
	Building                       = 2,
	Edit                           = 3,
	Death                          = 4,
	Cinematic                      = 5,
	EFortInputActionGroup_MAX      = 6,
};

enum class EFortInputActionType : uint8
{
	Press                          = 0,
	Click                          = 1,
	Hold                           = 2,
	Release                        = 3,
	EFortInputActionType_MAX       = 4,
};

enum class EFortPickerToDisplay : uint8
{
	TrapPicker                     = 0,
	WeaponPicker                   = 1,
	SocialPicker                   = 2,
	ChatPicker                     = 3,
	NotePicker                     = 4,
	EmotePicker                    = 5,
	EFortPickerToDisplay_MAX       = 6,
};

enum class EFortQuestObjectiveItemEvent : uint8
{
	Craft                          = 0,
	Collect                        = 1,
	Acquire                        = 2,
	Consume                        = 3,
	OpenCardPack                   = 4,
	PurchaseCardPack               = 5,
	Convert                        = 6,
	Upgrade                        = 7,
	QuestComplete                  = 8,
	AssignWorker                   = 9,
	LevelUpCollectionBook          = 10,
	HasItem                        = 11,
	SlotInCollection               = 12,
	HasCompletedQuest              = 13,
	HasAssignedWorker              = 14,
	HasUpgraded                    = 15,
	HasConverted                   = 16,
	HasLeveledUpCollectionBook     = 17,
	Max_None                       = 18,
	EFortQuestObjectiveItemEvent_MAX = 19,
};

enum class EFortQuestObjectiveStatEvent : uint8
{
	Kill                           = 0,
	TeamKill                       = 1,
	KillContribution               = 2,
	Build                          = 3,
	BuildingEdit                   = 4,
	BuildingRepair                 = 5,
	BuildingUpgrade                = 6,
	Complete                       = 7,
	Craft                          = 8,
	Collect                        = 9,
	Win                            = 10,
	Interact                       = 11,
	Destroy                        = 12,
	Ability                        = 13,
	WaveComplete                   = 14,
	Custom                         = 15,
	Client                         = 16,
	AthenaRank                     = 17,
	AthenaOutlive                  = 18,
	NumGameplayEvents              = 19,
	Acquire                        = 20,
	Consume                        = 21,
	OpenCardPack                   = 22,
	PurchaseCardPack               = 23,
	Convert                        = 24,
	Upgrade                        = 25,
	QuestComplete                  = 26,
	AssignWorker                   = 27,
	CollectExpedition              = 28,
	CollectSuccessfulExpedition    = 29,
	LevelUpCollectionBook          = 30,
	HasItem                        = 31,
	SlotInCollection               = 32,
	HasCompletedQuest              = 33,
	HasAssignedWorker              = 34,
	HasUpgraded                    = 35,
	HasConverted                   = 36,
	HasLeveledUpCollectionBook     = 37,
	Max_None                       = 38,
	EFortQuestObjectiveStatEvent_MAX = 39,
};

enum class EFortQuestRewardType : uint8
{
	BasicRewards                   = 0,
	BasicPlusSingleChoice          = 1,
	EFortQuestRewardType_MAX       = 2,
};

enum class EFortQuestType : uint8
{
	Task                           = 0,
	Optional                       = 1,
	DailyQuest                     = 2,
	TransientQuest                 = 3,
	SurvivorQuest                  = 4,
	Achievement                    = 5,
	Onboarding                     = 6,
	StreamBroadcaster              = 7,
	StreamViewer                   = 8,
	StreamSubscriber               = 9,
	Athena                         = 10,
	AthenaDailyQuest               = 11,
	All                            = 12,
	EFortQuestType_MAX             = 13,
};

enum class ERewardSource : uint8
{
	Invalid                        = 0,
	MinutesPlayed                  = 1,
	FirstKill                      = 2,
	TeamKills                      = 3,
	Placement                      = 4,
	Medals                         = 5,
	FirstWin                       = 6,
	ERewardSource_MAX              = 7,
};

enum class EFortServerGameMode : uint8
{
	Idle                           = 0,
	LobbyPvE                       = 1,
	LobbyPvP                       = 2,
	ZonePvP                        = 3,
	ZonePvE                        = 4,
	EFortServerGameMode_MAX        = 5,
};

enum class EFortBanHammerNotificationAction : uint8
{
	DelayedBanAndKick              = 0,
	ImmediateBanAndKick            = 1,
	ImmediateKick                  = 2,
	EFortBanHammerNotificationAction_MAX = 3,
};

enum class EAthenaAerialPhase : uint8
{
	None                           = 0,
	BusCantExit                    = 1,
	BusCanExit                     = 2,
	Skydiving                      = 3,
	Parachuting                    = 4,
	EAthenaAerialPhase_MAX         = 5,
};

enum class EFortNamedNavmesh : uint8
{
	Husk                           = 0,
	Smasher                        = 1,
	MAX                            = 2,
	EFortNamedNavmesh_MAX          = 3,
};

enum class EFortDefenderSubtype : uint8
{
	AssaultRifle                   = 0,
	Pistol                         = 1,
	Melee                          = 2,
	Sniper                         = 3,
	Shotgun                        = 4,
	Invalid                        = 5,
	EFortDefenderSubtype_MAX       = 6,
};

enum class EFortCharacterCosmetic : uint8
{
	Head                           = 0,
	Texture                        = 1,
	Color                          = 2,
	Trinket                        = 3,
	Face                           = 4,
	Gadget                         = 5,
	Body                           = 6,
	ClassFlair                     = 7,
	Max_Invalid                    = 8,
	EFortCharacterCosmetic_MAX     = 9,
};

enum class ECodeTokenPlatform : uint8
{
	PC                             = 0,
	PS4                            = 1,
	XBOX                           = 2,
	ECodeTokenPlatform_MAX         = 3,
};

enum class ETwitchViewerStatusType : uint8
{
	TwitchViewerStatus_Unknown     = 0,
	TwitchViewerStatus_Nonsubscriber = 1,
	TwitchViewerStatus_Subscriber  = 2,
	TwitchViewerStatus_Broadcaster = 3,
	TwitchViewerStatus_Max         = 4,
};

enum class ELobbyMissionGeneratorDetailsRequirement : uint8
{
	Unknown                        = 0,
	NotRequired                    = 1,
	Required                       = 2,
	ELobbyMissionGeneratorDetailsRequirement_MAX = 3,
};

enum class EFortMatchmakingPool : uint8
{
	Any                            = 0,
	Desktop                        = 1,
	PS4                            = 2,
	XboxOne                        = 3,
	Mobile                         = 4,
	EFortMatchmakingPool_MAX       = 5,
};

enum class EFortMatchmakingPrivacyConfiguration : uint8
{
	UserPartyConfigured            = 0,
	ForcePrivate                   = 1,
	ForcePublic                    = 2,
	EFortMatchmakingPrivacyConfiguration_MAX = 3,
};

enum class EMatchmakingFlags : uint8
{
	None                           = 0,
	CreateNewOnly                  = 1,
	NoReservation                  = 2,
	Private                        = 4,
	UseWorldDataOwner              = 8,
	EMatchmakingFlags_MAX          = 9,
};

enum class EMatchmakingStartLocation : uint8
{
	Lobby                          = 0,
	Game                           = 1,
	CreateNew                      = 2,
	FindSingle                     = 3,
	EMatchmakingStartLocation_MAX  = 4,
};

enum class EFortMatchmakingType : uint8
{
	Gathering                      = 0,
	CriticalMission                = 1,
	QuickPlay                      = 2,
	Session                        = 3,
	EFortMatchmakingType_MAX       = 4,
};

enum class EFortSessionHelperJoinState : uint8
{
	NotJoining                     = 0,
	RequestingReservation          = 1,
	FailedReservation              = 2,
	WaitingOnGame                  = 3,
	AttemptingJoin                 = 4,
	JoiningSession                 = 5,
	FailedJoin                     = 6,
	CanceledJoin                   = 7,
	EFortSessionHelperJoinState_MAX = 8,
};

enum class EFortCheatMissionGenType : uint8
{
	NewGeneration                  = 0,
	OldGeneration                  = 1,
	Max_None                       = 2,
	EFortCheatMissionGenType_MAX   = 3,
};

enum class EPollActorsInVolumeTypes : uint8
{
	DesignerPlacedOnly             = 0,
	PlayerBuiltOnly                = 1,
	All                            = 2,
	EPollActorsInVolumeTypes_MAX   = 3,
};

enum class EMissionReplyTypes : uint8
{
	Handled                        = 0,
	NotHandled                     = 1,
	EMissionReplyTypes_MAX         = 2,
};

enum class ETimerOverrideSetting : uint8
{
	DefaultBehavior                = 0,
	ForceShow                      = 1,
	ForceHide                      = 2,
	ETimerOverrideSetting_MAX      = 3,
};

enum class EFortAreaFlag : uint8
{
	Default                        = 0,
	Obstacle                       = 1,
	Smashable                      = 2,
	Unwalkable                     = 3,
	Interactable                   = 4,
	EFortAreaFlag_MAX              = 5,
};

enum class EFortNavLinkPattern : uint8
{
	Floor                          = 0,
	Stairs                         = 1,
	Roof                           = 2,
	Manual                         = 3,
	EFortNavLinkPattern_MAX        = 4,
};

enum class EFortAnnouncerTeamVocalChords : uint8
{
	Team1                          = 0,
	Team2                          = 1,
	Max_None                       = 2,
	EFortAnnouncerTeamVocalChords_MAX = 3,
};

enum class ETrustedPlatformType : uint8
{
	Unknown                        = 0,
	Desktop                        = 1,
	PS4                            = 2,
	XboxOne                        = 3,
	ETrustedPlatformType_MAX       = 4,
};

enum class EFrontEndCamera : uint8
{
	Invalid                        = 0,
	HomeBase                       = 1,
	MissionControl                 = 2,
	Store                          = 3,
	Vault                          = 4,
	SkillTrees                     = 5,
	Heroes                         = 6,
	Login                          = 7,
	TutorialPhaseOne               = 8,
	TutorialPhaseTwo               = 9,
	TutorialPhaseThree             = 10,
	HeroSelect                     = 11,
	Party                          = 12,
	WorldMap                       = 13,
	Home                           = 14,
	StoreItemInspect               = 15,
	Cosmetics                      = 16,
	SpecialEvent                   = 17,
	EFrontEndCamera_MAX            = 18,
};

enum class ESpectatorCameraType : uint8
{
	Chase                          = 0,
	Drone                          = 1,
	MAX                            = 2,
	ESpectatorCameraType_MAX       = 3,
};

enum class EFocusMethod : uint8
{
	NoFocus                        = 0,
	AutoFocus                      = 1,
	ManualFocus                    = 2,
	EFocusMethod_MAX               = 3,
};

enum class EDeathCause : uint8
{
	OutsideSafeZone                = 0,
	FallDamage                     = 1,
	Pistol                         = 2,
	Shotgun                        = 3,
	Rifle                          = 4,
	SMG                            = 5,
	Sniper                         = 6,
	Melee                          = 7,
	Grenade                        = 8,
	GrenadeLauncher                = 9,
	RocketLauncher                 = 10,
	Trap                           = 11,
	DBNOTimeout                    = 12,
	Banhammer                      = 13,
	RemovedFromGame                = 14,
	Unspecified                    = 15,
	EDeathCause_MAX                = 16,
};

enum class EFortPointsFromNavGraphGoalPathDistanceFilterOperator : uint8
{
	AllGoalsInRange                = 0,
	AnyGoalInRange                 = 1,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator_MAX = 2,
};

enum class EFortTestGoalActorDot : uint8
{
	Dot3D                          = 0,
	Dot2D                          = 1,
	EFortTestGoalActorDot_MAX      = 2,
};

enum class EDistanceMode : uint8
{
	DistItemToContext              = 0,
	DistItemGoalActorToContext     = 1,
	DistItemToItemGoalActor        = 2,
	EDistanceMode_MAX              = 3,
};

enum class ECountAIAssignedToType : uint8
{
	Goal                           = 0,
	Actor                          = 1,
	Assignment                     = 2,
	ECountAIAssignedToType_MAX     = 3,
};

enum class ETwoPointSolverRotationA : uint8
{
	PointAToQuerier                = 0,
	QuerierToPointA                = 1,
	PointAToQuerierWithRandomOffset = 2,
	QuerierToPointAWithRandomOffset = 3,
	Custom                         = 4,
	ETwoPointSolverRotationA_MAX   = 5,
};

enum class ERegisteredPlayerUnregistrationStatus : uint8
{
	Registered                     = 0,
	UnregistrationStarting         = 1,
	UnregistrationWaitingForInitialLock = 2,
	UnregistrationWaitingForFinalSave = 3,
	UnregistrationWaitingForProfileUnlock = 4,
	UnregistrationComplete         = 5,
	ERegisteredPlayerUnregistrationStatus_MAX = 6,
};

enum class EFortUIScoreType : uint8
{
	Combat                         = 0,
	Building                       = 1,
	Utility                        = 2,
	Badges                         = 3,
	Bonus                          = 4,
	Total                          = 5,
	Max_None                       = 6,
	EFortUIScoreType_MAX           = 7,
};

enum class EFortScriptedActionEnvironment : uint8
{
	FrontEnd                       = 0,
	GameServer                     = 1,
	GameClient                     = 2,
	Max_None                       = 3,
	EFortScriptedActionEnvironment_MAX = 4,
};

enum class EFortScriptedActionSource : uint8
{
	Quest                          = 0,
	Token                          = 1,
	Manual                         = 2,
	Max_None                       = 3,
	EFortScriptedActionSource_MAX  = 4,
};

enum class EFortAutoTestState : uint8
{
	InitialLoad                    = 0,
	Login                          = 1,
	FrontendLoad                   = 2,
	FrontendPvELoad                = 3,
	FrontendPvETest                = 4,
	PvEMatchmaking                 = 5,
	ZoneLoad                       = 6,
	ZoneTest                       = 7,
	Finished                       = 8,
	MAX                            = 9,
	EFortAutoTestState_MAX         = 10,
};

enum class EFortContextualReticleTypes : uint8
{
	FCR_GenericFailure             = 0,
	FCR_Upgrade                    = 1,
	FCR_Repair                     = 2,
	FCR_Locked                     = 3,
	FCR_Placement                  = 4,
	FCR_Edit                       = 5,
	FCR_NoTarget                   = 6,
	FCR_InProgress                 = 7,
	FCR_None                       = 8,
	FCR_MAX                        = 9,
};

enum class EFortUIFriendNotificationType : uint8
{
	Default                        = 0,
	FriendRequest                  = 1,
	PartyInvite                    = 2,
	EFortUIFriendNotificationType_MAX = 3,
};

enum class EFortReloadMontageSection : uint8
{
	Intro                          = 0,
	Loop                           = 1,
	Outro                          = 2,
	EFortReloadMontageSection_MAX  = 3,
};

enum class EFortSessionHelperJoinResult : uint8
{
	NoResult                       = 0,
	ReservationSuccess             = 1,
	ReservationFailure_PartyLimitReached = 2,
	ReservationFailure_IncorrectPlayerCount = 3,
	ReservationFailure_RequestTimedOut = 4,
	ReservationFailure_ReservationNotFound = 5,
	ReservationFailure_ReservationDenied = 6,
	ReservationFailure_ReservationDenied_Banned = 7,
	ReservationFailure_ReservationRequestCanceled = 8,
	ReservationFailure_ReservationInvalid = 9,
	ReservationFailure_BadSessionId = 10,
	ReservationFailure_ReservationDenied_ContainsExistingPlayers = 11,
	ReservationFailure_GeneralError = 12,
	ReservationFailure_NoSubsystem = 13,
	ReservationFailure_NoIdentity  = 14,
	ReservationFailure_InvalidSession = 15,
	ReservationFailure_InvalidUser = 16,
	ReservationFailure_EncryptionKey = 17,
	ReservationFailure_RefreshAuth = 18,
	ReservationFailure_AlreadyJoiningDuringReserve = 19,
	ReservationFailure_AlreadyJoiningDuringSkip = 20,
	JoinSessionSuccess             = 21,
	JoinSessionFailure_SessionIsFull = 22,
	JoinSessionFailure_SessionDoesNotExist = 23,
	JoinSessionFailure_CouldNotRetrieveAddress = 24,
	JoinSessionFailure_AlreadyInSession = 25,
	JoinSessionFailure_UnknownError = 26,
	JoinSessionFailure_InvalidSession = 27,
	JoinSessionFailure_InvalidSearchResultIndex = 28,
	JoinSessionFailure_AlreadyJoiningDuringJoin = 29,
	SearchPassFailure_NoSessionHelper = 30,
	SearchPassFailure_InvalidUser  = 31,
	SearchPassFailure_NoIdentity   = 32,
	SearchPassFailure_InvalidSearchResult = 33,
	SearchPassFailure_InvalidSearchResultIndex = 34,
	JoinSessionCanceled            = 35,
	EFortSessionHelperJoinResult_MAX = 36,
};

enum class ESpeedWarpingAxisMode : uint8
{
	IKFootRootLocalX               = 0,
	IKFootRootLocalY               = 1,
	IKFootRootLocalZ               = 2,
	WorldSpaceVectorInput          = 3,
	ComponentSpaceVectorInput      = 4,
	ActorSpaceVectorInput          = 5,
	ESpeedWarpingAxisMode_MAX      = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.ProjectileEventData
struct FProjectileEventData
{
public:
	class AFortProjectileBase*                   SpawnedProjectile;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                    Hits;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ExplodedActors;                                    // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortAIDirectorEvent
struct FFortAIDirectorEvent
{
public:
	enum class EFortAIDirectorEvent              Event;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               EventSource;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EventTarget;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EventValue;                                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteGame.MtxPackage
struct FMtxPackage
{
public:
	class FString                                StorefrontName;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OfferId;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        TotalAmount;                                       // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BonusAmount;                                       // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Price;                                             // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SaleBasePrice;                                     // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                DisplayAssetPath;                                  // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteGame.AthenaLevelInfo
struct FAthenaLevelInfo
{
public:
	int32                                        AccountLevel;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevel;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelXp;                                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelXpForLevel;                                   // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FortniteGame.FortPublicAccountInfo
struct FFortPublicAccountInfo
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevel;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelXp;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelXpForLevel;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaLevelInfo                      BattleRoyaleLevel;                                 // 0x10(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x28 - 0x24)
// ScriptStruct FortniteGame.FortPrivateAccountInfo
struct FFortPrivateAccountInfo : public FFortPublicAccountInfo
{
public:
	int32                                        MtxBalance;                                        // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortHomeBaseInfo
struct FFortHomeBaseInfo
{
public:
	class FString                                BannerIconId;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BannerColorId;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         ValidData;                                         // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortItemInstanceQuantityPair
struct FFortItemInstanceQuantityPair
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortInventoryType                InventoryType;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Quantity;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FriendCode
struct FFriendCode
{
public:
	class FString                                Code;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CodeType;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteGame.FortAthenaLoadout
struct FFortAthenaLoadout
{
public:
	class FString                                BannerIconId;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BannerColorId;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaGliderItemDefinition*           Glider;                                            // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaPickaxeItemDefinition*          Pickaxe;                                           // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaCharacterItemDefinition*        Character;                                         // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaHatItemDefinition*              Hat;                                               // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaBackpackItemDefinition*         Backpack;                                          // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaLoadingScreenItemDefinition*    LoadingScreen;                                     // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaBattleBusItemDefinition*        BattleBus;                                         // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaDanceItemDefinition*            Dance;                                             // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaVictoryPoseItemDefinition*      VictoryPose;                                       // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FriendCodeLocString
struct FFriendCodeLocString
{
public:
	class FString                                Lang;                                              // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Text;                                              // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// ScriptStruct FortniteGame.FortTeamMemberInfo
struct FFortTeamMemberInfo
{
public:
	struct FUniqueNetIdRepl                      MemberUniqueId;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PartyLeaderUniqueId;                               // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      ConsoleUniqueId;                                   // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PlayerName;                                        // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bPartyLeader;                                      // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInZone;                                         // 0x61(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBoostXp;                                       // 0x62(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasRestXp;                                        // 0x63(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPlayersInParty;                                 // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerIndex;                                       // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortTeam                         TeamAffiliation;                                   // 0x6C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HeroClass;                                         // 0x70(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  HeroLevel;                                         // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        HeroXP;                                            // 0xA0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A21[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             HeroItem;                                          // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortItem*>                     SelectedGadgetItems;                               // 0xB0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HeroIcon;                                          // 0xC0(0x90)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortHomeBaseInfo                     HomeBaseInfo;                                      // 0x150(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortItemQuantityPair
struct FFortItemQuantityPair
{
public:
	TSoftObjectPtr<class UFortItemDefinition>    ItemDefinition;                                    // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A22[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortSelectableRewardOption
struct FFortSelectableRewardOption
{
public:
	TArray<struct FFortItemQuantityPair>         Rewards;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortHiddenRewardQuantityPair
struct FFortHiddenRewardQuantityPair
{
public:
	class FName                                  TemplateId;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A23[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortRewardInfo
struct FFortRewardInfo
{
public:
	TArray<struct FFortSelectableRewardOption>   SelectableRewards;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>         StandardRewards;                                   // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortHiddenRewardQuantityPair> HiddenRewards;                                     // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteGame.FortCollectionBookRewards
struct FFortCollectionBookRewards
{
public:
	enum class ECollectionBookRewardType         RewardType;                                        // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A24[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PageId;                                            // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionId;                                         // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XpRequired;                                        // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A25[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsMajorReward;                                    // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A26[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRewardInfo                       Rewards;                                           // 0x40(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// ScriptStruct FortniteGame.FortDialogDescription
struct FFortDialogDescription
{
public:
	struct FSlateBrush                           Icon;                                              // 0x0(0x90)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  MessageHeader;                                     // 0x90(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  MessageBody;                                       // 0xA8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  AcceptButtonText;                                  // 0xC0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  IgnoreButtonText;                                  // 0xD8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DismissButtonText;                                 // 0xF0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        DisplayTime;                                       // 0x108(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A27[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           AdditionalContent;                                 // 0x110(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortDialogFeedbackType           FeedBackType;                                      // 0x118(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Dismissable;                                       // 0x119(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A28[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortNotificationHandler*              NotificationHandler;                               // 0x120(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A29[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteGame.FortEncounterSettings
struct FFortEncounterSettings
{
public:
	TArray<enum class EFortEncounterDirection>   ForbiddenSpawnDirections;                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRiftsDestroyPlayerBuiltBuildings;                 // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustFindSpawnPoints;                              // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrackCombatParticipation;                         // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayThreatVisuals;                             // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumRiftsToUseOverride;                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEQSQueryToFindAISpawnLocations;                // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelevantForTotalAICap;                            // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvQuery*                             RiftSelectionQuery;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ScriptedSpawnPoints;                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        WorkingScriptedSpawnPoints;                        // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UFortDifficultyOptionCategoryEncounter*> InjectedOverrideCategories;                        // 0x48(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct FortniteGame.HomebaseNodePage
struct FHomebaseNodePage : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                EventID;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PositionIndex;                                     // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          NodeList;                                          // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteGame.FortDialogExternalLatentActionHandle
struct FFortDialogExternalLatentActionHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.HomebaseNodeInstancePrerequisites
struct FHomebaseNodeInstancePrerequisites
{
public:
	class FName                                  NodeInstanceId;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideConnection;                                   // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PrereqPageId;                                      // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPrereqNodeType                   PrereqNodeType;                                    // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinOwnedNodesRequiredFromPrereqPage;               // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.HomebaseNodeANDPrerequisites
struct FHomebaseNodeANDPrerequisites
{
public:
	TArray<struct FHomebaseNodeInstancePrerequisites> AND_Prerequisites;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.HomebaseSquadSlotId
struct FHomebaseSquadSlotId
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct FortniteGame.HomebaseNode
struct FHomebaseNode : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FHomebaseNodeANDPrerequisites> OR_Prerequisites;                                  // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>         Cost;                                              // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFortQuestItemDefinition>> QuestTemplateRequirements;                         // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EFortHomebaseNodeDisplayType      DisplayType;                                       // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortHomebaseNodeMagnitude        DisplayMagnitude;                                  // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortHomebaseNodeActionType       ActionType;                                        // 0x52(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2F[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DrillDownNodePageId;                               // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAbilityKit*                       AbilityKit;                                        // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           GameplayEffect;                                    // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          GameplayEffectRowNames;                            // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHomebaseSquadSlotId>          UnlockedSquadSlots;                                // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumPowerPoints;                                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A30[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StyleId;                                           // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0xA0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortTooltip>              CustomTooltip;                                     // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x360 (0x360 - 0x0)
// ScriptStruct FortniteGame.FortMultiSizeBrush
struct FFortMultiSizeBrush
{
public:
	struct FSlateBrush                           Brush_XXS;                                         // 0x0(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_XS;                                          // 0x90(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_S;                                           // 0x120(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_M;                                           // 0x1B0(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_L;                                           // 0x240(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_XL;                                          // 0x2D0(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortInputActionDetails
struct FFortInputActionDetails
{
public:
	enum class EFortInputActionType              InputActionType;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A31[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  ActionKey;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.GameSummaryInfo
struct FGameSummaryInfo
{
public:
	class FString                                GameSessionID;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Completed;                                         // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A32[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct FortniteGame.ConfirmationDialogAction
struct FConfirmationDialogAction
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HoverText;                                         // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  ResultName;                                        // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Icon;                                              // 0x38(0x90)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  ActionName;                                        // 0xC8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct FortniteGame.FortDialogDescription_NUI
struct FFortDialogDescription_NUI
{
public:
	struct FSlateBrush                           Icon;                                              // 0x0(0x90)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  MessageHeader;                                     // 0x90(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  MessageBody;                                       // 0xA8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FConfirmationDialogAction>     ConfirmButtonInputActions;                         // 0xC0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  DeclineButtonInputAction;                          // 0xD0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMultipleConfirmButtons;                           // 0xD8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A33[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               AdditionalContent;                                 // 0xE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               LeftAdditionalContent;                             // 0xE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayTime;                                       // 0xF0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Dismissable;                                       // 0xF4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldWaitForLatentActionOnConfirmAction;         // 0xF5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A34[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortNotificationHandler*              NotificationHandler;                               // 0xF8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A35[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x398 (0x398 - 0x0)
// ScriptStruct FortniteGame.FortTagUIData
struct FFortTagUIData
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   Icon;                                              // 0x8(0x360)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x368(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x380(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortPlayerDeathReport
struct FFortPlayerDeathReport
{
public:
	float                                        ServerTimeForRespawn;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ServerTimeForResurrect;                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LethalDamage;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A36[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      KillerPlayerState;                                 // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             KillerPawn;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDroppedBackpack : 1;                              // Mask: 0x1, PropSize: 0x10x28(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNotifyUI : 1;                                     // Mask: 0x2, PropSize: 0x10x28(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_74 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A37[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Tags;                                              // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.ReplicatedStatValues
struct FReplicatedStatValues
{
public:
	int32                                        StatValue;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreValue;                                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FortniteGame.FortExperienceDelta
struct FFortExperienceDelta
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Xp;                                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseXPEarned;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BonusXPEarned;                                     // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoostXPEarned;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoostXPMissed;                                     // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RestXPEarned;                                      // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupBoostXPEarned;                                // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortIsFinalXpUpdate              IsFinalXpUpdate;                                   // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A38[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x288 (0x288 - 0x0)
// ScriptStruct FortniteGame.FortPlayerScoreReport
struct FFortPlayerScoreReport
{
public:
	struct FUniqueNetIdRepl                      PlayerID;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AFortPlayerState>       PlayerState;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortTeam                         PlayerTeam;                                        // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A39[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicatedStatValues                 ReplicatedStats_Campaign;                          // 0x34(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3A[0x108];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicatedStatValues                 ReplicatedStats_Zone;                              // 0x144(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3B[0x108];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InitialLevel;                                      // 0x254(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialExperienceAmount;                           // 0x258(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortExperienceDelta                  ExperienceInfoDelta;                               // 0x25C(0x24)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LastExperienceDeltaAmount;                         // 0x280(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastScoreDeltaAmount;                              // 0x284(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.EndOfDayRecap
struct FEndOfDayRecap
{
public:
	int32                                        DayNumber;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeamScoreAtStartOfDay;                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeamScoreAtEndOfDay;                               // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortPlayerScoreReport>        ScoreReports;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// ScriptStruct FortniteGame.FortClientAnnouncementData
struct FFortClientAnnouncementData
{
public:
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct FortniteGame.FortClientAnnouncementData_Basic
struct FFortClientAnnouncementData_Basic : public FFortClientAnnouncementData
{
public:
	struct FSlateBrush                           Icon;                                              // 0x0(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TitleText;                                         // 0x90(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DetailText;                                        // 0xA8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  GamepadDetailText;                                 // 0xC0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DisplayTime;                                       // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            OnStartSound;                                      // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x140 - 0xF0)
// ScriptStruct FortniteGame.FortClientAnnouncementData_Tutorial
struct FFortClientAnnouncementData_Tutorial : public FFortClientAnnouncementData_Basic
{
public:
	float                                        AutoContinueDelay;                                 // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NameText;                                          // 0xF8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  SystemText;                                        // 0x110(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bButtonEnabled;                                    // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLightboxEnabled;                                  // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLightboxDisableInputOnly;                         // 0x12A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A40[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x12C(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VAlign;                                            // 0x13C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HAlign;                                            // 0x13D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A41[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.HomebaseSquadAttributeBonus
struct FHomebaseSquadAttributeBonus
{
public:
	struct FGameplayAttribute                    AttributeGranted;                                  // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  BonusCurve;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteGame.HomebaseSquadSlot
struct FHomebaseSquadSlot
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<enum class EFortItemType>             ValidSlottableItemTypes;                           // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TagFilter;                                         // 0x28(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FHomebaseSquadAttributeBonus>  SlottingBonuses;                                   // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCurveTable*                           PersonalityMatchBonusTable;                        // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct FortniteGame.HomebaseSquad
struct FHomebaseSquad : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ShortDisplayName;                                  // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EFortHomebaseSquadType            SquadType;                                         // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A42[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ManagerSynergyTag;                                 // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHomebaseSquadSlot>            CrewSlots;                                         // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredTheaterTags;                               // 0x58(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        MaxNumDefendersAllowedInLevel;                     // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumDefendersAllowedInGroupLevel;                // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsiderNumPlayersForMaxNumDefenders;             // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysRemoveOldestDefenderWhenReplacing;          // 0x81(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A43[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.AIHotSpotSlotInfo
struct FAIHotSpotSlotInfo
{
public:
	class AAIHotSpot*                            HotSpot;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A44[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.DataTableRowHandleQuantityPair
struct FDataTableRowHandleQuantityPair
{
public:
	struct FDataTableRowHandle                   DataTableRowHandle;                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A45[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x378 (0x378 - 0x0)
// ScriptStruct FortniteGame.KeybindIcon
struct FKeybindIcon
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   Brush;                                             // 0x18(0x360)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortEffectDistanceQuality
struct FFortEffectDistanceQuality
{
public:
	float                                        MinDistanceCinematic;                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceEpic;                                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceHigh;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceMedium;                                 // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceLow;                                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowCinematic : 1;                               // Mask: 0x1, PropSize: 0x10x14(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowEpic : 1;                                    // Mask: 0x2, PropSize: 0x10x14(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowHigh : 1;                                    // Mask: 0x4, PropSize: 0x10x14(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowMedium : 1;                                  // Mask: 0x8, PropSize: 0x10x14(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowLow : 1;                                     // Mask: 0x10, PropSize: 0x10x14(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A46[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortParticleSystemParamBucket
struct FFortParticleSystemParamBucket
{
public:
	TArray<struct FParticleSysParam>             Parameters;                                        // 0x0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortClientEvent
struct FFortClientEvent
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventName;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EventSource;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EventFocus;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortEventName
struct FFortEventName
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventName;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct FortniteGame.FortClientEventName
struct FFortClientEventName : public FFortEventName
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct FortniteGame.FortMissionEventName
struct FFortMissionEventName : public FFortEventName
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortCatalogMetaPreload
struct FFortCatalogMetaPreload
{
public:
	TArray<TSoftObjectPtr<class UFortAccountItemDefinition>> ChaseItems;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortCardPackItemDefinition> PackDefinition;                                    // 0x10(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortCatalogMeta
struct FFortCatalogMeta
{
public:
	TArray<class UFortAccountItemDefinition*>    ChaseItems;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortCardPackItemDefinition*           PackDefinition;                                    // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortSpawnContext
struct FFortSpawnContext
{
public:
	enum class EFortTeam                         Team;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A47[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Tags;                                              // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, SaveGame, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortQuestPackInfo
struct FFortQuestPackInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultQuestPack;                                  // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxActiveDailyQuests;                              // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRerollsPerDay;                                  // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsStreamingQuestPack;                              // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A48[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct FortniteGame.FortLoginReward
struct FFortLoginReward : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortAccountItemDefinition> ItemDefinition;                                    // 0x8(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemCount;                                         // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A49[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bIsMajorReward;                                    // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteGame.TransmogSacrifice
struct FTransmogSacrifice : public FTableRowBase
{
public:
	int32                                        TransmogSacrificePoints;                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct FortniteGame.Recipe
struct FRecipe : public FTableRowBase
{
public:
	TArray<struct FFortItemQuantityPair>         RecipeResults;                                     // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsConsumed;                                       // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemQuantityPair>         RecipeCosts;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredCatalysts;                                 // 0x30(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.EncounterEnvironmentQueryInfo
struct FEncounterEnvironmentQueryInfo
{
public:
	class UEnvQuery*                             EnvironmentQuery;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                QueryParams;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsDirectional;                                    // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.OnTimeHitInfo
struct FOnTimeHitInfo
{
public:
	UDelegateProperty_                           TimeCallback;                                      // 0x0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4F[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortDayPhaseCallbackHandle
struct FFortDayPhaseCallbackHandle
{
public:
	uint8                                        Pad_A50[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x398 (0x398 - 0x0)
// ScriptStruct FortniteGame.ItemCategory
struct FItemCategory
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  CategoryName;                                      // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   CategoryBrush;                                     // 0x38(0x360)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.ChoiceDataEntry
struct FChoiceDataEntry
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ButtonDescription;                                 // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ConfirmText;                                       // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireConfirmation;                              // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseAfterSelection;                              // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A51[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.ChoiceData
struct FChoiceData
{
public:
	int32                                        MenuIdentifier;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowCloseButton;                                  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A52[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title;                                             // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FChoiceDataEntry>              Items;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteGame.FortMultiSizeMargin
struct FFortMultiSizeMargin
{
public:
	struct FMargin                               Margin_XXS;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Margin_XS;                                         // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Margin_S;                                          // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Margin_M;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Margin_L;                                          // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Margin_XL;                                         // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x270 (0x270 - 0x0)
// ScriptStruct FortniteGame.FortMultiSizeFont
struct FFortMultiSizeFont
{
public:
	struct FSlateFontInfo                        Font_XXS;                                          // 0x0(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font_XS;                                           // 0x68(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font_S;                                            // 0xD0(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font_M;                                            // 0x138(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font_L;                                            // 0x1A0(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font_XL;                                           // 0x208(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortRequirementsInfo
struct FFortRequirementsInfo
{
public:
	int32                                        CommanderLevel;                                    // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PersonalPowerRating;                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PartyPowerRating;                                  // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A53[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItemDefinition*              ActiveQuestDefinition;                             // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestItemDefinition*              QuestDefinition;                                   // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ObjectiveStatHandle;                               // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UFortQuestItemDefinition*              UncompletedQuestDefinition;                        // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct FortniteGame.AIHotSpotUseInfo
struct FAIHotSpotUseInfo : public FAIHotSpotSlotInfo
{
public:
	uint8                                        Pad_A54[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.FortNavLinkPattern
struct FFortNavLinkPattern
{
public:
	int32                                        PatternBits;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WildcardBits;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteGame.BuildingActorNavArea
struct FBuildingActorNavArea
{
public:
	int32                                        AreaBits;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortAIAssignmentIdentifier
struct FFortAIAssignmentIdentifier
{
public:
	enum class EAssignmentType                   AssignmentType;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A55[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 AssignmentGameplayTags;                            // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EFortTeam                         AssignmentTeam;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A56[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.BuildingActorHotSpotDirection
struct FBuildingActorHotSpotDirection
{
public:
	class UAIHotSpotConfig*                      HotSpotConfig;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMirrorX : 1;                                      // Mask: 0x1, PropSize: 0x10x14(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMirrorY : 1;                                      // Mask: 0x2, PropSize: 0x10x14(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_75 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortHotSpotDirection             Direction;                                         // 0x18(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHotspotTypeConfigMode            TypeConfigUsage;                                   // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A58[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x20 - 0x10)
// ScriptStruct FortniteGame.AutoAcquireSlot
struct FAutoAcquireSlot : public FAIHotSpotSlotInfo
{
public:
	uint8                                        Pad_A59[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortGiftingInfo
struct FFortGiftingInfo
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortHeroType*                         HeroType;                                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5A[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortItemEntryStateValue
struct FFortItemEntryStateValue
{
public:
	int32                                        IntValue;                                          // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A5B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NameValue;                                         // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortItemEntryState               StateType;                                         // 0x10(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A5C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x9C (0xA8 - 0xC)
// ScriptStruct FortniteGame.FortItemEntry
struct FFortItemEntry : public FFastArraySerializerItem
{
public:
	int32                                        Count;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Durability;                                        // 0x18(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Level;                                             // 0x1C(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        LoadedAmmo;                                        // 0x20(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A5D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAlterationItemDefinition*> AlterationDefinitions;                             // 0x28(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate)
	class FString                                ItemSource;                                        // 0x38(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 ItemGuid;                                          // 0x48(0x10)(SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         Inventory_overflow_date;                           // 0x58(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsReplicatedCopy;                                 // 0x59(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsDirty;                                          // 0x5A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A5E[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGiftingInfo                      GiftingInfo;                                       // 0x60(0x28)(NativeAccessSpecifierPrivate)
	TArray<struct FFortItemEntryStateValue>      StateValues;                                       // 0x88(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AFortInventory>         ParentInventory;                                   // 0x98(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayAbilitySpecHandle            GameplayAbilitySpecHandle;                         // 0xA0(0x4)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A5F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct FortniteGame.FortGiftGiver
struct FFortGiftGiver : public FFortGiftingInfo
{
public:
	int32                                        NumItemsGiven;                                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A60[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortBounceData
struct FFortBounceData
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BounceValue;                                       // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DeformationVector;                                 // 0xC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DeformationCenter;                                 // 0x1C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBounceType                   BounceType;                                        // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A61[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortMissionInstancedConfigDataBucket
struct FFortMissionInstancedConfigDataBucket
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMissionConfigData*                ConfigData;                                        // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortMissionInstancedConfigData
struct FFortMissionInstancedConfigData
{
public:
	TArray<struct FFortMissionInstancedConfigDataBucket> ConfigDataBuckets;                                 // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortMissionConfigDataBucket
struct FFortMissionConfigDataBucket
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortMissionConfigData>  ConfigDataClass;                                   // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortMissionConfigDataParams
struct FFortMissionConfigDataParams
{
public:
	TArray<struct FFortMissionConfigDataBucket>  ConfigParams;                                      // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortConnectionData
struct FFortConnectionData
{
public:
	class ABuildingSMActor*                      ConnectedActor;                                    // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 ConnectedActorGuid;                                // 0x8(0x10)(SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MySocketName;                                      // 0x18(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TheirSocketName;                                   // 0x20(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A62[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortConnectivityComponentData
struct FFortConnectivityComponentData
{
public:
	TArray<struct FFortConnectionData>           Connections;                                       // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                         bIsPowered;                                        // 0x10(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsProvidingPower;                                 // 0x11(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowConnections;                                 // 0x12(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowsPowerToPassThrough;                         // 0x13(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A63[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortFinderProperty
struct FFortFinderProperty
{
public:
	class UProperty*                             Property;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteGame.FortPlacementActorFinderEntry
struct FFortPlacementActorFinderEntry
{
public:
	TSoftClassPtr<class AActor>                  BuildingToSpawn;                                   // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABuildingActor>            BuildingClassToFind;                               // 0x20(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ABuildingActor>>    BuildingClassesToFind;                             // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredTags;                                      // 0x38(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PreferredTags;                                     // 0x58(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ExlusionTags;                                      // 0x78(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortFinderProperty>           RequiredProperties;                                // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIgnoreCollisionCheck;                             // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToGrid;                                       // 0xA9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A64[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortPlacementActorFinderInfo
struct FFortPlacementActorFinderInfo
{
public:
	float                                        DistanceRangeMin;                                  // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceRangeMax;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortPlacementActorFinderEntry> BuildingData;                                      // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.FortPlacementDistanceRequirements
struct FFortPlacementDistanceRequirements
{
public:
	float                                        DistanceRangeMin;                                  // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceRangeMax;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteGame.FortMissionEvent
struct FFortMissionEvent
{
public:
	class FName                                  EventType;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ObjectiveHandle;                                   // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                               EventFocus;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataAsset*                            EventContent;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                EventInstigator;                                   // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GenericInt;                                        // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GenericFloat;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  GenericText;                                       // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x60(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGuid                                 MissionGuid;                                       // 0x80(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMissionEventParams*               Params;                                            // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.InteractionType
struct FInteractionType
{
public:
	enum class ETInteractionType                 InteractionType;                                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A65[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AFortPlayerPawn>        RequestingPawn;                                    // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A66[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UPrimitiveComponent>    InteractComponent;                                 // 0x14(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractPoint;                                     // 0x1C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortAttributeInitializationKey
struct FFortAttributeInitializationKey
{
public:
	class FName                                  AttributeInitCategory;                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttributeInitSubCategory;                          // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct FortniteGame.FortGameplayAttributeData
struct FFortGameplayAttributeData : public FGameplayAttributeData
{
public:
	float                                        Minimum;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Maximum;                                           // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsClamped;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldClampBase;                                  // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A67[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x68 - 0x8)
// ScriptStruct FortniteGame.FortSurfaceDamageRatioStats
struct FFortSurfaceDamageRatioStats : public FTableRowBase
{
public:
	class FName                                  Default;                                           // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  Wood;                                              // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  Stone;                                             // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  Metal;                                             // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  HumanEntity;                                       // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AIEntity;                                          // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  Explosive;                                         // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeakSpot;                                          // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  Objective;                                         // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeakSpot_Wood;                                     // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeakSpot_Stone;                                    // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  WeakSpot_Metal;                                    // 0x60(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.FortSurfaceDamageRatioByAffiliationStats
struct FFortSurfaceDamageRatioByAffiliationStats : public FTableRowBase
{
public:
	float                                        Friendly;                                          // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Neutral;                                           // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Hostile;                                           // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A68[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortDamageSource
struct FFortDamageSource
{
public:
	TWeakObjectPtr<class AController>            InstigatorController;                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 DamageCauser;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.FortCombatManagerEvent
struct FFortCombatManagerEvent
{
public:
	float                                        EventValue;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCombatEvents                 Event;                                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A69[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortActiveMontageDecisionWindow
struct FFortActiveMontageDecisionWindow
{
public:
	class UFortAnimNotifyState_AbilityDecisionWindow* DecisionWindow;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     DecisionAnimation;                                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReceivedPrimaryInput;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReceivedSecondaryInput;                           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlreadyProcessedInput;                            // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6A[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortMontageInputAction
struct FFortMontageInputAction
{
public:
	struct FGameplayTag                          TriggerAbilityTag;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NextSection;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMontageInputType             InputType;                                         // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.BuildingClassData
struct FBuildingClassData
{
public:
	class UClass*						         BuildingClass;                                     // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviousBuildingLevel;                             // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpgradeLevel;                                      // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortCrackEffectData
struct FFortCrackEffectData
{
public:
	struct FVector_NetQuantizeNormal             Normal;                                            // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 Position;                                          // 0xC(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortCrackEffect*                      OldCrackEffect;                                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct FortniteGame.FortLootQuotaData
struct FFortLootQuotaData : public FTableRowBase
{
public:
	class FName                                  QuotaCategory;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELootQuotaLevel                   QuotaLevel;                                        // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Min;                                               // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max;                                               // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Quota;                                             // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinWorldLevel;                                     // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxWorldLevel;                                     // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.EditModeState
struct FEditModeState
{
public:
	TSubclassOf<class ABuildingSMActor>          EditClass;                                         // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RotationIterations;                                // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrored;                                         // 0xC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCurrentlyValid;                                   // 0xD(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6E[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.EditorOnlyBuildingInstanceMaterialParameters
struct FEditorOnlyBuildingInstanceMaterialParameters
{
public:
	TArray<struct FScalarParameterValue>         ScalarParams;                                      // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVectorParameterValue>         VectorParams;                                      // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTextureParameterValue>        TextureParams;                                     // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.RandomDayphaseFX
struct FRandomDayphaseFX
{
public:
	class UParticleSystem*                       ParticleSystem;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>               AltParticleSystems;                                // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ChanceToSpawnFX;                                   // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortDayPhase>             RequiredDayphases;                                 // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRandomSelectionAlreadyHappened;                   // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A70[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              SpawnedComponent;                                  // 0x38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.BuildingNavObstacle
struct FBuildingNavObstacle
{
public:
	struct FBox                                  LocalBounds;                                       // 0x0(0x1C)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBuildingNavObstacleType          ObstacleType;                                      // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A71[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.ChosenQuotaInfo
struct FChosenQuotaInfo
{
public:
	int32                                        LootTier;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A72[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LootTierKey;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteGame.MeshSet
struct FMeshSet
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A73[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           BaseMesh;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortResourceType                 ResourceType;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A74[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDoNotBlockBuildings : 1;                          // Mask: 0x1, PropSize: 0x10x14(0x1)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDestroyOnPlayerBuildingPlacement : 1;             // Mask: 0x2, PropSize: 0x10x14(0x1)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNeedsDamageOverlay : 1;                           // Mask: 0x4, PropSize: 0x10x14(0x1)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_76 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A75[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       BreakEffect;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       DeathParticles;                                    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DeathParticleSocketName;                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            DeathSound;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ConstructedEffect;                                 // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           SearchedMesh;                                      // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  SearchSpeed;                                       // 0x48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LootNoiseRange;                                    // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LootNoiseLoudness;                                 // 0x5C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LootSpawnLocation;                                 // 0x60(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A76[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.TierMeshSets
struct FTierMeshSets
{
public:
	int32                                        Tier;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A77[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMeshSet>                      MeshSets;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteGame.FortWeakSpotPosition
struct FFortWeakSpotPosition
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0xC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValidSpot;                                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A78[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteGame.BuildingValueRules
struct FBuildingValueRules
{
public:
	int32                                        CellsAbove;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CellsBelow;                                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CellHorizontalRadius;                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceFromObjectiveWeight;                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackWeight;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StructuralWeight;                                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrapWeight;                                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteGame.AIHotSpotSlotConfig
struct FAIHotSpotSlotConfig
{
public:
	struct FVector                               Offset;                                            // 0x0(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0xC(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortHotSpotSlot                  SlotType;                                          // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A79[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.GameplayTagMessage
struct FGameplayTagMessage
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct FortniteGame.AthenaLevelUpData
struct FAthenaLevelUpData : public FTableRowBase
{
public:
	int32                                        Level;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XpToNextLevel;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XpTotal;                                           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrencyReward;                                    // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChaseRewardTemplateId;                             // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortAbilitySetHandle
struct FFortAbilitySetHandle
{
public:
	TWeakObjectPtr<class UAbilitySystemComponent> TargetAbilitySystemComponent;                      // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGameplayAbilitySpecHandle>    GrantedAbilityHandles;                             // 0x8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActiveGameplayEffectHandle>   AppliedEffectHandles;                              // 0x18(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.GameplayEffectApplicationInfo
struct FGameplayEffectApplicationInfo
{
public:
	TSoftClassPtr<class UGameplayEffect>         GameplayEffect;                                    // 0x0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x98 - 0x90)
// ScriptStruct FortniteGame.FortGameplayAbilityTargetData_SingleTargetHit
struct FFortGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData_SingleTargetHit
{
public:
	int32                                        CartridgeID;                                       // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteGame.ActiveGameplayModifierHandle
struct FActiveGameplayModifierHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteGame.FortDeliveryInfoRequirementsFilter
struct FFortDeliveryInfoRequirementsFilter
{
public:
	struct FGameplayTagRequirements              SourceTagRequirements;                             // 0x0(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTagRequirements;                             // 0x40(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EFortTeamAffiliation              ApplicableTeamAffiliation;                         // 0x80(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bConsiderTeamAffiliationToInstigator : 1;          // Mask: 0x1, PropSize: 0x10x84(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_77 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A7D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortTeam                         ApplicableTeam;                                    // 0x88(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bConsiderTeam : 1;                                 // Mask: 0x1, PropSize: 0x10x8C(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyToPlayerPawns : 1;                           // Mask: 0x2, PropSize: 0x10x8C(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyToAIPawns : 1;                               // Mask: 0x4, PropSize: 0x10x8C(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyToBuildingActors : 1;                        // Mask: 0x8, PropSize: 0x10x8C(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_78 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A7F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortDeliveryInfoBuildingActorSpecification BuildingActorSpecification;                        // 0x90(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A80[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bApplyToGlobalEnvironmentAbilityActor : 1;         // Mask: 0x1, PropSize: 0x10x94(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A81[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteGame.ProximityBasedGEDeliveryInfo
struct FProximityBasedGEDeliveryInfo
{
public:
	struct FFortDeliveryInfoRequirementsFilter   DeliveryRequirements;                              // 0x0(0x98)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayEffectApplicationInfo> EffectsToApply;                                    // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class EFortProximityBasedGEApplicationType ProximityApplicationType;                          // 0xA8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A82[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct FortniteGame.FortAbilitySetDeliveryInfo
struct FFortAbilitySetDeliveryInfo
{
public:
	struct FFortDeliveryInfoRequirementsFilter   DeliveryRequirements;                              // 0x0(0x98)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UFortAbilitySet>> AbilitySets;                                       // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct FortniteGame.FortGameplayEffectDeliveryInfo
struct FFortGameplayEffectDeliveryInfo
{
public:
	struct FFortDeliveryInfoRequirementsFilter   DeliveryRequirements;                              // 0x0(0x98)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayEffectApplicationInfo> GameplayEffects;                                   // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortConditionalIncludeTags
struct FFortConditionalIncludeTags
{
public:
	struct FGameplayTagContainer                 ConditionTags;                                     // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 IncludeTags;                                       // 0x20(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x58 (0xC0 - 0x68)
// ScriptStruct FortniteGame.FortGameplayEffectContext
struct FFortGameplayEffectContext : public FGameplayEffectContext
{
public:
	bool                                         bIsFatalHit;                                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCriticalHit;                                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFullBodyHit;                                    // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A83[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        KnockbackMagnitude;                                // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KnockbackZAngle;                                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StunTime;                                          // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChargeMagnitude;                                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A84[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TooltipTags;                                       // 0x80(0x20)(NativeAccessSpecifierPublic)
	int32                                        CartridgeID;                                       // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ItemGuid;                                          // 0xA4(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                DamageSourceObject;                                // 0xB4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SourceLevel;                                       // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteGame.BuildingGameplayActorAbilityDeliveryBucket
struct FBuildingGameplayActorAbilityDeliveryBucket
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FProximityBasedGEDeliveryInfo> ProximityBasedEffectBuckets;                       // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAbilitySetDeliveryInfo>   PawnPersistentAbilitySetBuckets;                   // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAbilitySetHandle>         PersistentlyAppliedAbilitySets;                    // 0x28(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bEnabledByDefault : 1;                             // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasGEsToApplyOnTouch : 1;                         // Mask: 0x4, PropSize: 0x10x38(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasGEsToApplyOnPulseTimer : 1;                    // Mask: 0x8, PropSize: 0x10x38(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasPersistentEffects : 1;                         // Mask: 0x10, PropSize: 0x10x38(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A85[0x57];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteGame.BuildingGameplayActorAbilityDeliveryInfo
struct FBuildingGameplayActorAbilityDeliveryInfo
{
public:
	TArray<struct FBuildingGameplayActorAbilityDeliveryBucket> DeliveryBuckets;                                   // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	float                                        ProximityPulseInterval;                            // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasGEsToApplyOnTouch : 1;                         // Mask: 0x1, PropSize: 0x10x14(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasGEsToApplyOnPulseTimer : 1;                    // Mask: 0x2, PropSize: 0x10x14(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasPersistentEffects : 1;                         // Mask: 0x4, PropSize: 0x10x14(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_79 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A86[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingGameplayActor*                OwningActor;                                       // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        DeferredTouchActorsToProcess;                      // 0x20(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A87[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.CarriedObjectAttachmentInfo
struct FCarriedObjectAttachmentInfo
{
public:
	class AActor*                                AttachParent;                                      // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeTranslation;                               // 0x10(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x1C(0xC)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FortniteGame.FortAlterationSlots
struct FFortAlterationSlots
{
public:
	enum class EFortAlteration                   Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NumSlots;                                          // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteGame.FortPresenceBasicInfo
struct FFortPresenceBasicInfo
{
public:
	int32                                        HomeBaseRating;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteGame.FortZoneInstanceInfo
struct FFortZoneInstanceInfo
{
public:
	class FString                                WorldId;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TheaterId;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TheaterMissionId;                                  // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TheaterMissionAlertId;                             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortZoneTheme>          ZoneThemeClass;                                    // 0x40(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0x108 - 0x60)
// ScriptStruct FortniteGame.FortZoneInstanceDetails
struct FFortZoneInstanceDetails : public FFortZoneInstanceInfo
{
public:
	TSoftClassPtr<class UFortMissionGenerator>   MissionGenerator;                                  // 0x60(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ZoneDifficultyInfo;                                // 0x80(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMcpLootResult                        MissionRewards;                                    // 0x90(0x20)(NativeAccessSpecifierPublic)
	struct FMcpLootResult                        MissionAlertRewards;                               // 0xB0(0x20)(NativeAccessSpecifierPublic)
	struct FMcpLootResult                        ZoneModifiers;                                     // 0xD0(0x20)(NativeAccessSpecifierPublic)
	class FString                                MissionAlertCategoryName;                          // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileIndex;                                         // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A88[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortSavedModeLoadout
struct FFortSavedModeLoadout
{
public:
	class FString                                LoadoutName;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        SelectedGadgets;                                   // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortNamedCounterStat
struct FFortNamedCounterStat
{
public:
	int32                                        CurrentCount;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A89[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             LastIncrementedTime;                               // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortPersistentGameplayStatValue
struct FFortPersistentGameplayStatValue
{
public:
	class FString                                StatName;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StatValue;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortPersistentGameplayStatContainer
struct FFortPersistentGameplayStatContainer
{
public:
	TArray<struct FFortPersistentGameplayStatValue> GameplayStats;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteGame.FortRewardActivity
struct FFortRewardActivity
{
public:
	enum class EFortRewardActivityType           ActivityType;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ActivityGuid;                                      // 0x4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TitleText;                                         // 0x18(0x18)(NativeAccessSpecifierPublic)
	class FText                                  DescriptionText;                                   // 0x30(0x18)(NativeAccessSpecifierPublic)
	float                                        RewardDisplayTime;                                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemEntry>                RewardItems;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortItemEntry>                MissedRewardItems;                                 // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EFortCompletionResult             ActivityCompletionResult;                          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AdditionalCompletionMissionPoints;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteGame.FortRewardReport
struct FFortRewardReport
{
public:
	class FText                                  MissionName;                                       // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  TheaterName;                                       // 0x18(0x18)(NativeAccessSpecifierPublic)
	class FText                                  Difficulty;                                        // 0x30(0x18)(NativeAccessSpecifierPublic)
	float                                        DifficultyValue;                                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortRewardActivity>           RewardActivities;                                  // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsFinalized;                                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A90[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortUpdatedObjectiveStat
struct FFortUpdatedObjectiveStat
{
public:
	class UFortQuestItemDefinition*              Quest;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BackendName;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StatValue;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A91[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortTooltipMapEntry
struct FFortTooltipMapEntry
{
public:
	class UClass*                                ObjectClass;                                       // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                SecondaryObjectClass;                              // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortTooltip>              TooltipClass;                                      // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteGame.FortTooltipValueData
struct FFortTooltipValueData
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  FormattedValue;                                    // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ExplanationText;                                   // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A92[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 StateTags;                                         // 0x50(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortTooltipDisplayInfo
struct FFortTooltipDisplayInfo
{
public:
	class UClass*                                PrimaryObjectClass;                                // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                SecondaryObjectClass;                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DescriptionStatsTags;                              // 0x10(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UFortTooltipDisplayStatsList*          TooltipStatsList;                                  // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortTooltipDisplayStatInfo
struct FFortTooltipDisplayStatInfo
{
public:
	struct FGameplayTag                          Token;                                             // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ContextTags;                                       // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bLowerIsBetter;                                    // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A93[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortTooltipDisplayStatsCategory
struct FFortTooltipDisplayStatsCategory
{
public:
	class FText                                  CategoryName;                                      // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortTooltipDisplayStatInfo>   TooltipStats;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.QuickBarSlot
struct FQuickBarSlot
{
public:
	TArray<struct FGuid>                         Items;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x10(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A94[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.QuickBarSlotData
struct FQuickBarSlotData
{
public:
	TArray<enum class EFortItemType>             AcceptedItemTypes;                                 // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bStaticSlot;                                       // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A95[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortWorldItemDefinition> DefaultItem;                                       // 0x18(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.QuickBarData
struct FQuickBarData
{
public:
	TArray<struct FQuickBarSlotData>             QuickbarSlots;                                     // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteGame.QuickBar
struct FQuickBar
{
public:
	int32                                        CurrentFocusedSlot;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviousFocusedSlot;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondaryFocusedSlot;                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A96[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuickBarSlot>                 Slots;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FQuickBarData                         DataDefinition;                                    // 0x20(0x10)(NativeAccessSpecifierPrivate)
	TSet<class UFortItemDefinition*>             EquippedItemDefinitions;                           // 0x30(0x50)(ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPrivate)
	TArray<int32>                                SharedVisibleSlotIndicesWhenUsingGamepad;          // 0x80(0x10)(ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.QuickBarAndSlot
struct FQuickBarAndSlot
{
public:
	enum class EFortQuickBars                    QuickBarType;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuickBarSlot;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortCloudSaveRecordInfo
struct FFortCloudSaveRecordInfo
{
public:
	int32                                        RecordIndex;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArchiveNumber;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RecordFilename;                                    // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortCloudSaveInfo
struct FFortCloudSaveInfo
{
public:
	int32                                        SaveCount;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A98[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortCloudSaveRecordInfo>      SavedRecords;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteGame.PlayerStatsRecord
struct FPlayerStatsRecord
{
public:
	int32                                        Stats;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A99[0x84];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.StatRecord
struct FStatRecord
{
public:
	class FName                                  StatName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StatValue;                                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.StatManagerPeriodRecord
struct FStatManagerPeriodRecord
{
public:
	TArray<struct FStatRecord>                   StatRecords;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.PinnedSchematicsRecord
struct FPinnedSchematicsRecord
{
public:
	TArray<class FString>                        PinnedSchematicInstances;                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x200 (0x200 - 0x0)
// ScriptStruct FortniteGame.FortPlayerRecord
struct FFortPlayerRecord
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UniqueId;                                          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                BackpackData;                                      // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bPlayerIsNew;                                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerStatsRecord                    PlayerStatsData;                                   // 0x34(0x88)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatManagerPeriodRecord              CampaignPeriodRecord;                              // 0xC0(0x10)(NativeAccessSpecifierPublic)
	struct FPinnedSchematicsRecord               PinnedSchematicsRecord;                            // 0xD0(0x10)(NativeAccessSpecifierPublic)
	struct FQuickBar                             PrimaryQuickBarRecord;                             // 0xE0(0x90)(NativeAccessSpecifierPublic)
	struct FQuickBar                             SecondaryQuickBarRecord;                           // 0x170(0x90)(NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// ScriptStruct FortniteGame.FortZoneStats
struct FFortZoneStats
{
public:
	uint8                                        Pad_A9D[0x190];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.ContainerStatInfo
struct FContainerStatInfo
{
public:
	uint8                                        Pad_A9E[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.EnemyNpcStatInfo
struct FEnemyNpcStatInfo
{
public:
	uint8                                        Pad_A9F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.DefenderNPCStatInfo
struct FDefenderNPCStatInfo
{
public:
	uint8                                        Pad_AA0[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteGame.FortActorRecord
struct FFortActorRecord
{
public:
	struct FGuid                                 ActorGuid;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuildingPersistentState      ActorState;                                        // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ABuildingActor>            ActorClass;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ActorTransform;                                    // 0x20(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSpawnedActor;                                     // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                ActorData;                                         // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortLevelRecord
struct FFortLevelRecord
{
public:
	int32                                        ParentLevelIndex;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 BoundActorGuid;                                    // 0x4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PackageName;                                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortActorRecord>              SavedActors;                                       // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        X_Loc;                                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y_Loc;                                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Rotation;                                          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteGame.FortBuildingInstruction
struct FFortBuildingInstruction
{
public:
	struct FFortActorRecord                      ActorRecord;                                       // 0x0(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, SaveGame, NativeAccessSpecifierPublic)
};

// 0x2C (0x38 - 0xC)
// ScriptStruct FortniteGame.FOBCoreChoice
struct FFOBCoreChoice : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_AA6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFOBCoreDecoItemDefinition*        FOBCoreDef;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFOBFileHeaderStatus              FileHeaderStatus;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CoreFilename;                                      // 0x20(0x10)(ZeroConstructor, Transient, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortBuildingInstructions*             BuildingInstructions;                              // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xC0 - 0xB0)
// ScriptStruct FortniteGame.FOBCoreChoiceArray
struct FFOBCoreChoiceArray : public FFastArraySerializer
{
public:
	TArray<struct FFOBCoreChoice>                Items;                                             // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0xC0 (0x170 - 0xB0)
// ScriptStruct FortniteGame.FortItemList
struct FFortItemList : public FFastArraySerializer
{
public:
	TArray<struct FFortItemEntry>                ReplicatedEntries;                                 // 0xB0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA8[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortWorldItem*>                ItemInstances;                                     // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA9[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.DeferredActorData
struct FDeferredActorData
{
public:
	class ABuildingActor*                        BuildingActor;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActorRecordIndex;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BuildingTransform;                                 // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteGame.TeamStrategicBuildingHandle
struct FTeamStrategicBuildingHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortTargetFilter
struct FFortTargetFilter
{
public:
	enum class EFortTargetSelectionFilter        ActorTypeFilter;                                   // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ActorClassFilter;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeInstigator;                                // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeRequester;                                 // 0x11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeAllAttachedToInstigator;                   // 0x12(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeAllAttachedToRequester;                    // 0x13(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludePawnFriends;                               // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeFriendlyAI;                                // 0x15(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludePawnEnemies;                               // 0x16(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeNonPawnFriends;                            // 0x17(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeNonPawnEnemies;                            // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeDBNOPawns;                                 // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeWithoutNavigationCorridor;                 // 0x1A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeNonPlayerBuiltPieces;                      // 0x1B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludePlayerBuiltPieces;                         // 0x1C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeNonBGABuildings;                           // 0x1D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeNonBlockingHits;                           // 0x1E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceComplexCollision;                            // 0x1F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteGame.FortAbilityTargetSelection
struct FFortAbilityTargetSelection
{
public:
	enum class EFortTargetSelectionShape         Shape;                                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomShapeComponentName;                          // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortTargetSelectionTestType      TestType;                                          // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAbilityTargetingSource       PrimarySource;                                     // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAbilityTargetingSource       SecondarySource;                                   // 0x1A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAD[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Range;                                             // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HalfExtents;                                       // 0x20(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConeYawAngle;                                      // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConePitchAngle;                                    // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConeMinRadius;                                     // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTargetFilter                     TargetFilter;                                      // 0x38(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bExcludeObstructedByWorld;                         // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateHitResultWhenNoTargetsFound;                // 0x59(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseProjectileRotationForDamageZones;              // 0x5A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAbilityTargetSelectionUsage  TargetSelectionUsage;                              // 0x5B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTargets;                                        // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortAbilityTargetSelectionList
struct FFortAbilityTargetSelectionList
{
public:
	TArray<struct FFortAbilityTargetSelection>   List;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bStopAtFirstSuccess : 1;                           // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bKeepCheckingListOnIndestructibleHit : 1;          // Mask: 0x2, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseWeaponRanges : 1;                              // Mask: 0x4, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxYawAngleToTarget : 1;                       // Mask: 0x8, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_7A : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_AAE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxYawAngleToTarget;                               // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.VisibilityTestPoint
struct FVisibilityTestPoint
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   Component;                                         // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortAbilityCanHitParameters
struct FFortAbilityCanHitParameters
{
public:
	uint8                                        Pad_AB1[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortAbilityCost
struct FFortAbilityCost
{
public:
	enum class EFortAbilityCostSource            CostSource;                                        // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        CostValue;                                         // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyApplyCostOnHit;                               // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortGameplayAbilityBehaviorDistanceData
struct FFortGameplayAbilityBehaviorDistanceData
{
public:
	struct FGameplayTagContainer                 DistanceDataTag;                                   // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortCharacterPartMontageInfo
struct FFortCharacterPartMontageInfo
{
public:
	enum class EFortCustomPartType               CharacterPart;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          AnimMontage;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteGame.FortGameplayAbilityMontageInfo
struct FFortGameplayAbilityMontageInfo
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimPlayRate;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimRootMotionTranslationScale;                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortGameplayAbilityMontageSectionToPlay MontageSectionToPlay;                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OverrideSection;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayRandomSection;                                // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortCharacterPartMontageInfo> CharacterPartMontages;                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB8[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteGame.FortGameplayEffectContainer
struct FFortGameplayEffectContainer
{
public:
	struct FGameplayTag                          ApplicationTag;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAbilityTargetSelectionList       TargetSelection;                                   // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   TargetGameplayEffectClasses;                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OwnerGameplayEffectClasses;                        // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ActivationCues;                                    // 0x48(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ImpactCues;                                        // 0x68(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteGame.FortGameplayEffectContainerSpec
struct FFortGameplayEffectContainerSpec
{
public:
	struct FFortAbilityTargetSelectionList       TargetSelection;                                   // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectSpecHandle>     TargetGameplayEffectSpecs;                         // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectSpecHandle>     OwnerGameplayEffectSpecs;                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ActivationCues;                                    // 0x40(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ImpactCues;                                        // 0x60(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.StrategicBuildingActiveConstructionInfo
struct FStrategicBuildingActiveConstructionInfo
{
public:
	float                                        ConstructionStartTime;                             // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstructionEndTime;                               // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConstructionLevel;                                 // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUnderConstruction : 1;                            // Mask: 0x1, PropSize: 0x10xC(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.StrategicBuildingLevelActiveCriteriaProgress
struct FStrategicBuildingLevelActiveCriteriaProgress
{
public:
	float                                        CurrentProgress;                                   // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxProgress;                                       // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bProgressAllowed : 1;                              // Mask: 0x1, PropSize: 0x10x8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ABA[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.StrategicBuildingLevelCriteria
struct FStrategicBuildingLevelCriteria
{
public:
	class FText                                  UnlockRequirementText;                             // 0x0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EFortStrategicBuildingLevelCriteriaDisplayRepresentation RequirementDisplayRepresentation;                  // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UnlockRequirementQuantity;                         // 0x1C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct FortniteGame.StrategicBuildingUpgradePathInfo
struct FStrategicBuildingUpgradePathInfo
{
public:
	class FText                                  UpgradeDesc;                                       // 0x0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UpgradeBrush;                                      // 0x18(0x90)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UpgradeTags;                                       // 0xA8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.StrategicBuildingLevelUnlocks
struct FStrategicBuildingLevelUnlocks
{
public:
	TArray<struct FFortAbilitySetDeliveryInfo>   OwnerStrategicBuildingAbilitySetBuckets;           // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortAbilitySetDeliveryInfo>   PawnPersistentAbilitySetBuckets;                   // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FProximityBasedGEDeliveryInfo> ProximityBasedEffectBuckets;                       // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteGame.StrategicBuildingLevelInformation
struct FStrategicBuildingLevelInformation
{
public:
	struct FStrategicBuildingLevelCriteria       UpgradeCriteria;                                   // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FStrategicBuildingUpgradePathInfo> UpgradePaths;                                      // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FStrategicBuildingLevelUnlocks        LevelUnlocks;                                      // 0x30(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        ConstructionTime;                                  // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DestructionRecoveryTime;                           // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortSpawnSlotData
struct FFortSpawnSlotData
{
public:
	struct FVector                               SpawnSlotLocation;                                 // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAIPawn*                           OccupyingAI;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortRiftSlotStatus               SlotStatus;                                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortSearchBounceData
struct FFortSearchBounceData
{
public:
	struct FVector                               BounceNormal;                                      // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SearchAnimationCount;                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct FortniteGame.FortKeepAmmoStash
struct FFortKeepAmmoStash : public FTableRowBase
{
public:
	int32                                        Max1;                                              // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cooldown1;                                         // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max2;                                              // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cooldown2;                                         // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max3;                                              // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cooldown3;                                         // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max4;                                              // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cooldown4;                                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PickupTier;                                        // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.FortKeepItemGroup
struct FFortKeepItemGroup : public FTableRowBase
{
public:
	int32                                        Items;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTier;                                           // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseLevel;                                         // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct FortniteGame.FortKeepResourceGroup
struct FFortKeepResourceGroup : public FTableRowBase
{
public:
	class FName                                  Container;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemCount;                                         // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ResourceName;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortItemDefinition>    FullPath;                                          // 0x28(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8F8 (0x8F8 - 0x0)
// ScriptStruct FortniteGame.FortCosmeticModification
struct FFortCosmeticModification
{
public:
	TSoftObjectPtr<class UMaterialInterface>     CosmeticMaterial;                                  // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>        AmbientParticleSystem;                             // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>        MuzzleParticleSystem;                              // 0x40(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>        ReloadParticleSystem;                              // 0x60(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>        BeamParticleSystem;                                // 0x80(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UParticleSystem>        ImpactPhysicalSurfaceEffects;                      // 0xA0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC1[0x7C0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AFortTracerBase>         TracerTemplate;                                    // 0x880(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyColor;                                      // 0x8A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorAlteration;                                   // 0x8A4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ColorParameterName;                                // 0x8B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyDecalColour;                                // 0x8C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DecalColourAlterationStart;                        // 0x8C4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DecalColourAlterationEnd;                          // 0x8D4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyShellColour;                                // 0x8E4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ShellColourAlteration;                             // 0x8E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x918 (0x918 - 0x0)
// ScriptStruct FortniteGame.FortConditionalCosmeticModification
struct FFortConditionalCosmeticModification
{
public:
	struct FFortCosmeticModification             CosmeticModification;                              // 0x0(0x8F8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ConditionalTags;                                   // 0x8F8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x118 (0x120 - 0x8)
// ScriptStruct FortniteGame.FortBaseWeaponStats
struct FFortBaseWeaponStats : public FTableRowBase
{
public:
	int32                                        BaseLevel;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DmgPB;                                             // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DmgMid;                                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DmgLong;                                           // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DmgMaxRange;                                       // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnvDmgPB;                                          // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnvDmgMid;                                         // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnvDmgLong;                                        // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnvDmgMaxRange;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ImpactDmgPB;                                       // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ImpactDmgMid;                                      // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ImpactDmgLong;                                     // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ImpactDmgMaxRange;                                 // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceControl;                                     // 0x3C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AC6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RngPB;                                             // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RngMid;                                            // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RngLong;                                           // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RngMax;                                            // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                           DmgScaleTable;                                     // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DmgScaleTableRow;                                  // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DmgScale;                                          // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AC7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveTable*                           EnvDmgScaleTable;                                  // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  EnvDmgScaleTableRow;                               // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnvDmgScale;                                       // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AC8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveTable*                           ImpactDmgScaleTable;                               // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ImpactDmgScaleTableRow;                            // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ImpactDmgScale;                                    // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AC9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SurfaceRatioRowName;                               // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageZone_Light;                                  // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageZone_Normal;                                 // 0xA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageZone_Critical;                               // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageZone_Vulnerability;                          // 0xAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        KnockbackMagnitude;                                // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MidRangeKnockbackMagnitude;                        // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LongRangeKnockbackMagnitude;                       // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        KnockbackZAngle;                                   // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StunTime;                                          // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StunScale;                                         // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            Durability;                                        // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DurabilityRowName;                                 // 0xD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DurabilityScale;                                   // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DurabilityPerUse;                                  // 0xDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DiceCritChance;                                    // 0xE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DiceCritDamageMultiplier;                          // 0xE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ReloadTime;                                        // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ReloadScale;                                       // 0xEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReloadIndividualBullets;                          // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReloadInterruptIsImmediate;                       // 0xF1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ACA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClipSize;                                          // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ClipScale;                                         // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InitialClips;                                      // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CartridgePerFire;                                  // 0x100(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AmmoCostPerFire;                                   // 0x104(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxAmmoCostPerFire;                                // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinChargeTime;                                     // 0x10C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxChargeTime;                                     // 0x110(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ChargeDownTime;                                    // 0x114(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinChargeDamageMultiplier;                         // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxChargeDamageMultiplier;                         // 0x11C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct FortniteGame.FortWeaponDurabilityByRarityStats
struct FFortWeaponDurabilityByRarityStats : public FTableRowBase
{
public:
	int32                                        Handmade;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Ordinary;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Sturdy;                                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Quality;                                           // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Fine;                                              // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Elegant;                                           // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Masterwork;                                        // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Epic;                                              // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Badass;                                            // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Legendary;                                         // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.PatternBASEEffect
struct FPatternBASEEffect
{
public:
	class UBuildingEditModeMetadata*             Pattern;                                           // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           Mesh;                                              // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.BASEGameplayEffect
struct FBASEGameplayEffect
{
public:
	TSubclassOf<class UGameplayEffect>           Effect;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelOverride;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.TrackConnectorMeshConfig
struct FTrackConnectorMeshConfig
{
public:
	enum class ETrackIncline                     InclineSideA;                                      // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrackIncline                     InclineSideB;                                      // 0x1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Mesh;                                              // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteGame.TrackPieceConfig
struct FTrackPieceConfig
{
public:
	enum class ETrackPieceType                   Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotation;                                          // 0x4(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x10(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct FortniteGame.TrackSplineConfig
struct FTrackSplineConfig
{
public:
	bool                                         bUseSpline;                                        // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrackDirection                   Start;                                             // 0x1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrackDirection                   End;                                               // 0x2(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FortniteGame.TrackSwitchStateConfig
struct FTrackSwitchStateConfig
{
public:
	struct FTrackPieceConfig                     TrackPiece;                                        // 0x0(0x1C)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FTrackSplineConfig                    SplineConfig1;                                     // 0x1C(0x3)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FTrackSplineConfig                    SplineConfig2;                                     // 0x1F(0x3)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACE[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.TrackConfiguration
struct FTrackConfiguration
{
public:
	TArray<bool>                                 NeighborsByDirection;                              // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FTrackSwitchStateConfig>       SwitchStates;                                      // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FRotator                              SwitchRotation;                                    // 0x20(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SwitchOffset;                                      // 0x2C(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct FortniteGame.TimeOfDayEditorViewSettings
struct FTimeOfDayEditorViewSettings
{
public:
	uint8                                        Pad_ACF[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct FortniteGame.SubGameAccess
struct FSubGameAccess
{
public:
	enum class ESubGame                          SubGame;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubGameAccessStatus              AccessStatus;                                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubGameMatchmakingStatus         MatchmakingStatus;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.PurchaseFailureLogSubmitOptions
struct FPurchaseFailureLogSubmitOptions
{
public:
	bool                                         bSubmitLogs;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AD0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LogTailKb;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        DoNotUploadReasons;                                // 0x8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.LoginFailureLogSubmitOptions
struct FLoginFailureLogSubmitOptions
{
public:
	bool                                         bSubmitLogs;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LogTailKb;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ELoginResult>              DoNotUploadReasons;                                // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.PartyFailureLogSubmitReason
struct FPartyFailureLogSubmitReason
{
public:
	class FString                                Reason;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubReason;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.PartyFailureLogSubmit
struct FPartyFailureLogSubmit
{
public:
	bool                                         bSubmitLogs;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LogTailKb;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPartyFailureLogSubmitReason>  Reasons;                                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteGame.FortWindImpulseHandle
struct FFortWindImpulseHandle
{
public:
	int32                                        UID;                                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteGame.FortWindImpulseCylinderDelta
struct FFortWindImpulseCylinderDelta
{
public:
	struct FVector                               DeltaCenter;                                       // 0x0(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bInitialized;                                      // 0xC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRippleOutward;                                    // 0xD(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AD3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SectionWidth;                                      // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InnerSectionRadius;                                // 0x14(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        OuterSectionRadius;                                // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaximumRadius;                                     // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DesiredOverallBlendTime;                           // 0x20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SectionBlendTime;                                  // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SectionCurrentBlendTime;                           // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PreviousMagnitude;                                 // 0x2C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SectionCurrentMagnitude;                           // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DesiredMagnitude;                                  // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBox                                  OuterWorldBounds;                                  // 0x38(0x1C)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FBox                                  InnerWorldBounds;                                  // 0x54(0x1C)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FBox                                  WindImpulseBounds;                                 // 0x70(0x1C)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FFortWindImpulseHandle                WindImpulseHandleToModify;                         // 0x8C(0x4)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
};

// 0x4C (0x4C - 0x0)
// ScriptStruct FortniteGame.FortWindImpulseRadius
struct FFortWindImpulseRadius
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentRadius;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PreviousRadius;                                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Magnitude;                                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentMagnitude;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PreviousMagnitude;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlendTime;                                         // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentBlendTime;                                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBox                                  WorldBounds;                                       // 0x2C(0x1C)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortWindImpulseHandle                Handle;                                            // 0x48(0x4)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct FortniteGame.FortWindImpulseCylinderRadial
struct FFortWindImpulseCylinderRadial
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InnerRadius;                                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OuterRadius;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Magnitude;                                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBox                                  WorldBounds;                                       // 0x18(0x1C)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsChanging;                                       // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsChangePending;                                  // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AD4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortWindImpulseHandle                Handle;                                            // 0x38(0x4)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
};

// 0xC (0x48 - 0x3C)
// ScriptStruct FortniteGame.FortWindImpulseCylinder
struct FFortWindImpulseCylinder : public FFortWindImpulseCylinderRadial
{
public:
	struct FVector                               WindDirection;                                     // 0x3C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x44 (0x50 - 0xC)
// ScriptStruct FortniteGame.StormWind
struct FStormWind : public FFastArraySerializerItem
{
public:
	struct FVector                               Location;                                          // 0xC(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x18(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortThreatVisualsManager*             ThreatVisualsManager;                              // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortAIEncounterInfo*>          Encounters;                                        // 0x38(0x10)(ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPublic)
	struct FFortWindImpulseHandle                WindHandle;                                        // 0x48(0x4)(Transient, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xC0 - 0xB0)
// ScriptStruct FortniteGame.StormWindArray
struct FStormWindArray : public FFastArraySerializer
{
public:
	TArray<struct FStormWind>                    StormWinds;                                        // 0xB0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x54 (0x60 - 0xC)
// ScriptStruct FortniteGame.ThreatLocationInfo
struct FThreatLocationInfo : public FFastArraySerializerItem
{
public:
	struct FVector                               CloudLocation;                                     // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  ThreatVolume;                                      // 0x18(0x1C)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortThreatVisualsManager*             ThreatVisualsManager;                              // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AThreatCloud>           CloudActor;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD8[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bThreatActivated;                                  // 0x49(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortThreatDeactivationType       DeactivationType;                                  // 0x4A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD9[0x15];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xC0 - 0xB0)
// ScriptStruct FortniteGame.ThreatLocationArray
struct FThreatLocationArray : public FFastArraySerializer
{
public:
	TArray<struct FThreatLocationInfo>           Locations;                                         // 0xB0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.ThreatGridIndex
struct FThreatGridIndex
{
public:
	int32                                        X;                                                 // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.SkyLightValues
struct FSkyLightValues
{
public:
	struct FLinearColor                          SkyLightColor;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SkyLightOcclusionTint;                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkyLightMinOcclusion;                              // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumetricScatteringIntensity;                     // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.CloudColorState
struct FCloudColorState
{
public:
	struct FLinearColor                          BottomEmissive;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TopEmissive;                                       // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BottomLightning;                                   // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TopLightning;                                      // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InternalColor;                                     // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteGame.ThreatCloudValues
struct FThreatCloudValues
{
public:
	struct FCloudColorState                      CloudActivated;                                    // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCloudColorState                      CloudDeactivated;                                  // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteGame.ElementalCharValues
struct FElementalCharValues
{
public:
	struct FLinearColor                          FireCharColor;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ElectricalCharEmissive;                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.DirectionalLightValues
struct FDirectionalLightValues
{
public:
	struct FColor                                LightColor;                                        // 0x0(0x4)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Brightness;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumetricScatteringIntensity;                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.ExponentialHeightFogValues
struct FExponentialHeightFogValues
{
public:
	float                                        FogDensity;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FogHeightFalloff;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FogMaxOpacity;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDistance;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionalInscatteringExponent;                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionalInscatteringStartDistance;              // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DirectionalInscatteringColor;                      // 0x18(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FogInscatteringColor;                              // 0x28(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumetricFogScatteringDistribution;               // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumetricFogScatteringScale;                      // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumetricFogAbsorptionScale;                      // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumetricFogDistance;                             // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// ScriptStruct FortniteGame.DayPhaseInfo
struct FDayPhaseInfo
{
public:
	class FString                                PhaseStartAnnouncement;                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimePhaseBegins;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhaseLengthInHours;                                // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PercentageTransitionIn;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionInTimeInMinutes;                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PercentageTransitionOut;                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionOutTimeInMinutes;                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkyLightValues                       SkyLightValues;                                    // 0x28(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FThreatCloudValues                    ThreatCloudValues;                                 // 0x50(0xA0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FElementalCharValues                  ElementalCharValues;                               // 0xF0(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FDirectionalLightValues               DirectionalLightValues;                            // 0x104(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FExponentialHeightFogValues           ExpHeightFogValues;                                // 0x110(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UPostProcessComponent*                 LowPriPostProcessComponent;                        // 0x158(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     SkyMaterialInstance;                               // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     StarMapMaterialInstance;                           // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.CameraAltitudeAdjustments
struct FCameraAltitudeAdjustments
{
public:
	float                                        Altitude;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FogHeightFalloff;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightFogZOffset;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FogDensity;                                        // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.QueuedMusic
struct FQueuedMusic
{
public:
	uint8                                        Pad_ADA[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.ServerLaunchInfo
struct FServerLaunchInfo
{
public:
	float                                        LaunchServerTime;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawnAthena*                 LaunchedPawn;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct FortniteGame.ClimbLinkData
struct FClimbLinkData
{
public:
	uint8                                        Pad_ADC[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       UniqueLinkId;                                      // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADD[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteGame.ConnectivityCube
struct FConnectivityCube
{
public:
	uint8                                        Pad_ADE[0xC0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.AuxiliaryEditTileMeshData
struct FAuxiliaryEditTileMeshData
{
public:
	class UStaticMesh*                           TileMesh;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            TileTexture;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRot;                                       // 0x10(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.TileCompInterpData
struct FTileCompInterpData
{
public:
	struct FVector                               InitialTranslation;                                // 0x0(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DesiredTranslation;                                // 0xC(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortMapData
struct FFortMapData
{
public:
	TSoftObjectPtr<class UWorld>                 BuildingWorld;                                     // 0x0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 BuildingLevelTags;                                 // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.MOBATurretPrioritySetting
struct FMOBATurretPrioritySetting
{
public:
	int32                                        AIPriority;                                        // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerPriority;                                    // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BuildingPriority;                                  // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.ColorSwatchPair
struct FColorSwatchPair
{
public:
	class FName                                  ColorName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorValue;                                        // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.AbilityKitItem
struct FAbilityKitItem
{
public:
	class UFortItemDefinition*                   Item;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortReplenishmentType            Replenishment;                                     // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.ReplicatedMontagePair
struct FReplicatedMontagePair
{
public:
	class UAnimMontage*                          Montage1;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Montage2;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Section1;                                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Section2;                                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         RepIndex;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.AttributeModifierInfo
struct FAttributeModifierInfo
{
public:
	uint8                                        Pad_AE2[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayEffect*                       InstantGEs;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE3[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.AttributeInfo
struct FAttributeInfo
{
public:
	uint8                                        Pad_AE4[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3B0 (0x3B0 - 0x0)
// ScriptStruct FortniteGame.FortAttributeDetailsInfo
struct FFortAttributeDetailsInfo
{
public:
	struct FGameplayTagContainer                 RequiredTags;                                      // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   Icon;                                              // 0x20(0x360)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x380(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x398(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteGame.FortAttributeInfo
struct FFortAttributeInfo
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAttributeDisplay             DisplayMethod;                                     // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UnitDisplayName;                                   // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        DisplayScalingFactor;                              // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FormatText;                                        // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortAttributeDetailsInfo>     AttributeDetails;                                  // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bShowInSummaries;                                  // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowInDifferences;                                // 0x71(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowAsBuffInFE;                                   // 0x72(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNegativeValuesShouldBeDisplayedPositively;        // 0x73(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortGameplayEffectModifierDescription
struct FFortGameplayEffectModifierDescription
{
public:
	struct FGameplayAttribute                    ModAttribute;                                      // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ModDescription;                                    // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsBuff;                                           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAttributeDisplay             MagnitudeFormat;                                   // 0x39(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortStatDisplayType              DisplayType;                                       // 0x3A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE8[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Magnitude;                                         // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortGameplayEffectDescription
struct FFortGameplayEffectDescription
{
public:
	class FText                                  EffectDisplayName;                                 // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  EffectWrittenDescription;                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortGameplayEffectModifierDescription> ModDescriptions;                                   // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          GrantedTagDescriptions;                            // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortAIGoalInfo
struct FFortAIGoalInfo
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Location;                                          // 0x8(0xC)(Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bActorAlwaysPerceived;                             // 0x14(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct FortniteGame.FortAIGoal
struct FFortAIGoal : public FFortAIGoalInfo
{
public:
	TArray<class AFortAIController*>             ControllersAssignedToGoal;                         // 0x18(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.GoalSelectionQueryInfo
struct FGoalSelectionQueryInfo
{
public:
	class UEnvQuery*                             GoalSelectionQuery;                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredGameplayTags;                              // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortSpokenLine
struct FFortSpokenLine
{
public:
	class USoundBase*                            Audio;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          AnimMontage;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AnimSequence;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             Addressee;                                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFeedbackBroadcastFilter      BroadcastFilter;                                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Delay;                                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterruptCurrentLine;                             // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeInterrupted;                                 // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanQue;                                           // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEB[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortFeedbackHandle
struct FFortFeedbackHandle
{
public:
	class UFortFeedbackBank*                     FeedbackBank;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventName;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadOnly;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBankDefined;                                      // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFeedbackBroadcastFilter      BroadcastFilterOverride;                           // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEC[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortFeedbackEvent
struct FFortFeedbackEvent
{
public:
	class AFortPawn*                             Instigator;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             Recipient;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortFeedbackHandle                   Handle;                                            // 0x10(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Delay;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverriddenQueuing;                                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AED[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortFeedbackEventData
struct FFortFeedbackEventData
{
public:
	struct FFortFeedbackHandle                   Handle;                                            // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ChanceToPlay;                                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinReplayTime;                                     // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinReplayTimeForSpeaker;                           // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWitnessDistance;                                // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterruptCurrentLine;                             // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeInterrupted;                                 // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanQue;                                           // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFeedbackBroadcastFilter      MultiplayerBroadcastFilter;                        // 0x2B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFeedbackSelectionMethod      ContextSelectionMethod;                            // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FeedbackDelay;                                     // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLastPlayed;                                    // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortFeedbackResponse
struct FFortFeedbackResponse
{
public:
	struct FFortFeedbackHandle                   Handle;                                            // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EFortFeedbackContext              Context;                                           // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteGame.FortFeedbackLine
struct FFortFeedbackLine
{
public:
	TSoftObjectPtr<class USoundBase>             Audio;                                             // 0x0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          AnimSequence;                                      // 0x20(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           AnimMontage;                                       // 0x40(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFeedbackAddressee            Addressee;                                         // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFeedbackContext              Context;                                           // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortFeedbackResponse>         ResponseEvents;                                    // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bInterruptCurrentLine;                             // 0x78(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeInterrupted;                                 // 0x79(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanQue;                                           // 0x7A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF1[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortFeedbackAction
struct FFortFeedbackAction
{
public:
	uint8                                        Pad_AF2[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortFeedbackHandle                   Handle;                                            // 0x8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FFortFeedbackLine>             Lines;                                             // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x38 - 0x30)
// ScriptStruct FortniteGame.FortFeedbackActionBankDefined
struct FFortFeedbackActionBankDefined : public FFortFeedbackAction
{
public:
	float                                        MinReplayTime;                                     // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinReplayTimeForSpeaker;                           // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortSentenceAudio
struct FFortSentenceAudio
{
public:
	TSoftObjectPtr<class USoundBase>             Audio;                                             // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortFeedbackHandle                   Handle;                                            // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteGame.FortConversationSentence
struct FFortConversationSentence
{
public:
	struct FFortSentenceAudio                    SpeechAudio;                                       // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  SpeechText;                                        // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>             TalkingHeadTexture;                                // 0x50(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  TalkingHeadTitle;                                  // 0x70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UAnimMontage>           AnimMontage;                                       // 0x88(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, RepSkip, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PostSentenceDelay;                                 // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DisplayDuration;                                   // 0xAC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct FortniteGame.FortLinearSpline
struct FFortLinearSpline
{
public:
	uint8                                        Pad_AF3[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortSplineBase
struct FFortSplineBase
{
public:
	uint8                                        Pad_AF4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTime;                                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct FortniteGame.FortCatmullRomSpline
struct FFortCatmullRomSpline : public FFortSplineBase
{
public:
	TArray<struct FVector>                       ControlPoints;                                     // 0x10(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteGame.FortPickupLocationData
struct FFortPickupLocationData
{
public:
	class AFortPawn*                             PickupTarget;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPickup*                           CombineTarget;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             ItemOwner;                                         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 LootInitialPosition;                               // 0x18(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 LootFinalPosition;                                 // 0x24(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        FlyTime;                                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             StartDirection;                                    // 0x34(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 FinalTossRestLocation;                             // 0x40(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EFortPickupTossState              TossState;                                         // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 PickupGuid;                                        // 0x50(0x10)(IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortPickupEntryData
struct FFortPickupEntryData
{
public:
	struct FInterpCurveFloat                     FloatCurve;                                        // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 PickupGuid;                                        // 0x18(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartTime;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AF6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct FortniteGame.FortPawnVocalChord
struct FFortPawnVocalChord
{
public:
	class UAudioComponent*                       FeedbackAudioComponent;                            // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortSpokenLine                       ReplicatedSpokenLine;                              // 0x8(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	struct FFortSpokenLine                       PendingSpokenLine;                                 // 0x38(0x30)(RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortSpokenLine                       QueuedSpokenLine;                                  // 0x68(0x30)(RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortSpokenLine                       CurrentSpokenLine;                                 // 0x98(0x30)(RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF7[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x78 - 0x8)
// ScriptStruct FortniteGame.FortPawnStats
struct FFortPawnStats : public FTableRowBase
{
public:
	float                                        MaximumHealth;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedWalk;                                         // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedRun;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedSprint;                                       // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedCrouchedRun;                                  // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedCrouchedSprint;                               // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedBackwardsMultiplier;                          // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedDBNO;                                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AccelerationStrafeMultiplierSprint;                // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveTable*                           FallingDamageTable;                                // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  FallingDamageTableRow;                             // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HealthRegenRate;                                   // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HealthRegenDelay;                                  // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HealthRegenThreshold;                              // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxShield;                                         // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ShieldRegenRate;                                   // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ShieldRegenDelay;                                  // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ShieldRegenThreshold;                              // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxControlResistance;                              // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ControlResistanceRegenRate;                        // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ControlResistanceRegenDelay;                       // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ControlResistanceRegenThreshold;                   // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        KnockbackMultiplier;                               // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        KnockbackThreshold;                                // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowChainStun;                                   // 0x74(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortControlRecoveryBehavior      ControlRecoveryBehavior;                           // 0x75(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AF9[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.AssetAttachment
struct FAssetAttachment
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SkeletalMeshAsset;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           StaticMeshAsset;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipOnDedicatedServers;                           // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x20(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMeshComp;                                    // 0x28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteGame.CalloutEntry
struct FCalloutEntry
{
public:
	struct FGameplayTag                          CalloutTag;                                        // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CalloutIcon;                                       // 0x8(0x90)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.PawnDamageZones
struct FPawnDamageZones
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Bones;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.DamagerInfo
struct FDamagerInfo
{
public:
	class AActor*                                DamageCauser;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageAmount;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 SourceTags;                                        // 0x10(0x20)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.DamagerInfoAnalytics
struct FDamagerInfoAnalytics
{
public:
	class FString                                DamageCauser;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DamageAmount;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0xD0 - 0x78)
// ScriptStruct FortniteGame.FortAIPawnStats
struct FFortAIPawnStats : public FFortPawnStats
{
public:
	int32                                        ScoreValue;                                        // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DormantSightRadius;                                // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DormantHearingThreshold;                           // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DormantLOSHearingThreshold;                        // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DormantPeripheralVisionAngle;                      // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AlertSightRadius;                                  // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AlertHearingThreshold;                             // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AlertLOSHearingThreshold;                          // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AlertPeripheralVisionAngle;                        // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AutoSuccessRangeFromLastSeenLocation;              // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                           HealthScalingTable;                                // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  HealthScalingTableRow;                             // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                           ControlResistanceScalingTable;                     // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ControlResistanceScalingTableRow;                  // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                           DifficultyRatingTable;                             // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DifficultyRatingTableRow;                          // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct FortniteGame.FortAISpawnGroupUpgradeUIData
struct FFortAISpawnGroupUpgradeUIData
{
public:
	bool                                         bAlwaysDisplayHealthBar;                           // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideHealthBarColor;                           // 0x1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           UpgradeIcon;                                       // 0x8(0x90)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                          HealthBarColorOverride;                            // 0x98(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortAIAppearanceOverrideEntry
struct FFortAIAppearanceOverrideEntry
{
public:
	class FName                                  AppearanceName;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFemale;                                         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USkeletalMesh>          SkeletalMesh;                                      // 0x10(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortFeedbackBank>      FeedbackBank;                                      // 0x30(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.MinimapGoalByTagColorsData
struct FMinimapGoalByTagColorsData
{
public:
	struct FGameplayTagContainer                 GoalTags;                                          // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                          MinimapColor;                                      // 0x20(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.RunVariationData
struct FRunVariationData
{
public:
	TWeakObjectPtr<class AFortAIPawn>            FortAIPawn;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct FortniteGame.FortEncounterTransitionSettings
struct FFortEncounterTransitionSettings
{
public:
	uint8                                        Pad_B00[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortGeneratedEncounterSequence
struct FFortGeneratedEncounterSequence
{
public:
	struct FFortEncounterTransitionSettings      TransitionSettings;                                // 0x0(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B01[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartingGeneratedEncounterProfileIndex;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumEncountersInSequence;                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B02[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 EncounterSequenceTags;                             // 0x10(0x20)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortGeneratedMissionOption
struct FFortGeneratedMissionOption
{
public:
	class UFortDifficultyOptionCategoryMission*  MissionOptionCategory;                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortDifficultyOptionMission> MissionOption;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeLerpValue;                                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B03[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortGeneratedEncounterOption
struct FFortGeneratedEncounterOption
{
public:
	class UFortDifficultyOptionCategoryEncounter* EncounterOptionCategory;                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortDifficultyOptionEncounter> EncounterOption;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeLerpValue;                                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangedSinceLastVLog;                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B04[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteGame.FortEncounterModeSettings
struct FFortEncounterModeSettings
{
public:
	enum class EFortEncounterPacingMode          PacingMode;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEncounterSpawnLocationPlacementMode SpawnLocationMode;                                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEncounterUtilitiesMode       UtilitiesMode;                                     // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEncounterSpawnLimitType      SpawnLimitMode;                                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortGeneratedEncounterProfile
struct FFortGeneratedEncounterProfile
{
public:
	float                                        EncounterDifficultyLevel;                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B05[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortGeneratedEncounterOption> EncounterOptions;                                  // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortEncounterModeSettings            EncounterModeSettings;                             // 0x18(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B06[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 EncounterTypeTags;                                 // 0x20(0x20)(NativeAccessSpecifierPublic)
	int32                                        DifficultyOptionPointsAvailableAtGeneration;       // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinDifficultyOptionPointsToUse;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldReselectOptionsPerInstance;                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B07[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GeneratedEncounterIndex;                           // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortGeneratedDifficultyOptions
struct FFortGeneratedDifficultyOptions
{
public:
	float                                        GameDifficultyAtGeneration;                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DifficultyOptionPointsAvailableAtGeneration;       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxEncounterSpawnPointsAtGeneration;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinDifficultyOptionPointsToUse;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortGeneratedEncounterSequence> GeneratedEncounterSequences;                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortGeneratedMissionOption>   MissionOptions;                                    // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortGeneratedEncounterProfile> GeneratedEncounterProfiles;                        // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteGame.FortMissionPlacementItemLookupData
struct FFortMissionPlacementItemLookupData
{
public:
	struct FGameplayTagContainer                 ItemIdentifyingTags;                               // 0x0(0x20)(Transient, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TagsAddedToPlacementActors;                        // 0x20(0x20)(Transient, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ActorToPlace;                                      // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ActorToUseForSpawnLocation;                        // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SpawnedActor;                                      // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x58(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x64(0xC)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bDontCreateSpawnRiftsNearby : 1;                   // Mask: 0x1, PropSize: 0x10x70(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B08[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteGame.FortMissionEntry
struct FFortMissionEntry
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorldMinLevel;                                     // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorldMaxLevel;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B09[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   MinDifficultyInfoRow;                              // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UFortMissionGenerator*                 MissionGenerator;                                  // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMissionInfo*                      MissionInfo;                                       // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionGenerationCategory        GenerationCategory;                                // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGeneratedDifficultyOptions       GeneratedDifficultyOptions;                        // 0x38(0x40)(NativeAccessSpecifierPublic)
	TArray<struct FFortMissionPlacementItemLookupData> BlueprintLookupData;                               // 0x78(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortObjectiveRecord
struct FFortObjectiveRecord
{
public:
	TSubclassOf<class AFortObjectiveBase>        ObjectiveClass;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ObjectiveData;                                     // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// ScriptStruct FortniteGame.FortMissionRecord
struct FFortMissionRecord
{
public:
	struct FFortMissionEntry                     MissionEntry;                                      // 0x0(0x88)(NativeAccessSpecifierPublic)
	class UFortMissionGenerator*                 MissionGenerator;                                  // 0x88(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortGeneratedDifficultyOptions       GeneratedMissionOptions;                           // 0x90(0x40)(Transient, NativeAccessSpecifierPublic)
	int32                                        DayGenerated;                                      // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UIIndex;                                           // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      QuestOwnerAccount;                                 // 0xD8(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMissionStatus                MissionStatus;                                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortObjectiveRecord>          ObjectiveRecords;                                  // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                MissionData;                                       // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                 MissionGuid;                                       // 0x118(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortMissionManagerRecord
struct FFortMissionManagerRecord
{
public:
	TSubclassOf<class AFortMissionManager>       MissionManagerClass;                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionRecord>            MissionRecords;                                    // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumRequiredMissionsOfType;                         // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0C[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                MissionManagerData;                                // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteGame.FortMissionGenerationElementCostAndAvailabilityRow
struct FFortMissionGenerationElementCostAndAvailabilityRow : public FTableRowBase
{
public:
	class UCurveTable*                           AvailabilityCurveTable;                            // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  AvailabilityCurveTableRow;                         // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinCost;                                           // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxCost;                                           // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortPendingStoppedEncounterData
struct FFortPendingStoppedEncounterData
{
public:
	class UFortAIEncounterInfo*                  Encounter;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortObjectiveStatus              ObjectiveStatus;                                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceDestroyAI;                                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEncounterCompletedSuccessfully;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0D[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterPawnDifficultyLevelModifier
struct FFortAIEncounterPawnDifficultyLevelModifier
{
public:
	struct FGameplayTagQuery                     EncounterTagRequirementsQuery;                     // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  DifficultyLevelModifierCurve;                      // 0x48(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortAIPawnUpgradeData
struct FFortAIPawnUpgradeData
{
public:
	struct FCurveTableRowHandle                  SpawnPointsMultiplierCurve;                        // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FCurveTableRowHandle                  LifespanMultiplierCurve;                           // 0x10(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FCurveTableRowHandle                  ScoreMultiplierCurve;                              // 0x20(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortGameplayModifierItemDefinition*   ModifierDefinition;                                // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteGame.FortAIPawnUpgrade
struct FFortAIPawnUpgrade
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortAIPawnUpgradeData>        PawnUpgradeDataPerPlayerCount;                     // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct FortniteGame.FortAISpawnGroupUpgrade
struct FFortAISpawnGroupUpgrade
{
public:
	struct FGameplayTagContainer                 UpgradeTags;                                       // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortAIPawnUpgrade>            BasePawnUpgrades;                                  // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                  AdditionalModifiersLootTierGroup;                  // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvalidForEnemySpawners;                          // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     EncounterTagRequirementsQuery;                     // 0x40(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortAISpawnGroupUpgradeUIData        UIData;                                            // 0x88(0xA8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterSpawnPointsProfile
struct FFortAIEncounterSpawnPointsProfile
{
public:
	struct FGameplayTagContainer                 EncounterTypeTags;                                 // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCurveTableRowHandle>          MaxSpawnPointsPerPlayerCount;                      // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCurveTableRowHandle>          MinSpawnPointsPerPlayerCount;                      // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCap
struct FFortAIEncounterSpawnGroupCap
{
public:
	struct FCurveTableRowHandle                  MinSpawnGroupNumberCap;                            // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  MaxSpawnGroupNumberCap;                            // 0x10(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCapsCategory
struct FFortAIEncounterSpawnGroupCapsCategory
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bApplyGroupPopulationCurveToCategoryMax;           // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCurveTableRowHandle                  UpgradeProbability;                                // 0x50(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  InitialSpawnGroupAvailabilityDelaySeconds;         // 0x60(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  SpawnGroupAvailabilityDelaySeconds;                // 0x70(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterSpawnGroupCap> SpawnGroupCapsPerPlayerCount;                      // 0x80(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        InitialSpawnGroupAvailabilityTime;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NumActiveCategorySpawnGroups;                      // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                SpawnGroupAvailabilityTimes;                       // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSpawnGroupAvailable;                            // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B10[0x54];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCapsProfile
struct FFortAIEncounterSpawnGroupCapsProfile
{
public:
	struct FGameplayTagContainer                 EncounterTypeTags;                                 // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterSpawnGroupCapsCategory> PopulationCategories;                              // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortEncounterPawnNumberCaps
struct FFortEncounterPawnNumberCaps
{
public:
	bool                                         bApplyPawnNumberCaps;                              // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B11[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCurveTableRowHandle>          PawnCapsPerPlayerCount;                            // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortPlayerPerformanceEstimateSettings
struct FFortPlayerPerformanceEstimateSettings
{
public:
	struct FCurveTableRowHandle                  PlayerPerformanceEstimateTransformMin;             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  PlayerPerformanceEstimateTransformOrigin;          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  PlayerPerformanceEstimateTransformMax;             // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EncounterPlayerPerformanceWeight;                  // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousWavePlayerPerformanceWeight;               // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CampaignPlayerPerformanceWeight;                   // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B12[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterPIDController
struct FFortAIEncounterPIDController
{
public:
	float                                        ProportionalGain;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntegralGain;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DerivativeGain;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B13[0x5C];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterPIDControllerSettings
struct FFortAIEncounterPIDControllerSettings
{
public:
	struct FCurveTableRowHandle                  ProportionalGain;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  IntegralGain;                                      // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  DerivativeGain;                                    // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.UtilityContribution
struct FUtilityContribution
{
public:
	enum class EFortCombatFactors                ContributingFactor;                                // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAIDirectorFactor             ContributingAIDirectorFactor;                      // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B14[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxContribution;                                   // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFactorContributionType       ContributionType;                                  // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B15[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.UtilityData
struct FUtilityData
{
public:
	TArray<struct FUtilityContribution>          ContributingFactors;                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ContributionsTotal;                                // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyRecentSelectionPenalty;                      // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B16[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RecentlySelectedPenaltyPercentage;                 // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenaltyFallOffRate;                                // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DebugGraphName;                                    // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DebugGraphColor;                                   // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.UtilityTypeFloatPair
struct FUtilityTypeFloatPair
{
public:
	enum class EFortAIUtility                    Utility;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B17[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.IntensityContribution
struct FIntensityContribution
{
public:
	enum class EFortCombatFactors                CombatFactor;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAIDirectorFactor             ContributingAIDirectorFactor;                      // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B18[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxContribution;                                   // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyContributionByCompletionPercentage;         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B19[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCurveTableRowHandle                  CompletionPercentageInitialMultiplier;             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  CompletionPercentageToStartReducingMultiplier;     // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  CompletionPercentageToStopReducingMultiplier;      // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bModifyByNumberOfCriticalEncounterGoals;           // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.IntensityData
struct FIntensityData
{
public:
	TArray<struct FIntensityContribution>        ContributingFactors;                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ContributionsTotal;                                // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBuildingEditModeMetadata*>     ExceptionEditModes;                                // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ExceptionEditModeWeight;                           // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// ScriptStruct FortniteGame.PendingSpawnInfo
struct FPendingSpawnInfo
{
public:
	TSubclassOf<class AFortAIPawn>               PawnClassToSpawn;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SpawnPoint;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x10(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x1C(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                SpawnSource;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnedFromExternalSpawner;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpawnSetIndex;                                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortressAIType                   AIType;                                            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 TargetPlayer;                                      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAIEncounterInfo*                  EncounterInfo;                                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DifficultyLevel;                                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAISpawnGroup*                     SpawnGroup;                                        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SpawnGroupGuid;                                    // 0x60(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnemyIndexInSpawnGroup;                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToSpawn;                                       // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PendingSpawnInfoGuid;                              // 0x78(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreCollision;                                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKillBuildingActorsAtSpawnLocation;                // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B20[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EncounterAILifespan;                               // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScoreMultiplier;                                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugSpawnedAI;                                   // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B21[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAbilitySet*>               AbilitySetsToGrantOnSpawn;                         // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UFortGameplayModifierItemDefinition*> ModifiersToApplyOnSpawn;                           // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortAISpawnGroupUpgradeUIData        UpgradeUIData;                                     // 0xB8(0xA8)(NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.FortAIDirectorFactorContribution
struct FFortAIDirectorFactorContribution
{
public:
	enum class EFortAIDirectorEvent              AIDirectorEvent;                                   // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B22[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxContribution;                                   // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAIDirectorFactorContribution ContributionType;                                  // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B23[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortAIDirectorFactorData
struct FFortAIDirectorFactorData
{
public:
	enum class EFortAIDirectorFactor             AIDirectorFactor;                                  // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B24[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortAIDirectorFactorContribution> ContributingEvents;                                // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B25[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.AIDirectorEventData
struct FAIDirectorEventData
{
public:
	enum class EFortAIDirectorEvent              Event;                                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B26[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCurveTableRowHandle                  DataMax;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  CoolDownRate;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EFortAIDirectorEventContribution  ContributionType;                                  // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAIDirectorEventParticipant   OwnerParticipantType;                              // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B27[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.GoalSelectionCriteria
struct FGoalSelectionCriteria
{
public:
	class UEnvQuery*                             GoalSelectionQuery;                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.PawnGoalSelectionCriteria
struct FPawnGoalSelectionCriteria
{
public:
	struct FGameplayTagContainer                 IncludeEnemiesWithTags;                            // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ExcludeEnemiesWithTags;                            // 0x20(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FGoalSelectionCriteria>        GoalSelectionCriteria;                             // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteGame.PawnGoalSelectionTableEntry
struct FPawnGoalSelectionTableEntry
{
public:
	struct FGameplayTagContainer                 RequiredGameplayTags;                              // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FPawnGoalSelectionCriteria            PawnGoalSelectionCriteria;                         // 0x20(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.EncounterGoalSelectionTableEntry
struct FEncounterGoalSelectionTableEntry
{
public:
	struct FGameplayTagContainer                 RequiredGameplayTags;                              // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGoalSelectionCriteria                GoalSelectionCriteria;                             // 0x20(0x8)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortGoalActorEncounterDataManagerPair
struct FFortGoalActorEncounterDataManagerPair
{
public:
	class AActor*                                GoalActor;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortAIDirectorDataManager*            EncounterDataManager;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterWaveProgressEstimation
struct FFortAIEncounterWaveProgressEstimation
{
public:
	float                                        SectionProgressEstimate;                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SectionStartTime;                                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastWaveProgressUpdateTime;                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PeakAndFadeWavePercentage;                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAdjustmentPerSecond;                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAIWaveProgressSection        CurrentSection;                                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B28[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfWaveSegments;                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.EncounterEnvironmentQueryInstance
struct FEncounterEnvironmentQueryInstance
{
public:
	struct FEncounterEnvironmentQueryInfo        EnvironmentQueryInfo;                              // 0x0(0x28)(NativeAccessSpecifierPublic)
	int32                                        QueryID;                                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsWaitingForQueryResults;                         // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEncounterDirection           ChosenDirection;                                   // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B29[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       QueryLocations;                                    // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumTimesUsed;                                      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.FortEncounterAIDirectorFactor
struct FFortEncounterAIDirectorFactor
{
public:
	float                                        CurrentValue;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedPeriodValue;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalPeriodTime;                                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortSpawnAIRequest
struct FFortSpawnAIRequest
{
public:
	struct FGuid                                 SpawnGroupInstanceGuid;                            // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnemyIndex;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x14(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x20(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SpawnPoint;                                        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortAbilitySet*>               AbilitySetsToGrantOnSpawn;                         // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIgnoreCollisionWhenSpawning;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteGame.FortAISpawnerData
struct FFortAISpawnerData
{
public:
	struct FGuid                                 SpawnGroupInstanceGuid;                            // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortSpawnAIRequest                   ReservedSpawnRequest;                              // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct FortniteGame.SpawnGroupInstanceInfo
struct FSpawnGroupInstanceInfo
{
public:
	class UFortAISpawnGroup*                     SpawnGroup;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumActiveAlive;                                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalGroupCost;                                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnPointsUsed;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumEngaged;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadyToSpawn;                                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFinishedSpawning;                                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 GroupGuid;                                         // 0x1C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnemySpawnDataIndex;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSelected;                                      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NextEnemyToSpawnIndex;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UpgradeTags;                                       // 0x38(0x20)(NativeAccessSpecifierPublic)
	struct FFortAISpawnGroupUpgradeUIData        UpgradeUIData;                                     // 0x58(0xA8)(NativeAccessSpecifierPublic)
	TArray<struct FFortAIPawnUpgradeData>        PawnUpgrades;                                      // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UFortGameplayModifierItemDefinition*> ModifiersForAllPawns;                              // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AFortAIPawn*>                   PawnList;                                          // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteGame.FortCurveSequenceInstanceInfo
struct FFortCurveSequenceInstanceInfo
{
public:
	uint8                                        Pad_B2E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0x10 - 0x4)
// ScriptStruct FortniteGame.FortIntensityCurveSequenceInstanceInfo
struct FFortIntensityCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{
public:
	uint8                                        Pad_B2F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortIntensityCurveSequence*           IntensityCurveSequence;                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0x10 - 0x4)
// ScriptStruct FortniteGame.FortSpawnPointsPercentageCurveSequenceInstanceInfo
struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{
public:
	uint8                                        Pad_B30[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSpawnPointsPercentageCurveSequence* SpawnPointsPercentageCurveSequence;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.CurrentIntensityAnalyticsBucket
struct FCurrentIntensityAnalyticsBucket
{
public:
	uint8                                        Pad_B31[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct FortniteGame.FortIntensityCurve
struct FFortIntensityCurve : public FTableRowBase
{
public:
	class UCurveTable*                           IntensityCurveTable;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  IntensityCurveTableRow;                            // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LowPlayerPerformancePeakIntensityThreshold;        // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NormalPlayerPerformancePeakIntensityThreshold;     // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HighPlayerPerformancePeakIntensityThreshold;       // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxRampTime;                                       // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FadeEndIntensityThreshold;                         // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StartIntensityOffsetFloor;                         // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndIntensityOffsetFloor;                           // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StartIntensityOffsetCeiling;                       // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndIntensityOffsetCeiling;                         // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B32[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteGame.FortSpawnPointsPercentageCurve
struct FFortSpawnPointsPercentageCurve : public FTableRowBase
{
public:
	class UCurveTable*                           SpawnPointsPercentageCurveTable;                   // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  SpawnPointsPercentageCurveTableRow;                // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxRampTime;                                       // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B33[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.AIEncounterSpawnGroupWeights
struct FAIEncounterSpawnGroupWeights
{
public:
	uint8                                        Pad_B34[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.SpawnGroupProgression
struct FSpawnGroupProgression
{
public:
	class UFortAISpawnGroup*                     SpawnGroup;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteGame.FortVariantSpawnPoints
struct FFortVariantSpawnPoints : public FTableRowBase
{
public:
	int32                                        BudgetPoints;                                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B35[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteGame.FortAIPawnVariantDefinition
struct FFortAIPawnVariantDefinition
{
public:
	TSubclassOf<class AFortAIPawn>               PawnClass;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  VariantWeightCurve;                                // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CurrentWeight;                                     // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B36[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     RequiredTagsQuery;                                 // 0x20(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortSpawnGroupEncounterTypeData
struct FFortSpawnGroupEncounterTypeData
{
public:
	struct FGameplayTagContainer                 EncounterTypeTags;                                 // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  MaxGroupCategoryPopulationDensityCurve;            // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  RespawnDelayCurve;                                 // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.SpawnGroupEnemy
struct FSpawnGroupEnemy
{
public:
	TSubclassOf<class UFortAIPawnVariant>        EnemyVariantClass;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideVariantSpawnPointValue;                   // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B37[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpawnValue;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterQueryDirectionTracker
struct FFortAIEncounterQueryDirectionTracker
{
public:
	bool                                         bHasTriedPreviousDirections;                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B38[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortEncounterDirection>   PreviousQueryDirections;                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EFortEncounterDirection>   ChosenDirections;                                  // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EFortEncounterDirection>   FailedDirections;                                  // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EFortEncounterDirection>   AvailableDirections;                               // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterRiftManagerInitializationData
struct FFortAIEncounterRiftManagerInitializationData
{
public:
	class UFortAIEncounterInfo*                  EncounterInfo;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortEncounterSettings                EncounterSettings;                                 // 0x8(0x58)(NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo        CurrentEnvironmentQueryInfo;                       // 0x60(0x28)(NativeAccessSpecifierPublic)
	struct FEncounterEnvironmentQueryInfo        FallbackEnvironmentQueryInfo;                      // 0x88(0x28)(NativeAccessSpecifierPublic)
	TSubclassOf<class ABuildingRift>             RiftClassTemplate;                                 // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumRiftsToUse;                                     // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinRiftsToUse;                                     // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterRift
struct FFortAIEncounterRift
{
public:
	int32                                        QueryID;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RiftLocation;                                      // 0x4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABuildingRift*                         RiftActor;                                         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.FortAIEncounterSpawnArea
struct FFortAIEncounterSpawnArea
{
public:
	TArray<struct FEncounterEnvironmentQueryInstance> QueryInstances;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterRift>          PendingRifts;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAIEncounterRift>          Rifts;                                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UFortPathCostEstimator*>        PathEstimators;                                    // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsingFallbackQuery;                               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B39[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteGame.AIAssignmentInfo
struct FAIAssignmentInfo
{
public:
	TWeakObjectPtr<class UFortAIAssignment>      CurrentAssignment;                                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortAIGoalInfo                       CurrentGoal;                                       // 0x8(0x18)(NoDestructor, NativeAccessSpecifierPrivate)
	float                                        TimeCurrentGoalWasChosen;                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeExitedLastAssignmentOfType;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B3A[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortAIAssignment>      PreviousAssignment;                                // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortAIGoalInfo                       PreviousGoal;                                      // 0x3C(0x18)(NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bWaitingForQueryResponse;                          // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSuppressGoalUpdates;                              // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bReportEnemyGoalSelection;                         // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B3B[0x29];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.AIDiscouragedGoalTimer
struct FAIDiscouragedGoalTimer
{
public:
	struct FFortAIGoalInfo                       DiscouragedGoalInfo;                               // 0x0(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	double                                       ExpirationTime;                                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumberOfTimesMarkedForDiscouragement;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortMoveConfig
struct FFortMoveConfig
{
public:
	uint8                                        Pad_B3D[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                FocusTarget;                                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AFortPawn>                 PushPawnClassOnBump;                               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.GameplayTagAnimationData
struct FGameplayTagAnimationData
{
public:
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x0(0x20)(Edit, NativeAccessSpecifierPrivate)
	enum class EFortCustomGender                 ValidGenders;                                      // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B3E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAnimMontage>           AnimMontage;                                       // 0x28(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.GameplayTagAnimations
struct FGameplayTagAnimations
{
public:
	TArray<struct FGameplayTagAnimationData>     GameplayTagAnimData;                               // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.HeroSpecializationAttributeRequirement
struct FHeroSpecializationAttributeRequirement
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumValue;                                      // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteGame.FortSpecializationSlot
struct FFortSpecializationSlot
{
public:
	TSoftObjectPtr<class UFortAbilityKit>        GrantedAbilityKit;                                 // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortAbilityKit>        RemovedAbilityKit;                                 // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHeroSpecializationAttributeRequirement> AttributeRequirements;                             // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredTags;                                      // 0x50(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        MinimumHeroLevel;                                  // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B40[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteGame.HeroItem
struct FHeroItem
{
public:
	TSoftObjectPtr<class UFortWorldItemDefinition> Item;                                              // 0x0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortReplenishmentType            Replenishment;                                     // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B41[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 RequiredGPTags;                                    // 0x28(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SwapTag;                                           // 0x48(0x20)(Edit, NativeAccessSpecifierPublic)
	bool                                         bShowInAbilityScreen;                              // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B42[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.HeroAbilityKit
struct FHeroAbilityKit
{
public:
	TSoftObjectPtr<class UFortAbilityKit>        InherentAbilityKit;                                // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredGPTags;                                    // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bShowInAbilityScreen;                              // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B43[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortCharacterPartsRepMontageInfo
struct FFortCharacterPartsRepMontageInfo
{
public:
	TArray<struct FFortCharacterPartMontageInfo> CharPartMontages;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UAnimMontage*                          PawnMontage;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayBit;                                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B44[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x90 - 0x78)
// ScriptStruct FortniteGame.FortPlayerPawnStats
struct FFortPlayerPawnStats : public FFortPawnStats
{
public:
	float                                        MaxJumpTime;                                       // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxStamina;                                        // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StaminaRegenRate;                                  // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StaminaRegenDelay;                                 // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SprintingStaminaExpenditureRate;                   // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B45[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct FortniteGame.FortCollectionBookPageCategoryTableRow
struct FFortCollectionBookPageCategoryTableRow : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        SortPriority;                                      // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B46[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.CustomPartMaterialOverrideData
struct FCustomPartMaterialOverrideData
{
public:
	int32                                        MaterialOverrideIndex;                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B47[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInterface>     OverrideMaterial;                                  // 0x8(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.CustomPartVectorParameter
struct FCustomPartVectorParameter
{
public:
	int32                                        MaterialIndexForVectorParameter;                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B48[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  VectorParameterNameForMaterial;                    // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          VectorOverride;                                    // 0x10(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.CustomPartScalarParameter
struct FCustomPartScalarParameter
{
public:
	int32                                        MaterialIndexForScalarParameter;                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B49[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ScalarParameterNameForMaterial;                    // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalarOverride;                                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.CustomPartTextureParameter
struct FCustomPartTextureParameter
{
public:
	int32                                        MaterialIndexForTextureParameter;                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TextureParameterNameForMaterial;                   // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture>               TextureOverride;                                   // 0x10(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortEventConditional
struct FFortEventConditional
{
public:
	enum class EFortEventConditionType           ConditionalType;                                   // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StatToCompare;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatRecordingPeriod              RelevantPeriod;                                    // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCompare                      ComparisonType;                                    // 0x11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSchematicItemDefinition*          CraftingItem;                                      // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCraft;                                         // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStat*                                 Stat;                                              // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                 FPC;                                               // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortStatEvent
struct FFortStatEvent
{
public:
	class FName                                  StatEventName;                                     // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEventRepeat                  RepeatType;                                        // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          StatsToMonitor;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortEventConditional>         Conditions;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class AFortClientAnnouncement>   AnnouncementToDisplay;                             // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               NotificationParameter;                             // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStat*                                 AssociatedStat;                                    // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                 FPC;                                               // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortStatEventSequence
struct FFortStatEventSequence
{
public:
	class FName                                  StatEventName;                                     // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEventRepeat                  RepeatType;                                        // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B50[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortStatEvent>                EventSequence;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UStat*                                 AssociatedStat;                                    // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                 FPC;                                               // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          StatsToMonitor;                                    // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortEventConditional>         Conditions;                                        // 0x40(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteGame.FortDailyRewardScheduleDisplayData
struct FFortDailyRewardScheduleDisplayData
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ItemDescription;                                   // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  EpicItemDescription;                               // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteGame.FortDailyRewardScheduleDefinition
struct FFortDailyRewardScheduleDefinition
{
public:
	class FName                                  ScheduleName;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortDailyRewardScheduleTokenDefinition> EnablingToken;                                     // 0x8(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            Rewards;                                           // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortDailyRewardScheduleDisplayData   DisplayData;                                       // 0x30(0x60)(Edit, NativeAccessSpecifierPublic)
	struct FDateTime                             BeginDate;                                         // 0x90(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             EndDate;                                           // 0x98(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.FortDailyLoginRewardStat_ScheduleClaimed
struct FFortDailyLoginRewardStat_ScheduleClaimed
{
public:
	int32                                        RewardsClaimed;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClaimedToday;                                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B51[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteGame.FortDailyLoginRewardStat
struct FFortDailyLoginRewardStat
{
public:
	int32                                        NextDefaultReward;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalDaysLoggedIn;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             LastClaimDate;                                     // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FFortDailyLoginRewardStat_ScheduleClaimed> AdditionalSchedules;                               // 0x10(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortDailyRewardsNotification
struct FFortDailyRewardsNotification
{
public:
	int32                                        DaysLoggedIn;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B52[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMcpLootEntry>                 Items;                                             // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteGame.FortAthenaGamepadLookSettings
struct FFortAthenaGamepadLookSettings
{
public:
	class UCurveFloat*                           GamepadLookYawCurves;                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B53[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           GamepadLookPitchCurves;                            // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B54[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             GamepadLookScale;                                  // 0xA0(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GamepadLookScaleDownsightsDecayTime;               // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             GamepadLookAccelTime;                              // 0xAC(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             GamepadLookDecelTime;                              // 0xB4(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B55[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteGame.FortAthenaGamepadAimAssistSettings
struct FFortAthenaGamepadAimAssistSettings
{
public:
	class UCurveFloat*                           TargetWeightCurve;                                 // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetWeightScale;                                 // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetDBNOWeightScale;                             // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           PullStrengthYawCurve;                              // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           PullStrengthPitchCurve;                            // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           PullStrengthScalarForFOVCurve;                     // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PullMaxRate;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B56[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           SlowStrengthYawCurve;                              // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           SlowStrengthPitchCurve;                            // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           SlowStrengthScalarForFOVCurve;                     // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlowDecayTime;                                     // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B57[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortAbilityTargetSelection           TargetSelection;                                   // 0x50(0x60)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortOutpostFabricatorInfo
struct FFortOutpostFabricatorInfo
{
public:
	class FString                                DisintegrationStartTime;                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuantumGooCompleted;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuantumGooStillToProcess;                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortDepositedResources
struct FFortDepositedResources
{
public:
	class FString                                TemplateId;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B58[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortOutpostPOSTInfo
struct FFortOutpostPOSTInfo
{
public:
	TArray<struct FFortDepositedResources>       DepositedPostItems;                                // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortPlacedBuilding
struct FFortPlacedBuilding
{
public:
	class FString                                BuildingTag;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlacedTag;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortOutpostCoreInfo
struct FFortOutpostCoreInfo
{
public:
	TArray<struct FFortPlacedBuilding>           PlacedBuildings;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        AccountsWithEditPermission;                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.OutpostBuildingData
struct FOutpostBuildingData
{
public:
	TSoftObjectPtr<class UFortOutpostItemDefinition> ItemDefinition;                                    // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.OutpostPrestigeEffects
struct FOutpostPrestigeEffects
{
public:
	TArray<TSubclassOf<class UGameplayEffect>>   EnemyPrestigeEffect;                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.OutpostUpgradesPerTheaterData
struct FOutpostUpgradesPerTheaterData
{
public:
	int32                                        TheaterSlot;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B59[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            OutpostUpgradesData;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.OutpostPOSTBoost
struct FOutpostPOSTBoost
{
public:
	struct FCurveTableRowHandle                  PlayerStructureHealthModPerPOSTLevel;              // 0x0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.OutpostPOSTPerTheaterData
struct FOutpostPOSTPerTheaterData
{
public:
	int32                                        TheaterSlot;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutpostPOSTBoost                     POSTData;                                          // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.OutpostPrestigeEffectsPerTheater
struct FOutpostPrestigeEffectsPerTheater
{
public:
	int32                                        TheaterSlot;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutpostPrestigeEffects               PrestigeEffects;                                   // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x68 (0x88 - 0x20)
// ScriptStruct FortniteGame.OutpostUpgradeAndPrestigeBuildingData
struct FOutpostUpgradeAndPrestigeBuildingData : public FOutpostBuildingData
{
public:
	int32                                        MaxPrestigeLevel;                                  // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            DefaultOutpostBuildingUpgradeData;                 // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOutpostUpgradesPerTheaterData> PerTheaterOutpostBuildingUpgradeData;              // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FOutpostPrestigeEffects               DefaultPrestigeData;                               // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FOutpostPrestigeEffectsPerTheater> PrestigePerTheaterData;                            // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FOutpostPOSTBoost                     DefaultPOSTData;                                   // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FOutpostPOSTPerTheaterData>    POSTPerTheaterData;                                // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           POSTBuildingGameplayEffectClass;                   // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct FortniteGame.StorageVaultBuildingData
struct FStorageVaultBuildingData : public FOutpostBuildingData
{
public:
	TArray<int32>                                ItemCapacityPerLevel;                              // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct FortniteGame.HarvestingOptimizerBuildingData
struct FHarvestingOptimizerBuildingData : public FOutpostBuildingData
{
public:
};

// 0x10 (0x30 - 0x20)
// ScriptStruct FortniteGame.CraftingTableBuildingData
struct FCraftingTableBuildingData : public FOutpostBuildingData
{
public:
	class UDataTable*                            ActivationCostData;                                // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           ActivationEffect;                                  // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.OutpostFabricatorPerTheaterData
struct FOutpostFabricatorPerTheaterData
{
public:
	int32                                        TheaterSlot;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemTier                     MaxAllowedTier;                                    // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x68 - 0x20)
// ScriptStruct FortniteGame.FabricatorBuildingData
struct FFabricatorBuildingData : public FOutpostBuildingData
{
public:
	TArray<TSoftObjectPtr<class UFortWorldItemDefinition>> AlwaysAvailableFabricationItems;                   // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UDataTable*                            DefaultIngredientDisintergrationData;              // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOutpostFabricatorPerTheaterData> IngredientDisintergrationPerTheaterData;           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FabricationDuration;                               // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisintegrationToFabricationRatio;                  // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuantumGooProductionTime;                          // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                QuantumGooCapacityPerLevel;                        // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteGame.OutpostCraftingTableData
struct FOutpostCraftingTableData : public FTableRowBase
{
public:
	int32                                        Level;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemCount;                                         // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RequiredItems;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct FortniteGame.OutpostDisintegrationData
struct FOutpostDisintegrationData : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortWorldItemDefinition> ItemDefinition;                                    // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisintegrationValue;                               // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct FortniteGame.OutpostItemUpgradeData
struct FOutpostItemUpgradeData : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortOutpostItemDefinition> ItemDefinition;                                    // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemLevel;                                         // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B60[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RequiredItems;                                     // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RequiredAccountItems;                              // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.HomebaseBannerColorData
struct FHomebaseBannerColorData : public FTableRowBase
{
public:
	class FName                                  ColorKeyName;                                      // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CategoryRowName;                                   // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct FortniteGame.HomebaseBannerIconData
struct FHomebaseBannerIconData : public FTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             SmallImage;                                        // 0x8(0x20)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>             LargeImage;                                        // 0x28(0x20)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CategoryRowName;                                   // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DisplayName;                                       // 0x50(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  DisplayDescription;                                // 0x68(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct FortniteGame.HomebaseBannerCategoryData
struct FHomebaseBannerCategoryData : public FTableRowBase
{
public:
	class FText                                  CategoryDisplayName;                               // 0x8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int32                                        SortPriority;                                      // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B61[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.HomebaseBannerColor
struct FHomebaseBannerColor
{
public:
	struct FLinearColor                          PrimaryColor;                                      // 0x0(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          SecondaryColor;                                    // 0x10(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.WorkerSetBonusData
struct FWorkerSetBonusData
{
public:
	struct FGameplayTag                          SetBonusTypeTag;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        RequiredWorkersCount;                              // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B62[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGameplayEffect>           SetBonusEffect;                                    // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectionWeight;                                   // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PowerPoints;                                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.WorkerPortraitData
struct FWorkerPortraitData
{
public:
	TSoftObjectPtr<class UFortItemIconDefinition> Portrait;                                          // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.WorkerGenderData
struct FWorkerGenderData
{
public:
	enum class EFortCustomGender                 Gender;                                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B63[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWorkerPortraitData>           PotraitData;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.ManagerSynergyData
struct FManagerSynergyData
{
public:
	struct FGameplayTag                          SynergyTypeTag;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWorkerGenderData>             GenderData;                                        // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.WorkerPersonalityData
struct FWorkerPersonalityData
{
public:
	struct FGameplayTag                          PersonalityTypeTag;                                // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PersonalityName;                                   // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        SelectionWeight;                                   // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B64[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWorkerGenderData>             GenderData;                                        // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteGame.ExpeditionSlot
struct FExpeditionSlot : public FTableRowBase
{
public:
	struct FGameplayTag                          SlotTag;                                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LootTierGroup;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteGame.MyFortCategoryData
struct FMyFortCategoryData
{
public:
	class FText                                  CategoryName;                                      // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TooltipTag;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ModifiedTagContainer;                              // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsCore;                                           // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B65[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayAttribute>            Attributes;                                        // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct FortniteGame.FortLootTierData
struct FFortLootTierData : public FTableRowBase
{
public:
	class FName                                  TierGroup;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELootQuotaLevel                   QuotaLevel;                                        // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B66[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LootTier;                                          // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinWorldLevel;                                     // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxWorldLevel;                                     // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B67[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StreakBreakerCurrency;                             // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StreakBreakerPointsMin;                            // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StreakBreakerPointsMax;                            // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StreakBreakerPointsSpend;                          // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B68[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LootPackage;                                       // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LootPreviewPackage;                                // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NumLootPackageDrops;                               // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                LootPackageCategoryWeightArray;                    // 0x60(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                LootPackageCategoryMinArray;                       // 0x70(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                LootPackageCategoryMaxArray;                       // 0x80(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RequiredGameplayTag;                               // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowBonusLootDrops;                              // 0x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Annotation;                                        // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct FortniteGame.FortLootPackageData
struct FFortLootPackageData : public FTableRowBase
{
public:
	class FName                                  LootPackageID;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LootPackageCategory;                               // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RequiredTag;                                       // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LootPackageCall;                                   // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortItemDefinition>    ItemDefinition;                                    // 0x38(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PersistentLevel;                                   // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinWorldLevel;                                     // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxWorldLevel;                                     // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowBonusDrops;                                  // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Annotation;                                        // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortDifficultyOptionBudget
struct FFortDifficultyOptionBudget
{
public:
	struct FGameplayTagContainer                 BudgetTypeTags;                                    // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  DifficultyOptionPointsCurve;                       // 0x20(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FortniteGame.FortEncounterLockedUtility
struct FFortEncounterLockedUtility
{
public:
	enum class EFortAIUtility                    Utility;                                           // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortEncounterUtilityDesire       UtilityDesire;                                     // 0x1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.MyTownWorkerSetBonusData
struct FMyTownWorkerSetBonusData
{
public:
	struct FGameplayTagContainer                 SetBonusTypeTag;                                   // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        RequiredWorkersCount;                              // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGameplayEffect>           SetBonusEffect;                                    // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectionWeight;                                   // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.MyTownWorkerPortraitData
struct FMyTownWorkerPortraitData
{
public:
	TSoftObjectPtr<class UFortItemIconDefinition> Portrait;                                          // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectionWeight;                                   // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.MyTownWorkerGenderData
struct FMyTownWorkerGenderData
{
public:
	enum class EFortCustomGender                 Gender;                                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B70[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectionWeight;                                   // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMyTownWorkerPortraitData>     PotraitData;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.MyTownWorkerPersonalityData
struct FMyTownWorkerPersonalityData
{
public:
	struct FGameplayTagContainer                 PersonalityTypeTag;                                // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  PersonalityName;                                   // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        SelectionWeight;                                   // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B71[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMyTownWorkerGenderData>       GenderData;                                        // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortUIFeedback
struct FFortUIFeedback
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Audio;                                             // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B72[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeIn;                                            // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOut;                                           // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B73[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct FortniteGame.FortUIFeedbackBlueprintOnly
struct FFortUIFeedbackBlueprintOnly : public FFortUIFeedback
{
public:
	class FName                                  EditableName;                                      // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteGame.FortSurvivorNameData
struct FFortSurvivorNameData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.FortHexMapCoord
struct FFortHexMapCoord
{
public:
	int32                                        Horizontal;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Vertical;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Depth;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortZoneEvent
struct FFortZoneEvent
{
public:
	class FName                                  EventType;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataAsset*                            EventContent;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                EventInstigator;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.FortMissionAlertRequirementsInfo
struct FFortMissionAlertRequirementsInfo
{
public:
	enum class EFortMissionAlertCategory         Category;                                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B74[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRequirementsInfo                 Requirements;                                      // 0x8(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortTheaterMissionWeight
struct FFortTheaterMissionWeight
{
public:
	TSoftClassPtr<class UFortMissionGenerator>   MissionGenerator;                                  // 0x0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B75[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortTheaterDifficultyWeight
struct FFortTheaterDifficultyWeight
{
public:
	struct FDataTableRowHandle                   DifficultyInfo;                                    // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                LootTierGroup;                                     // 0x10(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B76[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortTheaterMapMissionData
struct FFortTheaterMapMissionData
{
public:
	TArray<struct FFortTheaterMissionWeight>     MissionWeights;                                    // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterDifficultyWeight>  DifficultyWeights;                                 // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        NumMissionsAvailable;                              // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMissionsToChange;                               // 0x24(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MissionChangeFrequency;                            // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B77[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortLinkedQuest
struct FFortLinkedQuest
{
public:
	class UFortQuestItemDefinition*              QuestDefinition;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ObjectiveStatHandle;                               // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct FortniteGame.FortTheaterTileEditorData
struct FFortTheaterTileEditorData
{
public:
	int32                                        XCoordinate;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        YCoordinate;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortZoneTheme>            ZoneTheme;                                         // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortRegionInfo*                       Region;                                            // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortRequirementsInfo                 Requirements;                                      // 0x18(0x40)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FFortLinkedQuest>              LinkedQuests;                                      // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EFortTheaterMapTileType           TileType;                                          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B78[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TileTags;                                          // 0x70(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterMissionWeight>     MissionWeightOverrides;                            // 0x90(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterDifficultyWeight>  DifficultyWeightOverrides;                         // 0xA0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bCanBeMissionAlert;                                // 0xB0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B79[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortEditorTheaterMapRegionColor
struct FFortEditorTheaterMapRegionColor
{
public:
	class UFortRegionInfo*                       Region;                                            // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          RegionColor;                                       // 0x8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortTheaterColorInfo
struct FFortTheaterColorInfo
{
public:
	bool                                         bUseDifficultyToDetermineColor;                    // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           Color;                                             // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct FortniteGame.FortMissionAlertRuntimeData
struct FFortMissionAlertRuntimeData
{
public:
	enum class EFortMissionAlertCategory         MissionAlertCategory;                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRespectTileRequirements;                          // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowQuickplay;                                   // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4B0 (0x4B0 - 0x0)
// ScriptStruct FortniteGame.FortTheaterRuntimeData
struct FFortTheaterRuntimeData
{
public:
	enum class EFortTheaterType                  TheaterType;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TheaterTags;                                       // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortRequirementsInfo                 TheaterVisibilityRequirements;                     // 0x28(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortRequirementsInfo                 Requirements;                                      // 0x68(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESubGame                          RequiredSubGameForVisibility;                      // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyMatchLinkedQuestsToTiles;                     // 0xA9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AWorldMapPin>              WorldMapPinClass;                                  // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            TheaterImage;                                      // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   TheaterImages;                                     // 0xC0(0x360)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortTheaterColorInfo                 TheaterColorInfo;                                  // 0x420(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x450(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortRequirementsInfo                 MissionAlertRequirements;                          // 0x458(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionAlertRuntimeData>  MissionAlertCategoryRequirements;                  // 0x498(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        HighestDifficulty;                                 // 0x4A8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct FortniteGame.FortTheaterMapTileData
struct FFortTheaterMapTileData
{
public:
	enum class EFortTheaterMapTileType           TileType;                                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortZoneTheme>          ZoneTheme;                                         // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortRequirementsInfo                 Requirements;                                      // 0x28(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FFortLinkedQuest>              LinkedQuests;                                      // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        XCoordinate;                                       // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        YCoordinate;                                       // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterMissionWeight>     MissionWeightOverrides;                            // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterDifficultyWeight>  DifficultyWeightOverrides;                         // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         CanBeMissionAlert;                                 // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TileTags;                                          // 0xA8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct FortniteGame.FortTheaterMapRegionData
struct FFortTheaterMapRegionData
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RegionTags;                                        // 0x18(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                TileIndices;                                       // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USlateBrushAsset>       RegionThemeIcon;                                   // 0x48(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTheaterMapMissionData            MissionData;                                       // 0x68(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortRequirementsInfo                 Requirements;                                      // 0x98(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionAlertRequirementsInfo> MissionAlertRequirements;                          // 0xD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x540 (0x540 - 0x0)
// ScriptStruct FortniteGame.FortTheaterMapData
struct FFortTheaterMapData
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FString                                UniqueId;                                          // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TheaterSlot;                                       // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTestTheater;                                    // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B80[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RequiredEventFlag;                                 // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  ThreatDisplayName;                                 // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortTheaterRuntimeData               RuntimeInfo;                                       // 0x70(0x4B0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterMapTileData>       Tiles;                                             // 0x520(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FFortTheaterMapRegionData>     Regions;                                           // 0x530(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.FortMissionAlertAvailableData
struct FFortMissionAlertAvailableData
{
public:
	enum class EFortMissionAlertCategory         MissionAlertCategory;                              // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B81[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumMissionAlertsAvailable;                         // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortTheaterMapMissionAlertData
struct FFortTheaterMapMissionAlertData
{
public:
	int32                                        NumMissionAlertsAvailable;                         // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B82[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortMissionAlertAvailableData> AvailabilityDataPerCategory;                       // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        MissionAlertChangeFrequency;                       // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B83[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortTimeOfDayTheme
struct FFortTimeOfDayTheme
{
public:
	TArray<class UFortTimeOfDayCollection*>      TimeOfDayCollections;                              // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class AFortTimeOfDayManager>> AdditionalTimeOfDayManagers;                       // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class AFortTimeOfDayManager>> ProhibitedTimeOfDayManagers;                       // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class AFortTimeOfDayManager>> ValidTimeOfDayManagers;                            // 0x30(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.WindScalarMaterialInterpolationData
struct FWindScalarMaterialInterpolationData
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialParameterIndex;                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LerpFromValue;                                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LerpToValue;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B84[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortMaterialParameterID
struct FFortMaterialParameterID
{
public:
	int32                                        VariableIndex;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B85[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  VariableName;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortWindMaterialParameterPairID
struct FFortWindMaterialParameterPairID
{
public:
	int32                                        PairIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B86[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMaterialParameterID              SpeedParameter;                                    // 0x8(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FFortMaterialParameterID              OffsetParameter;                                   // 0x18(0x10)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.WindVectorMaterialInterpolationData
struct FWindVectorMaterialInterpolationData
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialParameterIndex;                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LerpFromValue;                                     // 0xC(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LerpToValue;                                       // 0x1C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B87[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.FortWindMaterialData
struct FFortWindMaterialData
{
public:
	class UMaterialInstanceDynamic*              Mid;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              IntenseStateMID;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialParameterPairIndices;                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WindVectorParameterIndex;                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWindScalarMaterialInterpolationData> ScalarInterpolationData;                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWindVectorMaterialInterpolationData> VectorInterpolationData;                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortWindMaterialParameterPairID> ParametersToSet;                                   // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortWindResponderMaterialVariablePairData
struct FFortWindResponderMaterialVariablePairData
{
public:
	float                                        PreviousSpeed;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousOffset;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaterialsPreviousTime;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTimeModifiedByMaterialSpeed;                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialVariableIndex;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B88[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SpeedVariableName;                                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TimeOffsetVariableName;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteGame.FortWindResponder
struct FFortWindResponder
{
public:
	class ABuildingSMActor*                      WindUpdatingBuildingSMActor;                       // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                     WindSpeedCurve;                                    // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                     WindPannerSpeedCurve;                              // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            WindAudio;                                         // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            MildWindMaterialInstances;                         // 0x20(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            IntenseWindMaterialInstances;                      // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FFortWindMaterialData>         MaterialsData;                                     // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int32                                        MaterialParameterPairIndices;                      // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B89[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortWindResponderMaterialVariablePairData> PairedVariablesData;                               // 0x58(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8A[0x1C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindSpeed;                                         // 0x84(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeedsInitialization;                              // 0x88(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitialized;                                      // 0x89(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8B[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.FortWindIntensityAndDirection
struct FFortWindIntensityAndDirection
{
public:
	float                                        WindIntensity;                                     // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WindHeading;                                       // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortGlobalWindInfo
struct FFortGlobalWindInfo
{
public:
	TArray<struct FFortWindIntensityAndDirection> ValidWindInfos;                                    // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int32                                        WindIndex;                                         // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B8C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteGame.FortMissionPlacementFoundationItem
struct FFortMissionPlacementFoundationItem
{
public:
	struct FGameplayTagContainer                 ItemIdentifyingTags;                               // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TagsToAddToChosenPlacementActorOrFoundationActor;  // 0x20(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UEnvQuery*                             PlacementQuery;                                    // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class ABuildingFoundation>     BuildingFoundationToPlace;                         // 0x48(0x20)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumLocationsToFind;                                // 0x68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAdjustFoundationPlacementForFloors;               // 0x6C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B8D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteGame.FortMissionPlacementActorItem
struct FFortMissionPlacementActorItem
{
public:
	struct FGameplayTagContainer                 ItemIdentifyingTags;                               // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TagsToAddToChosenPlacementActor;                   // 0x20(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UEnvQuery*                             PlacementQuery;                                    // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class AActor>                  ActorToPlace;                                      // 0x48(0x20)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumLocationsToFind;                                // 0x68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSpawnActorAutomatically;                          // 0x6C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldReserveLocations;                           // 0x6D(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSnapToGrid;                                       // 0x6E(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAdjustPlacementForFloors;                         // 0x6F(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDontCreateSpawnRiftsNearby;                       // 0x70(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B8E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortMissionPlacementItems
struct FFortMissionPlacementItems
{
public:
	struct FGameplayTagContainer                 TagsToAddToChosenPlacementActors;                  // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionPlacementFoundationItem> AdditionalWorldFoundations;                        // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionPlacementActorItem> ActorsAndLocations;                                // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteGame.MissionPerDifficultyProperties
struct FMissionPerDifficultyProperties
{
public:
	TArray<struct FDataTableRowHandle>           ValidDifficulties;                                 // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortTimeOfDayTheme                   OverrideTimeOfDayTheme;                            // 0x10(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortGlobalWindInfo                   OverrideGlobalWindInfo;                            // 0x50(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortMissionTaggedRewards
struct FFortMissionTaggedRewards
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFortWorldItemDefinition>> WorldItemDefinitions;                              // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x1E8 (0x1E8 - 0x0)
// ScriptStruct FortniteGame.FortMissionPopupWidgetData
struct FFortMissionPopupWidgetData
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bShowDescription;                                  // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DescriptionIcon;                                   // 0x38(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AvailableIcon;                                     // 0xC8(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UnavailableIcon;                                   // 0x158(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortObjectiveEntry
struct FFortObjectiveEntry
{
public:
	TSoftClassPtr<class AFortObjectiveBase>      ObjectiveRef;                                      // 0x0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBadgeItemDefinition*              ObjectiveRewardBadge;                              // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortObjectiveRequirement         MissionRequirement;                                // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B90[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 ObjectiveHandle;                                   // 0x30(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortObjectiveBlock
struct FFortObjectiveBlock
{
public:
	TArray<struct FFortObjectiveEntry>           ObjectiveEntries;                                  // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortStartingMissionInfo
struct FFortStartingMissionInfo
{
public:
	TArray<class UFortMissionInfo*>              StartingMissions;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bDisableSharedMissionLoading;                      // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B91[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteGame.FortEncounterProfile
struct FFortEncounterProfile
{
public:
	TSoftObjectPtr<class UFortDifficultyOptionSetEncounter> EncounterOptions;                                  // 0x0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortDifficultyOptionCategoryEncounter*> OverrideCategories;                                // 0x20(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bShouldReselectOptionsPerInstance;                 // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B92[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 EncounterTypeTags;                                 // 0x38(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortEncounterSequenceSettings
struct FFortEncounterSequenceSettings
{
public:
	struct FFortEncounterTransitionSettings      TransitionSettings;                                // 0x0(0x1)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B93[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortEncounterProfile>         EncounterSequence;                                 // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SequenceTags;                                      // 0x18(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortPlayerSpawnPadPlacementData
struct FFortPlayerSpawnPadPlacementData
{
public:
	class UEnvQuery*                             PlacementQuery;                                    // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class ABuildingSMActor>        ActorToPlace;                                      // 0x8(0x20)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSnapToGrid;                                       // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAdjustPlacementForFloors;                         // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B94[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TagsToAddToChosenPlacementActor;                   // 0x30(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.MissionGenerationInfo
struct FMissionGenerationInfo
{
public:
	int32                                        NumMissionsRequired;                               // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B95[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     MissionTagRequirements;                            // 0x8(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.PerDifficultyMissionGenerationInfo
struct FPerDifficultyMissionGenerationInfo
{
public:
	struct FDataTableRowHandle                   MaxDifficulty;                                     // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FMissionGenerationInfo>        MissionGenerationInfos;                            // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.ZoneLoadingScreenHeadingConfig
struct FZoneLoadingScreenHeadingConfig
{
public:
	class UTexture2D*                            HeadingImage;                                      // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Heading;                                           // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  HeadingDescription;                                // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct FortniteGame.ZoneLoadingScreenConfig
struct FZoneLoadingScreenConfig
{
public:
	TSoftObjectPtr<class UTexture2D>             BackgroundImage;                                   // 0x0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TitleDescription;                                  // 0x20(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x38(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FZoneLoadingScreenHeadingConfig       Headings;                                          // 0x50(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_B96[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortTips*>                     LoadingTips;                                       // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortPossibleMission
struct FFortPossibleMission
{
public:
	TSoftObjectPtr<class UFortMissionInfo>       MissionInfo;                                       // 0x0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinAlwaysGenerated;                                // 0x24(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPrototype;                                      // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B97[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortMissionInfoOption
struct FFortMissionInfoOption
{
public:
	TSoftObjectPtr<class UFortMissionInfo>       MissionInfo;                                       // 0x0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDifficultyLevel;                                // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B98[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortQuestManagerAttributes
struct FFortQuestManagerAttributes
{
public:
	struct FDateTime                             DailyLoginInterval;                                // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DailyQuestRerolls;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B99[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortQuestEarnedBadgeData
struct FFortQuestEarnedBadgeData
{
public:
	class FString                                TemplateId;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortQuestObjectiveCompletion
struct FFortQuestObjectiveCompletion
{
public:
	class FString                                StatName;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9B[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortQuestMissionCreationContext
struct FFortQuestMissionCreationContext
{
public:
	TSoftObjectPtr<class UFortMissionInfo>       MissionInfo;                                       // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>         MissionCreationContextTags;                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bSetQuestOwnerAsMissionOwner;                      // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxNumberToSpawnInWorld;                           // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteGame.FortAvailableMissionAlertData
struct FFortAvailableMissionAlertData
{
public:
	class FString                                CategoryName;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SpreadDataName;                                    // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MissionAlertGuid;                                  // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileIndex;                                         // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             AvailableUntil;                                    // 0x38(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             RefreshSpreadAt;                                   // 0x40(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMcpLootResult                        MissionAlertRewards;                               // 0x48(0x20)(NativeAccessSpecifierPublic)
	struct FMcpLootResult                        MissionAlertModifiers;                             // 0x68(0x20)(NativeAccessSpecifierPublic)
	TArray<class UFortItemDefinition*>           ItemDefinitionRefCache;                            // 0x88(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortAvailableMissionAlerts
struct FFortAvailableMissionAlerts
{
public:
	class FString                                TheaterId;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortAvailableMissionAlertData> AvailableMissionAlerts;                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             NextRefresh;                                       // 0x20(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteGame.FortAvailableMissionData
struct FFortAvailableMissionData
{
public:
	class FString                                MissionGuid;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMcpLootResult                        MissionRewards;                                    // 0x10(0x20)(NativeAccessSpecifierPublic)
	struct FMcpLootResult                        BonusMissionRewards;                               // 0x30(0x20)(NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortMissionGenerator>   MissionGenerator;                                  // 0x50(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   MissionDifficultyInfo;                             // 0x70(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TileIndex;                                         // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             AvailableUntil;                                    // 0x88(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortItemDefinition*>           ItemDefinitionRefCache;                            // 0x90(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortAvailableTheaterMissions
struct FFortAvailableTheaterMissions
{
public:
	class FString                                TheaterId;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortAvailableMissionData>     AvailableMissions;                                 // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             NextRefresh;                                       // 0x20(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.FortFoundQuestMissions
struct FFortFoundQuestMissions
{
public:
	class FString                                TheaterId;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidForAllPlayableMissions;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortAvailableMissionData>     LinkedMissions;                                    // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAvailableMissionData>     TagMatchingMissions;                               // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAvailableMissionData>     FallbackMatchingMissions;                          // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortClientAnnouncementData_ZoneModifiers
struct FFortClientAnnouncementData_ZoneModifiers : public FFortClientAnnouncementData
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.SubGameInfo
struct FSubGameInfo
{
public:
	class UFortTokenType*                        AccessToken;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequiredFullInstall;                               // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.ConditionalFoundationQuotaTier
struct FConditionalFoundationQuotaTier
{
public:
	TArray<TSubclassOf<class ABuildingFoundation>> FoundationClasses;                                 // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        MinFoundations;                                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxFoundations;                                    // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.ConditionalFoundationQuota
struct FConditionalFoundationQuota
{
public:
	TArray<struct FConditionalFoundationQuotaTier> Tiers;                                             // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.TieredWaveCollectionLootSetData
struct FTieredWaveCollectionLootSetData
{
public:
	TArray<class FName>                          StartOfCollectionItemTierGroups;                   // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class FName>                          SuccessfulWaveItemTierGroups;                      // 0x10(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.TieredWaveCollectionLootSet
struct FTieredWaveCollectionLootSet : public FTableRowBase
{
public:
	TArray<struct FTieredWaveCollectionLootSetData> LootSetData;                                       // 0x8(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.TieredModifierSetData
struct FTieredModifierSetData
{
public:
	int32                                        WaveNumber;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ModifierDuration;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ModifierLootTierGroup;                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.TieredModifierSet
struct FTieredModifierSet : public FTableRowBase
{
public:
	TArray<struct FTieredModifierSetData>        ModifierData;                                      // 0x8(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct FortniteGame.TieredWaveSetData
struct FTieredWaveSetData
{
public:
	int32                                        EDOIdx;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreatherBetweenWaves;                              // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWaveRules                        WaveRules;                                         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaveLengthMod;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NumKillsMod;                                       // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KillPointsMod;                                     // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DifficultyAddMod;                                  // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortDifficultyOptionEncounter_SpawnPointsMultiplier> OverrideSpawnPointsMultiplier;                     // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortDifficultyOptionEncounter_SpawnGroupProgression> OverrideSpawnProgression;                          // 0x40(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortDifficultyOptionEncounter_UtilitiesAdjustment> OverrideUtilitiesAdjustment;                       // 0x60(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortDifficultyOptionEncounter_UtilitiesFree> OverrideUtilitiesFree;                             // 0x80(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortDifficultyOptionEncounter_UtilitiesLocked> OverrideUtilitiesLocked;                           // 0xA0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortDifficultyOptionEncounter_Distance> OverrideDistance;                                  // 0xC0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortDifficultyOptionEncounter_DirectionNumber> OverrideDirectionNumber;                           // 0xE0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortDifficultyOptionEncounter_ModifierTags> OverrideModifierTags;                              // 0x100(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.TieredWaveSet
struct FTieredWaveSet : public FTableRowBase
{
public:
	TArray<struct FTieredWaveSetData>            WaveData;                                          // 0x8(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteGame.TieredWaveSetCollectionData
struct FTieredWaveSetCollectionData
{
public:
	class FText                                  DefenseText;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	class FText                                  LevelText;                                         // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	class FText                                  WaveText;                                          // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	class FText                                  BreatherText;                                      // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	int32                                        MinLvl;                                            // 0x60(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLvl;                                            // 0x64(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseWaveLengthRowName;                             // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseNumOfKillsRowName;                             // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseNumOfKillPointsRowName;                        // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WaveSet;                                           // 0x80(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.TieredWaveSetCollection
struct FTieredWaveSetCollection : public FTableRowBase
{
public:
	TArray<struct FTieredWaveSetCollectionData>  CollectionData;                                    // 0x8(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct FortniteGame.ScoreMultiplierRow
struct FScoreMultiplierRow : public FTableRowBase
{
public:
	float                                        CombatMultiplier;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BuildingMultiplier;                                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UtilityMultiplier;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BadgeMultiplier;                                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MonsterKills;                                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MonsterDamagePoints;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PlayerKills;                                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WoodGathered;                                      // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        StoneGathered;                                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MetalGathered;                                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Deaths;                                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BuildingsBuilt;                                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BuildingsBuilt_Wood;                               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BuildingsBuilt_Stone;                              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BuildingsBuilt_Metal;                              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BuildingsUpgraded_Wood2;                           // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BuildingsUpgraded_Wood3;                           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BuildingsUpgraded_Stone2;                          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BuildingsUpgraded_Stone3;                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BuildingsUpgraded_Metal2;                          // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BuildingsUpgraded_Metal3;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BuildingsDestroyed;                                // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Repair_Wood;                                       // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Repair_Stone;                                      // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Repair_Metal;                                      // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FlagsCaptured;                                     // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FlagsReturned;                                     // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ContainersLooted;                                  // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CraftingPoints;                                    // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TrapPlacementPoints;                               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TrapActivationPoints;                              // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BA3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortReplicatedStatMapping
struct FFortReplicatedStatMapping
{
public:
	enum class EStatCategory                     StatCategory;                                      // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.FortAbilityTagRelationship
struct FFortAbilityTagRelationship
{
public:
	struct FGameplayTag                          AbilityTag;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AbilityTagsToBlock;                                // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AbilityTagsToCancel;                               // 0x28(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.WorldItemAndMinMaxCount
struct FWorldItemAndMinMaxCount
{
public:
	struct FCurveTableRowHandle                  MinCurveTable;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  MaxCurveTable;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UFortWorldItemDefinition*              Item;                                              // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.ItemAndCount
struct FItemAndCount
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.ItemDefinitionAndCount
struct FItemDefinitionAndCount
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortItemDefinition>    ItemDefinition;                                    // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.SettingsHUDVisibilityAndText
struct FSettingsHUDVisibilityAndText
{
public:
	struct FGameplayTag                          HUDVisibilityGameplayTag;                          // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  DefaultHUDVisibility;                              // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayText;                                       // 0x10(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  ToolTipText;                                       // 0x28(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortHighlightColors
struct FFortHighlightColors
{
public:
	struct FLinearColor                          OutlineColor;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SceneModulationColor1;                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SceneModulationColor2;                             // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteGame.FortHighlightColorsContainer
struct FFortHighlightColorsContainer
{
public:
	struct FFortHighlightColors                  ValidHighlight;                                    // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortHighlightColors                  InvalidHighlight;                                  // 0x30(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct FortniteGame.FortLevelUpData
struct FFortLevelUpData : public FTableRowBase
{
public:
	int32                                        Xp;                                                // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemRewardsText;                                   // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        XPDisplayMultiplier;                               // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RestXPCap;                                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RestXPRechargeRate;                                // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoostXPPerConsumable;                              // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.UISoundFeedback
struct FUISoundFeedback
{
public:
	class USoundBase*                            UISound;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.SoundPerResourceLevel
struct FSoundPerResourceLevel
{
public:
	class USoundBase*                            Sounds;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA9[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.AccountIdAndScore
struct FAccountIdAndScore
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalScore;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCriticalMatchBonus;                               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAA[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.AttributeClamp
struct FAttributeClamp
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClampType                        ClampType;                                         // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ClampValue;                                        // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.PlayerClampInfo
struct FPlayerClampInfo : public FTableRowBase
{
public:
	TArray<struct FAttributeClamp>               AttributeClamps;                                   // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct FortniteGame.GameDifficultyInfo
struct FGameDifficultyInfo : public FTableRowBase
{
public:
	int32                                        ContentAccountLevel;                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Difficulty;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DifficultyMatchmakingMinOverride;                  // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DifficultyMatchmakingMaxOverride;                  // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LootLevel;                                         // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredRating;                                    // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PvPRating;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecommendedRating;                                 // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScoreBonus;                                        // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LootTierGroup;                                     // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BonusLootTierGroup;                                // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ThreatDisplayName;                                 // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  ColorParamName;                                    // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultPlayerLives;                                // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PlayerStatClampRowName;                            // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortTierProgressionInfo
struct FFortTierProgressionInfo
{
public:
	class FString                                ProgressionLayoutGuid;                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HighestDefeatedTier;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortTierProgression
struct FFortTierProgression
{
public:
	TArray<struct FFortTierProgressionInfo>      ProgressionInfo;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.FortTaggedUnlockBase
struct FFortTaggedUnlockBase
{
public:
	struct FGameplayTag                          RequiredTag;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteGame.FortTaggedDeployableBaseLootUnlock
struct FFortTaggedDeployableBaseLootUnlock : public FFortTaggedUnlockBase
{
public:
	class FName                                  LootTierGroup;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.FortTaggedDeployableBasePlotExpansionUnlock
struct FFortTaggedDeployableBasePlotExpansionUnlock : public FFortTaggedUnlockBase
{
public:
	struct FIntVector                            CellExpansionVector;                               // 0x8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteGame.DeployableBaseSupportSettings
struct FDeployableBaseSupportSettings
{
public:
	bool                                         bUseDeployableBases;                               // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortDeployableBaseCloudSaveItemDefinition> DeployableBaseCloudSaveItemDef;                    // 0x8(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ADeployableBasePlot>     DeployableBasePlot;                                // 0x28(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortDeployableBaseSkillTreeUnlocks> SupportedUnlocks;                                  // 0x48(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeployableBasesReadOnly;                          // 0x68(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDeployableBaseUseType            SupportedUseType;                                  // 0x69(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortTieredCollectionLayout*>   TieredCollectionLayouts;                           // 0x70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteGame.ZoneThemeDifficultyProperties
struct FZoneThemeDifficultyProperties
{
public:
	TArray<struct FDataTableRowHandle>           ValidDifficulties;                                 // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortTimeOfDayTheme                   TimeOfDayTheme;                                    // 0x10(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortGlobalWindInfo                   GlobalWindInfo;                                    // 0x50(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct FortniteGame.FortMissionAlertData
struct FFortMissionAlertData : public FTableRowBase
{
public:
	class FName                                  CategoryRowName;                                   // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SpreadRowName;                                     // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RequiredEventFlag;                                 // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyUsedForSpreading;                             // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinimumTileDifficulty;                             // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumTileDifficulty;                             // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UFortZoneTheme>>  AllowedZoneThemes;                                 // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortMissionGenerator>   MissionGenerator;                                  // 0x48(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>         ItemRewards;                                       // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                LootTierGroup;                                     // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModifierTierGroup;                                 // 0x88(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteGame.FortMissionAlertSpreadData
struct FFortMissionAlertSpreadData : public FTableRowBase
{
public:
	float                                        ChanceToSpread;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalChancesToSpread;                              // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumTilesToSpreadTo;                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpreadInterval;                                    // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MissionAlertRowName;                               // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct FortniteGame.FortMissionAlertCategoryData
struct FFortMissionAlertCategoryData : public FTableRowBase
{
public:
	enum class EFortMissionAlertCategory         Category;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Priority;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quota;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MissionAlertRepeatable;                            // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CategoryTagsContainer;                             // 0x18(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortEventFlagsNotification
struct FFortEventFlagsNotification
{
public:
	TArray<class FString>                        EventFlags;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             RefreshTime;                                       // 0x10(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FriendCodeIssuedNotification
struct FFriendCodeIssuedNotification
{
public:
	class FString                                Code;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CodeType;                                          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortMissionAlertClaimData
struct FFortMissionAlertClaimData
{
public:
	TArray<class FString>                        MissionAlertGUIDs;                                 // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDateTime>                     LastClaimedTimes;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteGame.FortMissionAlertRecord
struct FFortMissionAlertRecord
{
public:
	TMap<enum class EFortMissionAlertCategory, struct FFortMissionAlertClaimData> LastClaimTimesMap;                                 // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                OldestClaimIndexForCategory;                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMcpLootResult                        PendingMissionAlertRewards;                        // 0x60(0x20)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortCollectionBookClaimRewardNotification
struct FFortCollectionBookClaimRewardNotification
{
public:
	struct FMcpLootResult                        Loot;                                              // 0x0(0x20)(NativeAccessSpecifierPublic)
	class FString                                Page;                                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Section;                                           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortCollectionBookSlotItemNotification
struct FFortCollectionBookSlotItemNotification
{
public:
	class FString                                SlottedItemId;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortMissionAlertCompleteNotification
struct FFortMissionAlertCompleteNotification
{
public:
	struct FMcpLootResult                        LootGranted;                                       // 0x0(0x20)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortTransmogResultNotification
struct FFortTransmogResultNotification
{
public:
	TArray<struct FMcpLootEntry>                 TransmoggedItems;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMcpLootEntry>                 RecycledItems;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortConversionResultNotification
struct FFortConversionResultNotification
{
public:
	TArray<struct FMcpLootEntry>                 ItemsGranted;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortCollectedResourceNotification
struct FFortCollectedResourceNotification
{
public:
	struct FMcpLootResult                        Loot;                                              // 0x0(0x20)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortReceivedGiftedBoostXpNotification
struct FFortReceivedGiftedBoostXpNotification
{
public:
	int32                                        AmountBoostXpGifted;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GifterAccountId;                                   // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortEarnScoreNotification
struct FFortEarnScoreNotification
{
public:
	int32                                        BaseXPEarned;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BonusXPEarned;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoostXPEarned;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoostXPMissed;                                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RestXPEarned;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupBoostXPEarned;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortDailyQuestRerollNotification
struct FFortDailyQuestRerollNotification
{
public:
	class FString                                NewQuestId;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortQuestRewardNotification
struct FFortQuestRewardNotification
{
public:
	class FString                                QuestId;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMcpLootResult                        Loot;                                              // 0x10(0x20)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortExpeditionResultNotification
struct FFortExpeditionResultNotification
{
public:
	bool                                         bExpeditionSucceeded;                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMcpLootEntry>                 ExpeditionRewards;                                 // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.FortGetMcpTimeForPlayerNotification
struct FFortGetMcpTimeForPlayerNotification
{
public:
	struct FDateTime                             McpTime;                                           // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.CardPackResultNotification
struct FCardPackResultNotification
{
public:
	struct FMcpLootResult                        LootGranted;                                       // 0x0(0x20)(NativeAccessSpecifierPublic)
	int32                                        DisplayLevel;                                      // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortLootNotification
struct FFortLootNotification
{
public:
	class FString                                LootSource;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LootSourceInstance;                                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMcpLootResult                        LootGranted;                                       // 0x20(0x20)(NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteGame.FortNotificationLevelUp
struct FFortNotificationLevelUp
{
public:
	int32                                        Level;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HeroId;                                            // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortLootNotification                 Loot;                                              // 0x18(0x40)(NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortMissionCompletionNotification
struct FFortMissionCompletionNotification
{
public:
	bool                                         bWasCritical;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MissionName;                                       // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMcpLootResult                        LootGranted;                                       // 0x18(0x20)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortHomebaseView
struct FFortHomebaseView
{
public:
	class FString                                TownName;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BannerIconId;                                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BannerColorId;                                     // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FlagPattern;                                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlagColor;                                         // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerXP;                                          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortQuestClientSettings
struct FFortQuestClientSettings
{
public:
	TArray<class FString>                        PinnedQuestInstances;                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortAthenaSeasonStats
struct FFortAthenaSeasonStats
{
public:
	class FString                                SeasonId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumWins;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumHighBracket;                                    // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumLowBracket;                                     // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortAthenaConsumableRecord
struct FFortAthenaConsumableRecord
{
public:
	class UFortAccountItemDefinition*            ItemType;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalQuantity;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteGame.AthenaBatchedDamageGameplayCues
struct FAthenaBatchedDamageGameplayCues
{
public:
	class AActor*                                HitActor;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 Location;                                          // 0x8(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             Normal;                                            // 0x14(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeaponActivate;                                   // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFatal;                                          // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCritical;                                       // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShield;                                         // 0x27(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShieldDestroyed;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                NonPlayerHitActor;                                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 NonPlayerLocation;                                 // 0x38(0xC)(RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             NonPlayerNormal;                                   // 0x44(0xC)(RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	float                                        NonPlayerMagnitude;                                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NonPlayerbIsFatal;                                 // 0x54(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NonPlayerbIsCritical;                              // 0x55(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValid;                                          // 0x56(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBF[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.HomebaseNodeState
struct FHomebaseNodeState
{
public:
	bool                                         bIsOwned;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArePrereqsMet;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArePrereqQuestsCompleted;                         // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAreCostsPayable;                                  // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PurchasePercent;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.WorkerSetBonusState
struct FWorkerSetBonusState
{
public:
	struct FGameplayTag                          SetBonusTag;                                       // 0x0(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentMatchCount;                                 // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredMatchCountToActivate;                      // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct FortniteGame.ViewOffsetData
struct FViewOffsetData
{
public:
	struct FVector                               OffsetHigh;                                        // 0x0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OffsetMid;                                         // 0xC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OffsetLow;                                         // 0x18(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.PenetrationAvoidanceFeeler
struct FPenetrationAvoidanceFeeler
{
public:
	struct FRotator                              AdjustmentRot;                                     // 0x0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        WorldWeight;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PawnWeight;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Extent;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TraceInterval;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FramesUntilNextTrace;                              // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteGame.InterpOffsetData
struct FInterpOffsetData
{
public:
	struct FVector                               ViewOffset;                                        // 0x0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LargeBodyTypeAddtnlOffset;                         // 0xC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchAngle;                                        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.InterpOffset
struct FInterpOffset
{
public:
	TArray<struct FInterpOffsetData>             SamplePoints;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.ReplicatedAthenaVehicleState
struct FReplicatedAthenaVehicleState
{
public:
	struct FVector                               ForwardVectorTarget;                               // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteGame.FortMiniMapData
struct FFortMiniMapData
{
public:
	class UTexture2D*                            MiniMapIcon;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             IconScale;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseIconSize : 1;                                  // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsVisible : 1;                                    // Mask: 0x2, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsVisibleOnMiniMap : 1;                           // Mask: 0x4, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowVerticalOffset : 1;                           // Mask: 0x8, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowLocalOverrides : 1;                          // Mask: 0x10, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseTeamAffiliationColors : 1;                     // Mask: 0x20, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_7B : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_BC0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x14(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FriendColor;                                       // 0x24(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EnemyColor;                                        // 0x34(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NeutralColor;                                      // 0x44(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PulseColor;                                        // 0x54(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorPulsesPerSecond;                              // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SizePulsesPerSecond;                               // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewableDistance;                                  // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocationOffset;                                    // 0x70(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortSafeZoneVolumeDefinition
struct FFortSafeZoneVolumeDefinition
{
public:
	class AVolume*                               Volume;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RejectionChance;                                   // 0x8(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct FortniteGame.FortSafeZoneDefinition
struct FFortSafeZoneDefinition
{
public:
	struct FScalableFloat                        Radius;                                            // 0x0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RejectRadius;                                      // 0x28(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        WaitTime;                                          // 0x50(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ShrinkTime;                                        // 0x78(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SupplyDropMinCount;                                // 0xA0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SupplyDropMaxCount;                                // 0xC8(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_BC1[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.AthenaCarPlayerSlot
struct FAthenaCarPlayerSlot
{
public:
	class FName                                  SeatSocket;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ExitSockets;                                       // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class APawn*                                 Player;                                            // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortTierCollectionLayoutOutput
struct FFortTierCollectionLayoutOutput
{
public:
	class FName                                  SpawnCollectionName;                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DifficultyRowName;                                 // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ModifierProgressionName;                           // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditiveDifficultyMod;                             // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortBadgeItemDefinition*>      RewardBadges;                                      // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          StartTierLootTierGroups;                           // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          WaveCompleteLootTierGroups;                        // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct FortniteGame.TieredCollectionProgressionDataBase
struct FTieredCollectionProgressionDataBase
{
public:
	enum class ECollectionSelectionMethod        SelectionMethod;                                   // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x17 (0x18 - 0x1)
// ScriptStruct FortniteGame.CollectionLootSetData
struct FCollectionLootSetData : public FTieredCollectionProgressionDataBase
{
public:
	uint8                                        Pad_BC3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LootSetNames;                                      // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.RewardBadgesProgression
struct FRewardBadgesProgression
{
public:
	TArray<class UFortBadgeItemDefinition*>      RewardBadges;                                      // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x17 (0x18 - 0x1)
// ScriptStruct FortniteGame.RewardBadgesCollectionProgressionData
struct FRewardBadgesCollectionProgressionData : public FTieredCollectionProgressionDataBase
{
public:
	uint8                                        Pad_BC4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRewardBadgesProgression>      BadgeCollections;                                  // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.DifficultyRowProgression
struct FDifficultyRowProgression
{
public:
	class FName                                  DifficultyRowName;                                 // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AdditiveDifficultyMod;                             // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x17 (0x18 - 0x1)
// ScriptStruct FortniteGame.DifficultyCollectionProgressionData
struct FDifficultyCollectionProgressionData : public FTieredCollectionProgressionDataBase
{
public:
	uint8                                        Pad_BC5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDifficultyRowProgression>     DifficultyCollections;                             // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x17 (0x18 - 0x1)
// ScriptStruct FortniteGame.TieredNamedCollectionProgressionData
struct FTieredNamedCollectionProgressionData : public FTieredCollectionProgressionDataBase
{
public:
	uint8                                        Pad_BC6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CollectionNames;                                   // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteGame.FortCriteriaRequirementData
struct FFortCriteriaRequirementData : public FTableRowBase
{
public:
	struct FGameplayTag                          RequiredTag;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGlobalMod;                                        // 0x10(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModValue;                                          // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireRarity;                                    // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortRarity                       RequiredRarity;                                    // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC8[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortAnalyticsEventAttribute
struct FFortAnalyticsEventAttribute
{
public:
	uint8                                        Pad_BC9[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.DistanceToTargetComparison
struct FDistanceToTargetComparison
{
public:
	bool                                         bUseOverriddenValue;                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverriddenValue;                                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DistanceDataTags;                                  // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class EArithmeticKeyOperation           Operator;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETargetDistanceComparisonType     ComparisonType;                                    // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCB[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.SpawnPickupEntry
struct FSpawnPickupEntry
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    PickupClass;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortClientAnnouncementData_Conversation
struct FFortClientAnnouncementData_Conversation : public FFortClientAnnouncementData
{
public:
	class UFortConversation*                     Conversation;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAnnouncementDisplayPreference ConversationDisplayPreference;                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortClientAnnouncementQueue
struct FFortClientAnnouncementQueue
{
public:
	TArray<class AFortClientAnnouncement*>       Announcements;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.GeneralChatRoom
struct FGeneralChatRoom
{
public:
	class FString                                RoomName;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentMembersCount;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxMembersCount;                                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PublicFacingShardName;                             // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.GeneralChatRecommendations
struct FGeneralChatRecommendations
{
public:
	TArray<struct FGeneralChatRoom>              GlobalChatRooms;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGeneralChatRoom>              FounderChatRooms;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bNeedsPaidAccessForGlobalChat;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeedsPaidAccessForFounderChat;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGlobalChatDisabled;                             // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFounderChatDisabled;                            // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSubGameGlobalChatDisabled;                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCD[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteGame.FortSocialItemBasicData
struct FFortSocialItemBasicData
{
public:
	int32                                        Rating;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.McpLeaderboardResultRow
struct FMcpLeaderboardResultRow
{
public:
	struct FUniqueNetIdRepl                      PlayerUniqueNetId;                                 // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank;                                              // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.McpLeaderboardResult
struct FMcpLeaderboardResult
{
public:
	class FString                                StatName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMcpLeaderboardTimeWindow         TimeWindow;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             RequestTime;                                       // 0x18(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpLeaderboardResultRow>      LeaderboardData;                                   // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteGame.McpPlayerStatsResult
struct FMcpPlayerStatsResult
{
public:
	struct FUniqueNetIdRepl                      PlayerUniqueNetId;                                 // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   StatData;                                          // 0x18(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimespan                             RequestTime;                                       // 0x68(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.QueryXboxUserXUIDParams
struct FQueryXboxUserXUIDParams
{
public:
	class FString                                UserXSTSToken;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.IssuedFriendCode
struct FIssuedFriendCode
{
public:
	class FString                                CodeId;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CodeType;                                          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateCreated;                                       // 0x20(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.XboxDedicatedServerSessionCreationParams
struct FXboxDedicatedServerSessionCreationParams
{
public:
	class FString                                TitleId;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SandboxId;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        XboxUserIds;                                       // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.LiveDamageNumberComponent
struct FLiveDamageNumberComponent
{
public:
	class UStaticMeshComponent*                  Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCF[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.PooledDamageNumberComponents
struct FPooledDamageNumberComponents
{
public:
	TArray<class UStaticMeshComponent*>          Components;                                        // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteGame.FortDamageNumberInfo
struct FFortDamageNumberInfo
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0xC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCriticalDamage;                                 // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Damage;                                            // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortDamageNumberType             DamageNumberType;                                  // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VisualDamageScale;                                 // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortElementalDamageType          ElementalDamageType;                               // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatCategory                     ScoreType;                                         // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachScoreNumberToPlayer;                        // 0x2A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD2[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>      MeshMIDs;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                DamageNumberArray;                                 // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 DamagedActor;                                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APawn>                  DamageCauser;                                      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortFXAnimationInfoBase
struct FFortFXAnimationInfoBase
{
public:
	class UCurveFloat*                           LerpCurve;                                         // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD3[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x20 - 0x18)
// ScriptStruct FortniteGame.FortFloatAnimationInfo
struct FFortFloatAnimationInfo : public FFortFXAnimationInfoBase
{
public:
	uint8                                        Pad_BD4[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortLightAnimSet
struct FFortLightAnimSet
{
public:
	class ULightComponent*                       LightComp;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortFloatAnimationInfo>       IntensityAnims;                                    // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct FortniteGame.FortFloatParamAnimationInfo
struct FFortFloatParamAnimationInfo : public FFortFloatAnimationInfo
{
public:
	uint8                                        Pad_BD6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortParticleAnimSet
struct FFortParticleAnimSet
{
public:
	class UParticleSystemComponent*              PSC;                                               // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortFloatParamAnimationInfo>  ParamAnims;                                        // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x38 - 0x18)
// ScriptStruct FortniteGame.FortLinearColorAnimationInfo
struct FFortLinearColorAnimationInfo : public FFortFXAnimationInfoBase
{
public:
	uint8                                        Pad_BD8[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x40 - 0x38)
// ScriptStruct FortniteGame.FortLinearColorParamAnimationInfo
struct FFortLinearColorParamAnimationInfo : public FFortLinearColorAnimationInfo
{
public:
	uint8                                        Pad_BD9[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct FortniteGame.FortLinearColorCurveAnimationInfo
struct FFortLinearColorCurveAnimationInfo : public FFortFXAnimationInfoBase
{
public:
	uint8                                        Pad_BDA[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct FortniteGame.FortLinearColorCurveParamAnimationInfo
struct FFortLinearColorCurveParamAnimationInfo : public FFortLinearColorCurveAnimationInfo
{
public:
	uint8                                        Pad_BDB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortMIDAnimSet
struct FFortMIDAnimSet
{
public:
	class UMaterialInstanceDynamic*              Mid;                                               // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortFloatParamAnimationInfo>  FloatParamAnims;                                   // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FFortLinearColorParamAnimationInfo> ColorParamAnims;                                   // 0x18(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FFortLinearColorCurveParamAnimationInfo> ColorCurveParamAnims;                              // 0x28(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct FortniteGame.FortSplineMeshScaleAnimationInfo
struct FFortSplineMeshScaleAnimationInfo : public FFortFXAnimationInfoBase
{
public:
	uint8                                        Pad_BDD[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct FortniteGame.FortSplineMeshSnapAnimationInfo
struct FFortSplineMeshSnapAnimationInfo : public FFortFXAnimationInfoBase
{
public:
	class USplineComponent*                      TargetSpline;                                      // 0x18(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortSplineMeshAnimSet
struct FFortSplineMeshAnimSet
{
public:
	class USplineMeshComponent*                  SplineMesh;                                        // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortSplineMeshScaleAnimationInfo> ScaleAnims;                                        // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FFortSplineMeshSnapAnimationInfo> SnapAnims;                                         // 0x18(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortCollectionBookSectionState
struct FFortCollectionBookSectionState
{
public:
	class FString                                Section;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCollectionBookState          State;                                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortPendingSlottedItemOperation
struct FFortPendingSlottedItemOperation
{
public:
	class FString                                SlottedItemId;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotRowName;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortCollectionBookStat
struct FFortCollectionBookStat
{
public:
	TArray<class FString>                        Pages;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxBookXpLevelAchieved;                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.CombatThresholdData
struct FCombatThresholdData
{
public:
	float                                        HeatLevel;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ThresholdName;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DebugGraphColor;                                   // 0x18(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.CombatEventMultiplier
struct FCombatEventMultiplier
{
public:
	enum class EFortCombatEvents                 CombatEvent;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxContribution;                                   // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.CombatFactorData
struct FCombatFactorData
{
public:
	TArray<struct FCombatEventMultiplier>        ContributingCombatEvents;                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DebugFactorName;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DebugGraphColor;                                   // 0x28(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.CombatEventData
struct FCombatEventData
{
public:
	float                                        Heat;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHeatContribution;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoolDownRate;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DebugGraphColor;                                   // 0x20(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteGame.DecoPlacementState
struct FDecoPlacementState
{
public:
	struct FVector                               Start;                                             // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0xC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RawLocation;                                       // 0x18(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x24(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 AbsoluteRotation;                                  // 0x30(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               GridLocation;                                      // 0x40(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PreviousLocation;                                  // 0x4C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FallbackLocation;                                  // 0x58(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 LastHitActor;                                      // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ABuildingSMActor>       CurrentBuildingActorAttachment;                    // 0x6C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortDecoPlacementQueryResults    CanPlaceState;                                     // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE6[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.FortUserCloudRequestHandle
struct FFortUserCloudRequestHandle
{
public:
	uint64                                       Handle;                                            // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.FortUserCloudRequestPayload
struct FFortUserCloudRequestPayload
{
public:
	struct FFortUserCloudRequestHandle           RequestHandle;                                     // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UserNetID;                                         // 0x8(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUserCloudRequestType         RequestType;                                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                DataBuffer;                                        // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteGame.FortUserCloudRequest
struct FFortUserCloudRequest
{
public:
	struct FFortUserCloudRequestPayload          RequestPayload;                                    // 0x0(0x48)(NativeAccessSpecifierPublic)
	uint8                                        bNeedsFileEnumeration : 1;                         // Mask: 0x1, PropSize: 0x10x48(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStartedProcessing : 1;                            // Mask: 0x2, PropSize: 0x10x48(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE8[0x47];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortUserCloudRequestQueue
struct FFortUserCloudRequestQueue
{
public:
	uint8                                        bFreezeIncomingRequests : 1;                       // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_7C : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_BE9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUserCloudRequestHandle           FirstFrozenHandle;                                 // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          ProcessingTimerHandle;                             // 0x10(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FFortUserCloudRequest>         RequestQueue;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.AppliedHomebaseData
struct FAppliedHomebaseData
{
public:
	class UAbilitySystemComponent*               Source;                                            // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               Target;                                            // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>   AppliedEffects;                                    // 0x10(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FFortAbilitySetHandle>         AppliedAbilitySets;                                // 0x20(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.TeamChangeRequest
struct FTeamChangeRequest
{
public:
	class AFortPlayerController*                 RequestingController;                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortTeam                         DesiredTeam;                                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteGame.FortMissionWeightedReward
struct FFortMissionWeightedReward
{
public:
	class FName                                  LootTierGroup;                                     // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LootIcon;                                          // 0x8(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortMissionFocusDisplayData
struct FFortMissionFocusDisplayData
{
public:
	class FText                                  CurrentFocusDisplayText;                           // 0x0(0x18)(NativeAccessSpecifierPublic)
	float                                        CurrentFocusPercentage;                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortMissionPlacementActorPreferredTagInfo
struct FFortMissionPlacementActorPreferredTagInfo
{
public:
	struct FDataTableRowHandle                   DifficultyInfo;                                    // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlacementActorPreferredTags;                       // 0x10(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        Difficulty;                                        // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BED[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x20 - 0xC)
// ScriptStruct FortniteGame.FortBadgeCount
struct FFortBadgeCount : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_BEE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortBadgeItemDefinition*              Badge;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xC0 - 0xB0)
// ScriptStruct FortniteGame.FortBadgeCountArray
struct FFortBadgeCountArray : public FFastArraySerializer
{
public:
	TArray<struct FFortBadgeCount>               Badges;                                            // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x318 (0x318 - 0x0)
// ScriptStruct FortniteGame.FortTileLootData
struct FFortTileLootData
{
public:
	struct FFortLootQuotaData                    LootQuotas;                                        // 0x0(0x28)(NativeAccessSpecifierPublic)
	uint8                                        Pad_BF0[0x2A8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LootDrops;                                         // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF1[0x44];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortDeferredNewActorData
struct FFortDeferredNewActorData
{
public:
	class ABuildingActor*                        BuildingActor;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SavedLevelIndex;                                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActorRecordIndex;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.WorldTileSubArray
struct FWorldTileSubArray
{
public:
	TArray<class AWorldTileFoundation*>          X;                                                 // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortLevelStreamingInfo
struct FFortLevelStreamingInfo
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortLevelStreamingState          LevelState;                                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFailedToLoad;                                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF2[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteGame.PendingDeployableManagerAction
struct FPendingDeployableManagerAction
{
public:
	enum class EQueueActionType                  ActionType;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ADeployableBasePlot*>           PendingPlots;                                      // 0x8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        CurrentPlotRunningIndex;                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EDeployableBaseBuildingState      DesiredPlotState;                                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF4[0x43];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortDeployableBaseManager*            Manager;                                           // 0x60(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.AvailableTierLayout
struct FAvailableTierLayout
{
public:
	class UFortTieredCollectionLayout*           Layout;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortTierCollectionLayoutOutput> AvailableTiers;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortTierCollectionLayoutOutput> LockedTiers;                                       // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bLocked : 1;                                       // Mask: 0x1, PropSize: 0x10x28(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x20 - 0xC)
// ScriptStruct FortniteGame.ActiveTieredCollectionLayout
struct FActiveTieredCollectionLayout : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_BF7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTieredCollectionLayout*           Layout;                                            // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTierUnlocked;                                   // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLocked : 1;                                       // Mask: 0x1, PropSize: 0x10x1C(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF8[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0xC8 - 0xB0)
// ScriptStruct FortniteGame.ActiveTieredCollectionLayoutArray
struct FActiveTieredCollectionLayoutArray : public FFastArraySerializer
{
public:
	TArray<struct FActiveTieredCollectionLayout> LayoutArray;                                       // 0xB0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bTiersForced;                                      // 0xC0(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.EnvironmentBuildingRestorationRecord
struct FEnvironmentBuildingRestorationRecord
{
public:
	TSubclassOf<class ABuildingActor>            ActorClass;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ActorTransform;                                    // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  QuotaSelectedLootTierKey;                          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuotaSelectedLootTier;                             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.PendingDeployableBaseUser
struct FPendingDeployableBaseUser
{
public:
	struct FUniqueNetIdRepl                      UserNetID;                                         // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortUserCloudRequestHandle           LoadingCloudRequestHandle;                         // 0x18(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortDeployableBaseRecord*             BaseRecord;                                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADeployableBasePlot*                   BasePlot;                                          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x18 - 0xC)
// ScriptStruct FortniteGame.DeployableBaseInstance
struct FDeployableBaseInstance : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_BFC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ADeployableBasePlot*                   DeployableBase;                                    // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xC0 - 0xB0)
// ScriptStruct FortniteGame.DeployableBaseArray
struct FDeployableBaseArray : public FFastArraySerializer
{
public:
	TArray<struct FDeployableBaseInstance>       DeployableBases;                                   // 0xB0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
};

// 0x1C (0x28 - 0xC)
// ScriptStruct FortniteGame.VisibilityInfo
struct FVisibilityInfo : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_BFD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortVisibilityComponent*              VisibilityComponent;                               // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TeamVisibilityFlag;                                // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFE[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xC0 - 0xB0)
// ScriptStruct FortniteGame.VisibiltyInfoArray
struct FVisibiltyInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FVisibilityInfo>               VisibilityInfoArray;                               // 0xB0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.BCActionInfo
struct FBCActionInfo
{
public:
	int32                                        Type;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Action;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.TeamFOBRequiredTags
struct FTeamFOBRequiredTags
{
public:
	struct FGameplayTagContainer                 RequiredFOBSpawnTags;                              // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EFortTeam                         Team;                                              // 0x20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.CachedPlayerFOBInformation
struct FCachedPlayerFOBInformation
{
public:
	struct FUniqueNetIdRepl                      PlayerID;                                          // 0x0(0x18)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortTeam                         Team;                                              // 0x18(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C00[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortInputActionGroupContext
struct FFortInputActionGroupContext
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortInputActionGroup             InputActionGroup;                                  // 0x8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C01[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortInputActionKeyAlias
struct FFortInputActionKeyAlias
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  KeyAlias;                                          // 0x8(0x18)(Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortInputActionType              InputActionType;                                   // 0x20(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C02[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteGame.FortActionKeyMapping
struct FFortActionKeyMapping
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LocalizedName;                                     // 0x8(0x18)(NativeAccessSpecifierPublic)
	struct FKey                                  KeyBind1;                                          // 0x20(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  KeyBind2;                                          // 0x38(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputScale;                                        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAxisMapping;                                    // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C03[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortClientEventsState
struct FFortClientEventsState
{
public:
	class FString                                SeasonId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             SeasonEnd;                                         // 0x10(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDateTime                             WeeklyStoreEnd;                                    // 0x18(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.AIDirectorDebugInfo
struct FAIDirectorDebugInfo
{
public:
	float                                        TimeStamp;                                         // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C04[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                DebugGraphData;                                    // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_C05[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.LastBuildableState
struct FLastBuildableState
{
public:
	class UBuildingEditModeMetadata*             LastBuildableMetaData;                             // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastBuildableMirrored;                             // 0x8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C06[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastBuildableRotationIterations;                   // 0xC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.CraftingQueueInfo
struct FCraftingQueueInfo
{
public:
	uint8                                        Pad_C07[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.FortQuestAchievementTableRow
struct FFortQuestAchievementTableRow : public FTableRowBase
{
public:
	enum class EFortQuestState                   QuestState;                                        // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C08[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        XboxAchievementID;                                 // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PS4TrophyID;                                       // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C09[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct FortniteGame.FortCategoryTableRow
struct FFortCategoryTableRow : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        SortPriority;                                      // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct FortniteGame.FortMcpQuestObjectiveInfo
struct FFortMcpQuestObjectiveInfo
{
public:
	class FName                                  BackendName;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ObjectiveStatHandle;                               // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           AlternativeStatHandles;                            // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EFortQuestObjectiveItemEvent      ItemEvent;                                         // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortItemDefinition>    ItemReference;                                     // 0x30(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemTemplateIdOverride;                            // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LinkSquadID;                                       // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LinkSquadIndex;                                    // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortInventoryFilter              LinkVaultTab;                                      // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontendInventoryFilter      LinkToItemManagement;                              // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  HudShortDescription;                               // 0x88(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             HudIcon;                                           // 0xA0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Stage;                                             // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0xC8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequirePrimaryMissionCompletion;                  // 0xC9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanProgressInZone;                                // 0xCA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayDynamicAnnouncementUpdate;                 // 0xCB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayDynamicStatusUpdate;                       // 0xCC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DynamicUpdateCompletionDelay;                      // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AFortScriptedAction>     ScriptedAction;                                    // 0xD8(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortMcpQuestRewardInfo
struct FFortMcpQuestRewardInfo
{
public:
	TArray<struct FFortItemQuantityPair>         Rewards;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.AthenaAwardGroup
struct FAthenaAwardGroup
{
public:
	enum class ERewardSource                     RewardSource;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMcpLootEntry>                 Items;                                             // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.AthenaRewardResult
struct FAthenaRewardResult
{
public:
	int32                                        LevelsGained;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C10[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAthenaAwardGroup>             Rewards;                                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.ScorePlacementTable
struct FScorePlacementTable
{
public:
	TArray<float>                                Solo;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Duos;                                              // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Squads;                                            // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.TurnFloatRange
struct FTurnFloatRange
{
public:
	float                                        Min;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.TurnTransitionData
struct FTurnTransitionData
{
public:
	class FName                                  MontageSectionName;                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinYawAngle;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxYawAngle;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurnRate;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C11[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 RequiredGameplayTags;                              // 0x18(0x20)(Edit, NativeAccessSpecifierPublic)
	int32                                        PriorityLevel;                                     // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTurnFloatRange                       SpeedConstraintRange;                              // 0x3C(0x8)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableSpeedConstraint;                            // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipTransitionInCrowd;                            // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C12[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortDisconnectedPlayerReservation
struct FFortDisconnectedPlayerReservation
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PlayerID;                                          // 0x8(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C13[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortHostSessionParams
struct FFortHostSessionParams
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ControllerId;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C14[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortBanHammerStrike
struct FFortBanHammerStrike
{
public:
	struct FUniqueNetIdRepl                      AccountId;                                         // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Reason;                                            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBanHammerNotificationAction  Action;                                            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C15[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Source;                                            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Offense;                                           // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.Voter
struct FVoter
{
public:
	int32                                        VoteDecision;                                      // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C16[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      NetId;                                             // 0x8(0x18)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xCC (0xD8 - 0xC)
// ScriptStruct FortniteGame.ActiveGameplayModifier
struct FActiveGameplayModifier : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_C17[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGameplayModifierItemDefinition*   ModifierDef;                                       // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayModifierHandle         ModifierHandle;                                    // 0x18(0x4)(Transient, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C18[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortGameplayMutator*>          Mutators;                                          // 0x20(0x10)(ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPublic)
	int32                                        Expiration;                                        // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C19[0xA4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0xC8 - 0xB0)
// ScriptStruct FortniteGame.ActiveGameplayModifierArray
struct FActiveGameplayModifierArray : public FFastArraySerializer
{
public:
	TArray<struct FActiveGameplayModifier>       Items;                                             // 0xB0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	int32                                        ModifierHandleGenerator;                           // 0xC0(0x4)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportRuntimeModifierShutdown;                   // 0xC4(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C1A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.PlayerBuildableClassFilter
struct FPlayerBuildableClassFilter
{
public:
	enum class EFortResourceType                 ResourceType;                                      // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuildingType                 BuildingType;                                      // 0x1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level;                                             // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBuildingEditModeMetadata*             EditModeMetadata;                                  // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.PlayerBuildableClassContainer
struct FPlayerBuildableClassContainer
{
public:
	TArray<TSubclassOf<class ABuildingSMActor>>  BuildingClasses;                                   // 0x0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.HordeDifficultyTierInfo
struct FHordeDifficultyTierInfo
{
public:
	class FName                                  DifficultyTierName;                                // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestItemDefinition*              QuestPrerequisite;                                 // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteGame.PermaniteBoundariesInfo
struct FPermaniteBoundariesInfo
{
public:
	int32                                        MaxPermaniteStructures;                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalPermaniteStructures;                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AveragePermaniteStructureLevel;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinPermaniteStructureLevel;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPermaniteStructureLevel;                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortHealthBarComponentData
struct FFortHealthBarComponentData
{
public:
	class FText                                  DisplayText;                                       // 0x0(0x18)(NativeAccessSpecifierPublic)
};

// 0xD0 (0xD8 - 0x8)
// ScriptStruct FortniteGame.HomebaseNodeGameplayEffectDataTableRow
struct FHomebaseNodeGameplayEffectDataTableRow : public FTableRowBase
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    Operation;                                         // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Magnitude;                                         // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ApplicationRequiredTagsContainer;                  // 0x30(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredSourceTagsContainer;                       // 0x50(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredTargetTagsContainer;                       // 0x70(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GrantedTagsContainer;                              // 0x90(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 IgnoreSourceTagsContainer;                         // 0xB0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        AssociatedGEIdx;                                   // 0xD0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AssociatedModifierIdx;                             // 0xD4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.TeamMapInfo
struct FTeamMapInfo
{
public:
	TArray<uint8>                                ReplicatedSeedPack;                                // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1D[0x34];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortTeam                         TeamId;                                            // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FortniteGame.TeamMapExplorationEvent
struct FTeamMapExplorationEvent
{
public:
	enum class EFortTeam                         TeamId;                                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         ExplorationThreshold;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortInstensityCurveSequenceProgression
struct FFortInstensityCurveSequenceProgression
{
public:
	class UFortIntensityCurveSequence*           CurveSequence;                                     // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  SelectionWeight;                                   // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.SchematicRequirement
struct FSchematicRequirement
{
public:
	class UFortWorldItemDefinition*              ItemDefinition;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsConsumed;                                       // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.SchematicRequirements
struct FSchematicRequirements : public FTableRowBase
{
public:
	TArray<struct FSchematicRequirement>         Requirements;                                      // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.ItemCategoryMappingData
struct FItemCategoryMappingData
{
public:
	enum class EFortItemType                     CategoryType;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C20[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CategoryName;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.AthenaCosmeticMaterialOverride
struct FAthenaCosmeticMaterialOverride
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialOverrideIndex;                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProgressionThreshold;                              // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     OverrideMaterial;                                  // 0x10(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x148 - 0x120)
// ScriptStruct FortniteGame.FortMeleeWeaponStats
struct FFortMeleeWeaponStats : public FFortBaseWeaponStats
{
public:
	float                                        RangeVSEnemies;                                    // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ConeYawAngle;                                      // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ConePitchAngle;                                    // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SwingPlaySpeed;                                    // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SwingTime;                                         // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BuildingConeAngle;                                 // 0x134(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BuildingConeAnglePitch;                            // 0x138(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RangeVSBuildings2D;                                // 0x13C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RangeVSBuildingsZ;                                 // 0x140(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RangeVSWeakSpots;                                  // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortCompendiumQuestInfo
struct FFortCompendiumQuestInfo
{
public:
	bool                                         bGrantWithCompendium;                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C21[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortQuestItemDefinition> QuestDefinition;                                   // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortCompendiumItemInfo
struct FFortCompendiumItemInfo
{
public:
	bool                                         bGrantWithCompendium;                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C22[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortCompendiumItemDefinition> CompendiumItemDefinition;                          // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.FortConversionTierData
struct FFortConversionTierData
{
public:
	int32                                        TierCost;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredItemQuantity;                              // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct FortniteGame.FortConversionControlKeyCosts
struct FFortConversionControlKeyCosts : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortItemDefinition>    RequiredItem;                                      // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortConversionTierData               Handmade;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortConversionTierData               Ordinary;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortConversionTierData               Sturdy;                                            // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortConversionTierData               Quality;                                           // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortConversionTierData               Fine;                                              // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortConversionTierData               Elegant;                                           // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortConversionTierData               Masterwork;                                        // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortConversionTierData               Epic;                                              // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortConversionTierData               Badass;                                            // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFortConversionTierData               Legendary;                                         // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 RequiredCatalysts;                                 // 0x78(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.FortBadgeScoringData
struct FFortBadgeScoringData : public FTableRowBase
{
public:
	int32                                        ScoreAwarded;                                      // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissionPoints;                                     // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatCategory                     ScoreCategory;                                     // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C23[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ScoreThreshold;                                    // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.ConsumeEffectData
struct FConsumeEffectData
{
public:
	TSoftClassPtr<class UGameplayEffect>         EffectClass;                                       // 0x0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Level;                                             // 0x20(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x138 - 0x120)
// ScriptStruct FortniteGame.FortTrapStats
struct FFortTrapStats : public FFortBaseWeaponStats
{
public:
	float                                        ArmTime;                                           // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FireDelay;                                         // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageDelay;                                       // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlacementScore;                                    // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActivationScore;                                   // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C24[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x250 - 0x120)
// ScriptStruct FortniteGame.FortRangedWeaponStats
struct FFortRangedWeaponStats : public FFortBaseWeaponStats
{
public:
	float                                        Spread;                                            // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpreadDownsights;                                  // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StandingStillSpreadMultiplier;                     // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaCrouchingSpreadMultiplier;                   // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaJumpingFallingSpreadMultiplier;              // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaSprintingSpreadMultiplier;                   // 0x134(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinSpeedForSpreadMultiplier;                       // 0x138(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxSpeedForSpreadMultiplier;                       // 0x13C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpreadDownsightsAdditionalCooldownTime;            // 0x140(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeatX1;                                            // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeatY1;                                            // 0x148(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeatX2;                                            // 0x14C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeatY2;                                            // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeatX3;                                            // 0x154(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeatY3;                                            // 0x158(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeatXScale;                                        // 0x15C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeatYScale;                                        // 0x160(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoolX1;                                            // 0x164(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoolY1;                                            // 0x168(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoolX2;                                            // 0x16C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoolY2;                                            // 0x170(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoolX3;                                            // 0x174(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoolY3;                                            // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoolXScale;                                        // 0x17C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CoolYScale;                                        // 0x180(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BulletsPerCartridge;                               // 0x184(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FiringRate;                                        // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ROFScale;                                          // 0x18C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BurstFiringRate;                                   // 0x190(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilVert;                                        // 0x194(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilVertScale;                                   // 0x198(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilVertScaleGamepad;                            // 0x19C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VertRecoilDownChance;                              // 0x1A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilHoriz;                                       // 0x1A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilHorizScale;                                  // 0x1A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilHorizScaleGamepad;                           // 0x1AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilInterpSpeed;                                 // 0x1B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilRecoveryInterpSpeed;                         // 0x1B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilRecoveryDelay;                               // 0x1B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilRecoveryFraction;                            // 0x1BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilDownsightsMultiplier;                        // 0x1C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaRecoilMagnitudeMin;                          // 0x1C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaRecoilMagnitudeMax;                          // 0x1C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaRecoilMagnitudeScale;                        // 0x1CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaRecoilAngleMin;                              // 0x1D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaRecoilAngleMax;                              // 0x1D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaRecoilRollMagnitudeMin;                      // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaRecoilRollMagnitudeMax;                      // 0x1DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaRecoilInterpSpeed;                           // 0x1E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaRecoilRecoveryInterpSpeed;                   // 0x1E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaRecoilDownsightsMultiplier;                  // 0x1E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AthenaAimAssistRange;                              // 0x1EC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ADSTransitionInTime;                               // 0x1F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ADSTransitionOutTime;                              // 0x1F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxSpareAmmo;                                      // 0x1F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BulletsPerTracer;                                  // 0x1FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AIDelayBeforeFiringMin;                            // 0x200(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AIDelayBeforeFiringMax;                            // 0x204(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AIFireDurationMin;                                 // 0x208(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AIFireDurationMax;                                 // 0x20C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AIMinSpreadDuration;                               // 0x210(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AIMaxSpreadDuration;                               // 0x214(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AIDurationSpreadMultiplier;                        // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AIAdditionalSpreadForTargetMovingLaterally;        // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EQSDensity;                                        // 0x220(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinApproachRange;                                  // 0x224(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinActualRange;                                    // 0x228(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinPreferredRange;                                 // 0x22C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinPreferredRangeEQS;                              // 0x230(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxPreferredRangeEQS;                              // 0x234(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxPreferredRange;                                 // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxActualRange;                                    // 0x23C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxApproachRange;                                  // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SweepRadius;                                       // 0x244(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AutoReloadDelayOverride;                           // 0x248(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C25[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.KeepEventInfo
struct FKeepEventInfo
{
public:
	TSoftObjectPtr<class UFortKeepEventInfo>     KeepEvent;                                         // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DifficultyLevelOffset;                             // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C26[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.KeepEventWaveData
struct FKeepEventWaveData
{
public:
	class FText                                  WaveDescription;                                   // 0x0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAIEncounterInfo>      EncounterTemplate;                                 // 0x18(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAISpawnGroupProgressionInfo*      SpawnGroupProgressionInfo;                         // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WarmupTime;                                        // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EncounterTime;                                     // 0x2C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DifficultyLevel;                                   // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AliveMultiplier;                                   // 0x34(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnemySpawnBits1;                                   // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnemySpawnBits2;                                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.LeaderboardRowData
struct FLeaderboardRowData
{
public:
	int32                                        Rank;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C27[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                User;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C28[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      PlatformAccountId;                                 // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortTwitchPendingQuestNotification
struct FFortTwitchPendingQuestNotification
{
public:
	uint8                                        Pad_C29[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortTwitchViewerNameAndAccountId
struct FFortTwitchViewerNameAndAccountId
{
public:
	class FString                                TwitchViewerName;                                  // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountId;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortTwitchViewerCompletedQuestNotification
struct FFortTwitchViewerCompletedQuestNotification
{
public:
	TArray<struct FFortTwitchViewerNameAndAccountId> ViewerIds;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.FortTwitchViewerGrantedQuestNotification
struct FFortTwitchViewerGrantedQuestNotification
{
public:
	class FString                                QuestTemplateId;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortTwitchViewerNameAndAccountId> ViewerIds;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteGame.MatchmakingParams
struct FMatchmakingParams
{
public:
	int32                                        ControllerId;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PartySize;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DatacenterId;                                      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlaylistId;                                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MatchmakingLevel;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissionDifficultyMin;                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissionDifficultyMax;                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TheaterId;                                         // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ZoneInstanceId;                                    // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WUID;                                              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      WorldOwnerId;                                      // 0x58(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMatchmakingStartLocation         StartWith;                                         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMatchmakingFlags                 Flags;                                             // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToHostOverride;                              // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToHostIncrease;                              // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAttempts;                                       // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSearchResultsOverride;                          // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxProcessedSearchResults;                         // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct FortniteGame.FortCachedMatchmakingSearchParams
struct FFortCachedMatchmakingSearchParams
{
public:
	enum class EFortMatchmakingType              MatchmakingType;                                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C2B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMatchmakingParams                    MatchmakingParams;                                 // 0x8(0x98)(NativeAccessSpecifierPrivate)
	bool                                         bValid;                                            // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C2C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortMatchmakingConfig
struct FFortMatchmakingConfig
{
public:
	float                                        ChanceToHostOverride;                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToHostIncrease;                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSearchResultsOverride;                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxProcessedSearchResults;                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.EmptyServerReservation
struct FEmptyServerReservation
{
public:
	int32                                        PlaylistId;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ZoneInstanceId;                                    // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WUID;                                              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      WorldDataOwner;                                    // 0x28(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMakePrivate;                                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMatchmakingPool              MatchmakingPool;                                   // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2E[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortInviteSessionParams
struct FFortInviteSessionParams
{
public:
	enum class EMatchmakingState                 State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FailureReason;                                     // 0x8(0x18)(NativeAccessSpecifierPublic)
	enum class EPartyReservationResult           LastBeaconResponse;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C30[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortBatchUpdatePlayer_DeployableBaseUpdate
struct FFortBatchUpdatePlayer_DeployableBaseUpdate
{
public:
	uint8                                        Pad_C31[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct FortniteGame.FortBatchUpdatePlayer_Update
struct FFortBatchUpdatePlayer_Update
{
public:
	uint8                                        Pad_C32[0xD0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct FortniteGame.FortWorldProfileUpdateRequest
struct FFortWorldProfileUpdateRequest
{
public:
	uint8                                        Pad_C33[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfRequests;                                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C34[0xAC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// ScriptStruct FortniteGame.FortWorldPlayerLoadout
struct FFortWorldPlayerLoadout
{
public:
	bool                                         bPlayerIsNew;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C35[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        PinnedSchematicInstances;                          // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQuickBar                             PrimaryQuickBarRecord;                             // 0x18(0x90)(NativeAccessSpecifierPublic)
	struct FQuickBar                             SecondaryQuickBarRecord;                           // 0xA8(0x90)(NativeAccessSpecifierPublic)
	int32                                        ZonesCompleted;                                    // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C36[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortActiveTheaterInfo
struct FFortActiveTheaterInfo
{
public:
	TArray<struct FFortTheaterMapData>           Theaters;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAvailableTheaterMissions> Missions;                                          // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAvailableMissionAlerts>   MissionAlerts;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.NavAgentData
struct FNavAgentData
{
public:
	class FName                                  AgentName;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  BuildingActorHealthToNavAreaStrengthHandle;        // 0x8(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.EarnedBadgePlayerData
struct FEarnedBadgePlayerData
{
public:
	struct FUniqueNetIdRepl                      PlayerID;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C37[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x30 - 0xC)
// ScriptStruct FortniteGame.EarnedBadgeEntry
struct FEarnedBadgeEntry : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_C38[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortBadgeItemDefinition*              Badge;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEarnedBadgePlayerData>        PlayerData;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	enum class EFortRewardType                   RewardType;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C39[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xC0 - 0xB0)
// ScriptStruct FortniteGame.EarnedBadgeEntryArray
struct FEarnedBadgeEntryArray : public FFastArraySerializer
{
public:
	TArray<struct FEarnedBadgeEntry>             Items;                                             // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortMissionUIActorHandle
struct FFortMissionUIActorHandle
{
public:
	TWeakObjectPtr<class AActor>                 AttachedActor;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AttachmentOffset;                                  // 0x8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxVisibleDistance;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MissionGuid;                                       // 0x18(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortMissionInfoIndicator> MissionUIIndicator;                                // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct FortniteGame.MissionTimeDisplayData
struct FMissionTimeDisplayData
{
public:
	float                                        LessThanTimeValue;                                 // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideTimer;                                        // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BaseColor;                                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PulseColor;                                        // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorPulsesPerSecond;                              // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.MissionTimerData
struct FMissionTimerData
{
public:
	bool                                         bTimerIsPaused;                                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OriginalTimePeriod;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReplicatedRemainingTime;                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClientRemainingTime;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3C[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.AthenaJumpPenalty
struct FAthenaJumpPenalty
{
public:
	float                                        JumpScalar;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementScalar;                                    // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct FortniteGame.AirControlParams
struct FAirControlParams
{
public:
	struct FScalableFloat                        MaxAcceleration;                                   // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        LateralFriction;                                   // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxLateralSpeed;                                   // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TerminalVelocity;                                  // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScalableFloat                        GravityScalar;                                     // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x68 (0x78 - 0x10)
// ScriptStruct FortniteGame.FortPartyRepState
struct FFortPartyRepState : public FPartyState
{
public:
	enum class EFortPartyState                   PartyProgression;                                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLobbyConnectionStarted;                           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMatchmakingCompleteResult        MatchmakingResult;                                 // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMatchmakingState                 MatchmakingState;                                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SessionId;                                         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSessionIsCriticalMission;                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZoneTileIndex;                                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ZoneInstanceId;                                    // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TheaterId;                                         // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 TileStates;                                        // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                BucketId;                                          // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAthenaPlaylist               PlaylistType;                                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSquadFill;                                        // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3F[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct FortniteGame.FortPartyMemberRepState
struct FFortPartyMemberRepState : public FPartyMemberRepState
{
public:
	enum class EFortPartyMemberLocation          Location;                                          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C40[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MatchmakingLevel;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ZoneInstanceId;                                    // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentCharXP;                                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C41[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HeroId;                                            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HeroTypeRefName;                                   // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCustomGender                 CharacterGender;                                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C42[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        HomeBaseVersion;                                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ConsoleOSSString;                                  // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ConsoleUniqueNetIdString;                          // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreloadedAthena;                                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadyAthena;                                      // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJoinedConsoleSession;                             // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C43[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.BuildingHitTime
struct FBuildingHitTime
{
public:
	class ABuildingActor*                        HitBuilding;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C44[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.FortPlayerAttributeSets
struct FFortPlayerAttributeSets
{
public:
	class UFortRegenHealthSet*                   HealthSet;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortControlResistanceSet*             ControlResistanceSet;                              // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortDamageSet*                        DamageSet;                                         // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMovementSet*                      MovementSet;                                       // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortConstructionSet*                  ConstructionSet;                                   // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerAttrSet*                    PlayerAttrSet;                                     // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortCharacterAttrSet*                 CharacterAttrSet;                                  // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeaponAttrSet*                    WeaponAttrSet;                                     // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortHomebaseSet*                      HomebaseSet;                                       // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortCameraModeOverride
struct FFortCameraModeOverride
{
public:
	TSubclassOf<class UFortCameraMode>           OriginalClass;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortCameraMode>           ClassOverride;                                     // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortCameraPrototype
struct FFortCameraPrototype
{
public:
	class FName                                  PrototypeName;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrototypeDescription;                              // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortCameraModeOverride>       ModeOverrides;                                     // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortCameraInstanceEntry
struct FFortCameraInstanceEntry
{
public:
	TSubclassOf<class UFortCameraMode>           CameraClass;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ViewTarget;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortCameraMode*                       Camera;                                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.ActiveFortCamera
struct FActiveFortCamera
{
public:
	class UFortCameraMode*                       Camera;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ViewTarget;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionAlpha;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionUpdateRate;                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendWeight;                                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C45[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.CameraPair
struct FCameraPair
{
public:
	enum class EFrontEndCamera                   Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C46[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortCameraBase*                       Camera;                                            // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct FortniteGame.FortAthenaAimAssist
struct FFortAthenaAimAssist
{
public:
	uint8                                        Pad_C47[0xE0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteGame.FortAthenaAimAssistTarget
struct FFortAthenaAimAssistTarget
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     Capsule;                                           // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C48[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortAthenaAimAssistTargetAggregator
struct FFortAthenaAimAssistTargetAggregator
{
public:
	TArray<struct FFortAthenaAimAssistTarget>    TargetCache0;                                      // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FFortAthenaAimAssistTarget>    TargetCache1;                                      // 0x10(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_C49[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteGame.FortAthenaAimAssistOwnerInfo
struct FFortAthenaAimAssistOwnerInfo
{
public:
	uint8                                        Pad_C4A[0xA0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortAthenaAimAssistResults
struct FFortAthenaAimAssistResults
{
public:
	uint8                                        Pad_C4B[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortAthenaAimAssistParams
struct FFortAthenaAimAssistParams
{
public:
	class AFortPawn*                             OwningPawn;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4C[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.MorphValuePair
struct FMorphValuePair
{
public:
	class FName                                  MorphName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MorphValue;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.AccumulatedItemEntry
struct FAccumulatedItemEntry
{
public:
	class UFortWorldItemDefinition*              ItemDefinition;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.DeathInfo
struct FDeathInfo
{
public:
	class AFortPlayerStateAthena*                FinisherOrDowner;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDBNO;                                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDeathCause                       DeathCause;                                        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4F[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteGame.FortPointOnCurveRange
struct FFortPointOnCurveRange
{
public:
	float                                        MinPercentage;                                     // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPercentage;                                     // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortPointsOnCurve
struct FFortPointsOnCurve
{
public:
	TSoftObjectPtr<class UCurveFloat>            Curve;                                             // 0x0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortPointOnCurveRange>        RangesForPointsOnCurve;                            // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteGame.FortGameplayTagQueryPerDifficulty
struct FFortGameplayTagQueryPerDifficulty
{
public:
	struct FDataTableRowHandle                   DifficultyInfo;                                    // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     TagQueryToMatch;                                   // 0x10(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        Difficulty;                                        // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C50[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteGame.GoalDistanceData
struct FGoalDistanceData
{
public:
	bool                                         bIgnoreScreeningDistance;                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C51[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderFloatValue             ScreeningTestMaxDistance;                          // 0x8(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveFloat>            TestScoreCurve;                                    // 0x38(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             CurveDistanceScale;                                // 0x58(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteGame.FortRarityItemData
struct FFortRarityItemData
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color1;                                            // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color2;                                            // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color3;                                            // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color4;                                            // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color5;                                            // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Brightness;                                        // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roughness;                                         // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Glow;                                              // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C52[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteGame.FortDestroyedActorRecord
struct FFortDestroyedActorRecord
{
public:
	struct FGuid                                 ActorGuid;                                         // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ABuildingActor>            ActorClass;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C53[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ActorTransform;                                    // 0x20(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.FortBuildingActorArray
struct FFortBuildingActorArray
{
public:
	TArray<struct FFortDestroyedActorRecord>     ActorRecords;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x388 (0x388 - 0x0)
// ScriptStruct FortniteGame.FortScoreStylingInfo
struct FFortScoreStylingInfo
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   Icon;                                              // 0x18(0x360)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x378(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.FortScriptedActionParams
struct FFortScriptedActionParams
{
public:
	class AFortPlayerController*                 Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortScriptedActionSource         SourceType;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C54[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             SourceItem;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   SourceData;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SourceName;                                        // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortAvailableScriptedAction
struct FFortAvailableScriptedAction
{
public:
	struct FFortScriptedActionParams             Params;                                            // 0x0(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	class AFortScriptedAction*                   ActionDefaults;                                    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortSearchPassState
struct FFortSearchPassState
{
public:
	int32                                        BestSessionIdx;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasCanceled;                                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSessionHelperJoinResult      FailureType;                                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMatchmakingState                 MatchmakingState;                                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPartyReservationResult           LastBeaconResponse;                                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C55[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.FortSearchPassParams
struct FFortSearchPassParams
{
public:
	int32                                        ControllerId;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C56[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SessionName;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BestDatacenterId;                                  // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxProcessedSearchResults;                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C57[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteGame.MMAttemptState
struct FMMAttemptState
{
public:
	int32                                        BestSessionIdx;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSearchResults;                                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMatchmakingState                 State;                                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPartyReservationResult           LastBeaconResponse;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C58[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteGame.FortTrackedPlayerBehaviorInteraction
struct FFortTrackedPlayerBehaviorInteraction
{
public:
	uint8                                        Pad_C59[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteGame.FortTrackedPlayerBehavior
struct FFortTrackedPlayerBehavior
{
public:
	class AFortPlayerControllerAthena*           PC;                                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FUniqueNetIdRepl, struct FFortTrackedPlayerBehaviorInteraction> Interactions;                                      // 0x8(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5A[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x170 - 0x0)
// ScriptStruct FortniteGame.FortGlobalMission
struct FFortGlobalMission
{
public:
	TSoftObjectPtr<class UFortMissionInfo>       MissionInfo;                                       // 0x0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EFortTheaterType>          AllowedTheaterTypes;                               // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     TheaterTagQuery;                                   // 0x30(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     RegionTagQuery;                                    // 0x78(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	TArray<enum class EFortZoneType>             AllowedZoneTypes;                                  // 0xC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     ZoneTagQuery;                                      // 0xD0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     PrimaryMissionTagQuery;                            // 0x118(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	float                                        MaxDifficultyLevel;                                // 0x160(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDifficultyLevel;                                // 0x164(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPrototype;                                      // 0x168(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInTestMaps;                                  // 0x169(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x178 - 0x170)
// ScriptStruct FortniteGame.FortQuestDrivenMission
struct FFortQuestDrivenMission : public FFortGlobalMission
{
public:
	class UFortQuestItemDefinition*              RequiredQuest;                                     // 0x170(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.TransformableNavLinkClass
struct FTransformableNavLinkClass
{
public:
	struct FVector                               Translation;                                       // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UNavLinkDefinition>        NavigationLinksClass;                              // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteGame.FortTaggedActorOctreeFilter
struct FFortTaggedActorOctreeFilter
{
public:
	struct FBoxSphereBounds                      Bounds;                                            // 0x0(0x1C)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinDistanceFromBoundsCenter;                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ABuildingActor>>    OptionalSubclasses;                                // 0x20(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FFortFinderProperty>           RequiredProperties;                                // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TagsToLookFor;                                     // 0x40(0x20)(NativeAccessSpecifierPublic)
	bool                                         bHasAllTags;                                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x20 - 0xC)
// ScriptStruct FortniteGame.TeamSpottedActorInfo
struct FTeamSpottedActorInfo : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_C5D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 Spotter;                                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SpottedActor;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0xC8 - 0xB0)
// ScriptStruct FortniteGame.TeamSpottedActorInfoArray
struct FTeamSpottedActorInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FTeamSpottedActorInfo>         SpottedActorInfo;                                  // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class AFortTeamInfo*                         OwningTeam;                                        // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x2C (0x38 - 0xC)
// ScriptStruct FortniteGame.TeamFOBCoreBuildingEntry
struct FTeamFOBCoreBuildingEntry : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_C5E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingFOBCoreActor*                 FOB;                                               // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SpawnLocationTags;                                 // 0x18(0x20)(Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0xC0 - 0xB0)
// ScriptStruct FortniteGame.TeamFOBCoreBuildingEntryArray
struct FTeamFOBCoreBuildingEntryArray : public FFastArraySerializer
{
public:
	TArray<struct FTeamFOBCoreBuildingEntry>     Items;                                             // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0xC (0x18 - 0xC)
// ScriptStruct FortniteGame.TeamStrategicBuildingEntry
struct FTeamStrategicBuildingEntry : public FFastArraySerializerItem
{
public:
	struct FTeamStrategicBuildingHandle          StrategicBuildingHandle;                           // 0xC(0x4)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	class AStrategicBuildingActor*               StrategicBuilding;                                 // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xC0 - 0xB0)
// ScriptStruct FortniteGame.TeamStrategicBuildingEntryArray
struct FTeamStrategicBuildingEntryArray : public FFastArraySerializer
{
public:
	TArray<struct FTeamStrategicBuildingEntry>   Items;                                             // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x24 (0x30 - 0xC)
// ScriptStruct FortniteGame.PrivateTeamDataItem
struct FPrivateTeamDataItem : public FFastArraySerializerItem
{
public:
	float                                        Value;                                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PlayerID;                                          // 0x10(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x118 - 0xB0)
// ScriptStruct FortniteGame.PrivateTeamDataArray
struct FPrivateTeamDataArray : public FFastArraySerializer
{
public:
	TArray<struct FPrivateTeamDataItem>          Items;                                             // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C60[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.TokenAttributePair
struct FTokenAttributePair
{
public:
	struct FGameplayTag                          Token;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteGame.FortTokenContextInfo
struct FFortTokenContextInfo
{
public:
	struct FGameplayTagContainer                 RequiredContextTags;                               // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.FortTooltipTokenInfo
struct FFortTooltipTokenInfo
{
public:
	struct FGameplayTag                          Token;                                             // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortTokenContextInfo>         ContextDetails;                                    // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.TrackMovement
struct FTrackMovement
{
public:
	class USplineComponent*                      CurrentSpline;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceAlongSpline;                               // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseDirectionAlongSpline;                      // 0xC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C61[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x18 - 0x10)
// ScriptStruct FortniteGame.RepTrackMovement
struct FRepTrackMovement : public FTrackMovement
{
public:
	float                                        TimeStamp;                                         // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C62[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.AbilityToolSpawnParameters
struct FAbilityToolSpawnParameters
{
public:
	TSubclassOf<class ABuildingActor>            SpawnClass;                                        // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x14(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ABuildingSMActor*                      AttachedToActor;                                   // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteGame.TileGroupInfo
struct FTileGroupInfo
{
public:
	class UWorldTileGroup*                       TileGroup;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinTiles;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTiles;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlaceAdjacent : 1;                                // Mask: 0x1, PropSize: 0x10x14(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C63[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.TileGroupSelection
struct FTileGroupSelection
{
public:
	TArray<struct FTileGroupInfo>                TileGroupOptions;                                  // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteGame.TileGroupMapInfo
struct FTileGroupMapInfo
{
public:
	TSoftObjectPtr<class UWorld>                 GroupWorld;                                        // 0x0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C64[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  QuotaCategory;                                     // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x108 - 0x8)
// ScriptStruct FortniteGame.FortCalendarEventInventoryTransformData
struct FFortCalendarEventInventoryTransformData : public FTableRowBase
{
public:
	class FName                                  CalendarChannelName;                               // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CalendarEventName;                                 // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          AllowedProfileTypes;                               // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PrerequisiteHomebaseProperties;                    // 0x28(0x20)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortQuestItemDefinition> PrerequisiteQuest;                                 // 0x48(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   PrerequisiteObjective;                             // 0x68(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFortQuestItemDefinition>> PrerequisiteIncompleteOrUngrantedQuests;           // 0x78(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFortItemDefinition>> PrerequisiteUnownedItems;                          // 0x88(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFortQuestItemDefinition>> QuestsOnlyActiveDuringEvent;                       // 0x98(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>         ItemsToGrant;                                      // 0xA8(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FFortHiddenRewardQuantityPair> ItemsToGrantByTemplate;                            // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandleQuantityPair> ConversionRecipesToRunOnEventStart;                // 0xC8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandleQuantityPair> ConversionRecipesToRunAfterEvent;                  // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>         ItemsToRemoveAfterEvent;                           // 0xE8(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FFortHiddenRewardQuantityPair> ItemsToRemoveAfterEventByTemplate;                 // 0xF8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteGame.RecipeQuantityPair
struct FRecipeQuantityPair
{
public:
	uint8                                        Pad_C65[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x78 - 0x8)
// ScriptStruct FortniteGame.FortCollectionBookPageData
struct FFortCollectionBookPageData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, EditConst, NativeAccessSpecifierPublic)
	class FName                                  CategoryId;                                        // 0x20(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortPriority;                                      // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C66[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ProfileId;                                         // 0x30(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          SectionRowNames;                                   // 0x38(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FFortRewardInfo                       Rewards;                                           // 0x48(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct FortniteGame.FortCollectionBookSectionData
struct FFortCollectionBookSectionData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, EditConst, NativeAccessSpecifierPublic)
	TArray<class FName>                          SlotRowNames;                                      // 0x20(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FFortRewardInfo                       Rewards;                                           // 0x30(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteGame.FortCollectionBookSlotXPWeightData
struct FFortCollectionBookSlotXPWeightData : public FTableRowBase
{
public:
	float                                        ConstantWeight;                                    // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RarityWeight;                                      // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemLevelWeight;                                   // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemRatingWeight;                                  // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct FortniteGame.FortCollectionBookSlotData
struct FFortCollectionBookSlotData : public FTableRowBase
{
public:
	class FName                                  SlotXpWeightName;                                  // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotSourceId;                                      // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotSourceId2;                                     // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFortItemDefinition>> AllowedItems;                                      // 0x20(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  AllowedWorkerPersonalities;                        // 0x30(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteGame.FortCollectionBookSlotSourceData
struct FFortCollectionBookSlotSourceData : public FTableRowBase
{
public:
	class FText                                  Description;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct FortniteGame.FortCollectionBookXPData
struct FFortCollectionBookXPData : public FTableRowBase
{
public:
	int32                                        XpToNextLevel;                                     // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalXpToGetToThisLevel;                           // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortRewardInfo                       Rewards;                                           // 0x10(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
	bool                                         bIsMajorReward;                                    // 0x40(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoOpenRewardCardPacks;                          // 0x41(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C67[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct FortniteGame.FortMigrationDataTableRow
struct FFortMigrationDataTableRow : public FTableRowBase
{
public:
	class FString                                OldItemTemplate;                                   // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewItemTemplate;                                   // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteGame.FortLootLevelData
struct FFortLootLevelData : public FTableRowBase
{
public:
	class FName                                  Category;                                          // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LootLevel;                                         // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinItemLevel;                                      // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxItemLevel;                                      // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C68[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD8 - 0x8)
// ScriptStruct FortniteGame.FortQuestObjectiveStatTableRow
struct FFortQuestObjectiveStatTableRow : public FTableRowBase
{
public:
	enum class EFortQuestObjectiveStatEvent      Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C69[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TargetTags;                                        // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceTags;                                        // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContextTags;                                       // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Condition;                                         // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TemplateId;                                        // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TargetTagContainer;                                // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SourceTagContainer;                                // 0x80(0x20)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ContextTagContainer;                               // 0xA0(0x20)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	bool                                         bIsCached;                                         // 0xC0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6A[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x158 (0x188 - 0x30)
// ScriptStruct FortniteGame.FortAnimNode_ScaleHuskBones
struct FFortAnimNode_ScaleHuskBones : public FAnimNode_Base
{
public:
	struct FPoseLink                             PreScalePose;                                      // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6B[0x140];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.SlopeWarpingFootDefinition
struct FSlopeWarpingFootDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ToeSocketName;                                     // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HeelSocketName;                                    // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootSize;                                          // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct FortniteGame.SlopeWarpingFootData
struct FSlopeWarpingFootData
{
public:
	uint8                                        Pad_C6E[0xE0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x158 (0x1C8 - 0x70)
// ScriptStruct FortniteGame.FortAnimNode_SlopeWarping
struct FFortAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_C6F[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        IKFootRootBone;                                    // 0x88(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        PelvisBone;                                        // 0x98(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FSlopeWarpingFootDefinition>   FeetDefinitions;                                   // 0xA8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSlopeWarpingFootData>         FeetData;                                          // 0xB8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FVectorRK4SpringInterpolator          PelvisOffsetInterpolator;                          // 0xC8(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C70[0x34];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GravityDir;                                        // 0x104(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedDeltaTime;                                   // 0x110(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetFloorNormalWorldSpace;                       // 0x114(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorRK4SpringInterpolator          FloorNormalInterpolator;                           // 0x120(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C71[0x34];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetFloorOffsetLocalSpace;                       // 0x15C(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorRK4SpringInterpolator          FloorOffsetInterpolator;                           // 0x168(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C72[0x34];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxStepHeight;                                     // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCapsuleInfoInsteadOfFootTraces : 1;            // Mask: 0x1, PropSize: 0x10x1A8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWasOnGround : 1;                                  // Mask: 0x2, PropSize: 0x10x1A8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowDebug : 1;                                    // Mask: 0x4, PropSize: 0x10x1A8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFloorSmoothingInitialized : 1;                    // Mask: 0x8, PropSize: 0x10x1A8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_7D : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C73[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ActorLocation;                                     // 0x1AC(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GravityDirCompSpace;                               // 0x1B8(0xC)(Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C74[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteGame.SpeedWarpingFootDefinition
struct FSpeedWarpingFootDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C75[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.SpeedWarpingFootData
struct FSpeedWarpingFootData
{
public:
	uint8                                        Pad_C76[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0x130 - 0x70)
// ScriptStruct FortniteGame.FortAnimNode_SpeedWarping
struct FFortAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_C77[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        IKFootRootBone;                                    // 0x78(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FSpeedWarpingFootDefinition>   FeetDefinitions;                                   // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSpeedWarpingFootData>         FeetData;                                          // 0x98(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FBoneReference                        PelvisBone;                                        // 0xA8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESpeedWarpingAxisMode             SpeedWarpingAxisMode;                              // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpeedWarpingAxisMode             FloorNormalAxisMode;                               // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpeedWarpingAxisMode             GravityDirAxisMode;                                // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C78[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpeedScaling;                                      // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ManualSpeedWarpingDir;                             // 0xC0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ManualFloorNormalInput;                            // 0xCC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ManualGravityDirInput;                             // 0xD8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PelvisPostAdjustmentAlpha;                         // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PelvisAdjustmentMaxIter;                           // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVectorRK4SpringInterpolator          PelvisAdjustmentInterp;                            // 0xEC(0x8)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C79[0x34];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAdjustThighBonesRotation : 1;                     // Mask: 0x1, PropSize: 0x10x128(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bClampIKUsingFKLeg : 1;                            // Mask: 0x2, PropSize: 0x10x128(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOrientSpeedWarpingAxisBasedOnFloorNormal : 1;     // Mask: 0x4, PropSize: 0x10x128(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_7E : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C7A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CachedDeltaTime;                                   // 0x12C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteGame.ReflectedEngineVersion
struct FReflectedEngineVersion
{
public:
	int32                                        Major;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minor;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Patch;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Changelist;                                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Branch;                                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteGame.FortRecordVersion
struct FFortRecordVersion
{
public:
	int32                                        DataVersion;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PackageFileVersion;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReflectedEngineVersion               EngineVersion;                                     // 0x8(0x20)(NativeAccessSpecifierPublic)
	uint8                                        Pad_C7B[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
