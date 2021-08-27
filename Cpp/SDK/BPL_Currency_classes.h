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

// BlueprintGeneratedClass BPL_Currency.BPL_Currency_C
// 0x0000
class UBPL_Currency_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_Currency.BPL_Currency_C");
		return ptr;
	}



	void GetCurrencyCounterCountingMedia();
	void GetCurrencyTradeTickSound();
	void GetCurrencyCountingDownSound();
	void GetCurrencyCountingUpSound();
	void GetCurrencyInfo();
	void GetCurrencyCounterIcon();
	void GetCurrencyPriceIcon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
