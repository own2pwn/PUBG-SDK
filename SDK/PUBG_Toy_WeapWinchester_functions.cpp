// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Toy_WeapWinchester.Toy_WeapWinchester_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AToy_WeapWinchester_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Toy_WeapWinchester.Toy_WeapWinchester_C.UserConstructionScript");

	AToy_WeapWinchester_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Toy_WeapWinchester.Toy_WeapWinchester_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AToy_WeapWinchester_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Toy_WeapWinchester.Toy_WeapWinchester_C.ReceiveBeginPlay");

	AToy_WeapWinchester_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Toy_WeapWinchester.Toy_WeapWinchester_C.ExecuteUbergraph_Toy_WeapWinchester
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AToy_WeapWinchester_C::ExecuteUbergraph_Toy_WeapWinchester(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Toy_WeapWinchester.Toy_WeapWinchester_C.ExecuteUbergraph_Toy_WeapWinchester");

	AToy_WeapWinchester_C_ExecuteUbergraph_Toy_WeapWinchester_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
