#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// AssemblyCSharp.FishList
struct FishList_t3326242040;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GenerateFish
struct  GenerateFish_t397893801  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GenerateFish::fish1
	GameObject_t1756533147 * ___fish1_3;
	// UnityEngine.GameObject GenerateFish::fish2
	GameObject_t1756533147 * ___fish2_4;
	// UnityEngine.GameObject GenerateFish::fish3
	GameObject_t1756533147 * ___fish3_5;
	// UnityEngine.GameObject GenerateFish::fish4
	GameObject_t1756533147 * ___fish4_6;
	// UnityEngine.GameObject GenerateFish::fish5
	GameObject_t1756533147 * ___fish5_7;

public:
	inline static int32_t get_offset_of_fish1_3() { return static_cast<int32_t>(offsetof(GenerateFish_t397893801, ___fish1_3)); }
	inline GameObject_t1756533147 * get_fish1_3() const { return ___fish1_3; }
	inline GameObject_t1756533147 ** get_address_of_fish1_3() { return &___fish1_3; }
	inline void set_fish1_3(GameObject_t1756533147 * value)
	{
		___fish1_3 = value;
		Il2CppCodeGenWriteBarrier(&___fish1_3, value);
	}

	inline static int32_t get_offset_of_fish2_4() { return static_cast<int32_t>(offsetof(GenerateFish_t397893801, ___fish2_4)); }
	inline GameObject_t1756533147 * get_fish2_4() const { return ___fish2_4; }
	inline GameObject_t1756533147 ** get_address_of_fish2_4() { return &___fish2_4; }
	inline void set_fish2_4(GameObject_t1756533147 * value)
	{
		___fish2_4 = value;
		Il2CppCodeGenWriteBarrier(&___fish2_4, value);
	}

	inline static int32_t get_offset_of_fish3_5() { return static_cast<int32_t>(offsetof(GenerateFish_t397893801, ___fish3_5)); }
	inline GameObject_t1756533147 * get_fish3_5() const { return ___fish3_5; }
	inline GameObject_t1756533147 ** get_address_of_fish3_5() { return &___fish3_5; }
	inline void set_fish3_5(GameObject_t1756533147 * value)
	{
		___fish3_5 = value;
		Il2CppCodeGenWriteBarrier(&___fish3_5, value);
	}

	inline static int32_t get_offset_of_fish4_6() { return static_cast<int32_t>(offsetof(GenerateFish_t397893801, ___fish4_6)); }
	inline GameObject_t1756533147 * get_fish4_6() const { return ___fish4_6; }
	inline GameObject_t1756533147 ** get_address_of_fish4_6() { return &___fish4_6; }
	inline void set_fish4_6(GameObject_t1756533147 * value)
	{
		___fish4_6 = value;
		Il2CppCodeGenWriteBarrier(&___fish4_6, value);
	}

	inline static int32_t get_offset_of_fish5_7() { return static_cast<int32_t>(offsetof(GenerateFish_t397893801, ___fish5_7)); }
	inline GameObject_t1756533147 * get_fish5_7() const { return ___fish5_7; }
	inline GameObject_t1756533147 ** get_address_of_fish5_7() { return &___fish5_7; }
	inline void set_fish5_7(GameObject_t1756533147 * value)
	{
		___fish5_7 = value;
		Il2CppCodeGenWriteBarrier(&___fish5_7, value);
	}
};

struct GenerateFish_t397893801_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GenerateFish::fishOnScreen
	List_1_t1125654279 * ___fishOnScreen_2;
	// AssemblyCSharp.FishList GenerateFish::fishList
	FishList_t3326242040 * ___fishList_8;

public:
	inline static int32_t get_offset_of_fishOnScreen_2() { return static_cast<int32_t>(offsetof(GenerateFish_t397893801_StaticFields, ___fishOnScreen_2)); }
	inline List_1_t1125654279 * get_fishOnScreen_2() const { return ___fishOnScreen_2; }
	inline List_1_t1125654279 ** get_address_of_fishOnScreen_2() { return &___fishOnScreen_2; }
	inline void set_fishOnScreen_2(List_1_t1125654279 * value)
	{
		___fishOnScreen_2 = value;
		Il2CppCodeGenWriteBarrier(&___fishOnScreen_2, value);
	}

	inline static int32_t get_offset_of_fishList_8() { return static_cast<int32_t>(offsetof(GenerateFish_t397893801_StaticFields, ___fishList_8)); }
	inline FishList_t3326242040 * get_fishList_8() const { return ___fishList_8; }
	inline FishList_t3326242040 ** get_address_of_fishList_8() { return &___fishList_8; }
	inline void set_fishList_8(FishList_t3326242040 * value)
	{
		___fishList_8 = value;
		Il2CppCodeGenWriteBarrier(&___fishList_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
