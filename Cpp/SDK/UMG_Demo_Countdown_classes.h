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

// WidgetBlueprintGeneratedClass UMG_Demo_Countdown.UMG_Demo_Countdown_C
// 0x0000
class UUMG_Demo_Countdown_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Demo_Countdown.UMG_Demo_Countdown_C");
		return ptr;
	}



	void TimeToString();
	void Construct();
	void Tick();
	void OKPressed();
	void ExecuteUbergraph_UMG_Demo_Countdown();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
