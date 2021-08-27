#pragma once

// Name: DBZKakarot, Version: 1.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Dungeons.EEnchantmentSource
enum class Dungeons_EEnchantmentSource : uint8_t
{
	EEnchantmentSource__Unset      = 0,
	EEnchantmentSource__Permanent  = 1,
	EEnchantmentSource__Generated  = 2,
	EEnchantmentSource__Netherite  = 3,
	EEnchantmentSource__Dust       = 4,
	EEnchantmentSource__EEnchantmentSource_MAX = 5,

};

// Enum Dungeons.EEnchantmentCategory
enum class Dungeons_EEnchantmentCategory : uint8_t
{
	EEnchantmentCategory__Unset    = 0,
	EEnchantmentCategory__Melee    = 1,
	EEnchantmentCategory__Ranged   = 2,
	EEnchantmentCategory__Aoe      = 3,
	EEnchantmentCategory__Armor    = 4,
	EEnchantmentCategory__Permanent = 5,
	EEnchantmentCategory__EEnchantmentCategory_MAX = 6,

};

// Enum Dungeons.EEnchantmentTypeID
enum class Dungeons_EEnchantmentTypeID : uint8_t
{
	EEnchantmentTypeID__Unset      = 0,
	EEnchantmentTypeID__Sharpness  = 1,
	EEnchantmentTypeID__Knockback  = 2,
	EEnchantmentTypeID__Looting    = 3,
	EEnchantmentTypeID__Prospector = 4,
	EEnchantmentTypeID__FireAspect = 5,
	EEnchantmentTypeID__Rampaging  = 6,
	EEnchantmentTypeID__Exploding  = 7,
	EEnchantmentTypeID__CriticalHit = 8,
	EEnchantmentTypeID__Freezing   = 9,
	EEnchantmentTypeID__PoisonedMelee = 10,
	EEnchantmentTypeID__JunglePoisonMelee = 11,
	EEnchantmentTypeID__Leeching   = 12,
	EEnchantmentTypeID__Aiding     = 13,
	EEnchantmentTypeID__GravityMelee = 14,
	EEnchantmentTypeID__EnigmaResonatorMelee = 15,
	EEnchantmentTypeID__AnimaConduitMelee = 16,
	EEnchantmentTypeID__Stunning   = 17,
	EEnchantmentTypeID__CaveSpiderPoisonEnchantment = 18,
	EEnchantmentTypeID__Swirling   = 19,
	EEnchantmentTypeID__Smiting    = 20,
	EEnchantmentTypeID__Committed  = 21,
	EEnchantmentTypeID__SoulSiphon = 22,
	EEnchantmentTypeID__RadianceMelee = 23,
	EEnchantmentTypeID__Chains     = 24,
	EEnchantmentTypeID__Thundering = 25,
	EEnchantmentTypeID__Echo       = 26,
	EEnchantmentTypeID__Shockwave  = 27,
	EEnchantmentTypeID__Weakening  = 28,
	EEnchantmentTypeID__BusyBee    = 29,
	EEnchantmentTypeID__DynamoMelee = 30,
	EEnchantmentTypeID__BaneOfIllagers = 31,
	EEnchantmentTypeID__Rushdown   = 32,
	EEnchantmentTypeID__SpongeStrike = 33,
	EEnchantmentTypeID__Heavyweight = 34,
	EEnchantmentTypeID__DamageSynergy = 35,
	EEnchantmentTypeID__PainCycle  = 36,
	EEnchantmentTypeID__GuardingStrike = 37,
	EEnchantmentTypeID__PotionThirstMelee = 38,
	EEnchantmentTypeID__WitherEnchantmentMelee = 39,
	EEnchantmentTypeID__TempoTheft = 40,
	EEnchantmentTypeID__AlacrityAdjustment = 41,
	EEnchantmentTypeID__BowsBoon   = 42,
	EEnchantmentTypeID__Ricochet   = 43,
	EEnchantmentTypeID__Power      = 44,
	EEnchantmentTypeID__Punch      = 45,
	EEnchantmentTypeID__Infinity   = 46,
	EEnchantmentTypeID__MultiShot  = 47,
	EEnchantmentTypeID__Piercing   = 48,
	EEnchantmentTypeID__ChainReaction = 49,
	EEnchantmentTypeID__Gravity    = 50,
	EEnchantmentTypeID__HuntingBowEnchantment = 51,
	EEnchantmentTypeID__EnigmaResonatorRanged = 52,
	EEnchantmentTypeID__AnimaConduitRanged = 53,
	EEnchantmentTypeID__PoisonedRanged = 54,
	EEnchantmentTypeID__JunglePoisonRanged = 55,
	EEnchantmentTypeID__FreezingRanged = 56,
	EEnchantmentTypeID__RapidFire  = 57,
	EEnchantmentTypeID__Supercharge = 58,
	EEnchantmentTypeID__BonusShot  = 59,
	EEnchantmentTypeID__Unchanting = 60,
	EEnchantmentTypeID__FuseShot   = 61,
	EEnchantmentTypeID__RadianceRanged = 62,
	EEnchantmentTypeID__Accelerating = 63,
	EEnchantmentTypeID__Growing    = 64,
	EEnchantmentTypeID__WildRage   = 65,
	EEnchantmentTypeID__SlowBowEnchantment = 66,
	EEnchantmentTypeID__DynamoRanged = 67,
	EEnchantmentTypeID__BurstBowstring = 68,
	EEnchantmentTypeID__ChargingAcceleration = 69,
	EEnchantmentTypeID__CogCrossbowEnchantment = 70,
	EEnchantmentTypeID__WindBowEnchantment = 71,
	EEnchantmentTypeID__ReliableRicochet = 72,
	EEnchantmentTypeID__MultiCharge = 73,
	EEnchantmentTypeID__PotionThirstRanged = 74,
	EEnchantmentTypeID__CooldownShot = 75,
	EEnchantmentTypeID__ArtifactCharge = 76,
	EEnchantmentTypeID__WitherEnchantmentRanged = 77,
	EEnchantmentTypeID__ShockWeb   = 78,
	EEnchantmentTypeID__FreezingAoe = 79,
	EEnchantmentTypeID__Protection = 80,
	EEnchantmentTypeID__Celerity   = 81,
	EEnchantmentTypeID__FinalShout = 82,
	EEnchantmentTypeID__Deflecting = 83,
	EEnchantmentTypeID__Regeneration = 84,
	EEnchantmentTypeID__Thorns     = 85,
	EEnchantmentTypeID__AncientGuardianThorns = 86,
	EEnchantmentTypeID__Altruistic = 87,
	EEnchantmentTypeID__Shielding  = 88,
	EEnchantmentTypeID__Barrier    = 89,
	EEnchantmentTypeID__HuntingBowTaggedEnchantment = 90,
	EEnchantmentTypeID__Recycler   = 91,
	EEnchantmentTypeID__Chilling   = 92,
	EEnchantmentTypeID__Cowardice  = 93,
	EEnchantmentTypeID__Electrified = 94,
	EEnchantmentTypeID__Burning    = 95,
	EEnchantmentTypeID__Snowing    = 96,
	EEnchantmentTypeID__GravityPulse = 97,
	EEnchantmentTypeID__FireTrail  = 98,
	EEnchantmentTypeID__Frenzied   = 99,
	EEnchantmentTypeID__Swiftfooted = 100,
	EEnchantmentTypeID__SpiritSpeed = 101,
	EEnchantmentTypeID__PotionFortification = 102,
	EEnchantmentTypeID__FoodReserves = 103,
	EEnchantmentTypeID__SurpriseGift = 104,
	EEnchantmentTypeID__DoubleDamage = 105,
	EEnchantmentTypeID__FastAttack = 106,
	EEnchantmentTypeID__Quick      = 107,
	EEnchantmentTypeID__HealthSynergy = 108,
	EEnchantmentTypeID__SpeedSynergy = 109,
	EEnchantmentTypeID__Explorer   = 110,
	EEnchantmentTypeID__VesselTrail = 111,
	EEnchantmentTypeID__SlowResistance = 112,
	EEnchantmentTypeID__SlowImmunity = 113,
	EEnchantmentTypeID__TumbleBee  = 114,
	EEnchantmentTypeID__BagOfSouls = 115,
	EEnchantmentTypeID__Acrobat    = 116,
	EEnchantmentTypeID__PushVolumeImmunity = 117,
	EEnchantmentTypeID__WindResistance = 118,
	EEnchantmentTypeID__WindImmunity = 119,
	EEnchantmentTypeID__RollCharge = 120,
	EEnchantmentTypeID__MultiDodge = 121,
	EEnchantmentTypeID__EmeraldDivination = 122,
	EEnchantmentTypeID__DeathBarter = 123,
	EEnchantmentTypeID__ResurrectionSurge = 124,
	EEnchantmentTypeID__Huge       = 125,
	EEnchantmentTypeID__ResurrectSurroundingMobs = 126,
	EEnchantmentTypeID__Invisible  = 127,
	EEnchantmentTypeID__PoisonFocus = 128,
	EEnchantmentTypeID__FireFocus  = 129,
	EEnchantmentTypeID__SoulFocus  = 130,
	EEnchantmentTypeID__LightningFocus = 131,
	EEnchantmentTypeID__Flee       = 132,
	EEnchantmentTypeID__BeastSurge = 133,
	EEnchantmentTypeID__BeastBurst = 134,
	EEnchantmentTypeID__BeastBoss  = 135,
	EEnchantmentTypeID__Reckless   = 136,
	EEnchantmentTypeID__CurrentImmunity = 137,
	EEnchantmentTypeID__CurrentResistance = 138,
	EEnchantmentTypeID__LuckOfTheSea = 139,
	EEnchantmentTypeID__UnderwaterImmunity = 140,
	EEnchantmentTypeID__Last       = 141,
	EEnchantmentTypeID__EEnchantmentTypeID_MAX = 142,

};

// Enum Dungeons.EItemRarity
enum class Dungeons_EItemRarity : uint8_t
{
	EItemRarity__Common            = 0,
	EItemRarity__Rare              = 1,
	EItemRarity__Unique            = 2,
	EItemRarity__EItemRarity_MAX   = 3,

};

// Enum Dungeons.EArmorPropertyID
enum class Dungeons_EArmorPropertyID : uint8_t
{
	EArmorPropertyID__Unset        = 0,
	EArmorPropertyID__SoulGatheringBoost = 1,
	EArmorPropertyID__SuperbDamageAbsorption = 2,
	EArmorPropertyID__MissChance   = 3,
	EArmorPropertyID__TeleportChance = 4,
	EArmorPropertyID__ItemDamageBoost = 5,
	EArmorPropertyID__ItemCooldownDecrease = 6,
	EArmorPropertyID__AllyDamageBoost = 7,
	EArmorPropertyID__IncreasedArrowBundleSize = 8,
	EArmorPropertyID__MeleeDamageBoost = 9,
	EArmorPropertyID__MeleeAttackSpeedBoost = 10,
	EArmorPropertyID__RangedDamageBoost = 11,
	EArmorPropertyID__LifeStealAura = 12,
	EArmorPropertyID__MoveSpeedAura = 13,
	EArmorPropertyID__PetBat       = 14,
	EArmorPropertyID__AreaHeal     = 15,
	EArmorPropertyID__MoveSpeedReduction = 16,
	EArmorPropertyID__IncreasedMobTargeting = 17,
	EArmorPropertyID__PotionCooldownDecrease = 18,
	EArmorPropertyID__DodgeCooldownIncrease = 19,
	EArmorPropertyID__DodgeSpeedIncrease = 20,
	EArmorPropertyID__DodgeInvulnerability = 21,
	EArmorPropertyID__DamageAbsorption = 22,
	EArmorPropertyID__SlowResistance = 23,
	EArmorPropertyID__DodgeGhostForm = 24,
	EArmorPropertyID__Beekeeper    = 25,
	EArmorPropertyID__DodgeRoot    = 26,
	EArmorPropertyID__Heavyweight  = 27,
	EArmorPropertyID__EnvironmentalProtection = 28,
	EArmorPropertyID__EmeraldShield = 29,
	EArmorPropertyID__ItemCooldownReset = 30,
	EArmorPropertyID__SquidRollQuick = 31,
	EArmorPropertyID__SquidRollLimited = 32,
	EArmorPropertyID__HealingAura  = 33,
	EArmorPropertyID__Last         = 34,
	EArmorPropertyID__EArmorPropertyID_MAX = 35,

};

// Enum Dungeons.ELevelNames
enum class Dungeons_ELevelNames : uint8_t
{
	ELevelNames__Invalid           = 0,
	ELevelNames__squidcoast        = 1,
	ELevelNames__creeperwoods      = 2,
	ELevelNames__pumpkinpastures   = 3,
	ELevelNames__soggyswamp        = 4,
	ELevelNames__mooncorecaverns   = 5,
	ELevelNames__fieryforge        = 6,
	ELevelNames__deserttemple      = 7,
	ELevelNames__slimysewers       = 8,
	ELevelNames__highblockhalls    = 9,
	ELevelNames__obsidianpinnacle  = 10,
	ELevelNames__cacticanyon       = 11,
	ELevelNames__creeperwoodsdaily = 12,
	ELevelNames__creeperwoodsweekly = 13,
	ELevelNames__creeperwoodsseasonal = 14,
	ELevelNames__pumpkinpasturesdaily = 15,
	ELevelNames__pumpkinpasturesweekly = 16,
	ELevelNames__pumpkinpasturesseasonal = 17,
	ELevelNames__soggyswampdaily   = 18,
	ELevelNames__soggyswampweekly  = 19,
	ELevelNames__soggyswampseasonal = 20,
	ELevelNames__mooncorecavernsdaily = 21,
	ELevelNames__mooncorecavernsweekly = 22,
	ELevelNames__mooncorecavernsseasonal = 23,
	ELevelNames__fieryforgedaily   = 24,
	ELevelNames__fieryforgeweekly  = 25,
	ELevelNames__fieryforgeseasonal = 26,
	ELevelNames__deserttempledaily = 27,
	ELevelNames__deserttempleweekly = 28,
	ELevelNames__deserttempleseasonal = 29,
	ELevelNames__slimysewersdaily  = 30,
	ELevelNames__slimysewersweekly = 31,
	ELevelNames__slimysewersseasonal = 32,
	ELevelNames__highblockhallsdaily = 33,
	ELevelNames__highblockhallsweekly = 34,
	ELevelNames__highblockhallsseasonal = 35,
	ELevelNames__obsidianpinnacledaily = 36,
	ELevelNames__obsidianpinnacleweekly = 37,
	ELevelNames__obsidianpinnacleseasonal = 38,
	ELevelNames__cacticanyondaily  = 39,
	ELevelNames__cacticanyonweekly = 40,
	ELevelNames__cacticanyonseasonal = 41,
	ELevelNames__creepycrypt       = 42,
	ELevelNames__soggycave         = 43,
	ELevelNames__underhalls        = 44,
	ELevelNames__archhaven         = 45,
	ELevelNames__lowertemple       = 46,
	ELevelNames__mooshroomisland   = 47,
	ELevelNames__woodlandmansion   = 48,
	ELevelNames__spidercave        = 49,
	ELevelNames__dingyjungle       = 50,
	ELevelNames__overgrowntemple   = 51,
	ELevelNames__bamboobluff       = 52,
	ELevelNames__frozenfjord       = 53,
	ELevelNames__lonelyfortress    = 54,
	ELevelNames__lostsettlement    = 55,
	ELevelNames__creepycryptdaily  = 56,
	ELevelNames__creepycryptweekly = 57,
	ELevelNames__creepycryptseasonal = 58,
	ELevelNames__soggycavedaily    = 59,
	ELevelNames__soggycaveweekly   = 60,
	ELevelNames__soggycaveseasonal = 61,
	ELevelNames__underhallsdaily   = 62,
	ELevelNames__underhallsweekly  = 63,
	ELevelNames__underhallsseasonal = 64,
	ELevelNames__archhavendaily    = 65,
	ELevelNames__archhavenweekly   = 66,
	ELevelNames__archhavenseasonal = 67,
	ELevelNames__lowertempledaily  = 68,
	ELevelNames__lowertempleweekly = 69,
	ELevelNames__lowertempleseasonal = 70,
	ELevelNames__mooshroomislanddaily = 71,
	ELevelNames__mooshroomislandweekly = 72,
	ELevelNames__mooshroomislandseasonal = 73,
	ELevelNames__dingyjungledaily  = 74,
	ELevelNames__dingyjungleweekly = 75,
	ELevelNames__dingyjungleseasonal = 76,
	ELevelNames__overgrowntempledaily = 77,
	ELevelNames__overgrowntempleweekly = 78,
	ELevelNames__overgrowntempleseasonal = 79,
	ELevelNames__bamboobluffdaily  = 80,
	ELevelNames__bamboobluffweekly = 81,
	ELevelNames__bamboobluffseasonal = 82,
	ELevelNames__frozenfjorddaily  = 83,
	ELevelNames__frozenfjordweekly = 84,
	ELevelNames__frozenfjordseasonal = 85,
	ELevelNames__lonelyfortressdaily = 86,
	ELevelNames__lonelyfortressweekly = 87,
	ELevelNames__lonelyfortressseasonal = 88,
	ELevelNames__lostsettlementdaily = 89,
	ELevelNames__lostsettlementweekly = 90,
	ELevelNames__lostsettlementseasonal = 91,
	ELevelNames__crimsonforest     = 92,
	ELevelNames__basaltdeltas      = 93,
	ELevelNames__warpedforest      = 94,
	ELevelNames__soulsandvalley    = 95,
	ELevelNames__netherwastes      = 96,
	ELevelNames__netherfortress    = 97,
	ELevelNames__netherhypermission = 98,
	ELevelNames__crimsonforestdaily = 99,
	ELevelNames__crimsonforestweekly = 100,
	ELevelNames__crimsonforestseasonal = 101,
	ELevelNames__basaltdeltasdaily = 102,
	ELevelNames__basaltdeltasweekly = 103,
	ELevelNames__basaltdeltasseasonal = 104,
	ELevelNames__warpedforestdaily = 105,
	ELevelNames__warpedforestweekly = 106,
	ELevelNames__warpedforestseasonal = 107,
	ELevelNames__soulsandvalleydaily = 108,
	ELevelNames__soulsandvalleyweekly = 109,
	ELevelNames__soulsandvalleyseasonal = 110,
	ELevelNames__netherwastesdaily = 111,
	ELevelNames__netherwastesweekly = 112,
	ELevelNames__netherwastesseasonal = 113,
	ELevelNames__netherfortressdaily = 114,
	ELevelNames__netherfortressweekly = 115,
	ELevelNames__netherfortressseasonal = 116,
	ELevelNames__windsweptpeaks    = 117,
	ELevelNames__galesanctum       = 118,
	ELevelNames__endlessrampart    = 119,
	ELevelNames__gauntletgales     = 120,
	ELevelNames__windsweptpeaksdaily = 121,
	ELevelNames__windsweptpeaksweekly = 122,
	ELevelNames__windsweptpeaksseasonal = 123,
	ELevelNames__galesanctumdaily  = 124,
	ELevelNames__galesanctumweekly = 125,
	ELevelNames__galesanctumseasonal = 126,
	ELevelNames__endlessrampartdaily = 127,
	ELevelNames__endlessrampartweekly = 128,
	ELevelNames__endlessrampartseasonal = 129,
	ELevelNames__gauntletgalesdaily = 130,
	ELevelNames__gauntletgalesweekly = 131,
	ELevelNames__gauntletgalesseasonal = 132,
	ELevelNames__coralrise         = 133,
	ELevelNames__abyssalmonument   = 134,
	ELevelNames__radiantravine     = 135,
	ELevelNames__coralrisedaily    = 136,
	ELevelNames__coralriseweekly   = 137,
	ELevelNames__coralriseseasonal = 138,
	ELevelNames__abyssalmonumentdaily = 139,
	ELevelNames__abyssalmonumentweekly = 140,
	ELevelNames__abyssalmonumentseasonal = 141,
	ELevelNames__radiantravinedaily = 142,
	ELevelNames__radiantravineweekly = 143,
	ELevelNames__radiantravineseasonal = 144,
	ELevelNames__specialtileshub   = 145,
	ELevelNames__hm_hub            = 146,
	ELevelNames__count             = 147,
	ELevelNames__ELevelNames_MAX   = 148,

};

