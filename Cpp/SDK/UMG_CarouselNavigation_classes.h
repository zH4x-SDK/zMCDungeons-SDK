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

// WidgetBlueprintGeneratedClass UMG_CarouselNavigation.UMG_CarouselNavigation_C
// 0x0000
class UUMG_CarouselNavigation_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CarouselNavigation.UMG_CarouselNavigation_C");
		return ptr;
	}



	void UpdateGraphics();
	void SetCurrentIndex();
	void SetMaxCount();
	void UpdateControllerGraphics();
	void SetControllerType();
	void PreConstruct();
	void BndEvt__NavigateLeftButton_K2Node_ComponentBoundEvent_0_OnWasClicked__DelegateSignature();
	void BndEvt__NavigateRightButton_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void ExecuteUbergraph_UMG_CarouselNavigation();
	void OnNavigateRelative__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
