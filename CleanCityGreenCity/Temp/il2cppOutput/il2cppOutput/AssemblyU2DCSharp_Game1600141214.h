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
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game
struct  Game_t1600141214  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Game::setGameOverGroup
	GameObject_t1756533147 * ___setGameOverGroup_2;
	// System.String Game::textName
	String_t* ___textName_3;
	// System.String Game::textNameParent
	String_t* ___textNameParent_4;

public:
	inline static int32_t get_offset_of_setGameOverGroup_2() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___setGameOverGroup_2)); }
	inline GameObject_t1756533147 * get_setGameOverGroup_2() const { return ___setGameOverGroup_2; }
	inline GameObject_t1756533147 ** get_address_of_setGameOverGroup_2() { return &___setGameOverGroup_2; }
	inline void set_setGameOverGroup_2(GameObject_t1756533147 * value)
	{
		___setGameOverGroup_2 = value;
		Il2CppCodeGenWriteBarrier(&___setGameOverGroup_2, value);
	}

	inline static int32_t get_offset_of_textName_3() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___textName_3)); }
	inline String_t* get_textName_3() const { return ___textName_3; }
	inline String_t** get_address_of_textName_3() { return &___textName_3; }
	inline void set_textName_3(String_t* value)
	{
		___textName_3 = value;
		Il2CppCodeGenWriteBarrier(&___textName_3, value);
	}

	inline static int32_t get_offset_of_textNameParent_4() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___textNameParent_4)); }
	inline String_t* get_textNameParent_4() const { return ___textNameParent_4; }
	inline String_t** get_address_of_textNameParent_4() { return &___textNameParent_4; }
	inline void set_textNameParent_4(String_t* value)
	{
		___textNameParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___textNameParent_4, value);
	}
};

struct Game_t1600141214_StaticFields
{
public:
	// UnityEngine.GameObject Game::gameOverGroup
	GameObject_t1756533147 * ___gameOverGroup_5;
	// System.String Game::_textName
	String_t* ____textName_6;
	// System.String Game::_textNameParent
	String_t* ____textNameParent_7;
	// System.Boolean Game::_status
	bool ____status_8;

public:
	inline static int32_t get_offset_of_gameOverGroup_5() { return static_cast<int32_t>(offsetof(Game_t1600141214_StaticFields, ___gameOverGroup_5)); }
	inline GameObject_t1756533147 * get_gameOverGroup_5() const { return ___gameOverGroup_5; }
	inline GameObject_t1756533147 ** get_address_of_gameOverGroup_5() { return &___gameOverGroup_5; }
	inline void set_gameOverGroup_5(GameObject_t1756533147 * value)
	{
		___gameOverGroup_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverGroup_5, value);
	}

	inline static int32_t get_offset_of__textName_6() { return static_cast<int32_t>(offsetof(Game_t1600141214_StaticFields, ____textName_6)); }
	inline String_t* get__textName_6() const { return ____textName_6; }
	inline String_t** get_address_of__textName_6() { return &____textName_6; }
	inline void set__textName_6(String_t* value)
	{
		____textName_6 = value;
		Il2CppCodeGenWriteBarrier(&____textName_6, value);
	}

	inline static int32_t get_offset_of__textNameParent_7() { return static_cast<int32_t>(offsetof(Game_t1600141214_StaticFields, ____textNameParent_7)); }
	inline String_t* get__textNameParent_7() const { return ____textNameParent_7; }
	inline String_t** get_address_of__textNameParent_7() { return &____textNameParent_7; }
	inline void set__textNameParent_7(String_t* value)
	{
		____textNameParent_7 = value;
		Il2CppCodeGenWriteBarrier(&____textNameParent_7, value);
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(Game_t1600141214_StaticFields, ____status_8)); }
	inline bool get__status_8() const { return ____status_8; }
	inline bool* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(bool value)
	{
		____status_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
