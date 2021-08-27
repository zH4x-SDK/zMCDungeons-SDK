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

// WidgetBlueprintGeneratedClass UMG_MobHighlightWidget.UMG_MobHighlightWidget_C
// 0x0000
class UUMG_MobHighlightWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MobHighlightWidget.UMG_MobHighlightWidget_C");
		return ptr;
	}



	void SetMobHealthBar();
	void CheckMobsDistance();
	void RefreshBars();
	void SetupNewHealthBar();
	void SetCurrentTarget();
	void GetMobHealthBar();
	void ClearInvalidTargets();
	void HandleHealthBars();
	void SetMobs();
	void UpdatePosition();
	void UpdateGraphics();
	void SetMobHealthBar_internal();
	void Tick();
	void ExecuteUbergraph_UMG_MobHighlightWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
