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

// WidgetBlueprintGeneratedClass UMG_FullMapPlayerMapPin.UMG_FullMapPlayerMapPin_C
// 0x0000
class UUMG_FullMapPlayerMapPin_C : public UUMG_PlayerMapPin_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_FullMapPlayerMapPin.UMG_FullMapPlayerMapPin_C");
		return ptr;
	}



	void SetupPlayerCharacter();
	void SetColor();
	void SetDownedState();
	void SetPlayerCharacterInternal();
	void SetAspectScale();
	void OnBeingDisplayedChanged();
	void Construct();
	void DoUpdateDirection();
	void DoSetPinColor();
	void DoUpdateDownedState();
	void DoSetPlayerCharacter();
	void ExecuteUbergraph_UMG_FullMapPlayerMapPin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
