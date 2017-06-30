#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WasteGenerator
struct  WasteGenerator_t1738628053  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 WasteGenerator::count
	int32_t ___count_2;
	// System.Single WasteGenerator::waitTime
	float ___waitTime_4;
	// System.Int32 WasteGenerator::numCoords
	int32_t ___numCoords_5;
	// UnityEngine.GameObject WasteGenerator::wastePrefab
	GameObject_t1756533147 * ___wastePrefab_6;
	// UnityEngine.Vector3[] WasteGenerator::coords
	Vector3U5BU5D_t1172311765* ___coords_7;
	// UnityEngine.Sprite[] WasteGenerator::recycleSprites
	SpriteU5BU5D_t3359083662* ___recycleSprites_8;
	// UnityEngine.Sprite[] WasteGenerator::trashSprites
	SpriteU5BU5D_t3359083662* ___trashSprites_9;
	// UnityEngine.Sprite[] WasteGenerator::compostSprites
	SpriteU5BU5D_t3359083662* ___compostSprites_10;

public:
	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_waitTime_4() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___waitTime_4)); }
	inline float get_waitTime_4() const { return ___waitTime_4; }
	inline float* get_address_of_waitTime_4() { return &___waitTime_4; }
	inline void set_waitTime_4(float value)
	{
		___waitTime_4 = value;
	}

	inline static int32_t get_offset_of_numCoords_5() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___numCoords_5)); }
	inline int32_t get_numCoords_5() const { return ___numCoords_5; }
	inline int32_t* get_address_of_numCoords_5() { return &___numCoords_5; }
	inline void set_numCoords_5(int32_t value)
	{
		___numCoords_5 = value;
	}

	inline static int32_t get_offset_of_wastePrefab_6() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___wastePrefab_6)); }
	inline GameObject_t1756533147 * get_wastePrefab_6() const { return ___wastePrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_wastePrefab_6() { return &___wastePrefab_6; }
	inline void set_wastePrefab_6(GameObject_t1756533147 * value)
	{
		___wastePrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___wastePrefab_6, value);
	}

	inline static int32_t get_offset_of_coords_7() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___coords_7)); }
	inline Vector3U5BU5D_t1172311765* get_coords_7() const { return ___coords_7; }
	inline Vector3U5BU5D_t1172311765** get_address_of_coords_7() { return &___coords_7; }
	inline void set_coords_7(Vector3U5BU5D_t1172311765* value)
	{
		___coords_7 = value;
		Il2CppCodeGenWriteBarrier(&___coords_7, value);
	}

	inline static int32_t get_offset_of_recycleSprites_8() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___recycleSprites_8)); }
	inline SpriteU5BU5D_t3359083662* get_recycleSprites_8() const { return ___recycleSprites_8; }
	inline SpriteU5BU5D_t3359083662** get_address_of_recycleSprites_8() { return &___recycleSprites_8; }
	inline void set_recycleSprites_8(SpriteU5BU5D_t3359083662* value)
	{
		___recycleSprites_8 = value;
		Il2CppCodeGenWriteBarrier(&___recycleSprites_8, value);
	}

	inline static int32_t get_offset_of_trashSprites_9() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___trashSprites_9)); }
	inline SpriteU5BU5D_t3359083662* get_trashSprites_9() const { return ___trashSprites_9; }
	inline SpriteU5BU5D_t3359083662** get_address_of_trashSprites_9() { return &___trashSprites_9; }
	inline void set_trashSprites_9(SpriteU5BU5D_t3359083662* value)
	{
		___trashSprites_9 = value;
		Il2CppCodeGenWriteBarrier(&___trashSprites_9, value);
	}

	inline static int32_t get_offset_of_compostSprites_10() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___compostSprites_10)); }
	inline SpriteU5BU5D_t3359083662* get_compostSprites_10() const { return ___compostSprites_10; }
	inline SpriteU5BU5D_t3359083662** get_address_of_compostSprites_10() { return &___compostSprites_10; }
	inline void set_compostSprites_10(SpriteU5BU5D_t3359083662* value)
	{
		___compostSprites_10 = value;
		Il2CppCodeGenWriteBarrier(&___compostSprites_10, value);
	}
};

struct WasteGenerator_t1738628053_StaticFields
{
public:
	// System.Int32 WasteGenerator::_count
	int32_t ____count_3;

public:
	inline static int32_t get_offset_of__count_3() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053_StaticFields, ____count_3)); }
	inline int32_t get__count_3() const { return ____count_3; }
	inline int32_t* get_address_of__count_3() { return &____count_3; }
	inline void set__count_3(int32_t value)
	{
		____count_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
