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

// WidgetBlueprintGeneratedClass UMG_EnchantmentInspectorWidget.UMG_EnchantmentInspectorWidget_C
// 0x0000
class UUMG_EnchantmentInspectorWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentInspectorWidget.UMG_EnchantmentInspectorWidget_C");
		return ptr;
	}



	void GetSelectedItem();
	void SetShow();
	void SelectItemAndEnchantmentIndex();
	void BndEvt__Outside_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_EnchantmentInspectorWidget();
	void OnClickedOutside__DelegateSignature();
	void OnVisibilityChanged__DelegateSignature();
	void OnSelectedEnchantmentIndex__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
