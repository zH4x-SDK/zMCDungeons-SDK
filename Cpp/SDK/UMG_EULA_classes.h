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

// WidgetBlueprintGeneratedClass UMG_EULA.UMG_EULA_C
// 0x0000
class UUMG_EULA_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EULA.UMG_EULA_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void ButtonSelected();
	void RefreshFocusedWidget();
	void GamepadScroll();
	void Construct();
	void GamepadDone();
	void Tick();
	void BndEvt__UMG_TextButton_C_0_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
	void SetupGamepadListeners();
	void inputChanged();
	void Back();
	void BndEvt__buttonRefuse_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
	void BndEvt__buttonRefuse_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature();
	void BndEvt__buttonAccept_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature();
	void BndEvt__buttonAccept_K2Node_ComponentBoundEvent_10_OnUnhovered__DelegateSignature();
	void BndEvt__buttonRefuse_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
	void Accept();
	void Refuse();
	void ExecuteUbergraph_UMG_EULA();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
