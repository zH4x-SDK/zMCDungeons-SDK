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

// WidgetBlueprintGeneratedClass UMG_FriendsSubMenu.UMG_FriendsSubMenu_C
// 0x0000
class UUMG_FriendsSubMenu_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_FriendsSubMenu.UMG_FriendsSubMenu_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void ControllerTypeChanged();
	void GetFallbackWidgetFocus();
	void GetGamesResults();
	void BndEvt__UMG_ModalCloseSurface_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature();
	void OnMenuClose();
	void BndEvt__UMG_FriendsSiderbarContents_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
	void OnOpenChanged();
	void BndEvt__UMG_FriendsSiderbarContents_K2Node_ComponentBoundEvent_1_OnGamesResultsChanged__DelegateSignature();
	void closeAnimFinish();
	void BndEvt__UMG_FriendsSiderbarContents_K2Node_ComponentBoundEvent_3_StartGameClick__DelegateSignature();
	void PreventLossOfFocus();
	void ForceCloseSubMenu();
	void ExecuteUbergraph_UMG_FriendsSubMenu();
	void StartGameClick__DelegateSignature();
	void OnGamesResultsChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
