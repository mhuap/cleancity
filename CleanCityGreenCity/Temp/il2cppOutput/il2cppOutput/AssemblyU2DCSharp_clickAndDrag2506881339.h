#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// clickAndDrag
struct  clickAndDrag_t2506881339  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 clickAndDrag::numLeft
	int32_t ___numLeft_2;
	// System.Single clickAndDrag::distance
	float ___distance_3;
	// System.Single clickAndDrag::lockedYPos
	float ___lockedYPos_4;
	// UnityEngine.Vector3 clickAndDrag::screenPoint
	Vector3_t2243707580  ___screenPoint_5;
	// UnityEngine.Vector3 clickAndDrag::offset
	Vector3_t2243707580  ___offset_6;
	// UnityEngine.GameObject[] clickAndDrag::wastes
	GameObjectU5BU5D_t3057952154* ___wastes_7;
	// System.Boolean clickAndDrag::enable
	bool ___enable_8;

public:
	inline static int32_t get_offset_of_numLeft_2() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___numLeft_2)); }
	inline int32_t get_numLeft_2() const { return ___numLeft_2; }
	inline int32_t* get_address_of_numLeft_2() { return &___numLeft_2; }
	inline void set_numLeft_2(int32_t value)
	{
		___numLeft_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_lockedYPos_4() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___lockedYPos_4)); }
	inline float get_lockedYPos_4() const { return ___lockedYPos_4; }
	inline float* get_address_of_lockedYPos_4() { return &___lockedYPos_4; }
	inline void set_lockedYPos_4(float value)
	{
		___lockedYPos_4 = value;
	}

	inline static int32_t get_offset_of_screenPoint_5() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___screenPoint_5)); }
	inline Vector3_t2243707580  get_screenPoint_5() const { return ___screenPoint_5; }
	inline Vector3_t2243707580 * get_address_of_screenPoint_5() { return &___screenPoint_5; }
	inline void set_screenPoint_5(Vector3_t2243707580  value)
	{
		___screenPoint_5 = value;
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___offset_6)); }
	inline Vector3_t2243707580  get_offset_6() const { return ___offset_6; }
	inline Vector3_t2243707580 * get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(Vector3_t2243707580  value)
	{
		___offset_6 = value;
	}

	inline static int32_t get_offset_of_wastes_7() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___wastes_7)); }
	inline GameObjectU5BU5D_t3057952154* get_wastes_7() const { return ___wastes_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_wastes_7() { return &___wastes_7; }
	inline void set_wastes_7(GameObjectU5BU5D_t3057952154* value)
	{
		___wastes_7 = value;
		Il2CppCodeGenWriteBarrier(&___wastes_7, value);
	}

	inline static int32_t get_offset_of_enable_8() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___enable_8)); }
	inline bool get_enable_8() const { return ___enable_8; }
	inline bool* get_address_of_enable_8() { return &___enable_8; }
	inline void set_enable_8(bool value)
	{
		___enable_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
