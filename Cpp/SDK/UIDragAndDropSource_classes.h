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

// BlueprintGeneratedClass UIDragAndDropSource.UIDragAndDropSource_C
// 0x0000
class UUIDragAndDropSource_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UIDragAndDropSource.UIDragAndDropSource_C");
		return ptr;
	}



	void OnDragDestroyed();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
