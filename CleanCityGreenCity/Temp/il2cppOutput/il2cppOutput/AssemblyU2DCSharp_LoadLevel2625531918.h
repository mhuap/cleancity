#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadLevel
struct  LoadLevel_t2625531918  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.EventSystems.EventSystem LoadLevel::es
	EventSystem_t3466835263 * ___es_2;

public:
	inline static int32_t get_offset_of_es_2() { return static_cast<int32_t>(offsetof(LoadLevel_t2625531918, ___es_2)); }
	inline EventSystem_t3466835263 * get_es_2() const { return ___es_2; }
	inline EventSystem_t3466835263 ** get_address_of_es_2() { return &___es_2; }
	inline void set_es_2(EventSystem_t3466835263 * value)
	{
		___es_2 = value;
		Il2CppCodeGenWriteBarrier(&___es_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
