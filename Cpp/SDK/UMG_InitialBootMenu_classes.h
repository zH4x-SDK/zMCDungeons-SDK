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

// WidgetBlueprintGeneratedClass UMG_InitialBootMenu.UMG_InitialBootMenu_C
// 0x0000
class UUMG_InitialBootMenu_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InitialBootMenu.UMG_InitialBootMenu_C");
		return ptr;
	}



	void GetSubMenus();
	void RegressSubMenu();
	void PlayIntroVideo();
	void LoadTutorial();
	void ClearSubMenu();
	void ProgressToCharacterCreation();
	void ProgressSubMenu();
	void SetPlayerController();
	void Construct();
	void ExecuteUbergraph_UMG_InitialBootMenu();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
