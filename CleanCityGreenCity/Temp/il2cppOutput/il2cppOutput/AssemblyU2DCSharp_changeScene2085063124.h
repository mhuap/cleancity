#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// changeScene
struct  changeScene_t2085063124  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] changeScene::arrows
	GameObjectU5BU5D_t3057952154* ___arrows_2;
	// UnityEngine.GameObject changeScene::text
	GameObject_t1756533147 * ___text_3;
	// UnityEngine.GameObject[] changeScene::waste
	GameObjectU5BU5D_t3057952154* ___waste_4;
	// System.Int32 changeScene::n
	int32_t ___n_5;
	// System.Int32 changeScene::lastN
	int32_t ___lastN_6;

public:
	inline static int32_t get_offset_of_arrows_2() { return static_cast<int32_t>(offsetof(changeScene_t2085063124, ___arrows_2)); }
	inline GameObjectU5BU5D_t3057952154* get_arrows_2() const { return ___arrows_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_arrows_2() { return &___arrows_2; }
	inline void set_arrows_2(GameObjectU5BU5D_t3057952154* value)
	{
		___arrows_2 = value;
		Il2CppCodeGenWriteBarrier(&___arrows_2, value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(changeScene_t2085063124, ___text_3)); }
	inline GameObject_t1756533147 * get_text_3() const { return ___text_3; }
	inline GameObject_t1756533147 ** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(GameObject_t1756533147 * value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}

	inline static int32_t get_offset_of_waste_4() { return static_cast<int32_t>(offsetof(changeScene_t2085063124, ___waste_4)); }
	inline GameObjectU5BU5D_t3057952154* get_waste_4() const { return ___waste_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_waste_4() { return &___waste_4; }
	inline void set_waste_4(GameObjectU5BU5D_t3057952154* value)
	{
		___waste_4 = value;
		Il2CppCodeGenWriteBarrier(&___waste_4, value);
	}

	inline static int32_t get_offset_of_n_5() { return static_cast<int32_t>(offsetof(changeScene_t2085063124, ___n_5)); }
	inline int32_t get_n_5() const { return ___n_5; }
	inline int32_t* get_address_of_n_5() { return &___n_5; }
	inline void set_n_5(int32_t value)
	{
		___n_5 = value;
	}

	inline static int32_t get_offset_of_lastN_6() { return static_cast<int32_t>(offsetof(changeScene_t2085063124, ___lastN_6)); }
	inline int32_t get_lastN_6() const { return ___lastN_6; }
	inline int32_t* get_address_of_lastN_6() { return &___lastN_6; }
	inline void set_lastN_6(int32_t value)
	{
		___lastN_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
