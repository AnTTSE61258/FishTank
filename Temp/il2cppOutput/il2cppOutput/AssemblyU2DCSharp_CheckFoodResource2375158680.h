#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckFoodResource
struct  CheckFoodResource_t2375158680  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct CheckFoodResource_t2375158680_StaticFields
{
public:
	// System.String CheckFoodResource::FOOD_COUNT
	String_t* ___FOOD_COUNT_2;
	// System.String CheckFoodResource::LAST_UPDATE_FOODCOUNT
	String_t* ___LAST_UPDATE_FOODCOUNT_3;
	// System.Int32 CheckFoodResource::foodCount
	int32_t ___foodCount_4;

public:
	inline static int32_t get_offset_of_FOOD_COUNT_2() { return static_cast<int32_t>(offsetof(CheckFoodResource_t2375158680_StaticFields, ___FOOD_COUNT_2)); }
	inline String_t* get_FOOD_COUNT_2() const { return ___FOOD_COUNT_2; }
	inline String_t** get_address_of_FOOD_COUNT_2() { return &___FOOD_COUNT_2; }
	inline void set_FOOD_COUNT_2(String_t* value)
	{
		___FOOD_COUNT_2 = value;
		Il2CppCodeGenWriteBarrier(&___FOOD_COUNT_2, value);
	}

	inline static int32_t get_offset_of_LAST_UPDATE_FOODCOUNT_3() { return static_cast<int32_t>(offsetof(CheckFoodResource_t2375158680_StaticFields, ___LAST_UPDATE_FOODCOUNT_3)); }
	inline String_t* get_LAST_UPDATE_FOODCOUNT_3() const { return ___LAST_UPDATE_FOODCOUNT_3; }
	inline String_t** get_address_of_LAST_UPDATE_FOODCOUNT_3() { return &___LAST_UPDATE_FOODCOUNT_3; }
	inline void set_LAST_UPDATE_FOODCOUNT_3(String_t* value)
	{
		___LAST_UPDATE_FOODCOUNT_3 = value;
		Il2CppCodeGenWriteBarrier(&___LAST_UPDATE_FOODCOUNT_3, value);
	}

	inline static int32_t get_offset_of_foodCount_4() { return static_cast<int32_t>(offsetof(CheckFoodResource_t2375158680_StaticFields, ___foodCount_4)); }
	inline int32_t get_foodCount_4() const { return ___foodCount_4; }
	inline int32_t* get_address_of_foodCount_4() { return &___foodCount_4; }
	inline void set_foodCount_4(int32_t value)
	{
		___foodCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
