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

// Class OnlineSubsystemDungeons.DungeonsNetDriver
// 0x0000
class UDungeonsNetDriver : public UIpNetDriver
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemDungeons.DungeonsNetDriver");
		return ptr;
	}



};

// Class OnlineSubsystemDungeons.DungeonsNetConnection
// 0x0000
class UDungeonsNetConnection : public UIpConnection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemDungeons.DungeonsNetConnection");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
