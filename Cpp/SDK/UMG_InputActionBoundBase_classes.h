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

// WidgetBlueprintGeneratedClass UMG_InputActionBoundBase.UMG_InputActionBoundBase_C
// 0x0000
class UUMG_InputActionBoundBase_C : public UDungeonsVisiblityRootWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InputActionBoundBase.UMG_InputActionBoundBase_C");
		return ptr;
	}



	void InputEnabledChanged();
	void IsInputEnabled();
	void InputBindChangedIntent();
	void ShouldInputBind();
	void IsInputBound();
	void InputBindChanged();
	void SetInputShouldBind();
	void RefreshInputBinds();
	void SetInputBindDesired();
	void SetInputEnabled();
	void StopListeningForInput();
	void StartListeningForInput();
	void SetInputActionsEnabled();
	void Construct();
	void ExecuteUbergraph_UMG_InputActionBoundBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
