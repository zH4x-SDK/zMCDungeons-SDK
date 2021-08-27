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

// WidgetBlueprintGeneratedClass UMG_FriendsOnlineStatusList.UMG_FriendsOnlineStatusList_C
// 0x0000
class UUMG_FriendsOnlineStatusList_C : public UUMG_BaseList_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_FriendsOnlineStatusList.UMG_FriendsOnlineStatusList_C");
		return ptr;
	}



	void GetOpenedText();
	void GetFirstButton();
	void GetLastButton();
	void SetFilteredFriendCount();
	void ShouldDisplayFriendInThisList();
	void GetRowsBox();
	void PopulateFriendsList();
	void FriendsCompleted();
	void Construct();
	void OnRefreshList();
	void FriendsFailed();
	void PreConstruct();
	void EnableListResults();
	void ExecuteUbergraph_UMG_FriendsOnlineStatusList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
