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

// WidgetBlueprintGeneratedClass UMG_HotbarCooldown.UMG_HotbarCooldown_C
// 0x0000
class UUMG_HotbarCooldown_C : public UUMG_HotbarCooldownBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarCooldown.UMG_HotbarCooldown_C");
		return ptr;
	}



	void RefreshShouldShow();
	void RefreshUsageHighlight();
	void OnCooldownWasActivated();
	void RefreshDim();
	void RefreshCooldownRetainer();
	void Tick();
	void OnUpdateCooldown();
	void ExecuteUbergraph_UMG_HotbarCooldown();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
