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

// BlueprintGeneratedClass BP_ChestOpenComponent.BP_ChestOpenComponent_C
// 0x0000
class UBP_ChestOpenComponent_C : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChestOpenComponent.BP_ChestOpenComponent_C");
		return ptr;
	}



	void BubbleSound();
	void OnClose();
	void OnOpen();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
