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

// WidgetBlueprintGeneratedClass UMG_IconButtonBase.UMG_IconButtonBase_C
// 0x0000
class UUMG_IconButtonBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_IconButtonBase.UMG_IconButtonBase_C");
		return ptr;
	}



	void GetButtonReference();
	void OnClickedEvent();
	void OnHoveredEvent();
	void OnPressedEvent();
	void PreConstruct();
	void ExecuteUbergraph_UMG_IconButtonBase();
	void OnWasPressed__DelegateSignature();
	void OnWasHovered__DelegateSignature();
	void OnWasClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
