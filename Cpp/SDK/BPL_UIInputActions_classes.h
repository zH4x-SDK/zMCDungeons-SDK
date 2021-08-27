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

// BlueprintGeneratedClass BPL_UIInputActions.BPL_UIInputActions_C
// 0x0000
class UBPL_UIInputActions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UIInputActions.BPL_UIInputActions_C");
		return ptr;
	}



	void TryPlatformSwapKeyEnum();
	void GetDefaultKeyForAction();
	void TryPlatformSwapActionKey();
	void GetUnbindableKeys();
	void HasDefaultBinding();
	void GetBoundActionForKey();
	void keySubstitutions();
	void GetActionDisplayName();
	void GetInputActionShortName();
	void GetBoundKeyForAction();
	void GetInputActionKeyMappingScore();
	void FindBestInputActionMapping();
	void GetBestInputActionKey();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
