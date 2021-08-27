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

// WidgetBlueprintGeneratedClass UMG_SecretMissionUnlock_Pop.UMG_SecretMissionUnlock_Pop_C
// 0x0000
class UUMG_SecretMissionUnlock_Pop_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SecretMissionUnlock_Pop.UMG_SecretMissionUnlock_Pop_C");
		return ptr;
	}



	void ShowToasterInfo();
	void ShowMerchantUnlockToaster();
	void ShowMissionUnlockToaster();
	void WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_UMG_SecretMissionUnlock_Pop();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
