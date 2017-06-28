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
	float ___waitTime_3;
	// System.Int32 WasteGenerator::numCoords
	int32_t ___numCoords_4;
	// UnityEngine.GameObject WasteGenerator::wastePrefab
	GameObject_t1756533147 * ___wastePrefab_5;
	// UnityEngine.Vector3[] WasteGenerator::coords
	Vector3U5BU5D_t1172311765* ___coords_6;
	// UnityEngine.Sprite[] WasteGenerator::recycleSprites
	SpriteU5BU5D_t3359083662* ___recycleSprites_7;
	// UnityEngine.Sprite[] WasteGenerator::trashSprites
	SpriteU5BU5D_t3359083662* ___trashSprites_8;
	// UnityEngine.Sprite[] WasteGenerator::compostSprites
	SpriteU5BU5D_t3359083662* ___compostSprites_9;
	// UnityEngine.GameObject WasteGenerator::gameOverText
	GameObject_t1756533147 * ___gameOverText_10;

public:
	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_waitTime_3() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___waitTime_3)); }
	inline float get_waitTime_3() const { return ___waitTime_3; }
	inline float* get_address_of_waitTime_3() { return &___waitTime_3; }
	inline void set_waitTime_3(float value)
	{
		___waitTime_3 = value;
	}

	inline static int32_t get_offset_of_numCoords_4() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___numCoords_4)); }
	inline int32_t get_numCoords_4() const { return ___numCoords_4; }
	inline int32_t* get_address_of_numCoords_4() { return &___numCoords_4; }
	inline void set_numCoords_4(int32_t value)
	{
		___numCoords_4 = value;
	}

	inline static int32_t get_offset_of_wastePrefab_5() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___wastePrefab_5)); }
	inline GameObject_t1756533147 * get_wastePrefab_5() const { return ___wastePrefab_5; }
	inline GameObject_t1756533147 ** get_address_of_wastePrefab_5() { return &___wastePrefab_5; }
	inline void set_wastePrefab_5(GameObject_t1756533147 * value)
	{
		___wastePrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___wastePrefab_5, value);
	}

	inline static int32_t get_offset_of_coords_6() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___coords_6)); }
	inline Vector3U5BU5D_t1172311765* get_coords_6() const { return ___coords_6; }
	inline Vector3U5BU5D_t1172311765** get_address_of_coords_6() { return &___coords_6; }
	inline void set_coords_6(Vector3U5BU5D_t1172311765* value)
	{
		___coords_6 = value;
		Il2CppCodeGenWriteBarrier(&___coords_6, value);
	}

	inline static int32_t get_offset_of_recycleSprites_7() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___recycleSprites_7)); }
	inline SpriteU5BU5D_t3359083662* get_recycleSprites_7() const { return ___recycleSprites_7; }
	inline SpriteU5BU5D_t3359083662** get_address_of_recycleSprites_7() { return &___recycleSprites_7; }
	inline void set_recycleSprites_7(SpriteU5BU5D_t3359083662* value)
	{
		___recycleSprites_7 = value;
		Il2CppCodeGenWriteBarrier(&___recycleSprites_7, value);
	}

	inline static int32_t get_offset_of_trashSprites_8() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___trashSprites_8)); }
	inline SpriteU5BU5D_t3359083662* get_trashSprites_8() const { return ___trashSprites_8; }
	inline SpriteU5BU5D_t3359083662** get_address_of_trashSprites_8() { return &___trashSprites_8; }
	inline void set_trashSprites_8(SpriteU5BU5D_t3359083662* value)
	{
		___trashSprites_8 = value;
		Il2CppCodeGenWriteBarrier(&___trashSprites_8, value);
	}

	inline static int32_t get_offset_of_compostSprites_9() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___compostSprites_9)); }
	inline SpriteU5BU5D_t3359083662* get_compostSprites_9() const { return ___compostSprites_9; }
	inline SpriteU5BU5D_t3359083662** get_address_of_compostSprites_9() { return &___compostSprites_9; }
	inline void set_compostSprites_9(SpriteU5BU5D_t3359083662* value)
	{
		___compostSprites_9 = value;
		Il2CppCodeGenWriteBarrier(&___compostSprites_9, value);
	}

	inline static int32_t get_offset_of_gameOverText_10() { return static_cast<int32_t>(offsetof(WasteGenerator_t1738628053, ___gameOverText_10)); }
	inline GameObject_t1756533147 * get_gameOverText_10() const { return ___gameOverText_10; }
	inline GameObject_t1756533147 ** get_address_of_gameOverText_10() { return &___gameOverText_10; }
	inline void set_gameOverText_10(GameObject_t1756533147 * value)
	{
		___gameOverText_10 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
