﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// clickAndDrag
struct  clickAndDrag_t2506881339  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject clickAndDrag::gameOverText
	GameObject_t1756533147 * ___gameOverText_2;
	// System.Single clickAndDrag::distance
	float ___distance_3;
	// UnityEngine.Vector3 clickAndDrag::screenPoint
	Vector3_t2243707580  ___screenPoint_4;
	// UnityEngine.Vector3 clickAndDrag::offset
	Vector3_t2243707580  ___offset_5;
	// System.Single clickAndDrag::lockedYPos
	float ___lockedYPos_6;
	// System.Boolean clickAndDrag::enable
	bool ___enable_7;

public:
	inline static int32_t get_offset_of_gameOverText_2() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___gameOverText_2)); }
	inline GameObject_t1756533147 * get_gameOverText_2() const { return ___gameOverText_2; }
	inline GameObject_t1756533147 ** get_address_of_gameOverText_2() { return &___gameOverText_2; }
	inline void set_gameOverText_2(GameObject_t1756533147 * value)
	{
		___gameOverText_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_2, value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_screenPoint_4() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___screenPoint_4)); }
	inline Vector3_t2243707580  get_screenPoint_4() const { return ___screenPoint_4; }
	inline Vector3_t2243707580 * get_address_of_screenPoint_4() { return &___screenPoint_4; }
	inline void set_screenPoint_4(Vector3_t2243707580  value)
	{
		___screenPoint_4 = value;
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___offset_5)); }
	inline Vector3_t2243707580  get_offset_5() const { return ___offset_5; }
	inline Vector3_t2243707580 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_t2243707580  value)
	{
		___offset_5 = value;
	}

	inline static int32_t get_offset_of_lockedYPos_6() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___lockedYPos_6)); }
	inline float get_lockedYPos_6() const { return ___lockedYPos_6; }
	inline float* get_address_of_lockedYPos_6() { return &___lockedYPos_6; }
	inline void set_lockedYPos_6(float value)
	{
		___lockedYPos_6 = value;
	}

	inline static int32_t get_offset_of_enable_7() { return static_cast<int32_t>(offsetof(clickAndDrag_t2506881339, ___enable_7)); }
	inline bool get_enable_7() const { return ___enable_7; }
	inline bool* get_address_of_enable_7() { return &___enable_7; }
	inline void set_enable_7(bool value)
	{
		___enable_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif