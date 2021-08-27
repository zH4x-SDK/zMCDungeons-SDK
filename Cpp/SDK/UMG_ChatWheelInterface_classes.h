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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UMG_ChatWheelInterface.UMG_ChatWheelInterface_C
// 0x0000
class UUMG_ChatWheelInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UMG_ChatWheelInterface.UMG_ChatWheelInterface_C");
		return ptr;
	}



	void PopulateShortcuts();
	void ShowGamePadPrompts();
	void GetItemIndexFromKey();
	void GetLastHoveredVal();
	void FadeInCall();
	void SetChatWheelType();
	void GetChatWheelType();
	void SetShortcutsEnabled();
	void GetShortcutsEnabled();
	void GetWheelIndexEmote();
	void SetOwningPlayerController();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
