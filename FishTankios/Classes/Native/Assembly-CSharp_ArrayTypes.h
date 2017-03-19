#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// AssemblyCSharp.FishEntity
struct FishEntity_t388200091;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_AssemblyCSharp_FishEntity388200091.h"

#pragma once
// AssemblyCSharp.FishEntity[]
struct FishEntityU5BU5D_t63081626  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) FishEntity_t388200091 * m_Items[1];

public:
	inline FishEntity_t388200091 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FishEntity_t388200091 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FishEntity_t388200091 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FishEntity_t388200091 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FishEntity_t388200091 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FishEntity_t388200091 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
