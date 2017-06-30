#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartGame
struct  StartGame_t415325182  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button StartGame::start
	Button_t2872111280 * ___start_2;

public:
	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(StartGame_t415325182, ___start_2)); }
	inline Button_t2872111280 * get_start_2() const { return ___start_2; }
	inline Button_t2872111280 ** get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(Button_t2872111280 * value)
	{
		___start_2 = value;
		Il2CppCodeGenWriteBarrier(&___start_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
