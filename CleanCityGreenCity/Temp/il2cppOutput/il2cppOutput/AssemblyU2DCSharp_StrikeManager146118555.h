#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StrikeManager
struct  StrikeManager_t146118555  : public MonoBehaviour_t1158329972
{
public:
	// System.String StrikeManager::strikeOutText
	String_t* ___strikeOutText_2;
	// System.Char StrikeManager::x
	Il2CppChar ___x_3;
	// UnityEngine.UI.Text StrikeManager::text
	Text_t356221433 * ___text_5;

public:
	inline static int32_t get_offset_of_strikeOutText_2() { return static_cast<int32_t>(offsetof(StrikeManager_t146118555, ___strikeOutText_2)); }
	inline String_t* get_strikeOutText_2() const { return ___strikeOutText_2; }
	inline String_t** get_address_of_strikeOutText_2() { return &___strikeOutText_2; }
	inline void set_strikeOutText_2(String_t* value)
	{
		___strikeOutText_2 = value;
		Il2CppCodeGenWriteBarrier(&___strikeOutText_2, value);
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(StrikeManager_t146118555, ___x_3)); }
	inline Il2CppChar get_x_3() const { return ___x_3; }
	inline Il2CppChar* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(Il2CppChar value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(StrikeManager_t146118555, ___text_5)); }
	inline Text_t356221433 * get_text_5() const { return ___text_5; }
	inline Text_t356221433 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t356221433 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier(&___text_5, value);
	}
};

struct StrikeManager_t146118555_StaticFields
{
public:
	// System.Int32 StrikeManager::strikes
	int32_t ___strikes_4;

public:
	inline static int32_t get_offset_of_strikes_4() { return static_cast<int32_t>(offsetof(StrikeManager_t146118555_StaticFields, ___strikes_4)); }
	inline int32_t get_strikes_4() const { return ___strikes_4; }
	inline int32_t* get_address_of_strikes_4() { return &___strikes_4; }
	inline void set_strikes_4(int32_t value)
	{
		___strikes_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
