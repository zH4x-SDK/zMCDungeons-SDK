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

// WidgetBlueprintGeneratedClass UMG_InputActionKey.UMG_InputActionKey_C
// 0x0000
class UUMG_InputActionKey_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InputActionKey.UMG_InputActionKey_C");
		return ptr;
	}



	void SetForceGamepad();
	void RefreshAction();
	void RefreshGraphics();
	void SetDisabled();
	void SetGamepadButtonSaturation();
	void ShouldShowNonImportantHint();
	void RefreshVisibility();
	void SetIsImportantHint();
	void SetInputAction();
	void PreConstruct();
	void ExecuteUbergraph_UMG_InputActionKey();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
