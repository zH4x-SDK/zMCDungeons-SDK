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

// BlueprintGeneratedClass Menu.Menu_C
// 0x0000
class AMenu_C : public ALevelScriptActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Menu.Menu_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnSplashEnd();
	void ExecuteUbergraph_Menu();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
