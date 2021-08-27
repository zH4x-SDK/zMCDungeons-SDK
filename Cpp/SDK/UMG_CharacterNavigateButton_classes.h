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

// WidgetBlueprintGeneratedClass UMG_CharacterNavigateButton.UMG_CharacterNavigateButton_C
// 0x0000
class UUMG_CharacterNavigateButton_C : public UUMG_ClickableButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CharacterNavigateButton.UMG_CharacterNavigateButton_C");
		return ptr;
	}



	void SetDisabled();
	void RefreshGraphics();
	void GetButtonReference();
	void BndEvt__UMG_ContentSizedButton_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature();
	void PreConstruct();
	void OnHoveredEvent();
	void ExecuteUbergraph_UMG_CharacterNavigateButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
