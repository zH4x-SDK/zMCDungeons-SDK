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

// WidgetBlueprintGeneratedClass UMG_ArrowCounter_5Projectiles.UMG_ArrowCounter_5Projectiles_C
// 0x0000
class UUMG_ArrowCounter_5Projectiles_C : public UUMG_ItemSlotCounter_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ArrowCounter_5Projectiles.UMG_ArrowCounter_5Projectiles_C");
		return ptr;
	}



	void PreConstruct();
	void SetVisualCount();
	void SetHintHighlight();
	void TriggerWarning();
	void ArrowsAnimatingEvent();
	void ExecuteUbergraph_UMG_ArrowCounter_5Projectiles();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
