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

// WidgetBlueprintGeneratedClass UMG_ItemSlotCounter_Base.UMG_ItemSlotCounter_Base_C
// 0x0000
class UUMG_ItemSlotCounter_Base_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ItemSlotCounter_Base.UMG_ItemSlotCounter_Base_C");
		return ptr;
	}



	void TriggerWarning();
	void SetHintHighlight();
	void SetVisualCount();
	void UpdateCountInternal();
	void SetCountInternal();
	void SetItemSlot();
	void Destruct();
	void Construct();
	void ExecuteUbergraph_UMG_ItemSlotCounter_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
