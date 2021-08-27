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

// WidgetBlueprintGeneratedClass UMG_CharacterOptions.UMG_CharacterOptions_C
// 0x0000
class UUMG_CharacterOptions_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CharacterOptions.UMG_CharacterOptions_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void CanDownload();
	void Set_Crossplay_Name();
	void UpdateButtonColours();
	void Set_Name();
	void GetOptionsState();
	void SetPlayerController();
	void RefreshOptionsAvailable();
	void RefreshOptions();
	void SetOptionsState();
	void PreConstruct();
	void BndEvt__UMG_TextButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__switchHeroSolo_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__selectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__createButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__selectButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__switchHeroCoop_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__switchHeroSolo_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature();
	void BndEvt__createButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
	void AnimationForward();
	void AnimationBackward();
	void AnimationFinished();
	void AnimationRestart();
	void BndEvt__downloadButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__downloadButton_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature();
	void ExecuteUbergraph_UMG_CharacterOptions();
	void OnDownload__DelegateSignature();
	void OnLeaveAnimationFinished__DelegateSignature();
	void OnCreate__DelegateSignature();
	void OnOptionsStateChanged__DelegateSignature();
	void OnSwitchHero__DelegateSignature();
	void OnDone__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
