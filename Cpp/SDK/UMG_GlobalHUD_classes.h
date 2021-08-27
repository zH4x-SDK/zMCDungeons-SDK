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

// WidgetBlueprintGeneratedClass UMG_GlobalHUD.UMG_GlobalHUD_C
// 0x0000
class UUMG_GlobalHUD_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GlobalHUD.UMG_GlobalHUD_C");
		return ptr;
	}



	void SetDebugPromptMessage();
	void AddSessionInvite();
	void BndEvt__UMG_DebugMessage_K2Node_ComponentBoundEvent_0_OnMessageClosed__DelegateSignature();
	void BndEvt__UMG_InviteStack_K2Node_ComponentBoundEvent_1_OnInviteCountChanged__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_UMG_GlobalHUD();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
