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

// WidgetBlueprintGeneratedClass NavigationButton.NavigationButton_C
// 0x0000
class UNavigationButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NavigationButton.NavigationButton_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void ControllerTypeChanged();
	void PreConstruct();
	void BndEvt__buttonAccept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Construct();
	void Switch();
	void BndEvt__buttonAccept_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void ExecuteUbergraph_NavigationButton();
	void ClickPassthrough__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