// Enum Dungeons.ETitle
enum class Dungeons_ETitle : uint8_t
{
	ETitle__INVALID                = 0,
	ETitle__NONE                   = 1,
	ETitle__BOOMER                 = 2,
	ETitle__CREEPERS_BANE          = 3,
	ETitle__END                    = 4,
	ETitle__ETitle_MAX             = 5,

};

// Enum Dungeons.EFriendsAddResponse
enum class Dungeons_EFriendsAddResponse : uint8_t
{
	EFriendsAddResponse__Unset     = 0,
	EFriendsAddResponse__MissingParameter = 1,
	EFriendsAddResponse__Searching = 2,
	EFriendsAddResponse__NoMatch   = 3,
	EFriendsAddResponse__FriendAdded = 4,
	EFriendsAddResponse__FriendAlreadyAdded = 5,
	EFriendsAddResponse__GeneralError = 6,
	EFriendsAddResponse__EFriendsAddResponse_MAX = 7,

};

// Enum Dungeons.ESessionJoinFailureReason
enum class Dungeons_ESessionJoinFailureReason : uint8_t
{
	ESessionJoinFailureReason__SessionIsFull = 0,
	ESessionJoinFailureReason__SessionDoesNotExist = 1,
	ESessionJoinFailureReason__CouldNotRetrieveAddress = 2,
	ESessionJoinFailureReason__AlreadyInSession = 3,
	ESessionJoinFailureReason__UnknownError = 4,
	ESessionJoinFailureReason__ESessionJoinFailureReason_MAX = 5,

};

// Enum Dungeons.ESessionFailureReason
enum class Dungeons_ESessionFailureReason : uint8_t
{
	ESessionFailureReason__CreateSessionFailed = 0,
	ESessionFailureReason__StartSessionFailed = 1,
	ESessionFailureReason__FindSessionsFailed = 2,
	ESessionFailureReason__JoinSessionFailed = 3,
	ESessionFailureReason__ConnectionStringResolutionFailed = 4,
	ESessionFailureReason__OnlineSystemNotAvailable = 5,
	ESessionFailureReason__InvalidPlayerController = 6,
	ESessionFailureReason__MapNameNotFound = 7,
	ESessionFailureReason__InvalidUniqueNetworkId = 8,
	ESessionFailureReason__SessionInterfaceUnavailable = 9,
	ESessionFailureReason__SessionNotFound = 10,
	ESessionFailureReason__InvalidFriendNetId = 11,
	ESessionFailureReason__LoginFailed = 12,
	ESessionFailureReason__Unknown = 13,
	ESessionFailureReason__ESessionFailureReason_MAX = 14,

};

// Enum Dungeons.EMapTrackingTypes
enum class Dungeons_EMapTrackingTypes : uint8_t
{
	EMapTrackingTypes__ChestsOpened = 0,
	EMapTrackingTypes__ChestsSpawned = 1,
	EMapTrackingTypes__SecretsFound = 2,
	EMapTrackingTypes__SecretsSpawned = 3,
	EMapTrackingTypes__Size        = 4,
	EMapTrackingTypes__EMapTrackingTypes_MAX = 5,

};

// Enum Dungeons.EPopupDialogType
enum class Dungeons_EPopupDialogType : uint8_t
{
	EPopupDialogType__OK           = 0,
	EPopupDialogType__ConfirmCancel = 1,
	EPopupDialogType__EPopupDialogType_MAX = 2,

};

// Enum Dungeons.EGlobalMessageTypes
enum class Dungeons_EGlobalMessageTypes : uint8_t
{
	EGlobalMessageTypes__Unset     = 0,
	EGlobalMessageTypes__ClientKicked = 1,
	EGlobalMessageTypes__InviteTimedOut = 2,
	EGlobalMessageTypes__ConnectionTimeout = 3,
	EGlobalMessageTypes__NoInternetConnection = 4,
	EGlobalMessageTypes__NotConnectedToOnlineService = 5,
	EGlobalMessageTypes__DisconnectedFromHost = 6,
	EGlobalMessageTypes__FailedToCreate = 7,
	EGlobalMessageTypes__CrossPlayDisabled = 8,
	EGlobalMessageTypes__PS4CrossplayDisabled = 9,
	EGlobalMessageTypes__PS4CrossplayEnabled = 10,
	EGlobalMessageTypes__JoinPermissionError = 11,
	EGlobalMessageTypes__EGlobalMessageTypes_MAX = 12,

};

// Enum Dungeons.ELoginResult
enum class Dungeons_ELoginResult : uint8_t
{
	ELoginResult__Success          = 0,
	ELoginResult__InternalError    = 1,
	ELoginResult__UserAlreadyInGame = 2,
	ELoginResult__UserCanceledLogin = 3,
	ELoginResult__FailedMsaLogin   = 4,
	ELoginResult__NetworkIssue     = 5,
	ELoginResult__ThisPsnAlreadyLinkedToDifferentMSA = 6,
	ELoginResult__LinkingError     = 7,
	ELoginResult__LinkingGuestAccountError = 8,
	ELoginResult__ThisMsaAlreadyLinkedToDifferentPSN = 9,
	ELoginResult__PlayfabLoginFailedCrossplayUnavailable = 10,
	ELoginResult__SpopIssue        = 11,
	ELoginResult__ELoginResult_MAX = 12,

};

// Enum Dungeons.ELocalUserLoginResult
enum class Dungeons_ELocalUserLoginResult : uint8_t
{
	ELocalUserLoginResult__Success = 0,
	ELocalUserLoginResult__UserAlreadyInGame = 1,
	ELocalUserLoginResult__Error   = 2,
	ELocalUserLoginResult__ELocalUserLoginResult_MAX = 3,

};

// Enum Dungeons.EBeamAttackPhase
enum class Dungeons_EBeamAttackPhase : uint8_t
{
	EBeamAttackPhase__Stopped      = 0,
	EBeamAttackPhase__Targeting    = 1,
	EBeamAttackPhase__Damaging     = 2,
	EBeamAttackPhase__EBeamAttackPhase_MAX = 3,

};

// Enum Dungeons.EntityType
enum class Dungeons_EntityType : uint8_t
{
	EntityType__Undefined          = 0,
	EntityType__ItemEntity         = 1,
	EntityType__PrimedTnt          = 2,
	EntityType__FallingBlock       = 3,
	EntityType__MovingBlock        = 4,
	EntityType__ExperiencePotion   = 5,
	EntityType__Experience         = 6,
	EntityType__EyeOfEnder         = 7,
	EntityType__EnderCrystal       = 8,
	EntityType__ShulkerBullet      = 9,
	EntityType__FishingHook        = 10,
	EntityType__Chalkboard         = 11,
	EntityType__DragonFireball     = 12,
	EntityType__Arrow              = 13,
	EntityType__Snowball           = 14,
	EntityType__ThrownEgg          = 15,
	EntityType__Painting           = 16,
	EntityType__LargeFireball      = 17,
	EntityType__ThrownPotion       = 18,
	EntityType__Enderpearl         = 19,
	EntityType__LeashKnot          = 20,
	EntityType__WitherSkull        = 21,
	EntityType__BoatRideable       = 22,
	EntityType__WitherSkullDangerous = 23,
	EntityType__LightningBolt      = 24,
	EntityType__SmallFireball      = 25,
	EntityType__AreaEffectCloud    = 26,
	EntityType__LingeringPotion    = 27,
	EntityType__TypeMask           = 28,
	EntityType__Mob                = 29,
	EntityType__Monster            = 30,
	EntityType__Animal             = 31,
	EntityType__WaterAnimal        = 32,
	EntityType__TamableAnimal      = 33,
	EntityType__Ambient            = 34,
	EntityType__UndeadMob          = 35,
	EntityType__ZombieMonster      = 36,
	EntityType__Arthropod          = 37,
	EntityType__Minecart           = 38,
	EntityType__SkeletonMonster    = 39,
	EntityType__EquineAnimal       = 40,
	EntityType__Chicken            = 41,
	EntityType__Cow                = 42,
	EntityType__Pig                = 43,
	EntityType__Sheep              = 44,
	EntityType__Wolf               = 45,
	EntityType__Villager           = 46,
	EntityType__Mooshroom          = 47,
	EntityType__MooshroomAncient   = 48,
	EntityType__Rabbit             = 49,
	EntityType__Bat                = 50,
	EntityType__IronGolem          = 51,
	EntityType__SnowGolem          = 52,
	EntityType__Horse              = 53,
	EntityType__Donkey             = 54,
	EntityType__Mule               = 55,
	EntityType__SkeletonHorse      = 56,
	EntityType__ZombieHorse        = 57,
	EntityType__RedstoneGolem      = 58,
	EntityType__RedstoneGolemAncient = 59,
	EntityType__Enchanter          = 60,
	EntityType__EnchanterAncient   = 61,
	EntityType__Vindicator         = 62,
	EntityType__VindicatorVariant0 = 63,
	EntityType__VindicatorVariant1 = 64,
	EntityType__VindicatorVariant2 = 65,
	EntityType__BabyZombie         = 66,
	EntityType__BabyDrowned        = 67,
	EntityType__BabyZombieAncient  = 68,
	EntityType__Zombie             = 69,
	EntityType__ZombieVariant0     = 70,
	EntityType__ZombieVariant1     = 71,
	EntityType__ZombieVariant2     = 72,
	EntityType__ZombieAncient      = 73,
	EntityType__Creeper            = 74,
	EntityType__Skeleton           = 75,
	EntityType__SkeletonVariant0   = 76,
	EntityType__SkeletonVariant1   = 77,
	EntityType__SkeletonVariant2   = 78,
	EntityType__SkeletonAncient    = 79,
	EntityType__Spider             = 80,
	EntityType__SpiderAncient      = 81,
	EntityType__ZombifiedPiglin    = 82,
	EntityType__Silverfish         = 83,
	EntityType__CaveSpider         = 84,
	EntityType__Ghast              = 85,
	EntityType__Blaze              = 86,
	EntityType__ZombieVillager     = 87,
	EntityType__Witch              = 88,
	EntityType__WitchAncient       = 89,
	EntityType__Stray              = 90,
	EntityType__Husk               = 91,
	EntityType__WitherSkeleton     = 92,
	EntityType__WitherSkeletonRanged = 93,
	EntityType__PiglinFungusThrower = 94,
	EntityType__ZombifiedPiglinFungusThrower = 95,
	EntityType__Guardian           = 96,
	EntityType__ElderGuardian      = 97,
	EntityType__Npc                = 98,
	EntityType__WitherBoss         = 99,
	EntityType__Dragon             = 100,
	EntityType__Shulker            = 101,
	EntityType__Endermite          = 102,
	EntityType__Agent              = 103,
	EntityType__Necromancer        = 104,
	EntityType__NecromancerAncient = 105,
	EntityType__TheOneWhoCalls     = 106,
	EntityType__Vex                = 107,
	EntityType__VexAncient         = 108,
	EntityType__Evoker             = 109,
	EntityType__EvokerFang         = 110,
	EntityType__Geomancer          = 111,
	EntityType__GeomancerAncient   = 112,
	EntityType__TripodCamera       = 113,
	EntityType__Player             = 114,
	EntityType__GeomancerWall      = 115,
	EntityType__GeomancerBomb      = 116,
	EntityType__ChickenJockey      = 117,
	EntityType__ChickenJockeyTower = 118,
	EntityType__ChickenJockeyTowerAncient = 119,
	EntityType__SlimeLarge         = 120,
	EntityType__SlimeMedium        = 121,
	EntityType__SlimeSmall         = 122,
	EntityType__SlimeSmallAncient  = 123,
	EntityType__RedstoneMonstrosity = 124,
	EntityType__Wraith             = 125,
	EntityType__WraithAncient      = 126,
	EntityType__RedstoneCube       = 127,
	EntityType__PiggyBank          = 128,
	EntityType__GoldBabyKey        = 129,
	EntityType__SilverBabyKey      = 130,
	EntityType__NamelessKing       = 131,
	EntityType__Pillager           = 132,
	EntityType__PillagerVariant0   = 133,
	EntityType__PillagerVariant1   = 134,
	EntityType__PillagerVariant2   = 135,
	EntityType__PillagerAncient    = 136,
	EntityType__FalseKing          = 137,
	EntityType__SkeletonVanguard   = 138,
	EntityType__SkeletonVanguardAncient = 139,
	EntityType__MobSpawner         = 140,
	EntityType__SkeletonHorseman   = 141,
	EntityType__OrdinaryHorse      = 142,
	EntityType__CauldronBoss       = 143,
	EntityType__SlimeCauldron      = 144,
	EntityType__ArchIllager        = 145,
	EntityType__ArchVessel         = 146,
	EntityType__ArchVisage         = 147,
	EntityType__JackOLantern       = 148,
	EntityType__RoyalGuard         = 149,
	EntityType__RoyalGuardAncient  = 150,
	EntityType__VindicatorChef     = 151,
	EntityType__Llama              = 152,
	EntityType__SoulWizard         = 153,
	EntityType__Enderman           = 154,
	EntityType__MinecartHopper     = 155,
	EntityType__MinecartTNT        = 156,
	EntityType__MinecartChest      = 157,
	EntityType__MinecartFurnace    = 158,
	EntityType__MooshroomMonstrosity = 159,
	EntityType__BabyChicken        = 160,
	EntityType__ChargedCreeper     = 161,
	EntityType__BabyPig            = 162,
	EntityType__Dummy              = 163,
	EntityType__JungleZombie       = 164,
	EntityType__MossySkeleton      = 165,
	EntityType__QuickGrowingVine   = 166,
	EntityType__PoisonQuillVine    = 167,
	EntityType__Ocelot             = 168,
	EntityType__PlayfulPanda       = 169,
	EntityType__LazyPanda          = 170,
	EntityType__BrownPanda         = 171,
	EntityType__Leaper             = 172,
	EntityType__LeaperAncient      = 173,
	EntityType__Whisperer          = 174,
	EntityType__WaveWhisperer      = 175,
	EntityType__PoisonAnemone      = 176,
	EntityType__QuickGrowingKelp   = 177,
	EntityType__JungleAbomination  = 178,
	EntityType__QuickGrowingVineSimple = 179,
	EntityType__PoisonQuillVineSimple = 180,
	EntityType__EntangleVine       = 181,
	EntityType__AbominationVine    = 182,
	EntityType__BabyPanda          = 183,
	EntityType__Parrot             = 184,
	EntityType__Panda              = 185,
	EntityType__FrozenZombie       = 186,
	EntityType__IcyCreeper         = 187,
	EntityType__PolarBear          = 188,
	EntityType__ArcticFox          = 189,
	EntityType__Illusioner         = 190,
	EntityType__IllusionerClone    = 191,
	EntityType__Chillager          = 192,
	EntityType__WickedWraith       = 193,
	EntityType__Bee                = 194,
	EntityType__SheepFireRed       = 195,
	EntityType__SheepPoisonGreen   = 196,
	EntityType__SheepSpeedBlue     = 197,
	EntityType__Goat               = 198,
	EntityType__GoatAncient        = 199,
	EntityType__Ravager            = 200,
	EntityType__WoolyCow           = 201,
	EntityType__LlamaMob           = 202,
	EntityType__WindCaller         = 203,
	EntityType__BabyGoat           = 204,
	EntityType__SquallGolem        = 205,
	EntityType__Mountaineer        = 206,
	EntityType__MountaineerVariant0 = 207,
	EntityType__MountaineerVariant1 = 208,
	EntityType__MountaineerVariant2 = 209,
	EntityType__TempestGolem       = 210,
	EntityType__RampartCaptain     = 211,
	EntityType__BlazeSpawner       = 212,
	EntityType__BlazeSpawnerAncient = 213,
	EntityType__HoveringInferno    = 214,
	EntityType__Hoglin             = 215,
	EntityType__HoglinAncient      = 216,
	EntityType__PiglinMelee        = 217,
	EntityType__PiglinMeleeVariant0 = 218,
	EntityType__PiglinMeleeVariant1 = 219,
	EntityType__PiglinMeleeVariant2 = 220,
	EntityType__PiglinRanged       = 221,
	EntityType__PiglinRangedVariant0 = 222,
	EntityType__PiglinRangedVariant1 = 223,
	EntityType__PiglinRangedVariant2 = 224,
	EntityType__ZombifiedPiglinMelee = 225,
	EntityType__ZombifiedPiglinMeleeVariant0 = 226,
	EntityType__ZombifiedPiglinMeleeVariant1 = 227,
	EntityType__ZombifiedPiglinMeleeVariant2 = 228,
	EntityType__ZombifiedPiglinRanged = 229,
	EntityType__ZombifiedPiglinRangedVariant0 = 230,
	EntityType__ZombifiedPiglinRangedVariant1 = 231,
	EntityType__ZombifiedPiglinRangedVariant2 = 232,
	EntityType__BabyGhast          = 233,
	EntityType__MagmaCubeLarge     = 234,
	EntityType__MagmaCubeMedium    = 235,
	EntityType__MagmaCubeSmall     = 236,
	EntityType__TropicalSlimeLarge = 237,
	EntityType__TropicalSlimeMedium = 238,
	EntityType__TropicalSlimeSmall = 239,
	EntityType__Squid              = 240,
	EntityType__Turtle             = 241,
	EntityType__BabyTurtle         = 242,
	EntityType__Pufferfish         = 243,
	EntityType__Drowned            = 244,
	EntityType__DrownedVariant0    = 245,
	EntityType__DrownedVariant1    = 246,
	EntityType__DrownedVariant2    = 247,
	EntityType__Dolphin            = 248,
	EntityType__TridentDrowned     = 249,
	EntityType__TridentDrownedVariant0 = 250,
	EntityType__TridentDrownedVariant1 = 251,
	EntityType__TridentDrownedVariant2 = 252,
	EntityType__SunkenSkeleton     = 253,
	EntityType__SunkenSkeletonVariant0 = 254,
	EntityType__SunkenSkeletonVariant1 = 255,
	EntityType__SunkenSkeletonVariant2 = 256,
	EntityType__DrownedNecromancer = 257,
	EntityType__BabyTurtlePet      = 258,
	EntityType__VindicatorRaidCaptain = 259,
	EntityType__PillagerRaidCaptain = 260,
	EntityType__GlowSquid          = 261,
	EntityType__AncientGuardian    = 262,
	EntityType__Biomine            = 263,
	EntityType__EntityType_MAX     = 264,

};

