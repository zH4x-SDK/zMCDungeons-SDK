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

// WidgetBlueprintGeneratedClass UMG_TitleNewsItem.UMG_TitleNewsItem_C
// 0x0000
class UUMG_TitleNewsItem_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TitleNewsItem.UMG_TitleNewsItem_C");
		return ptr;
	}



	void SetOpacity();
	void CancelAnimations();
	void SwitchTitleNewsFadeIn();
	void SwitchTitleNews();
	void TriggerContentFadeIn();
	void SetTitleNews();
	void Tick();
	void ExecuteUbergraph_UMG_TitleNewsItem();
	void OnAnnounceNews__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
