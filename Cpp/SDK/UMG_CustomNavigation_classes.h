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

// WidgetBlueprintGeneratedClass UMG_CustomNavigation.UMG_CustomNavigation_C
// 0x0000
class UUMG_CustomNavigation_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CustomNavigation.UMG_CustomNavigation_C");
		return ptr;
	}



	void GetDirectionRepeats();
	void GetRepeatDelayForDirection();
	void GetDirectionStamp();
	void FetchDirectionAxisAmount();
	void GetDirectionState();
	void UpdateInput();
	void SetDirectionState();
	void Tick();
	void ExecuteUbergraph_UMG_CustomNavigation();
	void OnNavigationDirection__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
