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

// WidgetBlueprintGeneratedClass UMG_KeyboardButton.UMG_KeyboardButton_C
// 0x0000
class UUMG_KeyboardButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_KeyboardButton.UMG_KeyboardButton_C");
		return ptr;
	}



	void RefreshKeyText();
	void RefreshAnimation();
	void SetShouldAnimate();
	void SetShouldBlur();
	void SetKey();
	void Tick();
	void ExecuteUbergraph_UMG_KeyboardButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
