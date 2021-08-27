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

// WidgetBlueprintGeneratedClass UMG_LevelUp_Pop.UMG_LevelUp_Pop_C
// 0x0000
class UUMG_LevelUp_Pop_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LevelUp_Pop.UMG_LevelUp_Pop_C");
		return ptr;
	}



	void SetPlayerColor();
	void PlayFadeOut();
	void ActivatePlayerText();
	void FlashIconEnchantUp();
	void ShowToaster();
	void WidgetAnimationEvt_FadeOutAll_K2Node_WidgetAnimationEvent_3();
	void PreConstruct();
	void Tick();
	void ExecuteUbergraph_UMG_LevelUp_Pop();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
