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

// WidgetBlueprintGeneratedClass UMG_SlotGridWidget.UMG_SlotGridWidget_C
// 0x0000
class UUMG_SlotGridWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SlotGridWidget.UMG_SlotGridWidget_C");
		return ptr;
	}



	void ScrollToWidget();
	void UpdateFade();
	void BndEvt__ScrollView_K2Node_ComponentBoundEvent_0_OnScrollChanged__DelegateSignature();
	void BndEvt__ScrollView_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_UMG_SlotGridWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
