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

// WidgetBlueprintGeneratedClass UMG_InputActionKeyHotbar.UMG_InputActionKeyHotbar_C
// 0x0000
class UUMG_InputActionKeyHotbar_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InputActionKeyHotbar.UMG_InputActionKeyHotbar_C");
		return ptr;
	}



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
	void ExecuteUbergraph_UMG_InputActionKeyHotbar();
	void OnShortcutReleased__DelegateSignature();
	void OnShortcutHeld__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
