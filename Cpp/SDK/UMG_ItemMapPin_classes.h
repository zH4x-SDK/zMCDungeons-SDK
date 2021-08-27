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

// WidgetBlueprintGeneratedClass UMG_ItemMapPin.UMG_ItemMapPin_C
// 0x0000
class UUMG_ItemMapPin_C : public UUMG_MapPin_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ItemMapPin.UMG_ItemMapPin_C");
		return ptr;
	}



	void SetGilded();
	void CreateDynamicMaterial();
	void Toggle_outside_map();
	void SetRarity();
	void UpdateGraphics();
	void PreConstruct();
	void DoUpdatePinRarity();
	void DoSetAspectScale();
	void Changed_OOB();
	void ExecuteUbergraph_UMG_ItemMapPin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
