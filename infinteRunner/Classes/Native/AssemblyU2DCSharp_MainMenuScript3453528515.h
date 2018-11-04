#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenuScript
struct  MainMenuScript_t3453528515  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Canvas MainMenuScript::quitbx
	Canvas_t3534013893 * ___quitbx_2;
	// UnityEngine.UI.Button MainMenuScript::startbtn
	Button_t990034267 * ___startbtn_3;
	// UnityEngine.UI.Button MainMenuScript::quitbtn
	Button_t990034267 * ___quitbtn_4;
	// UnityEngine.UI.Text MainMenuScript::hstext
	Text_t3286458198 * ___hstext_5;

public:
	inline static int32_t get_offset_of_quitbx_2() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___quitbx_2)); }
	inline Canvas_t3534013893 * get_quitbx_2() const { return ___quitbx_2; }
	inline Canvas_t3534013893 ** get_address_of_quitbx_2() { return &___quitbx_2; }
	inline void set_quitbx_2(Canvas_t3534013893 * value)
	{
		___quitbx_2 = value;
		Il2CppCodeGenWriteBarrier(&___quitbx_2, value);
	}

	inline static int32_t get_offset_of_startbtn_3() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___startbtn_3)); }
	inline Button_t990034267 * get_startbtn_3() const { return ___startbtn_3; }
	inline Button_t990034267 ** get_address_of_startbtn_3() { return &___startbtn_3; }
	inline void set_startbtn_3(Button_t990034267 * value)
	{
		___startbtn_3 = value;
		Il2CppCodeGenWriteBarrier(&___startbtn_3, value);
	}

	inline static int32_t get_offset_of_quitbtn_4() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___quitbtn_4)); }
	inline Button_t990034267 * get_quitbtn_4() const { return ___quitbtn_4; }
	inline Button_t990034267 ** get_address_of_quitbtn_4() { return &___quitbtn_4; }
	inline void set_quitbtn_4(Button_t990034267 * value)
	{
		___quitbtn_4 = value;
		Il2CppCodeGenWriteBarrier(&___quitbtn_4, value);
	}

	inline static int32_t get_offset_of_hstext_5() { return static_cast<int32_t>(offsetof(MainMenuScript_t3453528515, ___hstext_5)); }
	inline Text_t3286458198 * get_hstext_5() const { return ___hstext_5; }
	inline Text_t3286458198 ** get_address_of_hstext_5() { return &___hstext_5; }
	inline void set_hstext_5(Text_t3286458198 * value)
	{
		___hstext_5 = value;
		Il2CppCodeGenWriteBarrier(&___hstext_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
