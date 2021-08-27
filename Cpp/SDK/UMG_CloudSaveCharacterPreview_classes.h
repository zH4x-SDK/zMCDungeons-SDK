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

// WidgetBlueprintGeneratedClass UMG_CloudSaveCharacterPreview.UMG_CloudSaveCharacterPreview_C
// 0x0000
class UUMG_CloudSaveCharacterPreview_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CloudSaveCharacterPreview.UMG_CloudSaveCharacterPreview_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void SetupPlayerView();
	void SetPlayerViewEnabled();
	void SetBlank();
	void SetupPage();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_UMG_CloudSaveCharacterPreview();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
