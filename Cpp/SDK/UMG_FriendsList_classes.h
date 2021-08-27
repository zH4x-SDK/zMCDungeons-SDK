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

// WidgetBlueprintGeneratedClass UMG_FriendsList.UMG_FriendsList_C
// 0x0000
class UUMG_FriendsList_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_FriendsList.UMG_FriendsList_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void GetFriendsPSNVisibility();
	void GetListArrays();
	void GetCrossPlatformPlayLegendVisibility();
	void GetFirstButton();
	void GetLastButton();
	void GetIsBusy();
	void SetBusy();
	void RefreshErrorMessage();
	void RefreshFriends();
	void Construct();
	void childFocused();
	void childHovered();
	void EnableListResults();
	void BndEvt__OfflineFriendsPSN_K2Node_ComponentBoundEvent_0_onListRefreshed__DelegateSignature();
	void BndEvt__OfflineFriendsXBL_K2Node_ComponentBoundEvent_1_onListRefreshed__DelegateSignature();
	void BndEvt__OnlineFriendsPSN_K2Node_ComponentBoundEvent_2_onListRefreshed__DelegateSignature();
	void BndEvt__OnlineFriendsXBL_K2Node_ComponentBoundEvent_3_onListRefreshed__DelegateSignature();
	void ExecuteUbergraph_UMG_FriendsList();
	void OnAnyListRefreshed__DelegateSignature();
	void onChildFocused__DelegateSignature();
	void onChildHovered__DelegateSignature();
	void OnBusyChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