// Enum Dungeons.ENotificationType
enum class Dungeons_ENotificationType : uint8_t
{
	ENotificationType__Invalid     = 0,
	ENotificationType__Event       = 1,
	ENotificationType__PlayerJoin  = 2,
	ENotificationType__SelfGearPickup = 3,
	ENotificationType__OtherGearPickup = 4,
	ENotificationType__ENotificationType_MAX = 5,

};

// Enum Dungeons.EEventType
enum class Dungeons_EEventType : uint8_t
{
	EEventType__None               = 0,
	EEventType__ArenaBattle        = 1,
	EEventType__Boss               = 2,
	EEventType__DoorOpened         = 3,
	EEventType__SideQuestBattle    = 4,
	EEventType__EEventType_MAX     = 5,

};

// Enum Dungeons.EPillarState
enum class Dungeons_EPillarState : uint8_t
{
	EPillarState__Inactive         = 0,
	EPillarState__Active           = 1,
	EPillarState__DrainCharge      = 2,
	EPillarState__RegenerateCharge = 3,
	EPillarState__RapidRecharging  = 4,
	EPillarState__TimedDelay       = 5,
	EPillarState__Depleted         = 6,
	EPillarState__Defeated         = 7,
	EPillarState__EPillarState_MAX = 8,

};

// Enum Dungeons.EAncientGuardianState
enum class Dungeons_EAncientGuardianState : uint8_t
{
	EAncientGuardianState__Disabled = 0,
	EAncientGuardianState__Normal  = 1,
	EAncientGuardianState__NotSpiking = 2,
	EAncientGuardianState__Retreating = 3,
	EAncientGuardianState__Retreated = 4,
	EAncientGuardianState__Return  = 5,
	EAncientGuardianState__EAncientGuardianState_MAX = 6,

};

// Enum Dungeons.ELobbyChestLootType
enum class Dungeons_ELobbyChestLootType : uint8_t
{
	ELobbyChestLootType__Static    = 0,
	ELobbyChestLootType__RandomItem = 1,
	ELobbyChestLootType__RandomGear = 2,
	ELobbyChestLootType__Emeralds  = 3,
	ELobbyChestLootType__ELobbyChestLootType_MAX = 4,

};

// Enum Dungeons.EGameDifficulty
enum class Dungeons_EGameDifficulty : uint8_t
{
	EGameDifficulty__Invalid       = 0,
	EGameDifficulty__Difficulty    = 1,
	EGameDifficulty__Difficulty01  = 2,
	EGameDifficulty__Difficulty02  = 3,
	EGameDifficulty__ENUM_COUNT    = 4,
	EGameDifficulty__EGameDifficulty_MAX = 5,

};

// Enum Dungeons.EMissionDifficultyCompletionLogic
enum class Dungeons_EMissionDifficultyCompletionLogic : uint8_t
{
	EMissionDifficultyCompletionLogic__DISABLED = 0,
	EMissionDifficultyCompletionLogic__Any = 1,
	EMissionDifficultyCompletionLogic__UseCount = 2,
	EMissionDifficultyCompletionLogic__UseLevelID = 3,
	EMissionDifficultyCompletionLogic__EMissionDifficultyCompletionLogic_MAX = 4,

};

// Enum Dungeons.ELobbyChestType
enum class Dungeons_ELobbyChestType : uint8_t
{
	ELobbyChestType__UNSET         = 0,
	ELobbyChestType__Chest         = 1,
	ELobbyChestType__Blacksmith    = 2,
	ELobbyChestType__Librarian     = 3,
	ELobbyChestType__Villager      = 4,
	ELobbyChestType__TravelingMerchant = 5,
	ELobbyChestType__ELobbyChestType_MAX = 6,

};

// Enum Dungeons.EDLCName
enum class Dungeons_EDLCName : uint8_t
{
	EDLCName__Invalid              = 0,
	EDLCName__TheJungleAwakens     = 1,
	EDLCName__TheCreepingWinter    = 2,
	EDLCName__Mountains            = 3,
	EDLCName__Nether               = 4,
	EDLCName__Oceans               = 5,
	EDLCName__TheEnd               = 6,
	EDLCName__count                = 7,
	EDLCName__EDLCName_MAX         = 8,

};

// Enum Dungeons.EThreatLevel
enum class Dungeons_EThreatLevel : uint8_t
{
	EThreatLevel__Invalid          = 0,
	EThreatLevel__Threat           = 1,
	EThreatLevel__Threat01         = 2,
	EThreatLevel__Threat02         = 3,
	EThreatLevel__Threat03         = 4,
	EThreatLevel__Threat04         = 5,
	EThreatLevel__Threat05         = 6,
	EThreatLevel__Threat06         = 7,
	EThreatLevel__ENUM_COUNT       = 8,
	EThreatLevel__EThreatLevel_MAX = 9,

};

// Enum Dungeons.EVisibilityReason
enum class Dungeons_EVisibilityReason : uint8_t
{
	EVisibilityReason__Activated   = 0,
	EVisibilityReason__Completed   = 1,
	EVisibilityReason__Forgot      = 2,
	EVisibilityReason__EVisibilityReason_MAX = 3,

};

// Enum Dungeons.EUIHintType
enum class Dungeons_EUIHintType : uint8_t
{
	EUIHintType__None              = 0,
	EUIHintType__Movement          = 1,
	EUIHintType__Objective         = 2,
	EUIHintType__DefeatZombie      = 3,
	EUIHintType__LowHealth         = 4,
	EUIHintType__PickupArrow       = 5,
	EUIHintType__RangedAttack      = 6,
	EUIHintType__Artifact_Pickup   = 7,
	EUIHintType__Artifact_OpenInventory = 8,
	EUIHintType__Artifact_Equip    = 9,
	EUIHintType__Artifact_Activate = 10,
	EUIHintType__Artifact_RangedAttack = 11,
	EUIHintType__Enchanting_OpenInventory = 12,
	EUIHintType__Enchanting_SelectGear = 13,
	EUIHintType__Enchanting_SelectEnchantment = 14,
	EUIHintType__Enchanting_ItemEnchanted = 15,
	EUIHintType__MissionSelect_Marker = 16,
	EUIHintType__MissionSelect_Popup = 17,
	EUIHintType__Merchants_FindMerchants = 18,
	EUIHintType__Merchants_Interact = 19,
	EUIHintType__Map               = 20,
	EUIHintType__Teleport          = 21,
	EUIHintType__Popping           = 22,
	EUIHintType__ChatWheel_Open    = 23,
	EUIHintType__ChatWheel_Select  = 24,
	EUIHintType__ChatWheel_Chat    = 25,
	EUIHintType__Merchants_Reserve = 26,
	EUIHintType__ENUM_COUNT        = 27,
	EUIHintType__EUIHintType_MAX   = 28,

};

// Enum Dungeons.ETeleportState
enum class Dungeons_ETeleportState : uint8_t
{
	ETeleportState__Idle           = 0,
	ETeleportState__Charging       = 1,
	ETeleportState__Flying         = 2,
	ETeleportState__Landing        = 3,
	ETeleportState__ETeleportState_MAX = 4,

};

// Enum Dungeons.TempestArmStatus
enum class Dungeons_ETempestArmStatus : uint8_t
{
	TempestArmStatus__ACTIVE       = 0,
	TempestArmStatus__ATTACKING    = 1,
	TempestArmStatus__DISABLED     = 2,
	TempestArmStatus__DISABLING    = 3,
	TempestArmStatus__REACTIVATING = 4,
	TempestArmStatus__INVALID      = 5,
	TempestArmStatus__TRACKING     = 6,
	TempestArmStatus__LOCKED       = 7,
	TempestArmStatus__TempestArmStatus_MAX = 8,

};

// Enum Dungeons.TempestStatus
enum class Dungeons_ETempestStatus : uint8_t
{
	TempestStatus__INVALID         = 0,
	TempestStatus__INTRO           = 1,
	TempestStatus__ACTIVE          = 2,
	TempestStatus__STUNNED         = 3,
	TempestStatus__TempestStatus_MAX = 4,

};

// Enum Dungeons.EEndGameContentType
enum class Dungeons_EEndGameContentType : uint8_t
{
	EEndGameContentType__Invalid   = 0,
	EEndGameContentType__EndlessStruggle = 1,
	EEndGameContentType__HyperMission = 2,
	EEndGameContentType__EmergentDifficulty = 3,
	EEndGameContentType__ENUM_COUNT = 4,
	EEndGameContentType__EEndGameContentType_MAX = 5,

};

// Enum Dungeons.EFetchTitleNewsFailReason
enum class Dungeons_EFetchTitleNewsFailReason : uint8_t
{
	EFetchTitleNewsFailReason__RandomThingWentWrong = 0,
	EFetchTitleNewsFailReason__CouldntReachNews = 1,
	EFetchTitleNewsFailReason__MalformedJson = 2,
	EFetchTitleNewsFailReason__MissingWorld = 3,
	EFetchTitleNewsFailReason__Unknown = 4,
	EFetchTitleNewsFailReason__EFetchTitleNewsFailReason_MAX = 5,

};

// Enum Dungeons.EMissionTheme
enum class Dungeons_EMissionTheme : uint8_t
{
	EMissionTheme__Invalid         = 0,
	EMissionTheme__Story           = 1,
	EMissionTheme__Secret          = 2,
	EMissionTheme__Daily           = 3,
	EMissionTheme__Weekly          = 4,
	EMissionTheme__Seasonal        = 5,
	EMissionTheme__Spooky          = 6,
	EMissionTheme__Jungle          = 7,
	EMissionTheme__Winter          = 8,
	EMissionTheme__Mountain        = 9,
	EMissionTheme__Hypermission    = 10,
	EMissionTheme__Anniversary     = 11,
	EMissionTheme__count           = 12,
	EMissionTheme__EMissionTheme_MAX = 13,

};

// Enum Dungeons.ECloudCharactersResult
enum class Dungeons_ECloudCharactersResult : uint8_t
{
	ECloudCharactersResult__Failed = 0,
	ECloudCharactersResult__FailedAccountNotLinked = 1,
	ECloudCharactersResult__FailedLogin = 2,
	ECloudCharactersResult__FailedServiceUnavailable = 3,
	ECloudCharactersResult__Success = 4,
	ECloudCharactersResult__ECloudCharactersResult_MAX = 5,

};

// Enum Dungeons.EAffectorApplicationType
enum class Dungeons_EAffectorApplicationType : uint8_t
{
	EAffectorApplicationType__None = 0,
	EAffectorApplicationType__DefaultApplication = 1,
	EAffectorApplicationType__MidGame = 2,
	EAffectorApplicationType__EAffectorApplicationType_MAX = 3,

};

// Enum Dungeons.EAffectorId
enum class Dungeons_EAffectorId : uint8_t
{
	EAffectorId__EmeraldHealthAdd  = 0,
	EAffectorId__PlayerArrowType   = 1,
	EAffectorId__PlayerDamage      = 2,
	EAffectorId__PlayerHealth      = 3,
	EAffectorId__PlayerSpeed       = 4,
	EAffectorId__PlayerArtifactCooldown = 5,
	EAffectorId__MobDamage         = 6,
	EAffectorId__MobHealth         = 7,
	EAffectorId__MobSpeed          = 8,
	EAffectorId__MobInvisible      = 9,
	EAffectorId__NightMode         = 10,
	EAffectorId__PetCount          = 11,
	EAffectorId__InstantGameOver   = 12,
	EAffectorId__SoulCount         = 13,
	EAffectorId__StartupLives      = 14,
	EAffectorId__ReplaceMeleeMobs  = 15,
	EAffectorId__ReplaceRangedMobs = 16,
	EAffectorId__PlayerEnchantment = 17,
	EAffectorId__MobEnchantment    = 18,
	EAffectorId__ChestProbability  = 19,
	EAffectorId__PlayerUnderwater  = 20,
	EAffectorId__MobUnderwater     = 21,
	EAffectorId__Last              = 22,
	EAffectorId__EAffectorId_MAX   = 23,

};

// Enum Dungeons.EAffectorModus
enum class Dungeons_EAffectorModus : uint8_t
{
	EAffectorModus__Easier         = 0,
	EAffectorModus__Harder         = 1,
	EAffectorModus__Any            = 2,
	EAffectorModus__EAffectorModus_MAX = 3,

};

// Enum Dungeons.EAmbienceAudioID
enum class Dungeons_EAmbienceAudioID : uint8_t
{
	EAmbienceAudioID__AUDIO_FROM_AMBIENCE = 0,
	EAmbienceAudioID__AUDIO        = 1,
	EAmbienceAudioID__AUDIO01      = 2,
	EAmbienceAudioID__AUDIO02      = 3,
	EAmbienceAudioID__AUDIO03      = 4,
	EAmbienceAudioID__AUDIO04      = 5,
	EAmbienceAudioID__AUDIO05      = 6,
	EAmbienceAudioID__AUDIO06      = 7,
	EAmbienceAudioID__AUDIO07      = 8,
	EAmbienceAudioID__AUDIO08      = 9,
	EAmbienceAudioID__AUDIO_MAX    = 10,

};

// Enum Dungeons.EAmbienceID
enum class Dungeons_EAmbienceID : uint8_t
{
	EAmbienceID__AMBIENCE_DEFAULT  = 0,
	EAmbienceID__AMBIENCE_ALPHA    = 1,
	EAmbienceID__AMBIENCE_BRAVO    = 2,
	EAmbienceID__AMBIENCE_DELTA    = 3,
	EAmbienceID__AMBIENCE_ECHO     = 4,
	EAmbienceID__AMBIENCE_FOXTROT  = 5,
	EAmbienceID__AMBIENCE_MAX      = 6,

};

// Enum Dungeons.ETelemetryEventType
enum class Dungeons_ETelemetryEventType : uint8_t
{
	ETelemetryEventType__GameSessionStartup = 0,
	ETelemetryEventType__OnDeath   = 1,
	ETelemetryEventType__OnRateMission = 2,
	ETelemetryEventType__OnCheckpoint = 3,
	ETelemetryEventType__RoundAwards = 4,
	ETelemetryEventType__OnLevelStart = 5,
	ETelemetryEventType__OnJoinLobby = 6,
	ETelemetryEventType__OnLevelJoin = 7,
	ETelemetryEventType__OnChatWheel = 8,
	ETelemetryEventType__OnTextChatUse = 9,
	ETelemetryEventType__OnObjectiveDone = 10,
	ETelemetryEventType__GameSessionEnd = 11,
	ETelemetryEventType__Logout    = 12,
	ETelemetryEventType__SettingsChange = 13,
	ETelemetryEventType__OnMobKilled = 14,
	ETelemetryEventType__Assert    = 15,
	ETelemetryEventType__CrashDetected = 16,
	ETelemetryEventType__Count     = 17,
	ETelemetryEventType__ETelemetryEventType_MAX = 18,

};

// Enum Dungeons.EArmorPropertyTag
enum class Dungeons_EArmorPropertyTag : uint8_t
{
	EArmorPropertyTag__SoulGatheringBoost = 0,
	EArmorPropertyTag__EArmorPropertyTag_MAX = 1,

};

// Enum Dungeons.EArmorPropertyClassification
enum class Dungeons_EArmorPropertyClassification : uint8_t
{
	EArmorPropertyClassification__Positive = 0,
	EArmorPropertyClassification__Negative = 1,
	EArmorPropertyClassification__EArmorPropertyClassification_MAX = 2,

};

// Enum Dungeons.ESuccessFailure
enum class Dungeons_ESuccessFailure : uint8_t
{
	ESuccessFailure__Success       = 0,
	ESuccessFailure__Failure       = 1,
	ESuccessFailure__ESuccessFailure_MAX = 2,

};

// Enum Dungeons.ESynchornizedCollisionResponse
enum class Dungeons_ESynchornizedCollisionResponse : uint8_t
{
	ESynchornizedCollisionResponse__Default = 0,
	ESynchornizedCollisionResponse__WorldOnly = 1,
	ESynchornizedCollisionResponse__ESynchornizedCollisionResponse_MAX = 2,

};

// Enum Dungeons.EMobState
enum class Dungeons_EMobState : uint8_t
{
	EMobState__Idle                = 0,
	EMobState__Combat              = 1,
	EMobState__Staggered           = 2,
	EMobState__Fleeing             = 3,
	EMobState__Custom1             = 4,
	EMobState__EMobState_MAX       = 5,

};

// Enum Dungeons.EAttackState
enum class Dungeons_EAttackState : uint8_t
{
	EAttackState__None             = 0,
	EAttackState__Aiming           = 1,
	EAttackState__Melee            = 2,
	EAttackState__Ranged           = 3,
	EAttackState__Magic            = 4,
	EAttackState__Targeting        = 5,
	EAttackState__EAttackState_MAX = 6,

};

// Enum Dungeons.ECharacterWorldState
enum class Dungeons_ECharacterWorldState : uint8_t
{
	ECharacterWorldState__InWorld  = 0,
	ECharacterWorldState__Disappeared = 1,
	ECharacterWorldState__DisappearedWithCollision = 2,
	ECharacterWorldState__ECharacterWorldState_MAX = 3,

};

// Enum Dungeons.EMovementState
enum class Dungeons_EMovementState : uint8_t
{
	EMovementState__Idle           = 0,
	EMovementState__Walking        = 1,
	EMovementState__Running        = 2,
	EMovementState__Flying         = 3,
	EMovementState__Staggered      = 4,
	EMovementState__Dashing        = 5,
	EMovementState__Rolling        = 6,
	EMovementState__Usingitem      = 7,
	EMovementState__EMovementState_MAX = 8,

};

// Enum Dungeons.EClickTargetType
enum class Dungeons_EClickTargetType : uint8_t
{
	EClickTargetType__Target       = 0,
	EClickTargetType__Clicky       = 1,
	EClickTargetType__EClickTargetType_MAX = 2,

};

