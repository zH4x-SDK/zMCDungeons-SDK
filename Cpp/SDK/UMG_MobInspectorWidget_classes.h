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

// WidgetBlueprintGeneratedClass UMG_MobInspectorWidget.UMG_MobInspectorWidget_C
// 0x0000
class UUMG_MobInspectorWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MobInspectorWidget.UMG_MobInspectorWidget_C");
		return ptr;
	}



	void UpdateFade();
	void RefreshVisibility();
	void SetSecondaryTargetMob();
	void Cleanup();
	void GetFadeNormal();
	void SetInspectorFade();
	void UpdateInspectedMob();
	void GetBestMobToInspect();
	void SetNextInspectedMob();
	void RefreshInspectedMob();
	void SetInspectedMob();
	void SetHighlightedMob();
	void Tick();
	void Construct();
	void ExecuteUbergraph_UMG_MobInspectorWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
