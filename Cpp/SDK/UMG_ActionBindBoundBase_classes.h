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

// WidgetBlueprintGeneratedClass UMG_ActionBindBoundBase.UMG_ActionBindBoundBase_C
// 0x0000
class UUMG_ActionBindBoundBase_C : public UUMG_InputActionBoundBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ActionBindBoundBase.UMG_ActionBindBoundBase_C");
		return ptr;
	}



	void GetInputActionText();
	void ShouldInputBind();
	void SetActionBindType();
	void SetActionBind();
	void OnInputActionReleased();
	void OnInputActionPressed();
	void StartListeningForInput();
	void StopListeningForInput();
	void Pressed();
	void Released();
	void ExecuteUbergraph_UMG_ActionBindBoundBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
