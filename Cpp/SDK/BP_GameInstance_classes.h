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

// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// 0x0000
class UBP_GameInstance_C : public UDungeonsGameInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C");
		return ptr;
	}



	void GetCoopCameraActor();
	void DestroyCoopCameraActor();
	void CreateCoopCameraActor();
	void GetCoopCamera();
	void ShowGlobalErrorMessage();
	void NotifyUserOfLowPerformance();
	void DoesGlobalHudExist();
	void PopGlobalMessage();
	void RefreshFocus();
	void ControllerConnectionChange();
	void IsFriendsSideBarActive();
	void OnLocalPlayerWantsToLeave();
	void PrivilegeTaskFailed();
	void PrivilegeTaskFinished();
	void PrivilegeTaskStarted();
	void GetOrCreateGlobalHUD();
	void SetReturnToMenu();
	void HasGlobalMessage();
	void FetchNextGlobalMessage();
	void PushGlobalMessage();
	void GetFriendsArray();
	void ReceiveInit();
	void OnDebugPromptMessage();
	void PushGlobalErrorMessage();
	void SessionInviteReceived();
	void OnPrivilegeTaskStarted_Event_1();
	void OnPrivilegeTaskFinished_Event_1();
	void OnPrivilegeTaskFailed_Event_1();
	void OnSwitchedUser();
	void OnDialogComplete();
	void OnLocalPlayerChangedUser_Event_1();
	void OnJoinSessionFailed_Event_1();
	void RefreshFriends();
	void RefreshFriendsFailed();
	void HandleTravelError();
	void MenuLogin();
	void IngameLogin();
	void LoginRequest();
	void OnAchievementPop();
	void SetupNextAchievement();
	void OnClientKicked();
	void OnNonInitialUserAcceptedInvite();
	void OnInviteAcceptedOnLocalPlay();
	void DialogueInputEvent();
	void OnNetworkError();
	void OnSessionInviteAcceptedBP();
	void OnLoginComplete();
	void InGameLoginComplete();
	void ControlTypeChange();
	void OnUserNotLoggedIn_Event();
	void ExecuteUbergraph_BP_GameInstance();
	void FriendsFailed__DelegateSignature();
	void LocalPlayerLeave__DelegateSignature();
	void LocalPlayerJoin__DelegateSignature();
	void FriendsCompleted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
