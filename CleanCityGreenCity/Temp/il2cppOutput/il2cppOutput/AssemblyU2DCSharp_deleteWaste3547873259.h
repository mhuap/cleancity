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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// deleteWaste
struct  deleteWaste_t3547873259  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 deleteWaste::point
	int32_t ___point_2;
	// System.String deleteWaste::binType
	String_t* ___binType_3;
	// System.Collections.Generic.List`1<System.String> deleteWaste::bins
	List_1_t1398341365 * ___bins_4;

public:
	inline static int32_t get_offset_of_point_2() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___point_2)); }
	inline int32_t get_point_2() const { return ___point_2; }
	inline int32_t* get_address_of_point_2() { return &___point_2; }
	inline void set_point_2(int32_t value)
	{
		___point_2 = value;
	}

	inline static int32_t get_offset_of_binType_3() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___binType_3)); }
	inline String_t* get_binType_3() const { return ___binType_3; }
	inline String_t** get_address_of_binType_3() { return &___binType_3; }
	inline void set_binType_3(String_t* value)
	{
		___binType_3 = value;
		Il2CppCodeGenWriteBarrier(&___binType_3, value);
	}

	inline static int32_t get_offset_of_bins_4() { return static_cast<int32_t>(offsetof(deleteWaste_t3547873259, ___bins_4)); }
	inline List_1_t1398341365 * get_bins_4() const { return ___bins_4; }
	inline List_1_t1398341365 ** get_address_of_bins_4() { return &___bins_4; }
	inline void set_bins_4(List_1_t1398341365 * value)
	{
		___bins_4 = value;
		Il2CppCodeGenWriteBarrier(&___bins_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
