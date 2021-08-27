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

// WidgetBlueprintGeneratedClass sessionAvailabilityIndicator.sessionAvailabilityIndicator_C
// 0x0000
class UsessionAvailabilityIndicator_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass sessionAvailabilityIndicator.sessionAvailabilityIndicator_C");
		return ptr;
	}



	void setAvailability();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
