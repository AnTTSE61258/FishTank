#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextMesh
struct TextMesh_t1641806576;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SharpText
struct  SharpText_t1614507807  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SharpText::sizeInUnits
	float ___sizeInUnits_2;
	// UnityEngine.TextMesh SharpText::textMesh
	TextMesh_t1641806576 * ___textMesh_3;
	// System.Single SharpText::sharpness
	float ___sharpness_4;

public:
	inline static int32_t get_offset_of_sizeInUnits_2() { return static_cast<int32_t>(offsetof(SharpText_t1614507807, ___sizeInUnits_2)); }
	inline float get_sizeInUnits_2() const { return ___sizeInUnits_2; }
	inline float* get_address_of_sizeInUnits_2() { return &___sizeInUnits_2; }
	inline void set_sizeInUnits_2(float value)
	{
		___sizeInUnits_2 = value;
	}

	inline static int32_t get_offset_of_textMesh_3() { return static_cast<int32_t>(offsetof(SharpText_t1614507807, ___textMesh_3)); }
	inline TextMesh_t1641806576 * get_textMesh_3() const { return ___textMesh_3; }
	inline TextMesh_t1641806576 ** get_address_of_textMesh_3() { return &___textMesh_3; }
	inline void set_textMesh_3(TextMesh_t1641806576 * value)
	{
		___textMesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___textMesh_3, value);
	}

	inline static int32_t get_offset_of_sharpness_4() { return static_cast<int32_t>(offsetof(SharpText_t1614507807, ___sharpness_4)); }
	inline float get_sharpness_4() const { return ___sharpness_4; }
	inline float* get_address_of_sharpness_4() { return &___sharpness_4; }
	inline void set_sharpness_4(float value)
	{
		___sharpness_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
