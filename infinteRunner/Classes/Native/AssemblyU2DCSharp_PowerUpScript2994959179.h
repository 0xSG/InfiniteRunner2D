#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HUDScript
struct HUDScript_t3514144898;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUpScript
struct  PowerUpScript_t2994959179  : public MonoBehaviour_t3012272455
{
public:
	// HUDScript PowerUpScript::hud
	HUDScript_t3514144898 * ___hud_2;

public:
	inline static int32_t get_offset_of_hud_2() { return static_cast<int32_t>(offsetof(PowerUpScript_t2994959179, ___hud_2)); }
	inline HUDScript_t3514144898 * get_hud_2() const { return ___hud_2; }
	inline HUDScript_t3514144898 ** get_address_of_hud_2() { return &___hud_2; }
	inline void set_hud_2(HUDScript_t3514144898 * value)
	{
		___hud_2 = value;
		Il2CppCodeGenWriteBarrier(&___hud_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
