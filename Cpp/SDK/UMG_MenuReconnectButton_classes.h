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

// WidgetBlueprintGeneratedClass UMG_MenuReconnectButton.UMG_MenuReconnectButton_C
// 0x0000
class UUMG_MenuReconnectButton_C : public UUMG_TextButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MenuReconnectButton.UMG_MenuReconnectButton_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetButtonReference();
	void BndEvt__UMG_Button_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature();
	void BndEvt__UMG_Button_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__UMG_Button_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
	void BndEvt__UMG_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_UMG_MenuReconnectButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
