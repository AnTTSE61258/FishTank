#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// FoodAutoDestroy
struct FoodAutoDestroy_t2358620961;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"

// System.Void FoodAutoDestroy::.ctor()
extern "C"  void FoodAutoDestroy__ctor_m3106769778 (FoodAutoDestroy_t2358620961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FoodAutoDestroy::Start()
extern "C"  void FoodAutoDestroy_Start_m1979872850 (FoodAutoDestroy_t2358620961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FoodAutoDestroy::Update()
extern "C"  void FoodAutoDestroy_Update_m2189543821 (FoodAutoDestroy_t2358620961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FoodAutoDestroy::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void FoodAutoDestroy_OnTriggerEnter2D_m2766509770 (FoodAutoDestroy_t2358620961 * __this, Collider2D_t646061738 * ___collider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FoodAutoDestroy::fishEatFood(UnityEngine.GameObject,System.String)
extern "C"  void FoodAutoDestroy_fishEatFood_m3753010908 (FoodAutoDestroy_t2358620961 * __this, GameObject_t1756533147 * ___go0, String_t* ___fishid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
