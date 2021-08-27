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

// WidgetBlueprintGeneratedClass UMG_IconButton.UMG_IconButton_C
// 0x0000
class UUMG_IconButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_IconButton.UMG_IconButton_C");
		return ptr;
	}



	void OnSimulatedClicked();
	void GetButtonMaterialInstance();
	void SetPressTexture();
	void SetBgTexture();
	void GetPressed();
	void GetHovered();
	void GetSelected();
	void SetSelected();
	void UpdateTextures();
	void SetPressed();
	void UpdateGraphics();
	void SetHovered();
	void SetDisabled();
	void PreConstruct();
	void Construct();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_52_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature();
	void OnAddedToFocusPath();
	void OnRemovedFromFocusPath();
	void ExecuteUbergraph_UMG_IconButton();
	void OnReleased__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnStateChanged__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
