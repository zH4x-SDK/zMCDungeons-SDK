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

// WidgetBlueprintGeneratedClass UMG_MenuStartGameModesList.UMG_MenuStartGameModesList_C
// 0x0000
class UUMG_MenuStartGameModesList_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MenuStartGameModesList.UMG_MenuStartGameModesList_C");
		return ptr;
	}



	void SortList();
	void PopulateList();
	void SetSelectedStartGameMode();
	void OnStartGameModeRowSelected();
	void Construct();
	void OnMouseLeave();
	void ExecuteUbergraph_UMG_MenuStartGameModesList();
	void OnGameModeAddedToList__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnStartGameModeSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
