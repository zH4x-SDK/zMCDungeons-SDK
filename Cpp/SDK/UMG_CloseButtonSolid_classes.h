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

// WidgetBlueprintGeneratedClass UMG_CloseButtonSolid.UMG_CloseButtonSolid_C
// 0x0000
class UUMG_CloseButtonSolid_C : public UUMG_IconButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CloseButtonSolid.UMG_CloseButtonSolid_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetButtonReference();
	void BndEvt__UMG_IconButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_UMG_CloseButtonSolid();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
