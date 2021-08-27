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

// WidgetBlueprintGeneratedClass UMG_BossHealthBar.UMG_BossHealthBar_C
// 0x0000
class UUMG_BossHealthBar_C : public UUMG_GlobalHealthbarBaseWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_BossHealthBar.UMG_BossHealthBar_C");
		return ptr;
	}



	void CheckBarScaling();
	void CheckBars();
	void SetHealthCurrent();
	void SetHealthHealed();
	void SetName();
	void SetGlobalHealthBar_Internal();
	void SetHealthDamage();
	void UpdateGraphics();
	void SetHealth();
	void SetHealthInstant();
	void setHighlighted();
	void ReworkSize();
	void Construct();
	void ShowHideBar();
	void Tick();
	void SetGlobalHealthBar();
	void RefreshBar();
	void FadeOutMobName();
	void Event_OnNameFadedOut();
	void ShowHideMobName_2();
	void ExecuteUbergraph_UMG_BossHealthBar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
