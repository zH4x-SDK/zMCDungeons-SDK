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

// BlueprintGeneratedClass TextToSpeechUtils.TextToSpeechUtils_C
// 0x0000
class UTextToSpeechUtils_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TextToSpeechUtils.TextToSpeechUtils_C");
		return ptr;
	}



	void FormatTextToSpeechMerchantHovered();
	void FormatTextToSpeechMerchantSelected();
	void Format_Text_To_Speech_Enchanments();
	void Format_Text_To_Speech_Salvage();
	void FormatTextToSpeechRewards();
	void FormatTextToSpeechInteractable();
	void MakeBulletPointText();
	void FormatNavButtonsTextToSpeech();
	void FormatTextToSpeechCharacterSelect();
	void GetTextFromKey();
	void FormatBulletPointText();
	void FormatTextToSpeechForItem();
	void GetTextFromKeyEnum();
	void FormatNavigationBarTextToSpeech();
	void GetDungeonsControllerType();
	void GetTextFromIconButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
