#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets._2D.PlatformerCharacter2D
struct PlatformerCharacter2D_t3109708643;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.Platformer2DUserControl
struct  Platformer2DUserControl_t192111016  : public MonoBehaviour_t3012272455
{
public:
	// UnityStandardAssets._2D.PlatformerCharacter2D UnityStandardAssets._2D.Platformer2DUserControl::m_Character
	PlatformerCharacter2D_t3109708643 * ___m_Character_2;
	// System.Boolean UnityStandardAssets._2D.Platformer2DUserControl::m_Jump
	bool ___m_Jump_3;

public:
	inline static int32_t get_offset_of_m_Character_2() { return static_cast<int32_t>(offsetof(Platformer2DUserControl_t192111016, ___m_Character_2)); }
	inline PlatformerCharacter2D_t3109708643 * get_m_Character_2() const { return ___m_Character_2; }
	inline PlatformerCharacter2D_t3109708643 ** get_address_of_m_Character_2() { return &___m_Character_2; }
	inline void set_m_Character_2(PlatformerCharacter2D_t3109708643 * value)
	{
		___m_Character_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Character_2, value);
	}

	inline static int32_t get_offset_of_m_Jump_3() { return static_cast<int32_t>(offsetof(Platformer2DUserControl_t192111016, ___m_Jump_3)); }
	inline bool get_m_Jump_3() const { return ___m_Jump_3; }
	inline bool* get_address_of_m_Jump_3() { return &___m_Jump_3; }
	inline void set_m_Jump_3(bool value)
	{
		___m_Jump_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
