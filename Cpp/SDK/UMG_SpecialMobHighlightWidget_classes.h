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

// WidgetBlueprintGeneratedClass UMG_SpecialMobHighlightWidget.UMG_SpecialMobHighlightWidget_C
// 0x0000
class UUMG_SpecialMobHighlightWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SpecialMobHighlightWidget.UMG_SpecialMobHighlightWidget_C");
		return ptr;
	}



	void RemoveGlobalHealthBar();
	void OnNameRemoved();
	void RefreshBars();
	void GetAvailableUMGIndex();
	void CheckNearestTarget();
	void HasHealthBars();
	void RequestRemoveHealthBar();
	void AddMob();
	void CreateNewHealthBar();
	void SetupNewHealthBar();
	void SetCurrentTarget();
	void GetMobHealthBar();
	void ClearInvalidTargets();
	void HandleHealthBars();
	void SetMobs();
	void SetVisible();
	void UpdatePosition();
	void UpdateGraphics();
	void SetMobHealthBar();
	void Tick();
	void ExecuteUbergraph_UMG_SpecialMobHighlightWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
