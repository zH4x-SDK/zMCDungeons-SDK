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

// WidgetBlueprintGeneratedClass UMG_CounterSprite_Arrow.UMG_CounterSprite_Arrow_C
// 0x0000
class UUMG_CounterSprite_Arrow_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CounterSprite_Arrow.UMG_CounterSprite_Arrow_C");
		return ptr;
	}



	void SetTexture();
	void HideSprite();
	void ShowSprite();
	void PreConstruct();
	void SetSpriteTexture();
	void Construct();
	void OnAnimationFinished_Event_1();
	void WidgetAnimationEvt_Hide_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_Show_K2Node_WidgetAnimationEvent_2();
	void ExecuteUbergraph_UMG_CounterSprite_Arrow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
