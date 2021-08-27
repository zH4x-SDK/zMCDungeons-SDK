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

// WidgetBlueprintGeneratedClass UMG_IngameMenuBase.UMG_IngameMenuBase_C
// 0x0000
class UUMG_IngameMenuBase_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_IngameMenuBase.UMG_IngameMenuBase_C");
		return ptr;
	}



	void GetModalMask();
	void GetBlocksCharacterInput();
	void IsOverridable();
	void TryCloseAllMenus();
	void SetPlayerController();
	void HasSubMenus();
	void CloseAllMenus();
	void OpenClose();
	void RefreshFocus();
	void ExecuteUbergraph_UMG_IngameMenuBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
