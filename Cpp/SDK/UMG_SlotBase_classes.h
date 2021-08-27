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

// WidgetBlueprintGeneratedClass UMG_SlotBase.UMG_SlotBase_C
// 0x0000
class UUMG_SlotBase_C : public UDungeonsVisiblityRootWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SlotBase.UMG_SlotBase_C");
		return ptr;
	}



	void SetMarkedNew();
	void GetLayoutIndex();
	void SetLayoutIndex();
	void WasLayouted();
	void GetMarkedNew();
	void GetGenericSlotRef();
	void SetFlashAmount();
	void SetDisabled();
	void setHighlighted();
	void SetSelected();
	void Construct();
	void CustomEvent_1();
	void CustomEvent_2();
	void ExecuteUbergraph_UMG_SlotBase();
	void OnSlotHoveredChanged__DelegateSignature();
	void OnSlotSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
