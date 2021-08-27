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

// WidgetBlueprintGeneratedClass UMG_LivesCounterBase.UMG_LivesCounterBase_C
// 0x0000
class UUMG_LivesCounterBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LivesCounterBase.UMG_LivesCounterBase_C");
		return ptr;
	}



	void OnLifeLost();
	void OnSetVisualLives();
	void OnSetVisibility();
	void UpdateCounterText();
	void OnShowLivesChanged();
	void RefreshVisibility();
	void GetNumLives();
	void OnLivesChanged();
	void SetGameState();
	void Construct();
	void ExecuteUbergraph_UMG_LivesCounterBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
