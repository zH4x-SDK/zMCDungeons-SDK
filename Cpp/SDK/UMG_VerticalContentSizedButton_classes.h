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

// WidgetBlueprintGeneratedClass UMG_VerticalContentSizedButton.UMG_VerticalContentSizedButton_C
// 0x0000
class UUMG_VerticalContentSizedButton_C : public UUMG_ClickableButtonLogic_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_VerticalContentSizedButton.UMG_VerticalContentSizedButton_C");
		return ptr;
	}



	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_52_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature();
	void OnUpdateGraphics();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_VerticalContentSizedButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
