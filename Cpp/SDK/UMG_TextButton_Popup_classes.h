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

// WidgetBlueprintGeneratedClass UMG_TextButton_Popup.UMG_TextButton_Popup_C
// 0x0000
class UUMG_TextButton_Popup_C : public UUMG_TextButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TextButton_Popup.UMG_TextButton_Popup_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void SetWarning();
	void Setup();
	void GetButtonReference();
	void Construct();
	void OnClicked();
	void BndEvt__UMG_Button_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_UMG_TextButton_Popup();
	void ButtonClick__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
