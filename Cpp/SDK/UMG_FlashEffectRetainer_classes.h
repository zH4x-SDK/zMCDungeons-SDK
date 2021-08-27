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

// WidgetBlueprintGeneratedClass UMG_FlashEffectRetainer.UMG_FlashEffectRetainer_C
// 0x0000
class UUMG_FlashEffectRetainer_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_FlashEffectRetainer.UMG_FlashEffectRetainer_C");
		return ptr;
	}



	void UpdateMaterial();
	void SetFlashAmount();
	void Construct();
	void Tick();
	void PreConstruct();
	void ExecuteUbergraph_UMG_FlashEffectRetainer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
