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
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialBins
struct  TutorialBins_t1138516932  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite TutorialBins::cross
	Sprite_t309593783 * ___cross_2;
	// UnityEngine.Sprite TutorialBins::check
	Sprite_t309593783 * ___check_3;
	// System.String TutorialBins::binType
	String_t* ___binType_4;
	// System.Boolean TutorialBins::drop
	bool ___drop_5;
	// System.Collections.Generic.List`1<System.String> TutorialBins::bins
	List_1_t1398341365 * ___bins_6;
	// UnityEngine.SpriteRenderer TutorialBins::sr
	SpriteRenderer_t1209076198 * ___sr_7;
	// UnityEngine.Sprite TutorialBins::oldSprite
	Sprite_t309593783 * ___oldSprite_8;
	// UnityEngine.Sprite TutorialBins::newSprite
	Sprite_t309593783 * ___newSprite_9;
	// UnityEngine.GameObject TutorialBins::waste
	GameObject_t1756533147 * ___waste_10;

public:
	inline static int32_t get_offset_of_cross_2() { return static_cast<int32_t>(offsetof(TutorialBins_t1138516932, ___cross_2)); }
	inline Sprite_t309593783 * get_cross_2() const { return ___cross_2; }
	inline Sprite_t309593783 ** get_address_of_cross_2() { return &___cross_2; }
	inline void set_cross_2(Sprite_t309593783 * value)
	{
		___cross_2 = value;
		Il2CppCodeGenWriteBarrier(&___cross_2, value);
	}

	inline static int32_t get_offset_of_check_3() { return static_cast<int32_t>(offsetof(TutorialBins_t1138516932, ___check_3)); }
	inline Sprite_t309593783 * get_check_3() const { return ___check_3; }
	inline Sprite_t309593783 ** get_address_of_check_3() { return &___check_3; }
	inline void set_check_3(Sprite_t309593783 * value)
	{
		___check_3 = value;
		Il2CppCodeGenWriteBarrier(&___check_3, value);
	}

	inline static int32_t get_offset_of_binType_4() { return static_cast<int32_t>(offsetof(TutorialBins_t1138516932, ___binType_4)); }
	inline String_t* get_binType_4() const { return ___binType_4; }
	inline String_t** get_address_of_binType_4() { return &___binType_4; }
	inline void set_binType_4(String_t* value)
	{
		___binType_4 = value;
		Il2CppCodeGenWriteBarrier(&___binType_4, value);
	}

	inline static int32_t get_offset_of_drop_5() { return static_cast<int32_t>(offsetof(TutorialBins_t1138516932, ___drop_5)); }
	inline bool get_drop_5() const { return ___drop_5; }
	inline bool* get_address_of_drop_5() { return &___drop_5; }
	inline void set_drop_5(bool value)
	{
		___drop_5 = value;
	}

	inline static int32_t get_offset_of_bins_6() { return static_cast<int32_t>(offsetof(TutorialBins_t1138516932, ___bins_6)); }
	inline List_1_t1398341365 * get_bins_6() const { return ___bins_6; }
	inline List_1_t1398341365 ** get_address_of_bins_6() { return &___bins_6; }
	inline void set_bins_6(List_1_t1398341365 * value)
	{
		___bins_6 = value;
		Il2CppCodeGenWriteBarrier(&___bins_6, value);
	}

	inline static int32_t get_offset_of_sr_7() { return static_cast<int32_t>(offsetof(TutorialBins_t1138516932, ___sr_7)); }
	inline SpriteRenderer_t1209076198 * get_sr_7() const { return ___sr_7; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sr_7() { return &___sr_7; }
	inline void set_sr_7(SpriteRenderer_t1209076198 * value)
	{
		___sr_7 = value;
		Il2CppCodeGenWriteBarrier(&___sr_7, value);
	}

	inline static int32_t get_offset_of_oldSprite_8() { return static_cast<int32_t>(offsetof(TutorialBins_t1138516932, ___oldSprite_8)); }
	inline Sprite_t309593783 * get_oldSprite_8() const { return ___oldSprite_8; }
	inline Sprite_t309593783 ** get_address_of_oldSprite_8() { return &___oldSprite_8; }
	inline void set_oldSprite_8(Sprite_t309593783 * value)
	{
		___oldSprite_8 = value;
		Il2CppCodeGenWriteBarrier(&___oldSprite_8, value);
	}

	inline static int32_t get_offset_of_newSprite_9() { return static_cast<int32_t>(offsetof(TutorialBins_t1138516932, ___newSprite_9)); }
	inline Sprite_t309593783 * get_newSprite_9() const { return ___newSprite_9; }
	inline Sprite_t309593783 ** get_address_of_newSprite_9() { return &___newSprite_9; }
	inline void set_newSprite_9(Sprite_t309593783 * value)
	{
		___newSprite_9 = value;
		Il2CppCodeGenWriteBarrier(&___newSprite_9, value);
	}

	inline static int32_t get_offset_of_waste_10() { return static_cast<int32_t>(offsetof(TutorialBins_t1138516932, ___waste_10)); }
	inline GameObject_t1756533147 * get_waste_10() const { return ___waste_10; }
	inline GameObject_t1756533147 ** get_address_of_waste_10() { return &___waste_10; }
	inline void set_waste_10(GameObject_t1756533147 * value)
	{
		___waste_10 = value;
		Il2CppCodeGenWriteBarrier(&___waste_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
