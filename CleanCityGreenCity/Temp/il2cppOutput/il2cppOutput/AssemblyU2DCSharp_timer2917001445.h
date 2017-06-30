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

// timer
struct  timer_t2917001445  : public MonoBehaviour_t1158329972
{
public:
	// System.Single timer::timeLeft
	float ___timeLeft_2;
	// UnityEngine.UI.Text timer::text
	Text_t356221433 * ___text_3;

public:
	inline static int32_t get_offset_of_timeLeft_2() { return static_cast<int32_t>(offsetof(timer_t2917001445, ___timeLeft_2)); }
	inline float get_timeLeft_2() const { return ___timeLeft_2; }
	inline float* get_address_of_timeLeft_2() { return &___timeLeft_2; }
	inline void set_timeLeft_2(float value)
	{
		___timeLeft_2 = value;
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(timer_t2917001445, ___text_3)); }
	inline Text_t356221433 * get_text_3() const { return ___text_3; }
	inline Text_t356221433 ** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(Text_t356221433 * value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
