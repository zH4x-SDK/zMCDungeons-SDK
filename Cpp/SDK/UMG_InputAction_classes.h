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

// WidgetBlueprintGeneratedClass UMG_InputAction.UMG_InputAction_C
// 0x0000
class UUMG_InputAction_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InputAction.UMG_InputAction_C");
		return ptr;
	}



	void SetGamepadButtonSaturation();
	void SetGamepadButton();
	void SetUnsupportedKey();
	void SetKeyboardKey();
	void SetMouseKey();
	void SetKey();
	void Construct();
	void ExecuteUbergraph_UMG_InputAction();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
