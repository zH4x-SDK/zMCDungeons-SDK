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

// WidgetBlueprintGeneratedClass buttonIconSwitch.buttonIconSwitch_C
// 0x0000
class UbuttonIconSwitch_C : public UDungeonsUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass buttonIconSwitch.buttonIconSwitch_C");
		return ptr;
	}



	void SetScale();
	void SetKeepOnPC();
	void setup_gamepad_key();
	void RefreshKeys();
	void RefreshControllerType();
	void FetchPlayerControllerType();
	void SetVisible();
	void SetControllerType();
	void GetShouldBeVisible();
	void RefreshVisible();
	void Key_Substitutions();
	void SetupFromKey();
	void ApplyVisibleInstant();
	void setup_pc_key();
	void SetHiddenOverride();
	void SetupFromEnum();
	void inputChanged();
	void PreConstruct();
	void Construct();
	void OnSetOwner();
	void ExecuteUbergraph_buttonIconSwitch();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
