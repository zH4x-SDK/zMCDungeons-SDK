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

// WidgetBlueprintGeneratedClass UMG_DropDownButton.UMG_DropDownButton_C
// 0x0000
class UUMG_DropDownButton_C : public UUMG_ClickableButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_DropDownButton.UMG_DropDownButton_C");
		return ptr;
	}



	void GetDroppedDown();
	void ToggleDroppedDown();
	void SetDroppedDown();
	void GetButtonReference();
	void PreConstruct();
	void BndEvt__UMG_ContentSizedButton_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature();
	void BndEvt__UMG_ContentSizedButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void Construct();
	void ControllerTypeChanged();
	void ExecuteUbergraph_UMG_DropDownButton();
	void OnDroppedDownChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
