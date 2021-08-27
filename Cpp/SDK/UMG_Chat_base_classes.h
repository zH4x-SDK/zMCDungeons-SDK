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

// WidgetBlueprintGeneratedClass UMG_Chat_base.UMG_Chat_base_C
// 0x0000
class UUMG_Chat_base_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Chat_base.UMG_Chat_base_C");
		return ptr;
	}



	void AbortInput();
	void BeginInput();
	void SetShow();
	void AddChatLine();
	void SetForceShow();
	void CallFadeoutDone();
	void Fade_Out_Done__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