// Enum Dungeons.EPlayerInputType
enum class Dungeons_EPlayerInputType : uint8_t
{
	EPlayerInputType__Movement     = 0,
	EPlayerInputType__Attack       = 1,
	EPlayerInputType__Hotbar       = 2,
	EPlayerInputType__Map          = 3,
	EPlayerInputType__Inventory    = 4,
	EPlayerInputType__Teleport     = 5,
	EPlayerInputType__Social       = 6,
	EPlayerInputType__TextChat     = 7,
	EPlayerInputType__UI           = 8,
	EPlayerInputType__Debug        = 9,
	EPlayerInputType__EPlayerInputType_MAX = 10,

};

// Enum Dungeons.ELocalPlayerCameraStatus
enum class Dungeons_ELocalPlayerCameraStatus : uint8_t
{
	ELocalPlayerCameraStatus__InCinematic = 0,
	ELocalPlayerCameraStatus__InSafeZone = 1,
	ELocalPlayerCameraStatus__InDangerZone = 2,
	ELocalPlayerCameraStatus__InHardBoundary = 3,
	ELocalPlayerCameraStatus__OffScreen = 4,
	ELocalPlayerCameraStatus__ELocalPlayerCameraStatus_MAX = 5,

};

// Enum Dungeons.EPlayerStatusType
enum class Dungeons_EPlayerStatusType : uint8_t
{
	EPlayerStatusType__UNSET       = 0,
	EPlayerStatusType__Joined      = 1,
	EPlayerStatusType__Left        = 2,
	EPlayerStatusType__EPlayerStatusType_MAX = 3,

};

// Enum Dungeons.EArrowType
enum class Dungeons_EArrowType : uint8_t
{
	EArrowType__Land               = 0,
	EArrowType__Water              = 1,
	EArrowType__EArrowType_MAX     = 2,

};

// Enum Dungeons.EPitchPhase
enum class Dungeons_EPitchPhase : uint8_t
{
	EPitchPhase__None              = 0,
	EPitchPhase__Target            = 1,
	EPitchPhase__Damage            = 2,
	EPitchPhase__Both              = 3,
	EPitchPhase__EPitchPhase_MAX   = 4,

};

// Enum Dungeons.EPitchType
enum class Dungeons_EPitchType : uint8_t
{
	EPitchType__None               = 0,
	EPitchType__Beam               = 1,
	EPitchType__Actor              = 2,
	EPitchType__EPitchType_MAX     = 3,

};

// Enum Dungeons.EBlockingMessageType
enum class Dungeons_EBlockingMessageType : uint8_t
{
	EBlockingMessageType__Unset    = 0,
	EBlockingMessageType__SourceAuthenticationFailed = 1,
	EBlockingMessageType__MissingBaseGameEntitlement = 2,
	EBlockingMessageType__EntitlementsRequestFailed = 3,
	EBlockingMessageType__EBlockingMessageType_MAX = 4,

};

// Enum Dungeons.EAnimLocomotion
enum class Dungeons_EAnimLocomotion : uint8_t
{
	EAnimLocomotion__Idle          = 0,
	EAnimLocomotion__WalkRun       = 1,
	EAnimLocomotion__Flying        = 2,
	EAnimLocomotion__BlendSpace    = 3,
	EAnimLocomotion__Falling       = 4,
	EAnimLocomotion__DownedDead    = 5,
	EAnimLocomotion__EAnimLocomotion_MAX = 6,

};

// Enum Dungeons.ELegendaryStatus
enum class Dungeons_ELegendaryStatus : uint8_t
{
	ELegendaryStatus__HERO         = 0,
	ELegendaryStatus__LEGENDARY    = 1,
	ELegendaryStatus__MYTHICAL     = 2,
	ELegendaryStatus__ELegendaryStatus_MAX = 3,

};

// Enum Dungeons.EChatMessageType
enum class Dungeons_EChatMessageType : uint8_t
{
	EChatMessageType__UNSET        = 0,
	EChatMessageType__Text         = 1,
	EChatMessageType__Icon         = 2,
	EChatMessageType__Item         = 3,
	EChatMessageType__Status       = 4,
	EChatMessageType__EChatMessageType_MAX = 5,

};

// Enum Dungeons.EChestType
enum class Dungeons_EChestType : uint8_t
{
	EChestType__Wooden             = 0,
	EChestType__Fancy              = 1,
	EChestType__Deluxe             = 2,
	EChestType__EChestType_MAX     = 3,

};

// Enum Dungeons.ESourceState
enum class Dungeons_ESourceState : uint8_t
{
	ESourceState__Pending          = 0,
	ESourceState__RequestSent      = 1,
	ESourceState__Failed           = 2,
	ESourceState__Succeeded        = 3,
	ESourceState__ESourceState_MAX = 4,

};

// Enum Dungeons.ECosmeticType
enum class Dungeons_ECosmeticType : uint8_t
{
	ECosmeticType__Unset           = 0,
	ECosmeticType__Cape            = 1,
	ECosmeticType__Pet             = 2,
	ECosmeticType__Invalid         = 3,
	ECosmeticType__ECosmeticType_MAX = 4,

};

// Enum Dungeons.EUICounterEmphasis
enum class Dungeons_EUICounterEmphasis : uint8_t
{
	EUICounterEmphasis__Regular    = 0,
	EUICounterEmphasis__Diminished = 1,
	EUICounterEmphasis__Emphasized = 2,
	EUICounterEmphasis__EUICounterEmphasis_MAX = 3,

};

// Enum Dungeons.EPlayerPlatform
enum class Dungeons_EPlayerPlatform : uint8_t
{
	EPlayerPlatform__PC_PLATFORM   = 0,
	EPlayerPlatform__XBOXONE_PLATFORM = 1,
	EPlayerPlatform__SWITCH_PLATFORM = 2,
	EPlayerPlatform__PS4_PLATFORM  = 3,
	EPlayerPlatform__UNKNOWN       = 4,
	EPlayerPlatform__EPlayerPlatform_MAX = 5,

};

// Enum Dungeons.ESessionOnlineService
enum class Dungeons_ESessionOnlineService : uint8_t
{
	ESessionOnlineService__PSN     = 0,
	ESessionOnlineService__XBL     = 1,
	ESessionOnlineService__UNKNOWN = 2,
	ESessionOnlineService__ESessionOnlineService_MAX = 3,

};

// Enum Dungeons.EAwardType
enum class Dungeons_EAwardType : uint8_t
{
	EAwardType__Invalid            = 0,
	EAwardType__MostEnemiesHit     = 1,
	EAwardType__MostDamageDoneSingleBlow = 2,
	EAwardType__MostEnemiesKilled  = 3,
	EAwardType__MostZombiesKilled  = 4,
	EAwardType__MostSkeletonsKilled = 5,
	EAwardType__MostSpidersKilled  = 6,
	EAwardType__MostDamageDone     = 7,
	EAwardType__BlocksWalkedOn     = 8,
	EAwardType__MostArrowsFired    = 9,
	EAwardType__MostArrowsHit      = 10,
	EAwardType__StrengthPotionsUsed = 11,
	EAwardType__SwiftnessPotionsUsed = 12,
	EAwardType__TNTUsed            = 13,
	EAwardType__HealthPotionsUsed  = 14,
	EAwardType__ItemsUsed          = 15,
	EAwardType__LeastDamageTaken   = 16,
	EAwardType__GameMobsKilled     = 17,
	EAwardType__EAwardType_MAX     = 18,

};

// Enum Dungeons.EDungeonsControllerType
enum class Dungeons_EDungeonsControllerType : uint8_t
{
	EDungeonsControllerType__Controller_MouseAndKeyboard = 0,
	EDungeonsControllerType__Controller_XboxOne = 1,
	EDungeonsControllerType__Controller_Touch = 2,
	EDungeonsControllerType__Controller_Virtual = 3,
	EDungeonsControllerType__Controller_PS4 = 4,
	EDungeonsControllerType__Controller_SwitchHandheld = 5,
	EDungeonsControllerType__Controller_SwitchPro = 6,
	EDungeonsControllerType__Controller_SwitchJoyconDual = 7,
	EDungeonsControllerType__Controller_SwitchJoyconLeft = 8,
	EDungeonsControllerType__Controller_SwitchJoyconRight = 9,
	EDungeonsControllerType__Controller_Invalid = 10,
	EDungeonsControllerType__Controller_MAX = 11,

};

// Enum Dungeons.ENightModeType
enum class Dungeons_ENightModeType : uint8_t
{
	ENightModeType__Normal         = 0,
	ENightModeType__Oceans         = 1,
	ENightModeType__ENightModeType_MAX = 2,

};

// Enum Dungeons.ELowSpecNotifyType
enum class Dungeons_ELowSpecNotifyType : uint8_t
{
	ELowSpecNotifyType__OnBatteryPower = 0,
	ELowSpecNotifyType__LowMemory  = 1,
	ELowSpecNotifyType__LowPerformance = 2,
	ELowSpecNotifyType__ELowSpecNotifyType_MAX = 3,

};

// Enum Dungeons.SwitchOperationMode
enum class Dungeons_ESwitchOperationMode : uint8_t
{
	Handheld                       = 0,
	Console                        = 1,
	SwitchOperationMode_MAX        = 2,

};

// Enum Dungeons.StatusEnum
enum class Dungeons_EStatusEnum : uint8_t
{
	StatusEnum__Success            = 0,
	StatusEnum__Fail               = 1,
	StatusEnum__StatusEnum_MAX     = 2,

};

// Enum Dungeons.EMapLoadType
enum class Dungeons_EMapLoadType : uint8_t
{
	EMapLoadType__Unset            = 0,
	EMapLoadType__StartLobbySession = 1,
	EMapLoadType__StartIngameSession = 2,
	EMapLoadType__OpenMenu         = 3,
	EMapLoadType__OpenIngame       = 4,
	EMapLoadType__OpenLobby        = 5,
	EMapLoadType__TravelIngameServer = 6,
	EMapLoadType__TravelIngameClient = 7,
	EMapLoadType__TravelLobbyServer = 8,
	EMapLoadType__TravelLobbyClient = 9,
	EMapLoadType__JoinIngameSession = 10,
	EMapLoadType__JoinLobbySession = 11,
	EMapLoadType__EMapLoadType_MAX = 12,

};

// Enum Dungeons.ELoadingScreenType
enum class Dungeons_ELoadingScreenType : uint8_t
{
	ELoadingScreenType__Menu       = 0,
	ELoadingScreenType__Level      = 1,
	ELoadingScreenType__Lobby      = 2,
	ELoadingScreenType__Count      = 3,
	ELoadingScreenType__ELoadingScreenType_MAX = 4,

};

// Enum Dungeons.EFriendInvitableStatus
enum class Dungeons_EFriendInvitableStatus : uint8_t
{
	EFriendInvitableStatus__Invitable = 0,
	EFriendInvitableStatus__BlockedDifferentPlatform = 1,
	EFriendInvitableStatus__BlockedInactive = 2,
	EFriendInvitableStatus__BlockedOnewayFriend = 3,
	EFriendInvitableStatus__BlockedSessionClosed = 4,
	EFriendInvitableStatus__BlockedInvalidPlayerId = 5,
	EFriendInvitableStatus__BlockedUnknownReason = 6,
	EFriendInvitableStatus__BlockedCrossplayEnabled = 7,
	EFriendInvitableStatus__BlockedCrossplayDisabled = 8,
	EFriendInvitableStatus__EFriendInvitableStatus_MAX = 9,

};

// Enum Dungeons.EFriendOnlineService
enum class Dungeons_EFriendOnlineService : uint8_t
{
	EFriendOnlineService__PSN      = 0,
	EFriendOnlineService__XBL      = 1,
	EFriendOnlineService__EFriendOnlineService_MAX = 2,

};

// Enum Dungeons.EFriendOnlineStatus
enum class Dungeons_EFriendOnlineStatus : uint8_t
{
	EFriendOnlineStatus__InGameSession = 0,
	EFriendOnlineStatus__Online    = 1,
	EFriendOnlineStatus__Offline   = 2,
	EFriendOnlineStatus__EFriendOnlineStatus_MAX = 3,

};

// Enum Dungeons.EFriendsFailureReason
enum class Dungeons_EFriendsFailureReason : uint8_t
{
	EFriendsFailureReason__OnlineSystemNotAvailable = 0,
	EFriendsFailureReason__InvalidPlayerController = 1,
	EFriendsFailureReason__FriendsSubSystemNotAvailable = 2,
	EFriendsFailureReason__InvalidUniqueNetworkId = 3,
	EFriendsFailureReason__Unknown = 4,
	EFriendsFailureReason__EFriendsFailureReason_MAX = 5,

};

// Enum Dungeons.EBootMode
enum class Dungeons_EBootMode : uint8_t
{
	EBootMode__Unset               = 0,
	EBootMode__InitialBoot         = 1,
	EBootMode__SwitchUser          = 2,
	EBootMode__UserSignedOut       = 3,
	EBootMode__EBootMode_MAX       = 4,

};

// Enum Dungeons.EStackCountDisplayPreference
enum class Dungeons_EStackCountDisplayPreference : uint8_t
{
	EStackCountDisplayPreference__AsCounter = 0,
	EStackCountDisplayPreference__AsPercentage = 1,
	EStackCountDisplayPreference__EStackCountDisplayPreference_MAX = 2,

};

// Enum Dungeons.EGameTrackingTypes
enum class Dungeons_EGameTrackingTypes : uint8_t
{
	EGameTrackingTypes__ChestsOpened = 0,
	EGameTrackingTypes__ChestsSpawned = 1,
	EGameTrackingTypes__DamageDealt = 2,
	EGameTrackingTypes__EmeraldsFound = 3,
	EGameTrackingTypes__EmeraldsSpawned = 4,
	EGameTrackingTypes__GearSpawned = 5,
	EGameTrackingTypes__GearPickedUp = 6,
	EGameTrackingTypes__MobsSpawned = 7,
	EGameTrackingTypes__MobsKilled = 8,
	EGameTrackingTypes__PlayerDamageTaken = 9,
	EGameTrackingTypes__PlayerDeaths = 10,
	EGameTrackingTypes__PlayerHealingDone = 11,
	EGameTrackingTypes__PlayerProjectileFired = 12,
	EGameTrackingTypes__PlayerProjectileHit = 13,
	EGameTrackingTypes__Size       = 14,
	EGameTrackingTypes__EGameTrackingTypes_MAX = 15,

};

// Enum Dungeons.CameraShakeSamplerOffsetType
enum class Dungeons_ECameraShakeSamplerOffsetType : uint8_t
{
	CameraShakeSamplerOffsetType__Relative = 0,
	CameraShakeSamplerOffsetType__Absolute = 1,
	CameraShakeSamplerOffsetType__InverseAbsolute = 2,
	CameraShakeSamplerOffsetType__CameraShakeSamplerOffsetType_MAX = 3,

};

// Enum Dungeons.EEmote
enum class Dungeons_EEmote : uint8_t
{
	EEmote__INVALID                = 0,
	EEmote__ComeHere               = 1,
	EEmote__Thanks                 = 2,
	EEmote__Ok                     = 3,
	EEmote__NeedArrows             = 4,
	EEmote__Wait                   = 5,
	EEmote__NeedHealth             = 6,
	EEmote__No                     = 7,
	EEmote__SuppliesHere           = 8,
	EEmote__COUNT                  = 9,
	EEmote__EEmote_MAX             = 10,

};

// Enum Dungeons.EEnchantersTomeFlags
enum class Dungeons_EEnchantersTomeFlags : uint8_t
{
	EEnchantersTomeFlags__None     = 0,
	EEnchantersTomeFlags__Absolute = 1,
	EEnchantersTomeFlags__Pet      = 2,
	EEnchantersTomeFlags__Player   = 3,
	EEnchantersTomeFlags__EEnchantersTomeFlags_MAX = 4,

};

// Enum Dungeons.EEnchantmentTag
enum class Dungeons_EEnchantmentTag : uint8_t
{
	EEnchantmentTag__Stacking      = 0,
	EEnchantmentTag__Multi         = 1,
	EEnchantmentTag__SoulUsage     = 2,
	EEnchantmentTag__ChargingWeaponsOnly = 3,
	EEnchantmentTag__EEnchantmentTag_MAX = 4,

};

// Enum Dungeons.EEnchantmentRarity
enum class Dungeons_EEnchantmentRarity : uint8_t
{
	EEnchantmentRarity__Common     = 0,
	EEnchantmentRarity__Powerful   = 1,
	EEnchantmentRarity__EEnchantmentRarity_MAX = 2,

};

// Enum Dungeons.EEnchantmentClassification
enum class Dungeons_EEnchantmentClassification : uint8_t
{
	EEnchantmentClassification__Unset = 0,
	EEnchantmentClassification__Damage = 1,
	EEnchantmentClassification__Offense = 2,
	EEnchantmentClassification__Defense = 3,
	EEnchantmentClassification__EEnchantmentClassification_MAX = 4,

};

// Enum Dungeons.EEntitlementsSource
enum class Dungeons_EEntitlementsSource : uint8_t
{
	EEntitlementsSource__Invalid   = 0,
	EEntitlementsSource__Development = 1,
	EEntitlementsSource__MinecraftNet = 2,
	EEntitlementsSource__WindowsStore = 3,
	EEntitlementsSource__XBL       = 4,
	EEntitlementsSource__PSN       = 5,
	EEntitlementsSource__Nintendo  = 6,
	EEntitlementsSource__EpicStore = 7,
	EEntitlementsSource__EEntitlementsSource_MAX = 8,

};

// Enum Dungeons.EMessageType
enum class Dungeons_EMessageType : uint8_t
{
	OneButton                      = 0,
	TwoButton                      = 1,
	EMessageType_MAX               = 2,

};

// Enum Dungeons.EExtraChallenge
enum class Dungeons_EExtraChallenge : uint8_t
{
	EExtraChallenge__Invalid       = 0,
	EExtraChallenge__NoExtraChallenge = 1,
	EExtraChallenge__Challenge     = 2,
	EExtraChallenge__Challenge01   = 3,
	EExtraChallenge__Challenge02   = 4,
	EExtraChallenge__ENUM_COUNT    = 5,
	EExtraChallenge__EExtraChallenge_MAX = 6,

};

// Enum Dungeons.EHierarchyPlacementComparison
enum class Dungeons_EHierarchyPlacementComparison : uint8_t
{
	EHierarchyPlacementComparison__Above = 0,
	EHierarchyPlacementComparison__Below = 1,
	EHierarchyPlacementComparison__Same = 2,
	EHierarchyPlacementComparison__None = 3,
	EHierarchyPlacementComparison__EHierarchyPlacementComparison_MAX = 4,

};

// Enum Dungeons.AGameBPInternal_EServerLoadingState
enum class Dungeons_EAGameBPInternal_EServerLoadingState : uint8_t
{
	AGameBPInternal_EServerLoadingState__Loading = 0,
	AGameBPInternal_EServerLoadingState__ReadyForPlayers = 1,
	AGameBPInternal_EServerLoadingState__Started = 2,
	AGameBPInternal_EServerLoadingState__AGameBPInternal_MAX = 3,

};

