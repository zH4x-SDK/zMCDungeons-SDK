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

// WidgetBlueprintGeneratedClass UMG_RefreshButton.UMG_RefreshButton_C
// 0x0000
class UUMG_RefreshButton_C : public UUMG_ClickableButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RefreshButton.UMG_RefreshButton_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetButtonActionText();
	void GetHoveredText();
	void RefreshColors();
	void SetWaiting();
	void SetBusyRemaining();
	void SetBusy();
	void GetButtonReference();
	void BndEvt__UMG_ContentSizedButton_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_UMG_RefreshButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
