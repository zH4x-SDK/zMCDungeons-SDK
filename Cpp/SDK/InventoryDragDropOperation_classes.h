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

// BlueprintGeneratedClass InventoryDragDropOperation.InventoryDragDropOperation_C
// 0x0000
class UInventoryDragDropOperation_C : public UDragDropOperation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryDragDropOperation.InventoryDragDropOperation_C");
		return ptr;
	}



	void Dragged();
	void ExecuteUbergraph_InventoryDragDropOperation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
