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

// WidgetBlueprintGeneratedClass UMG_ArrowPlayerMapPin.UMG_ArrowPlayerMapPin_C
// 0x0000
class UUMG_ArrowPlayerMapPin_C : public UUMG_PlayerMapPin_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ArrowPlayerMapPin.UMG_ArrowPlayerMapPin_C");
		return ptr;
	}



	void SetDownedState();
	void SetAngle();
	void SetColor();
	void SetArrowAngle();
	void SetAspectScale();
	void OnBeingDisplayedChanged();
	void DoSetPlayerCharacter();
	void SetPlayerCharacterInternal();
	void ExecuteUbergraph_UMG_ArrowPlayerMapPin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
