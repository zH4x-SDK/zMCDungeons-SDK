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

// WidgetBlueprintGeneratedClass UMG_RowPlayerBase.UMG_RowPlayerBase_C
// 0x0000
class UUMG_RowPlayerBase_C : public UUMG_RowWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RowPlayerBase.UMG_RowPlayerBase_C");
		return ptr;
	}



	void GetPlayerName();
	void GetCanKickPlayers();
	void GetBlueprintFriend();
	void GetPlayerController();
	void GetPlayerState();
	void ShowPlayerProfile();
	void GetCanViewPlayerProfile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
