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

// WidgetBlueprintGeneratedClass UMG_PlayersDown.UMG_PlayersDown_C
// 0x0000
class UUMG_PlayersDown_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayersDown.UMG_PlayersDown_C");
		return ptr;
	}



	void RequestRefresh();
	void SetNumPlayersDown();
	void GetNumPlayersDown();
	void SetAllLocalPlayersDown();
	void AddWidgetToLayout();
	void GetAnyDownVisible();
	void SetAnyDownVisible();
	void OnAnyPlayerAliveStateChanged();
	void RepopulatePlayerCharacters();
	void SetPlayerController();
	void OnNumPlayersDownChanged__DelegateSignature();
	void OnAllLocalPlayerDownChanged__DelegateSignature();
	void OnAnyPlayerDownChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
