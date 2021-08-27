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

// WidgetBlueprintGeneratedClass UMG_InputActionKeyHotbarLite.UMG_InputActionKeyHotbarLite_C
// 0x0000
class UUMG_InputActionKeyHotbarLite_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InputActionKeyHotbarLite.UMG_InputActionKeyHotbarLite_C");
		return ptr;
	}



	void SetVisibleOnTouch();
	void SetButtonBrush();
	void keySubstitutions();
	void SetFromKey();
	void RefreshInputAction();
	void SetInputAction();
	void OnShortcutWasReleased();
	void OnShortcutWasHeld();
	void BindInputAction();
	void RefreshGraphics();
	void SetDisabled();
	void SetPreviewInputAction();
	void PreConstruct();
	void Construct();
	void InputSwitch();
	void ExecuteUbergraph_UMG_InputActionKeyHotbarLite();
	void OnShortcutReleased__DelegateSignature();
	void OnShortcutHeld__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
