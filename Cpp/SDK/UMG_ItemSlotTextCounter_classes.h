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

// WidgetBlueprintGeneratedClass UMG_ItemSlotTextCounter.UMG_ItemSlotTextCounter_C
// 0x0000
class UUMG_ItemSlotTextCounter_C : public UUMG_ItemSlotCounter_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ItemSlotTextCounter.UMG_ItemSlotTextCounter_C");
		return ptr;
	}



	void SetPlayerCharacter();
	void PreConstruct();
	void SetVisualCount();
	void TriggerWarning();
	void ExecuteUbergraph_UMG_ItemSlotTextCounter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
