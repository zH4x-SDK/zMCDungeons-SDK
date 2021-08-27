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

// WidgetBlueprintGeneratedClass UMG_HintEventHelper.UMG_HintEventHelper_C
// 0x0000
class UUMG_HintEventHelper_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HintEventHelper.UMG_HintEventHelper_C");
		return ptr;
	}



	void OnDeactivated();
	void OnActivated();
	void Construct();
	void HintEvent();
	void ExecuteUbergraph_UMG_HintEventHelper();
	void OnSpecificHintDeactivated__DelegateSignature();
	void OnSpecificHintActivated__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
