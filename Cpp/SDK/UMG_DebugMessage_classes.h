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

// WidgetBlueprintGeneratedClass UMG_DebugMessage.UMG_DebugMessage_C
// 0x0000
class UUMG_DebugMessage_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_DebugMessage.UMG_DebugMessage_C");
		return ptr;
	}



	void SetMessage();
	void CloseMessage();
	void BndEvt__UMG_ModalCloseSurface_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
	void BndEvt__UMG_CloseButton_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_UMG_DebugMessage();
	void OnMessageClosed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
