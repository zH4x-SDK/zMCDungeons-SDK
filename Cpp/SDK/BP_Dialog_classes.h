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

// BlueprintGeneratedClass BP_Dialog.BP_Dialog_C
// 0x0000
class UBP_Dialog_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Dialog.BP_Dialog_C");
		return ptr;
	}



	void OnControllerDisconnected();
	void Setup_Debug_Global_Dialog();
	void NeedCrossplayChoice();
	void Create_Debug_Dialog();
	void OnDisableCrossPlay();
	void OnSignOutMicrosoft();
	void OnUnlinkMicrosoftAccount();
	void OnVOLanguageChange();
	void ShowNetworkErrorDialog();
	void OnSwitchedUser();
	void OnJoinDuringGameplayAction();
	void OnNonInitialUserAccepted();
	void ShowSignInDialog();
	void Create_Dialog();
	void Show_Blocking_Dialog();
	void Show_Confirm_Cancel_Dialog();
	void Show_Dialog_for_Player_Index();
	void Show_OK_Dialog();
	void Show_Dialog();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
