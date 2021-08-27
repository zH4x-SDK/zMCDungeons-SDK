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

// WidgetBlueprintGeneratedClass UMG_PlayersList.UMG_PlayersList_C
// 0x0000
class UUMG_PlayersList_C : public UUMG_BaseList_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayersList.UMG_PlayersList_C");
		return ptr;
	}



	void RefreshContent();
	void OrderPlayers();
	void OrderLocal();
	void GetOpenedText();
	void OrderOnline();
	void GetLastButton();
	void addJoinRow();
	void SetHeaderInfo();
	void GetFirstButton();
	void RefreshPlayers();
	void GetRowsBox();
	void SetPlayerCharacter();
	void OnPopulatePlayersList();
	void OnRefreshList();
	void Construct();
	void ControllerCountChange();
	void ExecuteUbergraph_UMG_PlayersList();
	void OnPlayerCountChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
