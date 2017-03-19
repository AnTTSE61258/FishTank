#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AssemblyCSharp.FishEntity[]
struct FishEntityU5BU5D_t63081626;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssemblyCSharp.FishList
struct  FishList_t3326242040  : public Il2CppObject
{
public:
	// AssemblyCSharp.FishEntity[] AssemblyCSharp.FishList::fishes
	FishEntityU5BU5D_t63081626* ___fishes_0;

public:
	inline static int32_t get_offset_of_fishes_0() { return static_cast<int32_t>(offsetof(FishList_t3326242040, ___fishes_0)); }
	inline FishEntityU5BU5D_t63081626* get_fishes_0() const { return ___fishes_0; }
	inline FishEntityU5BU5D_t63081626** get_address_of_fishes_0() { return &___fishes_0; }
	inline void set_fishes_0(FishEntityU5BU5D_t63081626* value)
	{
		___fishes_0 = value;
		Il2CppCodeGenWriteBarrier(&___fishes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
