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

// WidgetBlueprintGeneratedClass UMG_EnchantmentBigFrame.UMG_EnchantmentBigFrame_C
// 0x0000
class UUMG_EnchantmentBigFrame_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentBigFrame.UMG_EnchantmentBigFrame_C");
		return ptr;
	}



	void UnloadTextures();
	void InitTextures();
	void UpdateGraphics();
	void SetLevel();
	void Tick();
	void onInventoryStateChanged_Event_2();
	void PreConstruct();
	void ExecuteUbergraph_UMG_EnchantmentBigFrame();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
