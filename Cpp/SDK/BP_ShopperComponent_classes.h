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

// BlueprintGeneratedClass BP_ShopperComponent.BP_ShopperComponent_C
// 0x0000
class UBP_ShopperComponent_C : public UShopperComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShopperComponent.BP_ShopperComponent_C");
		return ptr;
	}



	void CreateWidgetOfClass();
	void OnShowWidget();
	void ExecuteUbergraph_BP_ShopperComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
