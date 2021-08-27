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

// BlueprintGeneratedClass BP_MenuPlayerController.BP_MenuPlayerController_C
// 0x0000
class ABP_MenuPlayerController_C : public ABaseMenuPlayerController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuPlayerController.BP_MenuPlayerController_C");
		return ptr;
	}



	void RefreshFriendsSubMenuCall();
	void RefreshFriendsSubMenu();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MenuPlayerController();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
