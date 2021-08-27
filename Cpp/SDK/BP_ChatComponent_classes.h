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

// BlueprintGeneratedClass BP_ChatComponent.BP_ChatComponent_C
// 0x0000
class UBP_ChatComponent_C : public UChatComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChatComponent.BP_ChatComponent_C");
		return ptr;
	}



	void ToggleHidden();
	void AbortInput();
	void BeginInput();
	void SetShowChat();
	void SetForceShowChat();
	void ReceiveBeginPlay();
	void Initialize();
	void Clear();
	void ChatLogFadeOutDone();
	void RecieveChatMessage();
	void RecieveChatEmote();
	void ExecuteUbergraph_BP_ChatComponent();
	void Disabled_Chat__DelegateSignature();
	void Enabled_Chat__DelegateSignature();
	void LogUsedChatWheel__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
