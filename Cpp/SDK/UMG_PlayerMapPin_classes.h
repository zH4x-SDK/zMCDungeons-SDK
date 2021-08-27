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

// WidgetBlueprintGeneratedClass UMG_PlayerMapPin.UMG_PlayerMapPin_C
// 0x0000
class UUMG_PlayerMapPin_C : public UUMG_MapPin_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerMapPin.UMG_PlayerMapPin_C");
		return ptr;
	}



	void SetPlayerCharacterInternal();
	void SetAspectScale();
	void SetArrowAngle();
	void SetPlayerCharacter();
	void Construct();
	void Destruct();
	void DoSetAspectScale();
	void DoSetPlayerCharacter();
	void ExecuteUbergraph_UMG_PlayerMapPin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
