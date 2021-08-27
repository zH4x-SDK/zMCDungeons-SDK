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

// WidgetBlueprintGeneratedClass UMG_HotbarCooldownBase.UMG_HotbarCooldownBase_C
// 0x0000
class UUMG_HotbarCooldownBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarCooldownBase.UMG_HotbarCooldownBase_C");
		return ptr;
	}



	void GetLastRemaining();
	void OnUpdateCooldown();
	void GetBusy();
	void GetDisabled();
	void GetUsageHighlight();
	void OnCooldownWasActivated();
	void RefreshUsageHighlight();
	void RefreshShouldShow();
	void RefreshCooldownRetainer();
	void SetBusy();
	void RefreshDim();
	void SetDisabled();
	void OnWasActivated();
	void SetUsageHighlight();
	void SetShouldShow();
	void UpdateCooldown();
	void Tick();
	void Construct();
	void ExecuteUbergraph_UMG_HotbarCooldownBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
