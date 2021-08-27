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

// WidgetBlueprintGeneratedClass UMG_PortraitHealthBar.UMG_PortraitHealthBar_C
// 0x0000
class UUMG_PortraitHealthBar_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PortraitHealthBar.UMG_PortraitHealthBar_C");
		return ptr;
	}



	void SetPlayerCharacterRef();
	void SetHealthBarColor();
	void OnPortraitChanged();
	void SetPlayerCharacterInternal();
	void UpdateGraphics();
	void SetHealthBarComponent();
	void PreConstruct();
	void Tick();
	void SetPlayerCharacter();
	void ExecuteUbergraph_UMG_PortraitHealthBar();
	void OnHealthbarColorChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
