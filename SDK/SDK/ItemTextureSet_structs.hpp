#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA28 (0xA28 - 0x0)
// UserDefinedStruct ItemTextureSet.ItemTextureSet
struct FItemTextureSet
{
public:
	enum class EItemDisplayStyle                 Style_21_0D38ED0D4F46097BD1353E930AE51488;         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   Bezel_32_21DC2A9C4E30B0D304AD4685FDFDA26D;         // 0x8(0x360)(Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                   Shadow_33_514BE8E24563A9CF138144960776C114;        // 0x368(0x360)(Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                   Chamfer_31_AD4B992A4499C810B0AA9F8AFD86EFAB;       // 0x6C8(0x360)(Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
