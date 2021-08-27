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

// WidgetBlueprintGeneratedClass UMG_PlayerMapArrow.UMG_PlayerMapArrow_C
// 0x0000
class UUMG_PlayerMapArrow_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerMapArrow.UMG_PlayerMapArrow_C");
		return ptr;
	}



	void SetColor();
	void SetAspectScale();
	void SetBeingDisplayed();
	void OnDamageTaken();
	void SetAngle();
	void OnPortraitChanged();
	void SetPlayerCharacterInternal();
	void SetPlayerCharacter();
	void Construct();
	void ExecuteUbergraph_UMG_PlayerMapArrow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
