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

// WidgetBlueprintGeneratedClass UMG_HotbarCurrencyIcon.UMG_HotbarCurrencyIcon_C
// 0x0000
class UUMG_HotbarCurrencyIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarCurrencyIcon.UMG_HotbarCurrencyIcon_C");
		return ptr;
	}



	void setHighlighted();
	void SetTexture();
	void BndEvt__UMG_FlashEffectImage_K2Node_ComponentBoundEvent_0_EffectActiveChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_HotbarCurrencyIcon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
