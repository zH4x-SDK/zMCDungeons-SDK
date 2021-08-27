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

// WidgetBlueprintGeneratedClass UMG_GlobalMessage.UMG_GlobalMessage_C
// 0x0000
class UUMG_GlobalMessage_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GlobalMessage.UMG_GlobalMessage_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetOpenedText();
	void OnMessage();
	void Close();
	void Construct();
	void BndEvt__UMG_CloseButton_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_ModalCloseSurface_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature();
	void OnKeyPressed();
	void ExecuteUbergraph_UMG_GlobalMessage();
	void OnClosed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
