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

// WidgetBlueprintGeneratedClass UMG_HotbarEmeraldCounter.UMG_HotbarEmeraldCounter_C
// 0x0000
class UUMG_HotbarEmeraldCounter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarEmeraldCounter.UMG_HotbarEmeraldCounter_C");
		return ptr;
	}



	void InitStartingCounter();
	void ClearFadeUpdate();
	void NeedsUpdate();
	void CheckNeedsUpdate();
	void EnsureFadeUpdate();
	void ForceSetCounter();
	void RefreshCanCache();
	void GetCurrentCounterTargetOpacity();
	void SetCurrentCounter();
	void UpdateDesiredCounterFade();
	void SetDesiredCounter();
	void FindDefaultMissionCounter();
	void RefreshDesiredCounter();
	void CalculateDesiredCounter();
	void FindOldestAnimatingCounter();
	void PreConstruct();
	void SetPlayerCharacter();
	void Construct();
	void Refresh();
	void ExecuteUbergraph_UMG_HotbarEmeraldCounter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
