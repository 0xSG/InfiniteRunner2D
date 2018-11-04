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
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HUDScript
struct  HUDScript_t3514144898  : public MonoBehaviour_t3012272455
{
public:
	// System.Single HUDScript::PlayerScore
	float ___PlayerScore_2;
	// System.Boolean HUDScript::EscOn
	bool ___EscOn_3;
	// System.Single HUDScript::xrun
	float ___xrun_4;
	// UnityEngine.GameObject HUDScript::playerposition
	GameObject_t4012695102 * ___playerposition_5;
	// UnityEngine.GameObject HUDScript::slowobj
	GameObject_t4012695102 * ___slowobj_6;
	// System.Single HUDScript::timecount
	float ___timecount_7;
	// UnityEngine.UI.Text HUDScript::scoretext
	Text_t3286458198 * ___scoretext_8;
	// System.Int32 HUDScript::esccount
	int32_t ___esccount_9;
	// System.Boolean HUDScript::slowdownpicked
	bool ___slowdownpicked_10;

public:
	inline static int32_t get_offset_of_PlayerScore_2() { return static_cast<int32_t>(offsetof(HUDScript_t3514144898, ___PlayerScore_2)); }
	inline float get_PlayerScore_2() const { return ___PlayerScore_2; }
	inline float* get_address_of_PlayerScore_2() { return &___PlayerScore_2; }
	inline void set_PlayerScore_2(float value)
	{
		___PlayerScore_2 = value;
	}

	inline static int32_t get_offset_of_EscOn_3() { return static_cast<int32_t>(offsetof(HUDScript_t3514144898, ___EscOn_3)); }
	inline bool get_EscOn_3() const { return ___EscOn_3; }
	inline bool* get_address_of_EscOn_3() { return &___EscOn_3; }
	inline void set_EscOn_3(bool value)
	{
		___EscOn_3 = value;
	}

	inline static int32_t get_offset_of_xrun_4() { return static_cast<int32_t>(offsetof(HUDScript_t3514144898, ___xrun_4)); }
	inline float get_xrun_4() const { return ___xrun_4; }
	inline float* get_address_of_xrun_4() { return &___xrun_4; }
	inline void set_xrun_4(float value)
	{
		___xrun_4 = value;
	}

	inline static int32_t get_offset_of_playerposition_5() { return static_cast<int32_t>(offsetof(HUDScript_t3514144898, ___playerposition_5)); }
	inline GameObject_t4012695102 * get_playerposition_5() const { return ___playerposition_5; }
	inline GameObject_t4012695102 ** get_address_of_playerposition_5() { return &___playerposition_5; }
	inline void set_playerposition_5(GameObject_t4012695102 * value)
	{
		___playerposition_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerposition_5, value);
	}

	inline static int32_t get_offset_of_slowobj_6() { return static_cast<int32_t>(offsetof(HUDScript_t3514144898, ___slowobj_6)); }
	inline GameObject_t4012695102 * get_slowobj_6() const { return ___slowobj_6; }
	inline GameObject_t4012695102 ** get_address_of_slowobj_6() { return &___slowobj_6; }
	inline void set_slowobj_6(GameObject_t4012695102 * value)
	{
		___slowobj_6 = value;
		Il2CppCodeGenWriteBarrier(&___slowobj_6, value);
	}

	inline static int32_t get_offset_of_timecount_7() { return static_cast<int32_t>(offsetof(HUDScript_t3514144898, ___timecount_7)); }
	inline float get_timecount_7() const { return ___timecount_7; }
	inline float* get_address_of_timecount_7() { return &___timecount_7; }
	inline void set_timecount_7(float value)
	{
		___timecount_7 = value;
	}

	inline static int32_t get_offset_of_scoretext_8() { return static_cast<int32_t>(offsetof(HUDScript_t3514144898, ___scoretext_8)); }
	inline Text_t3286458198 * get_scoretext_8() const { return ___scoretext_8; }
	inline Text_t3286458198 ** get_address_of_scoretext_8() { return &___scoretext_8; }
	inline void set_scoretext_8(Text_t3286458198 * value)
	{
		___scoretext_8 = value;
		Il2CppCodeGenWriteBarrier(&___scoretext_8, value);
	}

	inline static int32_t get_offset_of_esccount_9() { return static_cast<int32_t>(offsetof(HUDScript_t3514144898, ___esccount_9)); }
	inline int32_t get_esccount_9() const { return ___esccount_9; }
	inline int32_t* get_address_of_esccount_9() { return &___esccount_9; }
	inline void set_esccount_9(int32_t value)
	{
		___esccount_9 = value;
	}

	inline static int32_t get_offset_of_slowdownpicked_10() { return static_cast<int32_t>(offsetof(HUDScript_t3514144898, ___slowdownpicked_10)); }
	inline bool get_slowdownpicked_10() const { return ___slowdownpicked_10; }
	inline bool* get_address_of_slowdownpicked_10() { return &___slowdownpicked_10; }
	inline void set_slowdownpicked_10(bool value)
	{
		___slowdownpicked_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
