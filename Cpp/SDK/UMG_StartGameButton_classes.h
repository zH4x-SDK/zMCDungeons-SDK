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

// WidgetBlueprintGeneratedClass UMG_StartGameButton.UMG_StartGameButton_C
// 0x0000
class UUMG_StartGameButton_C : public UUMG_TextButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_StartGameButton.UMG_StartGameButton_C");
		return ptr;
	}



	void GetHoveredText();
	void GetOpenedText();
	void UpdateSize();
	void SetSlim();
	void GetDisabled();
	void SetDisabled();
	void GetButtonReference();
	void Construct();
	void BndEvt__UMG_Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_UMG_StartGameButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
