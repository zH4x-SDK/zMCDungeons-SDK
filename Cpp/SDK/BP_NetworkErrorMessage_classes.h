﻿#pragma once

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

// BlueprintGeneratedClass BP_NetworkErrorMessage.BP_NetworkErrorMessage_C
// 0x0000
class UBP_NetworkErrorMessage_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetworkErrorMessage.BP_NetworkErrorMessage_C");
		return ptr;
	}



	void GetTitle();
	void GetMessage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
