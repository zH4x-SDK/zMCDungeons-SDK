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

// WidgetBlueprintGeneratedClass UMG_GlobalMessages.UMG_GlobalMessages_C
// 0x0000
class UUMG_GlobalMessages_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GlobalMessages.UMG_GlobalMessages_C");
		return ptr;
	}



	void IsShowingAMessage();
	void OnMessageClosed();
	void FetchGlobalMessages();
	void Tick();
	void ExecuteUbergraph_UMG_GlobalMessages();
	void MessageClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
