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
// UnityEngine.GameObject
struct GameObject_t1756533147;
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
	String_t* ___strikeOutText_3;
	// UnityEngine.GameObject StrikeManager::gameOverText
	GameObject_t1756533147 * ___gameOverText_4;
	// UnityEngine.GameObject StrikeManager::restartText
	GameObject_t1756533147 * ___restartText_5;
	// System.Boolean StrikeManager::restart
	bool ___restart_6;
	// UnityEngine.UI.Text StrikeManager::text
	Text_t356221433 * ___text_7;
	// UnityEngine.UI.Text StrikeManager::strikeOut
	Text_t356221433 * ___strikeOut_8;

public:
	inline static int32_t get_offset_of_strikeOutText_3() { return static_cast<int32_t>(offsetof(StrikeManager_t146118555, ___strikeOutText_3)); }
	inline String_t* get_strikeOutText_3() const { return ___strikeOutText_3; }
	inline String_t** get_address_of_strikeOutText_3() { return &___strikeOutText_3; }
	inline void set_strikeOutText_3(String_t* value)
	{
		___strikeOutText_3 = value;
		Il2CppCodeGenWriteBarrier(&___strikeOutText_3, value);
	}

	inline static int32_t get_offset_of_gameOverText_4() { return static_cast<int32_t>(offsetof(StrikeManager_t146118555, ___gameOverText_4)); }
	inline GameObject_t1756533147 * get_gameOverText_4() const { return ___gameOverText_4; }
	inline GameObject_t1756533147 ** get_address_of_gameOverText_4() { return &___gameOverText_4; }
	inline void set_gameOverText_4(GameObject_t1756533147 * value)
	{
		___gameOverText_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_4, value);
	}

	inline static int32_t get_offset_of_restartText_5() { return static_cast<int32_t>(offsetof(StrikeManager_t146118555, ___restartText_5)); }
	inline GameObject_t1756533147 * get_restartText_5() const { return ___restartText_5; }
	inline GameObject_t1756533147 ** get_address_of_restartText_5() { return &___restartText_5; }
	inline void set_restartText_5(GameObject_t1756533147 * value)
	{
		___restartText_5 = value;
		Il2CppCodeGenWriteBarrier(&___restartText_5, value);
	}

	inline static int32_t get_offset_of_restart_6() { return static_cast<int32_t>(offsetof(StrikeManager_t146118555, ___restart_6)); }
	inline bool get_restart_6() const { return ___restart_6; }
	inline bool* get_address_of_restart_6() { return &___restart_6; }
	inline void set_restart_6(bool value)
	{
		___restart_6 = value;
	}

	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(StrikeManager_t146118555, ___text_7)); }
	inline Text_t356221433 * get_text_7() const { return ___text_7; }
	inline Text_t356221433 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(Text_t356221433 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier(&___text_7, value);
	}

	inline static int32_t get_offset_of_strikeOut_8() { return static_cast<int32_t>(offsetof(StrikeManager_t146118555, ___strikeOut_8)); }
	inline Text_t356221433 * get_strikeOut_8() const { return ___strikeOut_8; }
	inline Text_t356221433 ** get_address_of_strikeOut_8() { return &___strikeOut_8; }
	inline void set_strikeOut_8(Text_t356221433 * value)
	{
		___strikeOut_8 = value;
		Il2CppCodeGenWriteBarrier(&___strikeOut_8, value);
	}
};

struct StrikeManager_t146118555_StaticFields
{
public:
	// System.Int32 StrikeManager::strikes
	int32_t ___strikes_2;

public:
	inline static int32_t get_offset_of_strikes_2() { return static_cast<int32_t>(offsetof(StrikeManager_t146118555_StaticFields, ___strikes_2)); }
	inline int32_t get_strikes_2() const { return ___strikes_2; }
	inline int32_t* get_address_of_strikes_2() { return &___strikes_2; }
	inline void set_strikes_2(int32_t value)
	{
		___strikes_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
