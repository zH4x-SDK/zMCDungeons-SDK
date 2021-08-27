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

// BlueprintGeneratedClass BPI_ArrowPropLifetimeProvider.BPI_ArrowPropLifetimeProvider_C
// 0x0000
class UBPI_ArrowPropLifetimeProvider_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ArrowPropLifetimeProvider.BPI_ArrowPropLifetimeProvider_C");
		return ptr;
	}



	void GetPropLifetimeSeconds();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
