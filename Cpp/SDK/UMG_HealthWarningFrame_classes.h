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

// WidgetBlueprintGeneratedClass UMG_HealthWarningFrame.UMG_HealthWarningFrame_C
// 0x0000
class UUMG_HealthWarningFrame_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HealthWarningFrame.UMG_HealthWarningFrame_C");
		return ptr;
	}



	void IsOxygenEmpty();
	void SetColorTint();
	void CalculateOxygenLowFactor();
	void RefreshTintColor();
	void SetLowHealthTint();
	void SetLowOxygenTint();
	void OnOxygenChanged();
	void OnPlayerDestroyed();
	void OnRevive();
	void SetIntensity();
	void GetTargetIntensity();
	void SetHealthLowFactor();
	void SetHealthPercentage();
	void RefreshHealth();
	void OnHealthChanged();
	void SetPlayerCharacter();
	void UpdateGraphics();
	void PreConstruct();
	void Construct();
	void Tick();
	void ExecuteUbergraph_UMG_HealthWarningFrame();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
