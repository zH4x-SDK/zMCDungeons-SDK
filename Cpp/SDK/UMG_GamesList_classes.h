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

// WidgetBlueprintGeneratedClass UMG_GamesList.UMG_GamesList_C
// 0x0000
class UUMG_GamesList_C : public UUMG_BaseList_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GamesList.UMG_GamesList_C");
		return ptr;
	}



	void GetShowCrossplaySessions();
	void SetShowCrossplaySessions();
	void GetOpenedText();
	void GetFirstButton();
	void GetLastButton();
	void SetBusy();
	void GetIsBusy();
	void gameHasSpaces();
	void GetGamesResults();
	void OnResultsSuccess();
	void SetGamesResults();
	void PopulateGamesResult();
	void OnResultsFailed();
	void RefreshGames();
	void OnWaitingForResults();
	void GetRowsBox();
	void FindSessionsFailed_B34CE2CF47BBEBFA078818A8434CF9B2();
	void FindSessionsCompleted_B34CE2CF47BBEBFA078818A8434CF9B2();
	void OnRefreshList();
	void Construct();
	void FindDungeonsSession();
	void BndEvt__UMG_Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void ExecuteUbergraph_UMG_GamesList();
	void OnBusyChanged__DelegateSignature();
	void OnGamesResultsChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
