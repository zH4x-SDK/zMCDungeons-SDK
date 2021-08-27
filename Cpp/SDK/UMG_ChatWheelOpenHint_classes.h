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

// WidgetBlueprintGeneratedClass UMG_ChatWheelOpenHint.UMG_ChatWheelOpenHint_C
// 0x0000
class UUMG_ChatWheelOpenHint_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ChatWheelOpenHint.UMG_ChatWheelOpenHint_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_UMG_ChatWheelOpenHint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
