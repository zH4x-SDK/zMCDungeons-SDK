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

// WidgetBlueprintGeneratedClass UMG_SoulBarWidget.UMG_SoulBarWidget_C
// 0x0000
class UUMG_SoulBarWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SoulBarWidget.UMG_SoulBarWidget_C");
		return ptr;
	}



	void ResetIfOld();
	void GetTextObject();
	void RemovedSoul();
	void AddedSoul();
	void OnSoulCountNeeded();
	void OnSoulCountChanged();
	void IsCollecting();
	void SetShouldShowSoulBar();
	void RefreshVisibility();
	void OnSoulCollectingStarted();
	void OnSoulCollectingStopped();
	void SetSoulComponent();
	void BndEvt__UMG_SoulBarMeter_K2Node_ComponentBoundEvent_0_OnConsumingSoulsFactorChanged__DelegateSignature();
	void SetPlayerCharacter();
	void ExecuteUbergraph_UMG_SoulBarWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
