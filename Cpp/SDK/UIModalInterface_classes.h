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

// BlueprintGeneratedClass UIModalInterface.UIModalInterface_C
// 0x0000
class UUIModalInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UIModalInterface.UIModalInterface_C");
		return ptr;
	}



	void RefreshFocus();
	void IsOverridable();
	void GetBlocksCharacterInput();
	void GetModalMask();
	void OpenClose();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