// Enum Dungeons.NavAreaType
enum class Dungeons_ENavAreaType : uint8_t
{
	NavAreaType__Ground            = 0,
	NavAreaType__Lava              = 1,
	NavAreaType__NavAreaType_MAX   = 2,

};

// Enum Dungeons.EPresetValue
enum class Dungeons_EPresetValue : uint8_t
{
	EPresetValue__Off              = 0,
	EPresetValue__Low              = 1,
	EPresetValue__Medium           = 2,
	EPresetValue__High             = 3,
	EPresetValue__On               = 4,
	EPresetValue__EPresetValue_MAX = 5,

};

// Enum Dungeons.EEnemyOutlineColours
enum class Dungeons_EEnemyOutlineColours : uint8_t
{
	EEnemyOutlineColours__Red      = 0,
	EEnemyOutlineColours__Orange   = 1,
	EEnemyOutlineColours__Yellow   = 2,
	EEnemyOutlineColours__Gold     = 3,
	EEnemyOutlineColours__Green    = 4,
	EEnemyOutlineColours__MintGreen = 5,
	EEnemyOutlineColours__Pink     = 6,
	EEnemyOutlineColours__Magenta  = 7,
	EEnemyOutlineColours__Purple   = 8,
	EEnemyOutlineColours__Lavender = 9,
	EEnemyOutlineColours__White    = 10,
	EEnemyOutlineColours__EEnemyOutlineColours_MAX = 11,

};

// Enum Dungeons.EConfigurationType
enum class Dungeons_EConfigurationType : uint8_t
{
	EConfigurationType__E_CONFIG_DEBUG = 0,
	EConfigurationType__E_CONFIG_DEVELOPMENT = 1,
	EConfigurationType__E_CONFIG_TEST = 2,
	EConfigurationType__E_CONFIG_SHIPPING = 3,
	EConfigurationType__E_CONFIG_MAX = 4,

};

// Enum Dungeons.ESubPlatformType
enum class Dungeons_ESubPlatformType : uint8_t
{
	ESubPlatformType__E_SUBPLATFORM_BASE = 0,
	ESubPlatformType__E_SUBPLATFORM_XBONE_S = 1,
	ESubPlatformType__E_SUBPLATFORM_XBONE_X = 2,
	ESubPlatformType__E_SUBPLATFORM_XBONE_LOCKHART = 3,
	ESubPlatformType__E_SUBPLATFORM_XBONE_SERIES_X = 4,
	ESubPlatformType__E_SUBPLATFORM_PS4_PRO = 5,
	ESubPlatformType__E_SUBPLATFORM_PS5 = 6,
	ESubPlatformType__E_SUBPLATFORM_MAX = 7,

};

// Enum Dungeons.EPlatformType
enum class Dungeons_EPlatformType : uint8_t
{
	EPlatformType__E_PLATFORM_XBONE = 0,
	EPlatformType__E_PLATFORM_PC   = 1,
	EPlatformType__E_PLATFORM_PS4  = 2,
	EPlatformType__E_PLATFORM_SWITCH = 3,
	EPlatformType__E_PLATFORM_MAC  = 4,
	EPlatformType__E_PLATFORM_IOS  = 5,
	EPlatformType__E_PLATFORM_ANDROID = 6,
	EPlatformType__E_PLATFORM_LINUX = 7,
	EPlatformType__E_PLATFORM_MAX  = 8,

};

// Enum Dungeons.EDamageComponent
enum class Dungeons_EDamageComponent : uint8_t
{
	EDamageComponent__Default      = 0,
	EDamageComponent__Melee        = 1,
	EDamageComponent__Projectile   = 2,
	EDamageComponent__Explosion    = 3,
	EDamageComponent__Fall         = 4,
	EDamageComponent__Potion       = 5,
	EDamageComponent__AOE          = 6,
	EDamageComponent__Item         = 7,
	EDamageComponent__Harvester    = 8,
	EDamageComponent__Magic        = 9,
	EDamageComponent__KillZone     = 10,
	EDamageComponent__EDamageComponent_MAX = 11,

};

// Enum Dungeons.ESpawnActorSnappingMode
enum class Dungeons_ESpawnActorSnappingMode : uint8_t
{
	ESpawnActorSnappingMode__None  = 0,
	ESpawnActorSnappingMode__SnapXY = 1,
	ESpawnActorSnappingMode__Snap  = 2,
	ESpawnActorSnappingMode__ESpawnActorSnappingMode_MAX = 3,

};

// Enum Dungeons.ESpawnActorDefaultTransform
enum class Dungeons_ESpawnActorDefaultTransform : uint8_t
{
	ESpawnActorDefaultTransform__ProjectileTransform = 0,
	ESpawnActorDefaultTransform__ImpactLocation = 1,
	ESpawnActorDefaultTransform__BelowCharacter = 2,
	ESpawnActorDefaultTransform__ESpawnActorDefaultTransform_MAX = 3,

};

// Enum Dungeons.EEffectLevelSource
enum class Dungeons_EEffectLevelSource : uint8_t
{
	EEffectLevelSource__RangedWeapon = 0,
	EEffectLevelSource__SourceItem = 1,
	EEffectLevelSource__EEffectLevelSource_MAX = 2,

};

// Enum Dungeons.EImpactTriggerType
enum class Dungeons_EImpactTriggerType : uint8_t
{
	EImpactTriggerType__Final      = 0,
	EImpactTriggerType__Always     = 1,
	EImpactTriggerType__EImpactTriggerType_MAX = 2,

};

// Enum Dungeons.EBalloonItemDescriptionBehavior
enum class Dungeons_EBalloonItemDescriptionBehavior : uint8_t
{
	EBalloonItemDescriptionBehavior__Detailed = 0,
	EBalloonItemDescriptionBehavior__Collapsed = 1,
	EBalloonItemDescriptionBehavior__EBalloonItemDescriptionBehavior_MAX = 2,

};

// Enum Dungeons.EBalloonTipBehavior
enum class Dungeons_EBalloonTipBehavior : uint8_t
{
	EBalloonTipBehavior__AlwaysVisible = 0,
	EBalloonTipBehavior__VisibleOnHover = 1,
	EBalloonTipBehavior__Hidden    = 2,
	EBalloonTipBehavior__EBalloonTipBehavior_MAX = 3,

};

// Enum Dungeons.EClickyEnum
enum class Dungeons_EClickyEnum : uint8_t
{
	EClickyEnum__CE_MapTable       = 0,
	EClickyEnum__CE_Inventory      = 1,
	EClickyEnum__CE_LobbyChest     = 2,
	EClickyEnum__CE_Interactable   = 3,
	EClickyEnum__CE_Item           = 4,
	EClickyEnum__CE_IceBlock       = 5,
	EClickyEnum__CE_Merchant       = 6,
	EClickyEnum__CE_Disabled       = 7,
	EClickyEnum__CE_MAX            = 8,

};

// Enum Dungeons.EItemAnnouncementType
enum class Dungeons_EItemAnnouncementType : uint8_t
{
	EItemAnnouncementType__UNSET   = 0,
	EItemAnnouncementType__PURCHASED = 1,
	EItemAnnouncementType__GIFT_SENT = 2,
	EItemAnnouncementType__GIFT_RECEIVED = 3,
	EItemAnnouncementType__UPGRADED = 4,
	EItemAnnouncementType__COLLECTED = 5,
	EItemAnnouncementType__RECEIVED = 6,
	EItemAnnouncementType__EItemAnnouncementType_MAX = 7,

};

// Enum Dungeons.EItemArchetype
enum class Dungeons_EItemArchetype : uint8_t
{
	EItemArchetype__Acrobat        = 0,
	EItemArchetype__Archer         = 1,
	EItemArchetype__Fighter        = 2,
	EItemArchetype__Mage           = 3,
	EItemArchetype__Soul           = 4,
	EItemArchetype__Summoner       = 5,
	EItemArchetype__Support        = 6,
	EItemArchetype__Tank           = 7,
	EItemArchetype__Special        = 8,
	EItemArchetype__EItemArchetype_MAX = 9,

};

// Enum Dungeons.EBulletIcon
enum class Dungeons_EBulletIcon : uint8_t
{
	EBulletIcon__Generic           = 0,
	EBulletIcon__ItemPower         = 1,
	EBulletIcon__SoulGather        = 2,
	EBulletIcon__SoulUse           = 3,
	EBulletIcon__Cooldown          = 4,
	EBulletIcon__Common            = 5,
	EBulletIcon__Rare              = 6,
	EBulletIcon__Unique            = 7,
	EBulletIcon__Netherite         = 8,
	EBulletIcon__SeasonalLimited   = 9,
	EBulletIcon__EnchantmentPoint  = 10,
	EBulletIcon__Archetype         = 11,
	EBulletIcon__Gold              = 12,
	EBulletIcon__ExperienceLevel   = 13,
	EBulletIcon__EBulletIcon_MAX   = 14,

};

// Enum Dungeons.EDropGeneratorCategory
enum class Dungeons_EDropGeneratorCategory : uint8_t
{
	EDropGeneratorCategory__Food   = 0,
	EDropGeneratorCategory__Consumable = 1,
	EDropGeneratorCategory__Arrow  = 2,
	EDropGeneratorCategory__Emerald = 3,
	EDropGeneratorCategory__Gold   = 4,
	EDropGeneratorCategory__Gear   = 5,
	EDropGeneratorCategory__Token  = 6,
	EDropGeneratorCategory__PermanentItem = 7,
	EDropGeneratorCategory__LootTable = 8,
	EDropGeneratorCategory__LootTableIncludeChildren = 9,
	EDropGeneratorCategory__EDropGeneratorCategory_MAX = 10,

};

// Enum Dungeons.EDropCategory
enum class Dungeons_EDropCategory : uint8_t
{
	EDropCategory__Food            = 0,
	EDropCategory__Consumable      = 1,
	EDropCategory__Potion          = 2,
	EDropCategory__Arrow           = 3,
	EDropCategory__Emerald         = 4,
	EDropCategory__Gold            = 5,
	EDropCategory__Gear            = 6,
	EDropCategory__Token           = 7,
	EDropCategory__None            = 8,
	EDropCategory__PermanentItem   = 9,
	EDropCategory__EDropCategory_MAX = 10,

};

// Enum Dungeons.EDropSpawnType
enum class Dungeons_EDropSpawnType : uint8_t
{
	EDropSpawnType__All            = 0,
	EDropSpawnType__Individual     = 1,
	EDropSpawnType__Shared         = 2,
	EDropSpawnType__EDropSpawnType_MAX = 3,

};

// Enum Dungeons.EItemRarityChanceCategory
enum class Dungeons_EItemRarityChanceCategory : uint8_t
{
	EItemRarityChanceCategory__Mob = 0,
	EItemRarityChanceCategory__Boss = 1,
	EItemRarityChanceCategory__WoodenChest = 2,
	EItemRarityChanceCategory__FancyChest = 3,
	EItemRarityChanceCategory__DeluxeChest = 4,
	EItemRarityChanceCategory__LobbyChest = 5,
	EItemRarityChanceCategory__MissionEnd = 6,
	EItemRarityChanceCategory__PiggyBank = 7,
	EItemRarityChanceCategory__ProgressCommand = 8,
	EItemRarityChanceCategory__Default = 9,
	EItemRarityChanceCategory__EnchantedMobGroup = 10,
	EItemRarityChanceCategory__EventMob = 11,
	EItemRarityChanceCategory__VillageMerchant = 12,
	EItemRarityChanceCategory__LuxuryMerchant = 13,
	EItemRarityChanceCategory__PiglinMerchant = 14,
	EItemRarityChanceCategory__MysteryBox = 15,
	EItemRarityChanceCategory__OnlyCommon = 16,
	EItemRarityChanceCategory__AncientMob = 17,
	EItemRarityChanceCategory__EItemRarityChanceCategory_MAX = 18,

};

// Enum Dungeons.EEquipmentSource
enum class Dungeons_EEquipmentSource : uint8_t
{
	EEquipmentSource__PickUp       = 0,
	EEquipmentSource__Inventory    = 1,
	EEquipmentSource__Crafted      = 2,
	EEquipmentSource__EEquipmentSource_MAX = 3,

};

// Enum Dungeons.EEquipmentSlot
enum class Dungeons_EEquipmentSlot : uint8_t
{
	EEquipmentSlot__HotbarSlot1    = 0,
	EEquipmentSlot__HotbarSlot2    = 1,
	EEquipmentSlot__HotbarSlot3    = 2,
	EEquipmentSlot__MeleeGear      = 3,
	EEquipmentSlot__RangedGear     = 4,
	EEquipmentSlot__ArmorGear      = 5,
	EEquipmentSlot__Invalid        = 6,
	EEquipmentSlot__EEquipmentSlot_MAX = 7,

};

// Enum Dungeons.EItemPowerComparison
enum class Dungeons_EItemPowerComparison : uint8_t
{
	EItemPowerComparison__NONE     = 0,
	EItemPowerComparison__Better   = 1,
	EItemPowerComparison__Same     = 2,
	EItemPowerComparison__Worse    = 3,
	EItemPowerComparison__EItemPowerComparison_MAX = 4,

};

// Enum Dungeons.EItemStats
enum class Dungeons_EItemStats : uint8_t
{
	EItemStats__Invalid            = 0,
	EItemStats__AverageDamage      = 1,
	EItemStats__AttackSpeed        = 2,
	EItemStats__QuiverAmmo         = 3,
	EItemStats__AreaDamage         = 4,
	EItemStats__DamagePerSec       = 5,
	EItemStats__DamagePerQuiver    = 6,
	EItemStats__DamagePerVolley    = 7,
	EItemStats__ArrowSpeed         = 8,
	EItemStats__AverageArea        = 9,
	EItemStats__PushbackStr        = 10,
	EItemStats__HitSnappiness      = 11,
	EItemStats__RechargeSpeed      = 12,
	EItemStats__LowestDamage       = 13,
	EItemStats__HighestDamage      = 14,
	EItemStats__DamagePerSecond    = 15,
	EItemStats__ProjectilesPerAttack = 16,
	EItemStats__DamageBoost        = 17,
	EItemStats__LowestHealthHealed = 18,
	EItemStats__HighestHealthHealed = 19,
	EItemStats__StunDuration       = 20,
	EItemStats__BlocksPushed       = 21,
	EItemStats__Health             = 22,
	EItemStats__NUM_ESTIMATES      = 23,
	EItemStats__EItemStats_MAX     = 24,

};

// Enum Dungeons.EItemEventType
enum class Dungeons_EItemEventType : uint8_t
{
	EItemEventType__None           = 0,
	EItemEventType__Spooky         = 1,
	EItemEventType__Winter         = 2,
	EItemEventType__Year1          = 3,
	EItemEventType__EItemEventType_MAX = 4,

};

// Enum Dungeons.RangedWeaponType
enum class Dungeons_ERangedWeaponType : uint8_t
{
	RangedWeaponType__None         = 0,
	RangedWeaponType__Bow          = 1,
	RangedWeaponType__Crossbow     = 2,
	RangedWeaponType__RangedWeaponType_MAX = 3,

};

// Enum Dungeons.ESlotType
enum class Dungeons_ESlotType : uint8_t
{
	ESlotType__HealthPotion        = 0,
	ESlotType__Arrow               = 1,
	ESlotType__BurningArrow        = 2,
	ESlotType__FireworksArrow      = 3,
	ESlotType__TormentProjectile   = 4,
	ESlotType__HeavyHarpoon        = 5,
	ESlotType__ThunderingArrow     = 6,
	ESlotType__TNT                 = 7,
	ESlotType__Trident             = 8,
	ESlotType__Conduit             = 9,
	ESlotType__ActivePermanent     = 10,
	ESlotType__Consumable          = 11,
	ESlotType__MeleeWeapon         = 12,
	ESlotType__RangedWeapon        = 13,
	ESlotType__Armor               = 14,
	ESlotType__Any                 = 15,
	ESlotType__None                = 16,
	ESlotType__Last                = 17,
	ESlotType__ESlotType_MAX       = 18,

};

// Enum Dungeons.ItemTagLevel
enum class Dungeons_EItemTagLevel : uint8_t
{
	ItemTagLevel__Normal           = 0,
	ItemTagLevel__Bright           = 1,
	ItemTagLevel__Diamond          = 2,
	ItemTagLevel__Last             = 3,
	ItemTagLevel__ItemTagLevel_MAX = 4,

};

// Enum Dungeons.ItemTag
enum class Dungeons_EItemTag : uint8_t
{
	ItemTag__Unset                 = 0,
	ItemTag__HealthPotion          = 1,
	ItemTag__Arrow                 = 2,
	ItemTag__BurningArrow          = 3,
	ItemTag__FireworksArrow        = 4,
	ItemTag__TormentProjectile     = 5,
	ItemTag__ThunderingArrow       = 6,
	ItemTag__HeavyHarpoon          = 7,
	ItemTag__MeleeWeapon           = 8,
	ItemTag__RangedWeapon          = 9,
	ItemTag__Armor                 = 10,
	ItemTag__Currency              = 11,
	ItemTag__Item                  = 12,
	ItemTag__Token                 = 13,
	ItemTag__Food                  = 14,
	ItemTag__Potion                = 15,
	ItemTag__Last                  = 16,
	ItemTag__ItemTag_MAX           = 17,

};

// Enum Dungeons.EKeybindDefaultConfig
enum class Dungeons_EKeybindDefaultConfig : uint8_t
{
	EKeybindDefaultConfig__Keyboard1 = 0,
	EKeybindDefaultConfig__Gamepad1 = 1,
	EKeybindDefaultConfig__JoyconL1 = 2,
	EKeybindDefaultConfig__JoyconR1 = 3,
	EKeybindDefaultConfig__EKeybindDefaultConfig_MAX = 4,

};

// Enum Dungeons.EKeybindPlatform
enum class Dungeons_EKeybindPlatform : uint8_t
{
	EKeybindPlatform__KeyboardMouse = 0,
	EKeybindPlatform__Gamepad      = 1,
	EKeybindPlatform__JoyconL      = 2,
	EKeybindPlatform__JoyconR      = 3,
	EKeybindPlatform__EKeybindPlatform_MAX = 4,

};

