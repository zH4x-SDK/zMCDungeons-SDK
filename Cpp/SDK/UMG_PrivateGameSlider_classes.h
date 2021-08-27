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

// WidgetBlueprintGeneratedClass UMG_PrivateGameSlider.UMG_PrivateGameSlider_C
// 0x0000
class UUMG_PrivateGameSlider_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PrivateGameSlider.UMG_PrivateGameSlider_C");
		return ptr;
	}



	void SetShadowColor();
	void UpdateColor();
	void SequenceEvent_1();
	void Get_TextOnUpper();
	void Get_TextOffUpper();
	void SetValue();
	void setHighlighted();
	void PreConstruct();
	void ExecuteUbergraph_UMG_PrivateGameSlider();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
