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

// WidgetBlueprintGeneratedClass UMG_InputActionHotbar.UMG_InputActionHotbar_C
// 0x0000
class UUMG_InputActionHotbar_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InputActionHotbar.UMG_InputActionHotbar_C");
		return ptr;
	}



	void SetPcScale();
	void SetGamepadButton();
	void SetPcKey();
	void SetKey();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
