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

// Enum MediaUtils.EMediaPlayerOptionBooleanOverride
enum class MediaUtils_EMediaPlayerOptionBooleanOverride : uint8_t
{
	EMediaPlayerOptionBooleanOverride__UseMediaPlayerSetting = 0,
	EMediaPlayerOptionBooleanOverride__Enabled = 1,
	EMediaPlayerOptionBooleanOverride__Disabled = 2,
	EMediaPlayerOptionBooleanOverride__EMediaPlayerOptionBooleanOverride_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaUtils.MediaPlayerTrackOptions
// 0x0000
struct FMediaPlayerTrackOptions
{

};

// ScriptStruct MediaUtils.MediaPlayerOptions
// 0x0000
struct FMediaPlayerOptions
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