// Enum Dungeons.EMaterialTypeEnum
enum class Dungeons_EMaterialTypeEnum : uint8_t
{
	EMaterialTypeEnum__Air         = 0,
	EMaterialTypeEnum__Dirt        = 1,
	EMaterialTypeEnum__Wood        = 2,
	EMaterialTypeEnum__Stone       = 3,
	EMaterialTypeEnum__Metal       = 4,
	EMaterialTypeEnum__Water       = 5,
	EMaterialTypeEnum__Lava        = 6,
	EMaterialTypeEnum__Leaves      = 7,
	EMaterialTypeEnum__Plant       = 8,
	EMaterialTypeEnum__ReplaceablePlant = 9,
	EMaterialTypeEnum__Sponge      = 10,
	EMaterialTypeEnum__Cloth       = 11,
	EMaterialTypeEnum__Bed         = 12,
	EMaterialTypeEnum__Fire        = 13,
	EMaterialTypeEnum__Sand        = 14,
	EMaterialTypeEnum__Decoration  = 15,
	EMaterialTypeEnum__Glass       = 16,
	EMaterialTypeEnum__Explosive   = 17,
	EMaterialTypeEnum__Ice         = 18,
	EMaterialTypeEnum__PackedIce   = 19,
	EMaterialTypeEnum__TopSnow     = 20,
	EMaterialTypeEnum__Snow        = 21,
	EMaterialTypeEnum__Cactus      = 22,
	EMaterialTypeEnum__Clay        = 23,
	EMaterialTypeEnum__Vegetable   = 24,
	EMaterialTypeEnum__Portal      = 25,
	EMaterialTypeEnum__Cake        = 26,
	EMaterialTypeEnum__Web         = 27,
	EMaterialTypeEnum__RedstoneWire = 28,
	EMaterialTypeEnum__Carpet      = 29,
	EMaterialTypeEnum__BuildableGlass = 30,
	EMaterialTypeEnum__Slime       = 31,
	EMaterialTypeEnum__Piston      = 32,
	EMaterialTypeEnum__Allow       = 33,
	EMaterialTypeEnum__Deny        = 34,
	EMaterialTypeEnum__SlippyFloor = 35,
	EMaterialTypeEnum__SurfaceTypeTotal = 36,
	EMaterialTypeEnum__Any         = 37,
	EMaterialTypeEnum__EMaterialTypeEnum_MAX = 38,

};

// Enum Dungeons.ECharacterLoadoutType
enum class Dungeons_ECharacterLoadoutType : uint8_t
{
	ECharacterLoadoutType__DefaultLoadout = 0,
	ECharacterLoadoutType__TutorialLoadout = 1,
	ECharacterLoadoutType__ECharacterLoadoutType_MAX = 2,

};

// Enum Dungeons.ELobbyNames
enum class Dungeons_ELobbyNames : uint8_t
{
	ELobbyNames__Invalid           = 0,
	ELobbyNames__lobby             = 1,
	ELobbyNames__ELobbyNames_MAX   = 2,

};

// Enum Dungeons.ELevelVariationType
enum class Dungeons_ELevelVariationType : uint8_t
{
	ELevelVariationType__Invalid   = 0,
	ELevelVariationType__none      = 1,
	ELevelVariationType__daily     = 2,
	ELevelVariationType__weekly    = 3,
	ELevelVariationType__seasonal  = 4,
	ELevelVariationType__ELevelVariationType_MAX = 5,

};

// Enum Dungeons.ELoadingState
enum class Dungeons_ELoadingState : uint8_t
{
	ELoadingState__Idle            = 0,
	ELoadingState__Loading         = 1,
	ELoadingState__TearingDown     = 2,
	ELoadingState__ELoadingState_MAX = 3,

};

// Enum Dungeons.DungeonsLocale
enum class Dungeons_EDungeonsLocale : uint8_t
{
	DungeonsLocale__en             = 0,
	DungeonsLocale__deDE           = 1,
	DungeonsLocale__frFR           = 2,
	DungeonsLocale__esES           = 3,
	DungeonsLocale__esMX           = 4,
	DungeonsLocale__itIT           = 5,
	DungeonsLocale__jaJP           = 6,
	DungeonsLocale__koKR           = 7,
	DungeonsLocale__plPL           = 8,
	DungeonsLocale__ptPT           = 9,
	DungeonsLocale__ptBR           = 10,
	DungeonsLocale__ruRU           = 11,
	DungeonsLocale__svSE           = 12,
	DungeonsLocale__zhCN           = 13,
	DungeonsLocale__zhTW           = 14,
	DungeonsLocale__DungeonsLocale_MAX = 15,

};

// Enum Dungeons.ELootType
enum class Dungeons_ELootType : uint8_t
{
	ELootType__WoodenChest         = 0,
	ELootType__FancyChest          = 1,
	ELootType__ELootType_MAX       = 2,

};

// Enum Dungeons.EMapPinLevel
enum class Dungeons_EMapPinLevel : uint8_t
{
	EMapPinLevel__LOW              = 0,
	EMapPinLevel__NORMAL           = 1,
	EMapPinLevel__HIGH             = 2,
	EMapPinLevel__EMapPinLevel_MAX = 3,

};

// Enum Dungeons.EMapHeightThreshold
enum class Dungeons_EMapHeightThreshold : uint8_t
{
	EMapHeightThreshold__BelowThreshold = 0,
	EMapHeightThreshold__WithinThreshold = 1,
	EMapHeightThreshold__AboveThreshold = 2,
	EMapHeightThreshold__EMapHeightThreshold_MAX = 3,

};

// Enum Dungeons.EMapTextureSampler
enum class Dungeons_EMapTextureSampler : uint8_t
{
	EMapTextureSampler__Size1x1    = 0,
	EMapTextureSampler__Size2x2    = 1,
	EMapTextureSampler__EMapTextureSampler_MAX = 2,

};

// Enum Dungeons.EOutsideBoundBehavior
enum class Dungeons_EOutsideBoundBehavior : uint8_t
{
	EOutsideBoundBehavior__RevealExplored = 0,
	EOutsideBoundBehavior__RevealAlways = 1,
	EOutsideBoundBehavior__EOutsideBoundBehavior_MAX = 2,

};

// Enum Dungeons.EMapType
enum class Dungeons_EMapType : uint8_t
{
	EMapType__UNSET                = 0,
	EMapType__Fullscreen           = 1,
	EMapType__Overlay              = 2,
	EMapType__EMapType_MAX         = 3,

};

// Enum Dungeons.EMeleeAttackVariantType
enum class Dungeons_EMeleeAttackVariantType : uint8_t
{
	EMeleeAttackVariantType__TargetAndSplash = 0,
	EMeleeAttackVariantType__DistanceBased = 1,
	EMeleeAttackVariantType__EMeleeAttackVariantType_MAX = 2,

};

// Enum Dungeons.EMerchantTransactionStatusReason
enum class Dungeons_EMerchantTransactionStatusReason : uint8_t
{
	EMerchantTransactionStatusReason__UNSET = 0,
	EMerchantTransactionStatusReason__CANT_AFFORD = 1,
	EMerchantTransactionStatusReason__INVENTORY_FULL = 2,
	EMerchantTransactionStatusReason__RECIPIENT_INVENTORY_FULL = 3,
	EMerchantTransactionStatusReason__NO_SLOT_SELECTED = 4,
	EMerchantTransactionStatusReason__SLOT_LOCKED = 5,
	EMerchantTransactionStatusReason__SLOT_OCCUPIED = 6,
	EMerchantTransactionStatusReason__ITEM_LOCKED = 7,
	EMerchantTransactionStatusReason__NO_ITEM_SELECTED = 8,
	EMerchantTransactionStatusReason__NO_INVENTORY_SLOT_SELECTED = 9,
	EMerchantTransactionStatusReason__NO_INVENTORY_ITEM_SELECTED = 10,
	EMerchantTransactionStatusReason__NO_REGIFTING = 11,
	EMerchantTransactionStatusReason__NO_GIFTING_TO_SELF = 12,
	EMerchantTransactionStatusReason__CANT_GIFT_CLONES = 13,
	EMerchantTransactionStatusReason__NO_PLAYER_SELECTED = 14,
	EMerchantTransactionStatusReason__ALREADY_RESERVED = 15,
	EMerchantTransactionStatusReason__NOT_RESERVED = 16,
	EMerchantTransactionStatusReason__NOTHING_TO_RESTOCK = 17,
	EMerchantTransactionStatusReason__NOTHING_TO_WITHDRAW = 18,
	EMerchantTransactionStatusReason__OFFER_AT_LEAST_ONE_ITEM = 19,
	EMerchantTransactionStatusReason__MISSION_VOTE_IN_PROGRESS = 20,
	EMerchantTransactionStatusReason__MISSION_DISABLED = 21,
	EMerchantTransactionStatusReason__CANNOT_OFFER_GILDED_ITEMS = 22,
	EMerchantTransactionStatusReason__CANNOT_OFFER_CLONED_ITEMS = 23,
	EMerchantTransactionStatusReason__OFFERING_PROBLEM = 24,
	EMerchantTransactionStatusReason__NOT_A_HYPERMISSION = 25,
	EMerchantTransactionStatusReason__GIFT_ITEM = 26,
	EMerchantTransactionStatusReason__BUY_ITEM = 27,
	EMerchantTransactionStatusReason__COLLECT_ITEM = 28,
	EMerchantTransactionStatusReason__UPGRADE_COLLECT_ITEM = 29,
	EMerchantTransactionStatusReason__UPGRADE_ITEM = 30,
	EMerchantTransactionStatusReason__RESERVE_ITEM = 31,
	EMerchantTransactionStatusReason__UNRESERVE_ITEM = 32,
	EMerchantTransactionStatusReason__OFFER_ITEM = 33,
	EMerchantTransactionStatusReason__WITHDRAW_ITEM = 34,
	EMerchantTransactionStatusReason__CONFIRM_OFFERINGS = 35,
	EMerchantTransactionStatusReason__RESTOCK = 36,
	EMerchantTransactionStatusReason__EMerchantTransactionStatusReason_MAX = 37,

};

// Enum Dungeons.EMissionChancesType
enum class Dungeons_EMissionChancesType : uint8_t
{
	EMissionChancesType__Gear      = 0,
	EMissionChancesType__Artifacts = 1,
	EMissionChancesType__Rewards   = 2,
	EMissionChancesType__Ancients  = 3,
	EMissionChancesType__EMissionChancesType_MAX = 4,

};

// Enum Dungeons.EMobStatus
enum class Dungeons_EMobStatus : uint8_t
{
	EMobStatus__NotDefeated        = 0,
	EMobStatus__Defeated           = 1,
	EMobStatus__NotOwningDLC       = 2,
	EMobStatus__EMobStatus_MAX     = 3,

};

// Enum Dungeons.EInfoChanceIcon
enum class Dungeons_EInfoChanceIcon : uint8_t
{
	EInfoChanceIcon__None          = 0,
	EInfoChanceIcon__Average       = 1,
	EInfoChanceIcon__EInfoChanceIcon_MAX = 2,

};

// Enum Dungeons.EThreatDescriptionType
enum class Dungeons_EThreatDescriptionType : uint8_t
{
	EThreatDescriptionType__Default = 0,
	EThreatDescriptionType__EndlessStruggle = 1,
	EThreatDescriptionType__EThreatDescriptionType_MAX = 2,

};

// Enum Dungeons.EMissionEditor
enum class Dungeons_EMissionEditor : uint8_t
{
	EMissionEditor__Difficulty     = 0,
	EMissionEditor__Offerings      = 1,
	EMissionEditor__EMissionEditor_MAX = 2,

};

// Enum Dungeons.EMissionInterest
enum class Dungeons_EMissionInterest : uint8_t
{
	EMissionInterest__UNSET        = 0,
	EMissionInterest__NEW_MISSION  = 1,
	EMissionInterest__NEW_REWARD   = 2,
	EMissionInterest__NEW_MERCHANT = 3,
	EMissionInterest__NEW_LOCATION = 4,
	EMissionInterest__NEW_BOSS     = 5,
	EMissionInterest__PLAYABLE     = 6,
	EMissionInterest__EMissionInterest_MAX = 7,

};

// Enum Dungeons.EAnimationState
enum class Dungeons_EAnimationState : uint8_t
{
	EAnimationState__Empty         = 0,
	EAnimationState__Intro         = 1,
	EAnimationState__Start         = 2,
	EAnimationState__Update        = 3,
	EAnimationState__Complete      = 4,
	EAnimationState__Invalid       = 5,
	EAnimationState__EAnimationState_MAX = 6,

};

// Enum Dungeons.EObjectiveDisplayMode
enum class Dungeons_EObjectiveDisplayMode : uint8_t
{
	EObjectiveDisplayMode__InitLevel = 0,
	EObjectiveDisplayMode__NewSubobjective = 1,
	EObjectiveDisplayMode__NewMainObjective = 2,
	EObjectiveDisplayMode__EObjectiveDisplayMode_MAX = 3,

};

// Enum Dungeons.EMissionRequestType
enum class Dungeons_EMissionRequestType : uint8_t
{
	EMissionRequestType__Start     = 0,
	EMissionRequestType__Continue  = 1,
	EMissionRequestType__EMissionRequestType_MAX = 2,

};

// Enum Dungeons.EMobSpawnProperties
enum class Dungeons_EMobSpawnProperties : uint8_t
{
	EMobSpawnProperties__EM_Revealed = 0,
	EMobSpawnProperties__EM_Underling = 1,
	EMobSpawnProperties__EM_BlockMusicOverride = 2,
	EMobSpawnProperties__EM_MAX    = 3,

};

// Enum Dungeons.EMobGroupAttackedState
enum class Dungeons_EMobGroupAttackedState : uint8_t
{
	EMobGroupAttackedState__Normal = 0,
	EMobGroupAttackedState__Flee   = 1,
	EMobGroupAttackedState__Agressive = 2,
	EMobGroupAttackedState__EMobGroupAttackedState_MAX = 3,

};

// Enum Dungeons.EMobState2
enum class Dungeons_EMobState2 : uint8_t
{
	EMobState2__Idle               = 0,
	EMobState2__Combat             = 1,
	EMobState2__Staggered          = 2,
	EMobState2__Fleeing            = 3,
	EMobState2__EMobState2_MAX     = 4,

};

// Enum Dungeons.EMouseCursorStates
enum class Dungeons_EMouseCursorStates : uint8_t
{
	EMouseCursorStates__UNSET      = 0,
	EMouseCursorStates__Move       = 1,
	EMouseCursorStates__MoveHeld   = 2,
	EMouseCursorStates__Attack     = 3,
	EMouseCursorStates__AttackHeld = 4,
	EMouseCursorStates__Interact   = 5,
	EMouseCursorStates__InteractHeld = 6,
	EMouseCursorStates__Drag       = 7,
	EMouseCursorStates__DragHeld   = 8,
	EMouseCursorStates__Invisible  = 9,
	EMouseCursorStates__EMouseCursorStates_MAX = 10,

};

// Enum Dungeons.EDungeonsMusicPriority
enum class Dungeons_EDungeonsMusicPriority : uint8_t
{
	EDungeonsMusicPriority__BackgroundMusic = 0,
	EDungeonsMusicPriority__SubDungeonsMusic = 1,
	EDungeonsMusicPriority__LevelIntroMusic = 2,
	EDungeonsMusicPriority__BossEncounterMusic = 3,
	EDungeonsMusicPriority__SideQuestMusic = 4,
	EDungeonsMusicPriority__EventMusic = 5,
	EDungeonsMusicPriority__UIMusic = 6,
	EDungeonsMusicPriority__Top    = 7,
	EDungeonsMusicPriority__EDungeonsMusicPriority_MAX = 8,

};

// Enum Dungeons.EMusicSequenceState
enum class Dungeons_EMusicSequenceState : uint8_t
{
	EMusicSequenceState__Intro     = 0,
	EMusicSequenceState__Main      = 1,
	EMusicSequenceState__Outro     = 2,
	EMusicSequenceState__EMusicSequenceState_MAX = 3,

};

// Enum Dungeons.SessionType
enum class Dungeons_ESessionType : uint8_t
{
	SessionType__CROSSPLAY         = 0,
	SessionType__PS4               = 1,
	SessionType__UNKNOWN           = 2,
	SessionType__SessionType_MAX   = 3,

};

// Enum Dungeons.APlayerCharacterInternal_ELoadedType
enum class Dungeons_EAPlayerCharacterInternal_ELoadedType : uint8_t
{
	APlayerCharacterInternal_ELoadedType__NotLoaded = 0,
	APlayerCharacterInternal_ELoadedType__LoadedIntroReady = 1,
	APlayerCharacterInternal_ELoadedType__LoadedHot = 2,
	APlayerCharacterInternal_ELoadedType__APlayerCharacterInternal_MAX = 3,

};

// Enum Dungeons.EAliveState
enum class Dungeons_EAliveState : uint8_t
{
	EAliveState__Alive             = 0,
	EAliveState__Reviving          = 1,
	EAliveState__Down              = 2,
	EAliveState__Dead              = 3,
	EAliveState__EAliveState_MAX   = 4,

};

// Enum Dungeons.EDodgeMode
enum class Dungeons_EDodgeMode : uint8_t
{
	EDodgeMode__Unset              = 0,
	EDodgeMode__Normal             = 1,
	EDodgeMode__Swim               = 2,
	EDodgeMode__EDodgeMode_MAX     = 3,

};

// Enum Dungeons.EDodgeDirection
enum class Dungeons_EDodgeDirection : uint8_t
{
	EDodgeDirection__Invalid       = 0,
	EDodgeDirection__Forwards      = 1,
	EDodgeDirection__Backwards     = 2,
	EDodgeDirection__Left          = 3,
	EDodgeDirection__Right         = 4,
	EDodgeDirection__EDodgeDirection_MAX = 5,

};

// Enum Dungeons.ECustomMoverSlot
enum class Dungeons_ECustomMoverSlot : uint8_t
{
	ECustomMoverSlot__INVALID      = 0,
	ECustomMoverSlot__Slot1        = 1,
	ECustomMoverSlot__Slot2        = 2,
	ECustomMoverSlot__Slot3        = 3,
	ECustomMoverSlot__ECustomMoverSlot_MAX = 4,

};

// Enum Dungeons.ELeniencySource
enum class Dungeons_ELeniencySource : uint8_t
{
	ELeniencySource__MovementSpeed = 0,
	ELeniencySource__BaseChange    = 1,
	ELeniencySource__Dodge         = 2,
	ELeniencySource__CustomMover   = 3,
	ELeniencySource__ELeniencySource_MAX = 4,

};

// Enum Dungeons.EProgressStat
enum class Dungeons_EProgressStat : uint8_t
{
	EProgressStat__WIN_MISSIONS    = 0,
	EProgressStat__GIVE_GIFTS      = 1,
	EProgressStat__DEFEAT_ENCHANTED_MOBS = 2,
	EProgressStat__DEFEAT_EVENT_MOBS = 3,
	EProgressStat__WIN_MISSIONS_DEFAULT = 4,
	EProgressStat__WIN_MISSIONS_ADVENTURE = 5,
	EProgressStat__WIN_MISSIONS_APOCALYPSE = 6,
	EProgressStat__WIN_MISSIONS_APOCALYPSE_PLUS = 7,
	EProgressStat__WIN_MISSIONS_APOCALYPSE_PLUS_TIER0 = 8,
	EProgressStat__WIN_MISSIONS_APOCALYPSE_PLUS_TIER1 = 9,
	EProgressStat__WIN_MISSIONS_APOCALYPSE_PLUS_TIER2 = 10,
	EProgressStat__WIN_MISSIONS_APOCALYPSE_PLUS_TIER3 = 11,
	EProgressStat__WIN_MISSIONS_APOCALYPSE_PLUS_TIER4 = 12,
	EProgressStat__WIN_MISSIONS_APOCALYPSE_PLUS_TIER5 = 13,
	EProgressStat__WIN_MISSIONS_APOCALYPSE_PLUS_TIER6 = 14,
	EProgressStat__WIN_MISSIONS_APOCALYPSE_PLUS_TIER7 = 15,
	EProgressStat__WIN_HYPERMISSIONS = 16,
	EProgressStat__EProgressStat_MAX = 17,

};

