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

// Function Task_RedZoneFinishCheck.Task_RedZoneFinishCheck_C.ReceiveTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_RedZoneFinishCheck_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_RedZoneFinishCheck.Task_RedZoneFinishCheck_C.ReceiveTick");

	UTask_RedZoneFinishCheck_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_RedZoneFinishCheck.Task_RedZoneFinishCheck_C.ExecuteUbergraph_Task_RedZoneFinishCheck
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTask_RedZoneFinishCheck_C::ExecuteUbergraph_Task_RedZoneFinishCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_RedZoneFinishCheck.Task_RedZoneFinishCheck_C.ExecuteUbergraph_Task_RedZoneFinishCheck");

	UTask_RedZoneFinishCheck_C_ExecuteUbergraph_Task_RedZoneFinishCheck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
