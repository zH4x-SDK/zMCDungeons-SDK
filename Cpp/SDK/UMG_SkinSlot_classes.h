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

// WidgetBlueprintGeneratedClass UMG_SkinSlot.UMG_SkinSlot_C
// 0x0000
class UUMG_SkinSlot_C : public UUMG_SlotBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SkinSlot.UMG_SkinSlot_C");
		return ptr;
	}



	void UpdateGraphics();
	void GetGenericSlotRef();
	void GetSkinId();
	void SetSkinId();
	void SetSlotSize();
	void Tick();
	void BndEvt__UMG_GenericSlotWidget_K2Node_ComponentBoundEvent_1_OnHoveredChanged__DelegateSignature();
	void BndEvt__UMG_GenericSlotWidget_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature();
	void Construct();
	void BndEvt__UMG_GenericSlotWidget_K2Node_ComponentBoundEvent_3_OnSelectedChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_SkinSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
