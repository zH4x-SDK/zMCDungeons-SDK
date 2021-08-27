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

// WidgetBlueprintGeneratedClass UMG_PcHotbarButton.UMG_PcHotbarButton_C
// 0x0000
class UUMG_PcHotbarButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PcHotbarButton.UMG_PcHotbarButton_C");
		return ptr;
	}



	void SetScale();
	void UpdateGraphics();
	void SetKeyText();
	void SetKeySprite();
	void SetKey();
	void PreConstruct();
	void ExecuteUbergraph_UMG_PcHotbarButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
