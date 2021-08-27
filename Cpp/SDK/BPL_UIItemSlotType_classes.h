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

// BlueprintGeneratedClass BPL_UIItemSlotType.BPL_UIItemSlotType_C
// 0x0000
class UBPL_UIItemSlotType_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UIItemSlotType.BPL_UIItemSlotType_C");
		return ptr;
	}



	void IsSlotTypeConsumable();
	void GetSlotTypeSlotFrameStyle();
	void GetItemTypeSlotFrameStyle();
	void IsSlotTypeGear();
	void GetSlotTypeDisplayName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
