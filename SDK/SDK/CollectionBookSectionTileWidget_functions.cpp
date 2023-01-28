#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.OnSectionSlotUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumFilledSlots                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumSlots                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateSectionState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionTileWidget_C::OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, enum class EFortCollectionBookState SectionState)
{
	static auto Func = Class->GetFunction("CollectionBookSectionTileWidget_C", "OnSectionSlotUpdate");

	Params::UCollectionBookSectionTileWidget_C_OnSectionSlotUpdate_Params Parms;
	Parms.NumFilledSlots = NumFilledSlots;
	Parms.NumSlots = NumSlots;
	Parms.SectionState = SectionState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.ExecuteUbergraph_CollectionBookSectionTileWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NumFilledSlots                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumSlots                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateK2Node_Event_SectionState                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCollectionBookSectionTileRewardWidget_C*K2Node_DynamicCast_AsCollection_Book_Section_Tile_Reward_Widget  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionTileWidget_C::ExecuteUbergraph_CollectionBookSectionTileWidget(int32 EntryPoint, enum class EFortCollectionBookState Temp_byte_Variable, int32 K2Node_Event_NumFilledSlots, int32 K2Node_Event_NumSlots, enum class EFortCollectionBookState K2Node_Event_SectionState, class UCollectionBookSectionTileRewardWidget_C* K2Node_DynamicCast_AsCollection_Book_Section_Tile_Reward_Widget, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("CollectionBookSectionTileWidget_C", "ExecuteUbergraph_CollectionBookSectionTileWidget");

	Params::UCollectionBookSectionTileWidget_C_ExecuteUbergraph_CollectionBookSectionTileWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_NumFilledSlots = K2Node_Event_NumFilledSlots;
	Parms.K2Node_Event_NumSlots = K2Node_Event_NumSlots;
	Parms.K2Node_Event_SectionState = K2Node_Event_SectionState;
	Parms.K2Node_DynamicCast_AsCollection_Book_Section_Tile_Reward_Widget = K2Node_DynamicCast_AsCollection_Book_Section_Tile_Reward_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
