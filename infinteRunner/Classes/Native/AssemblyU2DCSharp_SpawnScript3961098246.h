#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnScript
struct  SpawnScript_t3961098246  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] SpawnScript::obj
	GameObjectU5BU5D_t3499186955* ___obj_2;
	// System.Single SpawnScript::SpawnMin
	float ___SpawnMin_3;
	// System.Single SpawnScript::SpawnMax
	float ___SpawnMax_4;

public:
	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(SpawnScript_t3961098246, ___obj_2)); }
	inline GameObjectU5BU5D_t3499186955* get_obj_2() const { return ___obj_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(GameObjectU5BU5D_t3499186955* value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier(&___obj_2, value);
	}

	inline static int32_t get_offset_of_SpawnMin_3() { return static_cast<int32_t>(offsetof(SpawnScript_t3961098246, ___SpawnMin_3)); }
	inline float get_SpawnMin_3() const { return ___SpawnMin_3; }
	inline float* get_address_of_SpawnMin_3() { return &___SpawnMin_3; }
	inline void set_SpawnMin_3(float value)
	{
		___SpawnMin_3 = value;
	}

	inline static int32_t get_offset_of_SpawnMax_4() { return static_cast<int32_t>(offsetof(SpawnScript_t3961098246, ___SpawnMax_4)); }
	inline float get_SpawnMax_4() const { return ___SpawnMax_4; }
	inline float* get_address_of_SpawnMax_4() { return &___SpawnMax_4; }
	inline void set_SpawnMax_4(float value)
	{
		___SpawnMax_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
