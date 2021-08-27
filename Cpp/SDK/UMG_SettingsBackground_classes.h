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

// WidgetBlueprintGeneratedClass UMG_SettingsBackground.UMG_SettingsBackground_C
// 0x0000
class UUMG_SettingsBackground_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SettingsBackground.UMG_SettingsBackground_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void SetBuildNumber();
	void SetTitleText();
	void setupBorder();
	void updateHint();
	void SetHintPosition();
	void UpdateHintPadding();
	void Get_Hint_Blueprint();
	void Construct();
	void Tick();
	void PreConstruct();
	void OnReleased_Event();
	void ExecuteUbergraph_UMG_SettingsBackground();
	void CloseClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
