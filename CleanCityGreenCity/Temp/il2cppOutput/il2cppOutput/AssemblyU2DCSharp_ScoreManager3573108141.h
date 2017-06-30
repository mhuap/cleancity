#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

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
	// UnityEngine.UI.Text ScoreManager::text
	Text_t356221433 * ___text_4;

public:
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
	// System.Int32 ScoreManager::wasteLeft
	int32_t ___wasteLeft_2;
	// System.Int32 ScoreManager::pointInc
	int32_t ___pointInc_3;

public:
	inline static int32_t get_offset_of_wasteLeft_2() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141_StaticFields, ___wasteLeft_2)); }
	inline int32_t get_wasteLeft_2() const { return ___wasteLeft_2; }
	inline int32_t* get_address_of_wasteLeft_2() { return &___wasteLeft_2; }
	inline void set_wasteLeft_2(int32_t value)
	{
		___wasteLeft_2 = value;
	}

	inline static int32_t get_offset_of_pointInc_3() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141_StaticFields, ___pointInc_3)); }
	inline int32_t get_pointInc_3() const { return ___pointInc_3; }
	inline int32_t* get_address_of_pointInc_3() { return &___pointInc_3; }
	inline void set_pointInc_3(int32_t value)
	{
		___pointInc_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
