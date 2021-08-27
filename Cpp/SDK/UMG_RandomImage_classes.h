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

// WidgetBlueprintGeneratedClass UMG_RandomImage.UMG_RandomImage_C
// 0x0000
class UUMG_RandomImage_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RandomImage.UMG_RandomImage_C");
		return ptr;
	}



	void SetSpritesSoft();
	void Refresh();
	void SetSprites();
	void PreConstruct();
	void ExecuteUbergraph_UMG_RandomImage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
