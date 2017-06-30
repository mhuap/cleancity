#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Waste
struct Waste_t3804163134;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// wasteComponent
struct  wasteComponent_t1138975813  : public MonoBehaviour_t1158329972
{
public:
	// Waste wasteComponent::waste
	Waste_t3804163134 * ___waste_2;
	// System.Boolean wasteComponent::r
	bool ___r_3;
	// System.Boolean wasteComponent::c
	bool ___c_4;
	// System.Boolean wasteComponent::t
	bool ___t_5;

public:
	inline static int32_t get_offset_of_waste_2() { return static_cast<int32_t>(offsetof(wasteComponent_t1138975813, ___waste_2)); }
	inline Waste_t3804163134 * get_waste_2() const { return ___waste_2; }
	inline Waste_t3804163134 ** get_address_of_waste_2() { return &___waste_2; }
	inline void set_waste_2(Waste_t3804163134 * value)
	{
		___waste_2 = value;
		Il2CppCodeGenWriteBarrier(&___waste_2, value);
	}

	inline static int32_t get_offset_of_r_3() { return static_cast<int32_t>(offsetof(wasteComponent_t1138975813, ___r_3)); }
	inline bool get_r_3() const { return ___r_3; }
	inline bool* get_address_of_r_3() { return &___r_3; }
	inline void set_r_3(bool value)
	{
		___r_3 = value;
	}

	inline static int32_t get_offset_of_c_4() { return static_cast<int32_t>(offsetof(wasteComponent_t1138975813, ___c_4)); }
	inline bool get_c_4() const { return ___c_4; }
	inline bool* get_address_of_c_4() { return &___c_4; }
	inline void set_c_4(bool value)
	{
		___c_4 = value;
	}

	inline static int32_t get_offset_of_t_5() { return static_cast<int32_t>(offsetof(wasteComponent_t1138975813, ___t_5)); }
	inline bool get_t_5() const { return ___t_5; }
	inline bool* get_address_of_t_5() { return &___t_5; }
	inline void set_t_5(bool value)
	{
		___t_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
