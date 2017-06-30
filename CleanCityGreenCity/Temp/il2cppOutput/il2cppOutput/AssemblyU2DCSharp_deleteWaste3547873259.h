#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t2823602470;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// deleteWaste
struct  deleteWaste_t3547873259  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite deleteWaste::cross
	Sprite_t309593783 * ___cross_2;
	// UnityEngine.Sprite deleteWaste::check
	Sprite_t309593783 * ___check_3;
	// System.Single deleteWaste::time
	float ___time_4;
	// System.Collections.Generic.List`1<System.Char> deleteWaste::bins
	List_1_t2823602470 * ___bins_5;
	// System.Char deleteWaste::binType
	Il2CppChar ___binType_6;
	// UnityEngine.SpriteRenderer deleteWaste::sr
	SpriteRenderer_t1209076198 * ___sr_7;
	// UnityEngine.Sprite deleteWaste::oldSprite
	Sprite_t309593783 * ___oldSprite_8;
	// UnityEngine.Sprite deleteWaste::newSprite
	Sprite_t309593783 * ___newSprite_9;
	// UnityEngine.GameObject deleteWaste::waste
	GameObject_t1756533147 * ___waste_10;
	// System.Boolean deleteWaste::drop
	bool ___drop_11;
	// System.Boolean deleteWaste::rPoint
	bool ___rPoint_12;
	// System.Boolean deleteWaste::cPoint
	bool ___cPoint_13;
	// System.Boolean deleteWaste::tPoint
	bool ___tPoint_14;

public:
	inline static int32_t get_offset_of_cross_2() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___cross_2)); }
	inline Sprite_t309593783 * get_cross_2() const { return ___cross_2; }
	inline Sprite_t309593783 ** get_address_of_cross_2() { return &___cross_2; }
	inline void set_cross_2(Sprite_t309593783 * value)
	{
		___cross_2 = value;
		Il2CppCodeGenWriteBarrier(&___cross_2, value);
	}

	inline static int32_t get_offset_of_check_3() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___check_3)); }
	inline Sprite_t309593783 * get_check_3() const { return ___check_3; }
	inline Sprite_t309593783 ** get_address_of_check_3() { return &___check_3; }
	inline void set_check_3(Sprite_t309593783 * value)
	{
		___check_3 = value;
		Il2CppCodeGenWriteBarrier(&___check_3, value);
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_bins_5() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___bins_5)); }
	inline List_1_t2823602470 * get_bins_5() const { return ___bins_5; }
	inline List_1_t2823602470 ** get_address_of_bins_5() { return &___bins_5; }
	inline void set_bins_5(List_1_t2823602470 * value)
	{
		___bins_5 = value;
		Il2CppCodeGenWriteBarrier(&___bins_5, value);
	}

	inline static int32_t get_offset_of_binType_6() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___binType_6)); }
	inline Il2CppChar get_binType_6() const { return ___binType_6; }
	inline Il2CppChar* get_address_of_binType_6() { return &___binType_6; }
	inline void set_binType_6(Il2CppChar value)
	{
		___binType_6 = value;
	}

	inline static int32_t get_offset_of_sr_7() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___sr_7)); }
	inline SpriteRenderer_t1209076198 * get_sr_7() const { return ___sr_7; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sr_7() { return &___sr_7; }
	inline void set_sr_7(SpriteRenderer_t1209076198 * value)
	{
		___sr_7 = value;
		Il2CppCodeGenWriteBarrier(&___sr_7, value);
	}

	inline static int32_t get_offset_of_oldSprite_8() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___oldSprite_8)); }
	inline Sprite_t309593783 * get_oldSprite_8() const { return ___oldSprite_8; }
	inline Sprite_t309593783 ** get_address_of_oldSprite_8() { return &___oldSprite_8; }
	inline void set_oldSprite_8(Sprite_t309593783 * value)
	{
		___oldSprite_8 = value;
		Il2CppCodeGenWriteBarrier(&___oldSprite_8, value);
	}

	inline static int32_t get_offset_of_newSprite_9() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___newSprite_9)); }
	inline Sprite_t309593783 * get_newSprite_9() const { return ___newSprite_9; }
	inline Sprite_t309593783 ** get_address_of_newSprite_9() { return &___newSprite_9; }
	inline void set_newSprite_9(Sprite_t309593783 * value)
	{
		___newSprite_9 = value;
		Il2CppCodeGenWriteBarrier(&___newSprite_9, value);
	}

	inline static int32_t get_offset_of_waste_10() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___waste_10)); }
	inline GameObject_t1756533147 * get_waste_10() const { return ___waste_10; }
	inline GameObject_t1756533147 ** get_address_of_waste_10() { return &___waste_10; }
	inline void set_waste_10(GameObject_t1756533147 * value)
	{
		___waste_10 = value;
		Il2CppCodeGenWriteBarrier(&___waste_10, value);
	}

	inline static int32_t get_offset_of_drop_11() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___drop_11)); }
	inline bool get_drop_11() const { return ___drop_11; }
	inline bool* get_address_of_drop_11() { return &___drop_11; }
	inline void set_drop_11(bool value)
	{
		___drop_11 = value;
	}

	inline static int32_t get_offset_of_rPoint_12() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___rPoint_12)); }
	inline bool get_rPoint_12() const { return ___rPoint_12; }
	inline bool* get_address_of_rPoint_12() { return &___rPoint_12; }
	inline void set_rPoint_12(bool value)
	{
		___rPoint_12 = value;
	}

	inline static int32_t get_offset_of_cPoint_13() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___cPoint_13)); }
	inline bool get_cPoint_13() const { return ___cPoint_13; }
	inline bool* get_address_of_cPoint_13() { return &___cPoint_13; }
	inline void set_cPoint_13(bool value)
	{
		___cPoint_13 = value;
	}

	inline static int32_t get_offset_of_tPoint_14() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___tPoint_14)); }
	inline bool get_tPoint_14() const { return ___tPoint_14; }
	inline bool* get_address_of_tPoint_14() { return &___tPoint_14; }
	inline void set_tPoint_14(bool value)
	{
		___tPoint_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