// Enum Dungeons.EPushVolumeType
enum class Dungeons_EPushVolumeType : uint8_t
{
	EPushVolumeType__None          = 0,
	EPushVolumeType__Wind          = 1,
	EPushVolumeType__Current       = 2,
	EPushVolumeType__EPushVolumeType_MAX = 3,

};

// Enum Dungeons.EPitchMode
enum class Dungeons_EPitchMode : uint8_t
{
	EPitchMode__Normal             = 0,
	EPitchMode__Parallel           = 1,
	EPitchMode__Adjust             = 2,
	EPitchMode__Random             = 3,
	EPitchMode__ParallelSpawn      = 4,
	EPitchMode__EPitchMode_MAX     = 5,

};

// Enum Dungeons.ERealmName
enum class Dungeons_ERealmName : uint8_t
{
	ERealmName__Invalid            = 0,
	ERealmName__ArchIllagerRealm   = 1,
	ERealmName__IslandsRealm       = 2,
	ERealmName__OtherDimensions    = 3,
	ERealmName__count              = 4,
	ERealmName__ERealmName_MAX     = 5,

};

// Enum Dungeons.EResourcePack
enum class Dungeons_EResourcePack : uint8_t
{
	EResourcePack__Vanilla         = 0,
	EResourcePack__Test            = 1,
	EResourcePack__SquidCoast      = 2,
	EResourcePack__CreeperWoods    = 3,
	EResourcePack__ForestTemple    = 4,
	EResourcePack__PumpkinPastures = 5,
	EResourcePack__AndesiteHills   = 6,
	EResourcePack__SoggySwamp      = 7,
	EResourcePack__MooncoreCaverns = 8,
	EResourcePack__RedstoneMines   = 9,
	EResourcePack__FieryForge      = 10,
	EResourcePack__ScorchedCrags   = 11,
	EResourcePack__SandstoneWastes = 12,
	EResourcePack__DesertTemple    = 13,
	EResourcePack__EvergreenOasis  = 14,
	EResourcePack__SlimySewers     = 15,
	EResourcePack__HighblockHalls  = 16,
	EResourcePack__ObsidianPinnacle = 17,
	EResourcePack__CactiCanyon     = 18,
	EResourcePack__Jungle          = 19,
	EResourcePack__Mycelia         = 20,
	EResourcePack__DingyJungle     = 21,
	EResourcePack__OvergrownTemple = 22,
	EResourcePack__BambooBluff     = 23,
	EResourcePack__FrozenFjord     = 24,
	EResourcePack__LonelyFortress  = 25,
	EResourcePack__LostSettlement  = 26,
	EResourcePack__Nether          = 27,
	EResourcePack__warpedforest    = 28,
	EResourcePack__BasaltDeltas    = 29,
	EResourcePack__WindsweptPeaks  = 30,
	EResourcePack__GaleSanctum     = 31,
	EResourcePack__EndlessRampart  = 32,
	EResourcePack__CoralRise       = 33,
	EResourcePack__AbyssalMonument = 34,
	EResourcePack__RadiantRavine   = 35,
	EResourcePack__EResourcePack_MAX = 36,

};

// Enum Dungeons.ETeamDeathState
enum class Dungeons_ETeamDeathState : uint8_t
{
	ETeamDeathState__WaitingForMissionStart = 0,
	ETeamDeathState__AnyPlayerAlive = 1,
	ETeamDeathState__LifeDeductedAndReviving = 2,
	ETeamDeathState__GameOver      = 3,
	ETeamDeathState__ETeamDeathState_MAX = 4,

};

// Enum Dungeons.ERewardType
enum class Dungeons_ERewardType : uint8_t
{
	ERewardType__LevelCompletion   = 0,
	ERewardType__EmergentDifficulty = 1,
	ERewardType__ERewardType_MAX   = 2,

};

// Enum Dungeons.EFeatureStat
enum class Dungeons_EFeatureStat : uint8_t
{
	EFeatureStat__INVALID          = 0,
	EFeatureStat__TIME             = 1,
	EFeatureStat__KILLS            = 2,
	EFeatureStat__DEATHS           = 3,
	EFeatureStat__DISTANCE         = 4,
	EFeatureStat__CHESTS           = 5,
	EFeatureStat__HEAL             = 6,
	EFeatureStat__EMERALDS         = 7,
	EFeatureStat__ARTEFACTS        = 8,
	EFeatureStat__REVIVES          = 9,
	EFeatureStat__LEVEL            = 10,
	EFeatureStat__EFeatureStat_MAX = 11,

};

// Enum Dungeons.EAchievement
enum class Dungeons_EAchievement : uint8_t
{
	EAchievement__INVALID          = 0,
	EAchievement__REVIVE           = 1,
	EAchievement__KILL_50_MOBS     = 2,
	EAchievement__KILL_2500_MOBS   = 3,
	EAchievement__KILL_50_PASSIVE  = 4,
	EAchievement__KILL_50_ENCHANTED = 5,
	EAchievement__LVL              = 6,
	EAchievement__LVL01            = 7,
	EAchievement__LVL02            = 8,
	EAchievement__FANCY_CHEST      = 9,
	EAchievement__CHEST            = 10,
	EAchievement__EMERALD          = 11,
	EAchievement__EMERALD01        = 12,
	EAchievement__EAT_200_FOOD     = 13,
	EAchievement__COMPLETE_SQUID_COAST = 14,
	EAchievement__COMPLETE_CREEPER_WOODS = 15,
	EAchievement__COMPLETE_LEVEL_GROUP1 = 16,
	EAchievement__COMPLETE_LEVEL_GROUP2 = 17,
	EAchievement__COMPLETE_LEVEL_GROUP3 = 18,
	EAchievement__DEFEAT_ARCH_ILLAGER_ANY = 19,
	EAchievement__DEFEAT_ARCH_ILLAGER_HARD = 20,
	EAchievement__TNT_KILL         = 21,
	EAchievement__FULL_ENCHANTED_GEAR_SET = 22,
	EAchievement__FULLY_UPGRADE_ENCHANTMENT = 23,
	EAchievement__BEAST_MASTER     = 24,
	EAchievement__DEFEAT_JUNGLE_ABOMINATION_ADVENTURE = 25,
	EAchievement__COMPLETE_PANDA_PLATEAU = 26,
	EAchievement__OCELOT_ARMOUR    = 27,
	EAchievement__COMPLETE_DINGY_JUNGLE_POTION = 28,
	EAchievement__DEFEAT_MOOSHROOM_MONSTROSITY_ITEMS = 29,
	EAchievement__DEFEAT_WRETCHED_WRAITH_ADVENTURE = 30,
	EAchievement__COMPLETE_LOST_SETTLEMENT = 31,
	EAchievement__ICE_WAND_KILL    = 32,
	EAchievement__ICE_SLIDE        = 33,
	EAchievement__ICE_NO_WEAPONS   = 34,
	EAchievement__COMPLETE_GALE_SANCTUM_ADVENTURE = 35,
	EAchievement__COMPLETE_COLOSSAL_RAMPART = 36,
	EAchievement__KILL_10_MOUNTAINEER_TEMPEST_KNIFE_TIMED = 37,
	EAchievement__UPDRAFT_WINDCALLERS = 38,
	EAchievement__LLAMA_OFFERING   = 39,
	EAchievement__KILL_RAVAGER_SQUALL_GOLEM_TIMED = 40,
	EAchievement__DEFEAT_TEMPEST_GOLEM_PETS = 41,
	EAchievement__COMPLETE_OBSIDIAN_PINNACLE_APOCALYPSE5 = 42,
	EAchievement__COMPLETE_DAILY_TRIAL_EMERALD_ARMOUR = 43,
	EAchievement__DEATH_BARTER     = 44,
	EAchievement__COMPLETE_NETHER_WASTES_APOCALYPSE = 45,
	EAchievement__COMPLETE_NETHER_SECRET_APOCALYPSE_PLUS = 46,
	EAchievement__DEFEAT_ANCIENT   = 47,
	EAchievement__COLLECT_500_GOLD = 48,
	EAchievement__MERCHANTS        = 49,
	EAchievement__GONG             = 50,
	EAchievement__SPINWHEEL        = 51,
	EAchievement__HYPERMISSIONS    = 52,
	EAchievement__HOMECOMING       = 53,
	EAchievement__EFFECTS_TRIGGER  = 54,
	EAchievement__COMPLETE_ABYSSAL_MONUMENT_APOCALYPSE = 55,
	EAchievement__COMPLETE_RADIANT_RAVINE_APOCALYPSE_PLUS = 56,
	EAchievement__GLOWSQUID_ICEWAND = 57,
	EAchievement__FISHING_ROD      = 58,
	EAchievement__LOST_CONDUIT     = 59,
	EAchievement__RELAX_BUBBLE_COLUMN = 60,
	EAchievement__NO_OXYGEN        = 61,
	EAchievement__TRIDENT          = 62,
	EAchievement__RAID_CAPTAIN     = 63,
	EAchievement__BUBBLE_BOW       = 64,
	EAchievement__ENUM_END         = 65,
	EAchievement__EAchievement_MAX = 66,

};

// Enum Dungeons.SubsystemType
enum class Dungeons_ESubsystemType : uint8_t
{
	SubsystemType__Dungeons        = 0,
	SubsystemType__PS4             = 1,
	SubsystemType__Null            = 2,
	SubsystemType__SubsystemType_MAX = 3,

};

// Enum Dungeons.ESuddenDeathMode
enum class Dungeons_ESuddenDeathMode : uint8_t
{
	ESuddenDeathMode__Always       = 0,
	ESuddenDeathMode__OnAnyPlayerDowned = 1,
	ESuddenDeathMode__ESuddenDeathMode_MAX = 2,

};

// Enum Dungeons.ETeamName
enum class Dungeons_ETeamName : uint8_t
{
	ETeamName__Loner               = 0,
	ETeamName__Heroes              = 1,
	ETeamName__Villains            = 2,
	ETeamName__Keys                = 3,
	ETeamName__World               = 4,
	ETeamName__ETeamName_MAX       = 5,

};

// Enum Dungeons.ETeamRelation
enum class Dungeons_ETeamRelation : uint8_t
{
	ETeamRelation__Hostile         = 0,
	ETeamRelation__Neutral         = 1,
	ETeamRelation__Friendly        = 2,
	ETeamRelation__ETeamRelation_MAX = 3,

};

// Enum Dungeons.TempestArmType
enum class Dungeons_ETempestArmType : uint8_t
{
	TempestArmType__RIGHT          = 0,
	TempestArmType__LEFT           = 1,
	TempestArmType__SHIELD         = 2,
	TempestArmType__INVALID        = 3,
	TempestArmType__TempestArmType_MAX = 4,

};

// Enum Dungeons.EThrowableType
enum class Dungeons_EThrowableType : uint8_t
{
	EThrowableType__None           = 0,
	EThrowableType__TNT            = 1,
	EThrowableType__Trident        = 2,
	EThrowableType__Conduit        = 3,
	EThrowableType__EThrowableType_MAX = 4,

};

// Enum Dungeons.ETargetingTickStage
enum class Dungeons_ETargetingTickStage : uint8_t
{
	ETargetingTickStage__HighlightingUpdate = 0,
	ETargetingTickStage__UpdateGamepadTargetSelection = 1,
	ETargetingTickStage__End       = 2,
	ETargetingTickStage__ETargetingTickStage_MAX = 3,

};

// Enum Dungeons.EUIHintConcept
enum class Dungeons_EUIHintConcept : uint8_t
{
	EUIHintConcept__Unset          = 0,
	EUIHintConcept__NavigationMarker = 1,
	EUIHintConcept__EUIHintConcept_MAX = 2,

};

// Enum Dungeons.EUIHintClose
enum class Dungeons_EUIHintClose : uint8_t
{
	EUIHintClose__Unset            = 0,
	EUIHintClose__ItemUsed         = 1,
	EUIHintClose__MeleeAttack      = 2,
	EUIHintClose__RangeAttack      = 3,
	EUIHintClose__EnterRegion      = 4,
	EUIHintClose__NewObjective     = 5,
	EUIHintClose__PickupItem       = 6,
	EUIHintClose__Move             = 7,
	EUIHintClose__EUIHintClose_MAX = 8,

};

// Enum Dungeons.EUIHintTriggerAction
enum class Dungeons_EUIHintTriggerAction : uint8_t
{
	EUIHintTriggerAction__Unset    = 0,
	EUIHintTriggerAction__PickupItem = 1,
	EUIHintTriggerAction__ItemUsed = 2,
	EUIHintTriggerAction__EnterRegion = 3,
	EUIHintTriggerAction__NewObjective = 4,
	EUIHintTriggerAction__Move     = 5,
	EUIHintTriggerAction__EUIHintTriggerAction_MAX = 6,

};

// Enum Dungeons.EPullInMode
enum class Dungeons_EPullInMode : uint8_t
{
	EPullInMode__AccelerateWithTime = 0,
	EPullInMode__AccelerateWithDistance = 1,
	EPullInMode__EPullInMode_MAX   = 2,

};

// Enum Dungeons.ECurrencyObtainReason
enum class Dungeons_ECurrencyObtainReason : uint8_t
{
	ECurrencyObtainReason__Default = 0,
	ECurrencyObtainReason__Salvaged = 1,
	ECurrencyObtainReason__Pickup  = 2,
	ECurrencyObtainReason__ECurrencyObtainReason_MAX = 3,

};

// Enum Dungeons.EWickedWraithWaypointType
enum class Dungeons_EWickedWraithWaypointType : uint8_t
{
	EWickedWraithWaypointType__Normal = 0,
	EWickedWraithWaypointType__Special = 1,
	EWickedWraithWaypointType__EWickedWraithWaypointType_MAX = 2,

};

