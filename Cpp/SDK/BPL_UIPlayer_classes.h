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

// BlueprintGeneratedClass BPL_UIPlayer.BPL_UIPlayer_C
// 0x0000
class UBPL_UIPlayer_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UIPlayer.BPL_UIPlayer_C");
		return ptr;
	}



	void GetControllerDisplayName();
	void GetPlayerDisplayName();
	void GetMaxPlayers();
	void IsWidgetOwnerPlayerId();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
