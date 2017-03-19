#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FoodStoreController
struct  FoodStoreController_t347809183  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject FoodStoreController::food
	GameObject_t1756533147 * ___food_2;
	// UnityEngine.GameObject FoodStoreController::creatingObject
	GameObject_t1756533147 * ___creatingObject_3;
	// UnityEngine.Transform FoodStoreController::mTransform
	Transform_t3275118058 * ___mTransform_5;
	// UnityEngine.UI.Text FoodStoreController::text
	Text_t356221433 * ___text_6;

public:
	inline static int32_t get_offset_of_food_2() { return static_cast<int32_t>(offsetof(FoodStoreController_t347809183, ___food_2)); }
	inline GameObject_t1756533147 * get_food_2() const { return ___food_2; }
	inline GameObject_t1756533147 ** get_address_of_food_2() { return &___food_2; }
	inline void set_food_2(GameObject_t1756533147 * value)
	{
		___food_2 = value;
		Il2CppCodeGenWriteBarrier(&___food_2, value);
	}

	inline static int32_t get_offset_of_creatingObject_3() { return static_cast<int32_t>(offsetof(FoodStoreController_t347809183, ___creatingObject_3)); }
	inline GameObject_t1756533147 * get_creatingObject_3() const { return ___creatingObject_3; }
	inline GameObject_t1756533147 ** get_address_of_creatingObject_3() { return &___creatingObject_3; }
	inline void set_creatingObject_3(GameObject_t1756533147 * value)
	{
		___creatingObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___creatingObject_3, value);
	}

	inline static int32_t get_offset_of_mTransform_5() { return static_cast<int32_t>(offsetof(FoodStoreController_t347809183, ___mTransform_5)); }
	inline Transform_t3275118058 * get_mTransform_5() const { return ___mTransform_5; }
	inline Transform_t3275118058 ** get_address_of_mTransform_5() { return &___mTransform_5; }
	inline void set_mTransform_5(Transform_t3275118058 * value)
	{
		___mTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTransform_5, value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(FoodStoreController_t347809183, ___text_6)); }
	inline Text_t356221433 * get_text_6() const { return ___text_6; }
	inline Text_t356221433 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(Text_t356221433 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier(&___text_6, value);
	}
};

struct FoodStoreController_t347809183_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> FoodStoreController::foodList
	List_1_t1125654279 * ___foodList_4;

public:
	inline static int32_t get_offset_of_foodList_4() { return static_cast<int32_t>(offsetof(FoodStoreController_t347809183_StaticFields, ___foodList_4)); }
	inline List_1_t1125654279 * get_foodList_4() const { return ___foodList_4; }
	inline List_1_t1125654279 ** get_address_of_foodList_4() { return &___foodList_4; }
	inline void set_foodList_4(List_1_t1125654279 * value)
	{
		___foodList_4 = value;
		Il2CppCodeGenWriteBarrier(&___foodList_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