// Enum Dungeons.ETakLayout
enum class Dungeons_ETakLayout : uint8_t
{
	ETakLayout__multiplayer_default = 0,
	ETakLayout__multiplayer_no_ranged = 1,
	ETakLayout__local_default      = 2,
	ETakLayout__local_no_ranged    = 3,
	ETakLayout__tutorial_default   = 4,
	ETakLayout__tutorial_default_ranged = 5,
	ETakLayout__ETakLayout_MAX     = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Dungeons.InventoryItemData
// 0x0000
struct FInventoryItemData
{

};

// ScriptStruct Dungeons.EnchantmentData
// 0x0000
struct FEnchantmentData
{

};

// ScriptStruct Dungeons.ArmorPropertyData
// 0x0000
struct FArmorPropertyData
{

};

// ScriptStruct Dungeons.SerializableItemId
// 0x0000
struct FSerializableItemId
{

};

// ScriptStruct Dungeons.Notification
// 0x0000
struct FNotification
{

};

// ScriptStruct Dungeons.EventNotification
// 0x0000
struct FEventNotification : public FNotification
{

};

// ScriptStruct Dungeons.PlayerNotification
// 0x0000
struct FPlayerNotification : public FNotification
{

};

// ScriptStruct Dungeons.SelfGearPickupNotification
// 0x0000
struct FSelfGearPickupNotification : public FNotification
{

};

// ScriptStruct Dungeons.OtherGearPickupNotification
// 0x0000
struct FOtherGearPickupNotification : public FNotification
{

};

// ScriptStruct Dungeons.ItemMetaData
// 0x0000
struct FItemMetaData
{

};

// ScriptStruct Dungeons.ChestDynamicProperties
// 0x0000
struct FChestDynamicProperties
{

};

// ScriptStruct Dungeons.UnlockRequirements
// 0x0000
struct FUnlockRequirements
{

};

// ScriptStruct Dungeons.MobKillsCompletion
// 0x0000
struct FMobKillsCompletion
{

};

// ScriptStruct Dungeons.MissionDifficultyCompletion
// 0x0000
struct FMissionDifficultyCompletion
{

};

// ScriptStruct Dungeons.LevelRequest
// 0x0000
struct FLevelRequest
{

};

// ScriptStruct Dungeons.LevelSettings
// 0x0000
struct FLevelSettings
{

};

// ScriptStruct Dungeons.EmergentDifficulty
// 0x0000
struct FEmergentDifficulty
{

};

// ScriptStruct Dungeons.MissionState
// 0x0000
struct FMissionState
{

};

// ScriptStruct Dungeons.MissionDifficulty
// 0x0000
struct FMissionDifficulty
{

};

// ScriptStruct Dungeons.EndlessStruggle
// 0x0000
struct FEndlessStruggle
{

};

// ScriptStruct Dungeons.TitleNews
// 0x0000
struct FTitleNews
{

};

// ScriptStruct Dungeons.TitleNewsMapPopup
// 0x0000
struct FTitleNewsMapPopup
{

};

// ScriptStruct Dungeons.AffectorData
// 0x0000
struct FAffectorData
{

};

// ScriptStruct Dungeons.ReplicatableAffectorsRules
// 0x0000
struct FReplicatableAffectorsRules
{

};

// ScriptStruct Dungeons.ReplicatableModifier
// 0x0000
struct FReplicatableModifier
{

};

// ScriptStruct Dungeons.AffectorInfo
// 0x0000
struct FAffectorInfo
{

};

// ScriptStruct Dungeons.AmbienceSettings
// 0x0000
struct FAmbienceSettings
{

};

// ScriptStruct Dungeons.WorldLightSettings
// 0x0000
struct FWorldLightSettings
{

};

// ScriptStruct Dungeons.ExponentialHeightFogSettings
// 0x0000
struct FExponentialHeightFogSettings
{

};

// ScriptStruct Dungeons.DirectionalLightSettings
// 0x0000
struct FDirectionalLightSettings
{

};

// ScriptStruct Dungeons.SkylightSettings
// 0x0000
struct FSkylightSettings
{

};

// ScriptStruct Dungeons.FormationPositions
// 0x0000
struct FFormationPositions
{

};

// ScriptStruct Dungeons.AttackFormationPositions
// 0x0000
struct FAttackFormationPositions
{

};

// ScriptStruct Dungeons.OverlappingCharacterDelegateHandles
// 0x0000
struct FOverlappingCharacterDelegateHandles
{

};

// ScriptStruct Dungeons.PropertyColorPrio
// 0x0000
struct FPropertyColorPrio
{

};

// ScriptStruct Dungeons.SourceItemStack
// 0x0000
struct FSourceItemStack
{

};

// ScriptStruct Dungeons.AttackComponentAimData
// 0x0000
struct FAttackComponentAimData
{

};

// ScriptStruct Dungeons.DungeonsSoundFade
// 0x0000
struct FDungeonsSoundFade
{

};

// ScriptStruct Dungeons.MobMusicItem
// 0x0000
struct FMobMusicItem
{

};

// ScriptStruct Dungeons.MissionFinishedSummary
// 0x0000
struct FMissionFinishedSummary
{

};

// ScriptStruct Dungeons.GameStatsStruct
// 0x0000
struct FGameStatsStruct
{

};

// ScriptStruct Dungeons.AwardStruct
// 0x0000
struct FAwardStruct
{

};

// ScriptStruct Dungeons.MontageData
// 0x0000
struct FMontageData
{

};

// ScriptStruct Dungeons.BeamUpdaterInfo
// 0x0000
struct FBeamUpdaterInfo
{

};

// ScriptStruct Dungeons.ChallengeRewardLocation
// 0x0000
struct FChallengeRewardLocation
{

};

// ScriptStruct Dungeons.AnimGraphStateConditions
// 0x0000
struct FAnimGraphStateConditions
{

};

// ScriptStruct Dungeons.CharacterLevel
// 0x0000
struct FCharacterLevel
{

};

// ScriptStruct Dungeons.RegisteredSource
// 0x0000
struct FRegisteredSource
{

};

// ScriptStruct Dungeons.CosmeticsEntryBase
// 0x0000
struct FCosmeticsEntryBase : public FTableRowBase
{

};

// ScriptStruct Dungeons.CosmeticsEntry
// 0x0000
struct FCosmeticsEntry : public FCosmeticsEntryBase
{

};

// ScriptStruct Dungeons.SessionPlayerInfo
// 0x0000
struct FSessionPlayerInfo
{

};

// ScriptStruct Dungeons.DamageFilter
// 0x0000
struct FDamageFilter
{

};

// ScriptStruct Dungeons.DamageMultiplier
// 0x0000
struct FDamageMultiplier
{

};

// ScriptStruct Dungeons.DamageNumberInstance
// 0x0000
struct FDamageNumberInstance
{

};

// ScriptStruct Dungeons.NightColor
// 0x0000
struct FNightColor
{

};

// ScriptStruct Dungeons.HandleUIDataInfo
// 0x0000
struct FHandleUIDataInfo
{

};

// ScriptStruct Dungeons.DungeonsGameplayEffectContext
// 0x0000
struct FDungeonsGameplayEffectContext : public FGameplayEffectContext
{

};

// ScriptStruct Dungeons.BlueprintGameSession
// 0x0000
struct FBlueprintGameSession
{

};

// ScriptStruct Dungeons.BlueprintPlayerInfoList
// 0x0000
struct FBlueprintPlayerInfoList
{

};

// ScriptStruct Dungeons.BlueprintFriend
// 0x0000
struct FBlueprintFriend
{

};

// ScriptStruct Dungeons.EffectActor
// 0x0000
struct FEffectActor
{

};

// ScriptStruct Dungeons.EffectGroupParams
// 0x0000
struct FEffectGroupParams
{

};

// ScriptStruct Dungeons.SpawnEffects
// 0x0000
struct FSpawnEffects
{

};

// ScriptStruct Dungeons.EligibleDLC
// 0x0000
struct FEligibleDLC
{

};

// ScriptStruct Dungeons.EnchantmentDataWithRarity
// 0x0000
struct FEnchantmentDataWithRarity
{

};

// ScriptStruct Dungeons.EndlessStruggleConfiguration
// 0x0000
struct FEndlessStruggleConfiguration
{

};

// ScriptStruct Dungeons.EndlessStruggleRow
// 0x0000
struct FEndlessStruggleRow : public FTableRowBase
{

};

// ScriptStruct Dungeons.EntitledCosmetic
// 0x0000
struct FEntitledCosmetic
{

};

// ScriptStruct Dungeons.Entitlement
// 0x0000
struct FEntitlement
{

};

// ScriptStruct Dungeons.ObjectiveEventLocation
// 0x0000
struct FObjectiveEventLocation
{

};

// ScriptStruct Dungeons.ExtraChallengeStyle
// 0x0000
struct FExtraChallengeStyle
{

};

// ScriptStruct Dungeons.LiveOpsKillEvent
// 0x0000
struct FLiveOpsKillEvent
{

};

// ScriptStruct Dungeons.ObjectiveFilter
// 0x0000
struct FObjectiveFilter
{

};

// ScriptStruct Dungeons.FilterPart
// 0x0000
struct FFilterPart
{

};

// ScriptStruct Dungeons.HierarchyPlacement
// 0x0000
struct FHierarchyPlacement
{

};

// ScriptStruct Dungeons.NavigationArea
// 0x0000
struct FNavigationArea
{

};

// ScriptStruct Dungeons.UseSpecfiedKeyScopedPredictionWindow
// 0x0000
struct FUseSpecfiedKeyScopedPredictionWindow
{

};

// ScriptStruct Dungeons.SharedPredictionContext
// 0x0000
struct FSharedPredictionContext
{

};

// ScriptStruct Dungeons.SettingValueState
// 0x0000
struct FSettingValueState
{

};

// ScriptStruct Dungeons.BarOnScreenInformation
// 0x0000
struct FBarOnScreenInformation
{

};

// ScriptStruct Dungeons.ImpactInfo
// 0x0000
struct FImpactInfo
{

};

// ScriptStruct Dungeons.ImpactFilter
// 0x0000
struct FImpactFilter
{

};

// ScriptStruct Dungeons.ImpactFilterEntry
// 0x0000
struct FImpactFilterEntry
{

};

// ScriptStruct Dungeons.InspectorBadgeStyle
// 0x0000
struct FInspectorBadgeStyle
{

};

// ScriptStruct Dungeons.InstancedMeshesActorNameList
// 0x0000
struct FInstancedMeshesActorNameList
{

};

// ScriptStruct Dungeons.ContextSensitiveAction
// 0x0000
struct FContextSensitiveAction
{

};

// ScriptStruct Dungeons.FullWedge
// 0x0000
struct FFullWedge
{

};

// ScriptStruct Dungeons.Wedge
// 0x0000
struct FWedge
{

};

// ScriptStruct Dungeons.Capsule
// 0x0000
struct FCapsule
{

};

// ScriptStruct Dungeons.InventoryItemMetaData
// 0x0000
struct FInventoryItemMetaData
{

};

// ScriptStruct Dungeons.ItemAnnouncement
// 0x0000
struct FItemAnnouncement
{

};

// ScriptStruct Dungeons.ItemBulletPoint
// 0x0000
struct FItemBulletPoint
{

};

// ScriptStruct Dungeons.ItemCharacteristic
// 0x0000
struct FItemCharacteristic
{

};

// ScriptStruct Dungeons.ItemDropSource
// 0x0000
struct FItemDropSource
{

};

// ScriptStruct Dungeons.DropCategoryDescription
// 0x0000
struct FDropCategoryDescription
{

};

// ScriptStruct Dungeons.NetworkedItemDropData
// 0x0000
struct FNetworkedItemDropData
{

};

// ScriptStruct Dungeons.DropGeneratorData
// 0x0000
struct FDropGeneratorData
{

};

// ScriptStruct Dungeons.ItemDrop
// 0x0000
struct FItemDrop
{

};

// ScriptStruct Dungeons.StatsWrapper
// 0x0000
struct FStatsWrapper
{

};

// ScriptStruct Dungeons.ItemStatsEntry
// 0x0000
struct FItemStatsEntry
{

};

// ScriptStruct Dungeons.RareItemChance
// 0x0000
struct FRareItemChance
{

};

// ScriptStruct Dungeons.ItemSalvageInfo
// 0x0000
struct FItemSalvageInfo
{

};

// ScriptStruct Dungeons.ItemSalvageUndoInfo
// 0x0000
struct FItemSalvageUndoInfo
{

};

// ScriptStruct Dungeons.ItemMaterialSettings
// 0x0000
struct FItemMaterialSettings
{

};

// ScriptStruct Dungeons.ItemTagData
// 0x0000
struct FItemTagData : public FTableRowBase
{

};

// ScriptStruct Dungeons.Keybinding
// 0x0000
struct FKeybinding
{

};

// ScriptStruct Dungeons.LeapXyConfig
// 0x0000
struct FLeapXyConfig
{

};

// ScriptStruct Dungeons.LeapZConfig
// 0x0000
struct FLeapZConfig
{

};

// ScriptStruct Dungeons.LevelHitResult
// 0x0000
struct FLevelHitResult
{

};

// ScriptStruct Dungeons.LoadingScreenStyle
// 0x0000
struct FLoadingScreenStyle
{

};

// ScriptStruct Dungeons.TrackedCount
// 0x0000
struct FTrackedCount
{

};

// ScriptStruct Dungeons.MeleeAttackComponentAttackVariant
// 0x0000
struct FMeleeAttackComponentAttackVariant
{

};

// ScriptStruct Dungeons.EnchantmentTriggerSettings
// 0x0000
struct FEnchantmentTriggerSettings
{

};

// ScriptStruct Dungeons.Pushback
// 0x0000
struct FPushback
{

};

// ScriptStruct Dungeons.TicketEntry
// 0x0000
struct FTicketEntry
{

};

// ScriptStruct Dungeons.MerchantItemData
// 0x0000
struct FMerchantItemData
{

};

// ScriptStruct Dungeons.MerchantDisplayPrice
// 0x0000
struct FMerchantDisplayPrice
{

};

// ScriptStruct Dungeons.MerchantPricing
// 0x0000
struct FMerchantPricing
{

};

// ScriptStruct Dungeons.MerchantSaveData
// 0x0000
struct FMerchantSaveData
{

};

// ScriptStruct Dungeons.MerchantQuestSaveData
// 0x0000
struct FMerchantQuestSaveData
{

};

// ScriptStruct Dungeons.DynamicQuestState
// 0x0000
struct FDynamicQuestState
{

};

// ScriptStruct Dungeons.CountQuestState
// 0x0000
struct FCountQuestState
{

};

// ScriptStruct Dungeons.MerchantSlotSaveData
// 0x0000
struct FMerchantSlotSaveData
{

};

// ScriptStruct Dungeons.MerchantPricingSaveData
// 0x0000
struct FMerchantPricingSaveData
{

};

// ScriptStruct Dungeons.MerchantTransactionStatus
// 0x0000
struct FMerchantTransactionStatus
{

};

// ScriptStruct Dungeons.MerchantExecuteStatus
// 0x0000
struct FMerchantExecuteStatus
{

};

// ScriptStruct Dungeons.MissionChances
// 0x0000
struct FMissionChances
{

};

// ScriptStruct Dungeons.MissionMobChance
// 0x0000
struct FMissionMobChance
{

};

// ScriptStruct Dungeons.MissionItemRarityChance
// 0x0000
struct FMissionItemRarityChance
{

};

// ScriptStruct Dungeons.MissionItemTagChance
// 0x0000
struct FMissionItemTagChance
{

};

// ScriptStruct Dungeons.MissionItemTypeChance
// 0x0000
struct FMissionItemTypeChance
{

};

// ScriptStruct Dungeons.MissionProbability
// 0x0000
struct FMissionProbability
{

};

// ScriptStruct Dungeons.DifficultyRecommendation
// 0x0000
struct FDifficultyRecommendation
{

};

// ScriptStruct Dungeons.ThreatDescription
// 0x0000
struct FThreatDescription
{

};

// ScriptStruct Dungeons.MissionInterestCarousel
// 0x0000
struct FMissionInterestCarousel
{

};

// ScriptStruct Dungeons.MissionMarkerStyle
// 0x0000
struct FMissionMarkerStyle
{

};

// ScriptStruct Dungeons.MissionNewsStyle
// 0x0000
struct FMissionNewsStyle
{

};

// ScriptStruct Dungeons.MissionOfferings
// 0x0000
struct FMissionOfferings
{

};

// ScriptStruct Dungeons.MissionPresentation
// 0x0000
struct FMissionPresentation
{

};

// ScriptStruct Dungeons.MapUIState
// 0x0000
struct FMapUIState
{

};

// ScriptStruct Dungeons.MissionRequirement
// 0x0000
struct FMissionRequirement
{

};

// ScriptStruct Dungeons.EndGameContentProgress
// 0x0000
struct FEndGameContentProgress
{

};

// ScriptStruct Dungeons.ThreatLevelProgress
// 0x0000
struct FThreatLevelProgress
{

};

// ScriptStruct Dungeons.DifficultyProgress
// 0x0000
struct FDifficultyProgress
{

};

// ScriptStruct Dungeons.MissionProgress
// 0x0000
struct FMissionProgress
{

};

// ScriptStruct Dungeons.MissionDetails
// 0x0000
struct FMissionDetails
{

};

// ScriptStruct Dungeons.MissionRequest
// 0x0000
struct FMissionRequest
{

};

// ScriptStruct Dungeons.MissionSelection
// 0x0000
struct FMissionSelection
{

};

// ScriptStruct Dungeons.MissionThemeMarkerStyle
// 0x0000
struct FMissionThemeMarkerStyle
{

};

// ScriptStruct Dungeons.TooltipStyle
// 0x0000
struct FTooltipStyle
{

};

// ScriptStruct Dungeons.MissionThemeRow
// 0x0000
struct FMissionThemeRow : public FTableRowBase
{

};

// ScriptStruct Dungeons.MobAnimationsData
// 0x0000
struct FMobAnimationsData
{

};

// ScriptStruct Dungeons.MobDropGroup
// 0x0000
struct FMobDropGroup
{

};

// ScriptStruct Dungeons.MobIconRow
// 0x0000
struct FMobIconRow : public FTableRowBase
{

};

// ScriptStruct Dungeons.MobToMash
// 0x0000
struct FMobToMash
{

};

// ScriptStruct Dungeons.ArcMovementInfo
// 0x0000
struct FArcMovementInfo
{

};

// ScriptStruct Dungeons.DungeonsMusicTrack
// 0x0000
struct FDungeonsMusicTrack
{

};

// ScriptStruct Dungeons.LevelAudio
// 0x0000
struct FLevelAudio
{

};

// ScriptStruct Dungeons.MusicSet
// 0x0000
struct FMusicSet
{

};

// ScriptStruct Dungeons.DungeonsMusicSet
// 0x0000
struct FDungeonsMusicSet
{

};

// ScriptStruct Dungeons.ProjectileItemSpec
// 0x0000
struct FProjectileItemSpec
{

};

// ScriptStruct Dungeons.ObjectiveIndicator
// 0x0000
struct FObjectiveIndicator
{

};

// ScriptStruct Dungeons.ObjectiveIndicatorIcon
// 0x0000
struct FObjectiveIndicatorIcon
{

};

// ScriptStruct Dungeons.ObjectiveLocations
// 0x0000
struct FObjectiveLocations
{

};

// ScriptStruct Dungeons.OfferingsSummary
// 0x0000
struct FOfferingsSummary
{

};

// ScriptStruct Dungeons.ItemPickupData
// 0x0000
struct FItemPickupData
{

};

// ScriptStruct Dungeons.EntitledSkin
// 0x0000
struct FEntitledSkin
{

};

// ScriptStruct Dungeons.DodgeAnimationDirection
// 0x0000
struct FDodgeAnimationDirection
{

};

// ScriptStruct Dungeons.AvatarData
// 0x0000
struct FAvatarData
{

};

// ScriptStruct Dungeons.ProblemStatus
// 0x0000
struct FProblemStatus
{

};

// ScriptStruct Dungeons.ProjectileElement
// 0x0000
struct FProjectileElement
{

};

// ScriptStruct Dungeons.ProjectileCachedClass
// 0x0000
struct FProjectileCachedClass
{

};

// ScriptStruct Dungeons.ProjectileSpawnDefinition
// 0x0000
struct FProjectileSpawnDefinition
{

};

// ScriptStruct Dungeons.PushVolumeInfluenceInstance
// 0x0000
struct FPushVolumeInfluenceInstance
{

};

// ScriptStruct Dungeons.MobChoice
// 0x0000
struct FMobChoice
{

};

// ScriptStruct Dungeons.RangedAttack
// 0x0000
struct FRangedAttack
{

};

// ScriptStruct Dungeons.RangedAttackProjectileSpawnDescription
// 0x0000
struct FRangedAttackProjectileSpawnDescription
{

};

// ScriptStruct Dungeons.ProjectileSpawnData
// 0x0000
struct FProjectileSpawnData
{

};

// ScriptStruct Dungeons.AnimNotifyStateData
// 0x0000
struct FAnimNotifyStateData
{

};

// ScriptStruct Dungeons.ReplicatableMap
// 0x0000
struct FReplicatableMap
{

};

// ScriptStruct Dungeons.Pair
// 0x0000
struct FPair
{

};

// ScriptStruct Dungeons.RewardData
// 0x0000
struct FRewardData
{

};

// ScriptStruct Dungeons.SkinEntry
// 0x0000
struct FSkinEntry : public FCosmeticsEntryBase
{

};

// ScriptStruct Dungeons.SoftBrush
// 0x0000
struct FSoftBrush
{

};

// ScriptStruct Dungeons.SpawnQueue
// 0x0000
struct FSpawnQueue
{

};

// ScriptStruct Dungeons.SpawnElement
// 0x0000
struct FSpawnElement
{

};

// ScriptStruct Dungeons.VectorForce
// 0x0000
struct FVectorForce
{

};

// ScriptStruct Dungeons.VectorSpeedInfo
// 0x0000
struct FVectorSpeedInfo
{

};

// ScriptStruct Dungeons.EffectTagMagnitude
// 0x0000
struct FEffectTagMagnitude
{

};

// ScriptStruct Dungeons.TagMagnitude
// 0x0000
struct FTagMagnitude
{

};

// ScriptStruct Dungeons.StartMissionStatus
// 0x0000
struct FStartMissionStatus
{

};

// ScriptStruct Dungeons.StorableItemRow
// 0x0000
struct FStorableItemRow : public FTableRowBase
{

};

// ScriptStruct Dungeons.SuccessStatus
// 0x0000
struct FSuccessStatus
{

};

// ScriptStruct Dungeons.TileRotation
// 0x0000
struct FTileRotation
{

};

// ScriptStruct Dungeons.BPUnlockableTitle
// 0x0000
struct FBPUnlockableTitle
{

};

// ScriptStruct Dungeons.VitalityThreshold
// 0x0000
struct FVitalityThreshold
{

};

// ScriptStruct Dungeons.ReplicatableTrialDefPack
// 0x0000
struct FReplicatableTrialDefPack
{

};

// ScriptStruct Dungeons.ReplicatableTrialDef
// 0x0000
struct FReplicatableTrialDef
{

};

// ScriptStruct Dungeons.DialogData
// 0x0000
struct FDialogData
{

};

// ScriptStruct Dungeons.DLCWeightedMobType
// 0x0000
struct FDLCWeightedMobType
{

};

// ScriptStruct Dungeons.WeightedMobType
// 0x0000
struct FWeightedMobType
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
