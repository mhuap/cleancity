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
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t3573108141  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ScoreManager::gameOverText
	GameObject_t1756533147 * ___gameOverText_3;
	// UnityEngine.UI.Text ScoreManager::text
	Text_t356221433 * ___text_4;

public:
	inline static int32_t get_offset_of_gameOverText_3() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___gameOverText_3)); }
	inline GameObject_t1756533147 * get_gameOverText_3() const { return ___gameOverText_3; }
	inline GameObject_t1756533147 ** get_address_of_gameOverText_3() { return &___gameOverText_3; }
	inline void set_gameOverText_3(GameObject_t1756533147 * value)
	{
		___gameOverText_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_3, value);
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___text_4)); }
	inline Text_t356221433 * get_text_4() const { return ___text_4; }
	inline Text_t356221433 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t356221433 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}
};

struct ScoreManager_t3573108141_StaticFields
{
public:
	// System.Int32 ScoreManager::score
	int32_t ___score_2;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141_StaticFields, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
