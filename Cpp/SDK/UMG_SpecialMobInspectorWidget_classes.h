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

// WidgetBlueprintGeneratedClass UMG_SpecialMobInspectorWidget.UMG_SpecialMobInspectorWidget_C
// 0x0000
class UUMG_SpecialMobInspectorWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SpecialMobInspectorWidget.UMG_SpecialMobInspectorWidget_C");
		return ptr;
	}



	void RemoveHealthBar();
	void AddNewHealthBar();
	void RefreshVisibility();
	void SetSecondaryTargetMob();
	void Cleanup();
	void GetFadeSpeed();
	void SetInspectorFade();
	void UpdateInspectedMob();
	void GetBestMobToInspect();
	void SetNextInspectedMob();
	void RefreshInspectedMob();
	void SetInspectedMob();
	void SetHighlightedMob();
	void Tick();
	void Construct();
	void ExecuteUbergraph_UMG_SpecialMobInspectorWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
