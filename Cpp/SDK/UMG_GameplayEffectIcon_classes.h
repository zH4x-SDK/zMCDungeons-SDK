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

// WidgetBlueprintGeneratedClass UMG_GameplayEffectIcon.UMG_GameplayEffectIcon_C
// 0x0000
class UUMG_GameplayEffectIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GameplayEffectIcon.UMG_GameplayEffectIcon_C");
		return ptr;
	}



	void GetHovered();
	void SetHovered();
	void OnShow();
	void SetVisible();
	void OnHide();
	void SetStatusEffectIconClass();
	void OnMouseEnter();
	void OnMouseLeave();
	void ExecuteUbergraph_UMG_GameplayEffectIcon();
	void OnHoveredChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
