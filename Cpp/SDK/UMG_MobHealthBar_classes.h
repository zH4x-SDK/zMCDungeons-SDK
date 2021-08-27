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

// WidgetBlueprintGeneratedClass UMG_MobHealthBar.UMG_MobHealthBar_C
// 0x0000
class UUMG_MobHealthBar_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MobHealthBar.UMG_MobHealthBar_C");
		return ptr;
	}



	void UpdateScaling();
	void setHighlighted();
	void SetWidthScaling();
	void UpdateGraphics();
	void SetHealthBar();
	void SetMob();
	void Tick();
	void PreConstruct();
	void ExecuteUbergraph_UMG_MobHealthBar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
