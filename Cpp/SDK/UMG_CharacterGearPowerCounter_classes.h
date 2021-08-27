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

// WidgetBlueprintGeneratedClass UMG_CharacterGearPowerCounter.UMG_CharacterGearPowerCounter_C
// 0x0000
class UUMG_CharacterGearPowerCounter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CharacterGearPowerCounter.UMG_CharacterGearPowerCounter_C");
		return ptr;
	}



	void SetTotalGearPower();
	void Tick();
	void SetCharacterData();
	void ExecuteUbergraph_UMG_CharacterGearPowerCounter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
