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

// WidgetBlueprintGeneratedClass UMG_InventoryInspectorItemIcon.UMG_InventoryInspectorItemIcon_C
// 0x0000
class UUMG_InventoryInspectorItemIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryInspectorItemIcon.UMG_InventoryInspectorItemIcon_C");
		return ptr;
	}



	void UpdateGraphics();
	void SetItem();
	void PreConstruct();
	void BndEvt__ItemIcon_K2Node_ComponentBoundEvent_0_OnHighResTextureChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_InventoryInspectorItemIcon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
