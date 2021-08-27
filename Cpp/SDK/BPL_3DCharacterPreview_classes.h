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

// BlueprintGeneratedClass BPL_3DCharacterPreview.BPL_3DCharacterPreview_C
// 0x0000
class UBPL_3DCharacterPreview_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_3DCharacterPreview.BPL_3DCharacterPreview_C");
		return ptr;
	}



	void GetCharacterSlotPreviewActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
