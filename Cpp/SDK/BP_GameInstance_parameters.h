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
// Parameters
//---------------------------------------------------------------------------

// Function BP_GameInstance.BP_GameInstance_C.GetCoopCameraActor
struct UBP_GameInstance_C_GetCoopCameraActor_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.DestroyCoopCameraActor
struct UBP_GameInstance_C_DestroyCoopCameraActor_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.CreateCoopCameraActor
struct UBP_GameInstance_C_CreateCoopCameraActor_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.GetCoopCamera
struct UBP_GameInstance_C_GetCoopCamera_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.ShowGlobalErrorMessage
struct UBP_GameInstance_C_ShowGlobalErrorMessage_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.NotifyUserOfLowPerformance
struct UBP_GameInstance_C_NotifyUserOfLowPerformance_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.DoesGlobalHudExist
struct UBP_GameInstance_C_DoesGlobalHudExist_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.PopGlobalMessage
struct UBP_GameInstance_C_PopGlobalMessage_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.RefreshFocus
struct UBP_GameInstance_C_RefreshFocus_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.ControllerConnectionChange
struct UBP_GameInstance_C_ControllerConnectionChange_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.IsFriendsSideBarActive
struct UBP_GameInstance_C_IsFriendsSideBarActive_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnLocalPlayerWantsToLeave
struct UBP_GameInstance_C_OnLocalPlayerWantsToLeave_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.PrivilegeTaskFailed
struct UBP_GameInstance_C_PrivilegeTaskFailed_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.PrivilegeTaskFinished
struct UBP_GameInstance_C_PrivilegeTaskFinished_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.PrivilegeTaskStarted
struct UBP_GameInstance_C_PrivilegeTaskStarted_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.GetOrCreateGlobalHUD
struct UBP_GameInstance_C_GetOrCreateGlobalHUD_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.SetReturnToMenu
struct UBP_GameInstance_C_SetReturnToMenu_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.HasGlobalMessage
struct UBP_GameInstance_C_HasGlobalMessage_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.FetchNextGlobalMessage
struct UBP_GameInstance_C_FetchNextGlobalMessage_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.PushGlobalMessage
struct UBP_GameInstance_C_PushGlobalMessage_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.GetFriendsArray
struct UBP_GameInstance_C_GetFriendsArray_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
struct UBP_GameInstance_C_ReceiveInit_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnDebugPromptMessage
struct UBP_GameInstance_C_OnDebugPromptMessage_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.PushGlobalErrorMessage
struct UBP_GameInstance_C_PushGlobalErrorMessage_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.SessionInviteReceived
struct UBP_GameInstance_C_SessionInviteReceived_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnPrivilegeTaskStarted_Event_1
struct UBP_GameInstance_C_OnPrivilegeTaskStarted_Event_1_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnPrivilegeTaskFinished_Event_1
struct UBP_GameInstance_C_OnPrivilegeTaskFinished_Event_1_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnPrivilegeTaskFailed_Event_1
struct UBP_GameInstance_C_OnPrivilegeTaskFailed_Event_1_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnSwitchedUser
struct UBP_GameInstance_C_OnSwitchedUser_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnDialogComplete
struct UBP_GameInstance_C_OnDialogComplete_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnLocalPlayerChangedUser_Event_1
struct UBP_GameInstance_C_OnLocalPlayerChangedUser_Event_1_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnJoinSessionFailed_Event_1
struct UBP_GameInstance_C_OnJoinSessionFailed_Event_1_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.RefreshFriends
struct UBP_GameInstance_C_RefreshFriends_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.RefreshFriendsFailed
struct UBP_GameInstance_C_RefreshFriendsFailed_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.HandleTravelError
struct UBP_GameInstance_C_HandleTravelError_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.MenuLogin
struct UBP_GameInstance_C_MenuLogin_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.IngameLogin
struct UBP_GameInstance_C_IngameLogin_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.LoginRequest
struct UBP_GameInstance_C_LoginRequest_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnAchievementPop
struct UBP_GameInstance_C_OnAchievementPop_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.SetupNextAchievement
struct UBP_GameInstance_C_SetupNextAchievement_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnClientKicked
struct UBP_GameInstance_C_OnClientKicked_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnNonInitialUserAcceptedInvite
struct UBP_GameInstance_C_OnNonInitialUserAcceptedInvite_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnInviteAcceptedOnLocalPlay
struct UBP_GameInstance_C_OnInviteAcceptedOnLocalPlay_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.DialogueInputEvent
struct UBP_GameInstance_C_DialogueInputEvent_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnNetworkError
struct UBP_GameInstance_C_OnNetworkError_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnSessionInviteAcceptedBP
struct UBP_GameInstance_C_OnSessionInviteAcceptedBP_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnLoginComplete
struct UBP_GameInstance_C_OnLoginComplete_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.InGameLoginComplete
struct UBP_GameInstance_C_InGameLoginComplete_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.ControlTypeChange
struct UBP_GameInstance_C_ControlTypeChange_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnUserNotLoggedIn_Event
struct UBP_GameInstance_C_OnUserNotLoggedIn_Event_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
struct UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.FriendsFailed__DelegateSignature
struct UBP_GameInstance_C_FriendsFailed__DelegateSignature_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.LocalPlayerLeave__DelegateSignature
struct UBP_GameInstance_C_LocalPlayerLeave__DelegateSignature_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.LocalPlayerJoin__DelegateSignature
struct UBP_GameInstance_C_LocalPlayerJoin__DelegateSignature_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.FriendsCompleted__DelegateSignature
struct UBP_GameInstance_C_FriendsCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
