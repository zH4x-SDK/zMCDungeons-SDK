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

// BlueprintGeneratedClass BP_ChatWheelComponent.BP_ChatWheelComponent_C
// 0x0000
class UBP_ChatWheelComponent_C : public UChatWheelComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChatWheelComponent.BP_ChatWheelComponent_C");
		return ptr;
	}



	void SetChatWheelType();
	void GetChatWheelType();
	void GetChatWheelShortcutsEnabled();
	void IsShowingForAnyone();
	void IsShowingFor();
	void SpawnIconAndMessageFromEmote();
	void SpawnMessageAndIconFromKey();
	void SpawnMessageAndIconFromMouse();
	void CanSwitchVisibility();
	void Clear();
	void Initialize();
	void SetShowChatWheel();
	void ExecuteUbergraph_BP_ChatWheelComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
