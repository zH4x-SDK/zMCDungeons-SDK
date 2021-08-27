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

// WidgetBlueprintGeneratedClass UMG_PlayerPortraitSmall.UMG_PlayerPortraitSmall_C
// 0x0000
class UUMG_PlayerPortraitSmall_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerPortraitSmall.UMG_PlayerPortraitSmall_C");
		return ptr;
	}



	void UpdateGraphics();
	void SetShowFrame();
	void GetPlayerCharacter();
	void SetFrameColor();
	void SetPortrait();
	void UpdatePortrait();
	void SetPlayerCharacterInternal();
	void PreConstruct();
	void SetPlayerCharacter();
	void ExecuteUbergraph_UMG_PlayerPortraitSmall();
	void OnPortraitColorChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
