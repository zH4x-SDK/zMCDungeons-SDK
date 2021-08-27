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

// WidgetBlueprintGeneratedClass UMG_FriendsSiderbarWidget.UMG_FriendsSiderbarWidget_C
// 0x0000
class UUMG_FriendsSiderbarWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_FriendsSiderbarWidget.UMG_FriendsSiderbarWidget_C");
		return ptr;
	}



	void IsOverridable();
	void GetBlocksCharacterInput();
	void GetModalMask();
	void OpenCloseFriends();
	void SetPlayerController();
	void OpenClose();
	void BndEvt__Contents_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature();
	void KeyDown();
	void KeyUp();
	void RefreshFocus();
	void PreventLossOfFocus();
	void ExecuteUbergraph_UMG_FriendsSiderbarWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
