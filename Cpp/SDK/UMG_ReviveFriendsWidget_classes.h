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

// WidgetBlueprintGeneratedClass UMG_ReviveFriendsWidget.UMG_ReviveFriendsWidget_C
// 0x0000
class UUMG_ReviveFriendsWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ReviveFriendsWidget.UMG_ReviveFriendsWidget_C");
		return ptr;
	}



	void UpdateNumDown();
	void UpdateGraphics();
	void SetAllLocalPlayerDown();
	void GetAnyPlayerDown();
	void SetAnyPlayerDown();
	void SetPlayerController();
	void BndEvt__UMG_PlayersDownPortraitRow_K2Node_ComponentBoundEvent_0_OnAnyPlayerDownChanged__DelegateSignature();
	void Construct();
	void BndEvt__UMG_PlayersDownPortraitRow_K2Node_ComponentBoundEvent_1_OnNumPlayersDownChanged__DelegateSignature();
	void BndEvt__UMG_PlayersDownPortraitRow_K2Node_ComponentBoundEvent_3_OnAllLocalPlayerDownChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_ReviveFriendsWidget();
	void OnAnyPlayersDownChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
