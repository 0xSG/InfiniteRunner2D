#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// HUDScript
struct HUDScript_t3514144898;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlowDownScript
struct  SlowDownScript_t731325710  : public MonoBehaviour_t3012272455
{
public:
	// System.Single SlowDownScript::TimeCount
	float ___TimeCount_2;
	// UnityEngine.GameObject SlowDownScript::slowobj
	GameObject_t4012695102 * ___slowobj_3;
	// HUDScript SlowDownScript::hudobj
	HUDScript_t3514144898 * ___hudobj_4;

public:
	inline static int32_t get_offset_of_TimeCount_2() { return static_cast<int32_t>(offsetof(SlowDownScript_t731325710, ___TimeCount_2)); }
	inline float get_TimeCount_2() const { return ___TimeCount_2; }
	inline float* get_address_of_TimeCount_2() { return &___TimeCount_2; }
	inline void set_TimeCount_2(float value)
	{
		___TimeCount_2 = value;
	}

	inline static int32_t get_offset_of_slowobj_3() { return static_cast<int32_t>(offsetof(SlowDownScript_t731325710, ___slowobj_3)); }
	inline GameObject_t4012695102 * get_slowobj_3() const { return ___slowobj_3; }
	inline GameObject_t4012695102 ** get_address_of_slowobj_3() { return &___slowobj_3; }
	inline void set_slowobj_3(GameObject_t4012695102 * value)
	{
		___slowobj_3 = value;
		Il2CppCodeGenWriteBarrier(&___slowobj_3, value);
	}

	inline static int32_t get_offset_of_hudobj_4() { return static_cast<int32_t>(offsetof(SlowDownScript_t731325710, ___hudobj_4)); }
	inline HUDScript_t3514144898 * get_hudobj_4() const { return ___hudobj_4; }
	inline HUDScript_t3514144898 ** get_address_of_hudobj_4() { return &___hudobj_4; }
	inline void set_hudobj_4(HUDScript_t3514144898 * value)
	{
		___hudobj_4 = value;
		Il2CppCodeGenWriteBarrier(&___hudobj_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
