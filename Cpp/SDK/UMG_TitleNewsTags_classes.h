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

// WidgetBlueprintGeneratedClass UMG_TitleNewsTags.UMG_TitleNewsTags_C
// 0x0000
class UUMG_TitleNewsTags_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TitleNewsTags.UMG_TitleNewsTags_C");
		return ptr;
	}



	void HasAnyTags();
	void GetOrCreateTagWidget();
	void CollapseAll();
	void SetTitleNews();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_UMG_TitleNewsTags();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
