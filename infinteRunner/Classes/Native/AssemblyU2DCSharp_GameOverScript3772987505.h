#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOverScript
struct  GameOverScript_t3772987505  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text GameOverScript::scoretext
	Text_t3286458198 * ___scoretext_2;
	// UnityEngine.UI.Text GameOverScript::Hscoretext
	Text_t3286458198 * ___Hscoretext_3;
	// System.Int32 GameOverScript::score
	int32_t ___score_4;
	// System.Int32 GameOverScript::hscore
	int32_t ___hscore_5;

public:
	inline static int32_t get_offset_of_scoretext_2() { return static_cast<int32_t>(offsetof(GameOverScript_t3772987505, ___scoretext_2)); }
	inline Text_t3286458198 * get_scoretext_2() const { return ___scoretext_2; }
	inline Text_t3286458198 ** get_address_of_scoretext_2() { return &___scoretext_2; }
	inline void set_scoretext_2(Text_t3286458198 * value)
	{
		___scoretext_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoretext_2, value);
	}

	inline static int32_t get_offset_of_Hscoretext_3() { return static_cast<int32_t>(offsetof(GameOverScript_t3772987505, ___Hscoretext_3)); }
	inline Text_t3286458198 * get_Hscoretext_3() const { return ___Hscoretext_3; }
	inline Text_t3286458198 ** get_address_of_Hscoretext_3() { return &___Hscoretext_3; }
	inline void set_Hscoretext_3(Text_t3286458198 * value)
	{
		___Hscoretext_3 = value;
		Il2CppCodeGenWriteBarrier(&___Hscoretext_3, value);
	}

	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(GameOverScript_t3772987505, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}

	inline static int32_t get_offset_of_hscore_5() { return static_cast<int32_t>(offsetof(GameOverScript_t3772987505, ___hscore_5)); }
	inline int32_t get_hscore_5() const { return ___hscore_5; }
	inline int32_t* get_address_of_hscore_5() { return &___hscore_5; }
	inline void set_hscore_5(int32_t value)
	{
		___hscore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
