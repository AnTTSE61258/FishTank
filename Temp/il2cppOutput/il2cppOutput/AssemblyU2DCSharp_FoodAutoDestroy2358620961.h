#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.Stopwatch
struct Stopwatch_t1380178105;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FoodAutoDestroy
struct  FoodAutoDestroy_t2358620961  : public MonoBehaviour_t1158329972
{
public:
	// System.Diagnostics.Stopwatch FoodAutoDestroy::StopWatch
	Stopwatch_t1380178105 * ___StopWatch_2;
	// System.Int32 FoodAutoDestroy::destroyAfterSeconds
	int32_t ___destroyAfterSeconds_3;

public:
	inline static int32_t get_offset_of_StopWatch_2() { return static_cast<int32_t>(offsetof(FoodAutoDestroy_t2358620961, ___StopWatch_2)); }
	inline Stopwatch_t1380178105 * get_StopWatch_2() const { return ___StopWatch_2; }
	inline Stopwatch_t1380178105 ** get_address_of_StopWatch_2() { return &___StopWatch_2; }
	inline void set_StopWatch_2(Stopwatch_t1380178105 * value)
	{
		___StopWatch_2 = value;
		Il2CppCodeGenWriteBarrier(&___StopWatch_2, value);
	}

	inline static int32_t get_offset_of_destroyAfterSeconds_3() { return static_cast<int32_t>(offsetof(FoodAutoDestroy_t2358620961, ___destroyAfterSeconds_3)); }
	inline int32_t get_destroyAfterSeconds_3() const { return ___destroyAfterSeconds_3; }
	inline int32_t* get_address_of_destroyAfterSeconds_3() { return &___destroyAfterSeconds_3; }
	inline void set_destroyAfterSeconds_3(int32_t value)
	{
		___destroyAfterSeconds_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
