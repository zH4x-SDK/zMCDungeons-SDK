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

// WidgetBlueprintGeneratedClass UMG_ExperienceBarMeter.UMG_ExperienceBarMeter_C
// 0x0000
class UUMG_ExperienceBarMeter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ExperienceBarMeter.UMG_ExperienceBarMeter_C");
		return ptr;
	}



	void SetLevelCounterVisibility();
	void OnLevelUp();
	void OnExperienceChanged();
	void SetExperienceComponent();
	void SetPlayerCharacter();
	void PreConstruct();
	void ExecuteUbergraph_UMG_ExperienceBarMeter();
	void OnConsumingSoulsFactorChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
